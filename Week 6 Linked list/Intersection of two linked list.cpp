https://leetcode.com/problems/intersection-of-two-linked-lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int len(ListNode *head){
        int count = 0;
        ListNode *temp = head;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1, *ptr2;
        int d;
        int l1 = len(headA);
        int l2 = len(headB);
        if(l1 > l2){
            d = l1 - l2;
            ptr1 = headA;
            ptr2 = headB;
        }
        else{
            d = l2 - l1;
            ptr1 = headB;
            ptr2 = headA;
        }
        while(d && ptr1 != NULL){
            ptr1 = ptr1->next;
            d--;
        }
        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1 == ptr2)
                return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};
