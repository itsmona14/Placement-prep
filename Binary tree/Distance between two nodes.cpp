https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
   Node* LCA(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(root == NULL){
           return NULL;       
       }
       if(root->data == n1 || root->data == n2){
           return root;
       }
       Node* left = LCA(root->left,n1,n2);
       Node* right = LCA(root->right,n1,n2);
       if(left!= NULL && right != NULL){
           return root;
       }
       if(left == NULL && right == NULL){
           return NULL;
       }
       if(left != NULL){
           return LCA(root->left,n1,n2);
       }
       return LCA(root->right,n1,n2);

    }
    int Height(Node* root,int key){
        if(root == NULL){
            return 0;
        }
        if(root->data == key){
            return 1;
        }
        int left = Height(root->left,key);
        int right = Height(root->right,key);
        if(left == 0 && right ==0){
            return 0;
        }
        return max(left,right)+1;
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* lca = LCA(root,a,b);
        int d1 = Height(lca,a);
        int d2 = Height(lca,b);
        
        return d1+d2-2;
        
    }
};
