https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

bool balance(Node* root, int* height){
        if(root == NULL){
            return true;
        }
        int lh = 0, rh = 0;
        if(!balance(root->left,&lh)){
            return false;
        }
        if(!balance(root->right,&rh)){
            return false;
        }
        
        *height = max(lh,rh) + 1;
        if(abs(lh-rh) <=1){
            return true;
        }
        else{
            return false;
        }
    }
bool isBalanced(Node *root){
        //  Your Code 
        int h = 0;
        return balance(root,&h);
    }
