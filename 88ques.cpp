class Solution {
public:
ListNode*mergetwo(ListNode*li1,ListNode*li2)
{
    ListNode*temp=new ListNode(-1);
    ListNode*ptr1=li1;
    ListNode*ptr2=li2;
    ListNode*ptr3=temp;
    while(ptr1!=NULL&&ptr2!=NULL)
    {
        if(ptr1->val<ptr2->val)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if(ptr1)
    {
        ptr3->next=ptr1;
    }
    else
    {
        ptr3->next=ptr2;
    }
    return temp->next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        {
            return NULL;
        }
        while(lists.size()>1)
        {
           ListNode*merg=mergetwo(lists[0],lists[1]);
           lists.push_back(merg);
           lists.erase(lists.begin());
           lists.erase(lists.begin());
        }
        return lists[0];
    }
};
