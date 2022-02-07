https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution
{
    public:
    void deleteNode(Node *del)
    {
       del->data = del->next->data;
       del->next = del->next->next;
    }

};
