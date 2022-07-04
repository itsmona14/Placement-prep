https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    struct TreeInfo{
        int ht;
        int diam;
        TreeInfo(int h,int d){
            ht = h;
            diam = d;
        }
    };
    TreeInfo* Diameter(Node* root){
        if(root == NULL){
            return new TreeInfo(0,0);
        }
        TreeInfo* left = Diameter(root->left);
        TreeInfo* right = Diameter(root->right);
        int myHeight = max(left->ht,right->ht) + 1;
        
        int diam1 = left->diam;
        int diam2 = right->diam;
        int diam3 = left->ht + right->ht + 1;
        int myDiam = max(max(diam1,diam2),diam3);
        
        return new TreeInfo(myHeight,myDiam);
    }
    int diameter(Node* root) {
         TreeInfo* tree = Diameter(root);
         return tree->diam;
    }
};
