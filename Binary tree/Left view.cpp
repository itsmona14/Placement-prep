https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

vector<int> leftView(Node *root)
{
   // Your code here
   
   queue<Node*> q;
   q.push(root);
   vector<int> v;
   if(root == NULL){
       return v;
   }
   while(!q.empty()){
       int n = q.size();
       for(int i = 1 ; i <= n ; i++){
           Node* curr = q.front();
           q.pop();
           if(i == 1){
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
