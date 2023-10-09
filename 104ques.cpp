/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* temp=new ListNode(-1);
        ListNode*ptr1=list1;
        ListNode*ptr2=list2;
        ListNode*ptr=temp ;
        while(ptr1 && ptr2)
        {
            if(ptr1->val<ptr2->val)
            {
                ptr->next=ptr1;
                ptr1=ptr1->next;
            }
            else
            {
                ptr->next=ptr2;
                ptr2=ptr2->next;
            }
            ptr=ptr->next;
        }
        if(ptr1)
        {
            ptr->next=ptr1;
        }
        else
        {
            ptr->next=ptr2;
        }
          
        return temp->next;
    }
};
