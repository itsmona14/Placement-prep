https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1

//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    // Your Code
    StackNode* node = new StackNode(x);
    node->next = top;
    top = node;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    int d;
    if(top == NULL)
        return -1;
    d = top->data;
    StackNode* node = top;
    top = top->next;
    delete node;
    return d;
}
