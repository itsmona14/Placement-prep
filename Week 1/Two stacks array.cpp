https://www.geeksforgeeks.org/implement-two-stacks-in-an-array/

//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
    arr[++top1] = x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if(top2 >= 0)
        arr[--top2] = x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    int temp;
    if(top1 >= 0){
        temp = arr[top1];
        top1--;
        return temp;
    }
    else
        return -1;
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    int temp;
    if(top2 < size){
        temp = arr[top2];
        top2++;
        return temp;
    }
    else
        return -1;
}
