class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*s=head;
         ListNode*f=head;
         while(f&&f->next)
         {
             s=s->next;
             f=f->next->next;
             if(s==f)
             {
                 break;
             }
         }
         if(f==NULL||f->next==NULL) return NULL;
         f=head;
         while(f!=s)
         {
             s=s->next;
             f=f->next;
             
         }
       return s;
        
    }
};
