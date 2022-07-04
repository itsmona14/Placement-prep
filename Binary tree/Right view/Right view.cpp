https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v;
       queue<Node*> q;
       if(root==NULL){
           return v;
       }
       q.push(root);
       
       while(!q.empty()){
           int n = q.size();
           for(int i = 0 ; i < n ; i++){
               Node* curr = q.front();
               q.pop();
               if(i == n-1){
                   v.push_back(curr->data);
               }
               if(curr->left){
                   q.push(curr->left);
               }
               if(curr->right){
                   q.push(curr->right);
               }
           }
       }
       return v;
    }
};
