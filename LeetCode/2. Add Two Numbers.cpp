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
void push(ListNode** head,int value)
{
  ListNode* temp= new ListNode;
    temp->val=value;
    temp->next=NULL;
  if(*head==NULL)
  {
    *head=temp;
    return;
  }
    
    ListNode* current=*head;
    while(current->next!=NULL)
    current=current->next;
    current->next=temp;
}
 void reverse(ListNode** head)
{
  ListNode* current=*head;
  ListNode* next=NULL;
  ListNode* prev=NULL;
  while(current!=NULL)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  *head=prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       // reverse(&l1);
       // reverse(&l2);
        int car=0;
        ListNode* l3=NULL;
        while(l1!=NULL && l2!=NULL)
        {
            int v = l1->val + l2->val + car;
            int d = v%10;
            car=v/10;
          push(&l3,d);
          l1=l1->next;
          l2=l2->next;
        }

        while(l1!=NULL)
        {
             int v = l1->val + car;
            int d = v%10;
            car=v/10;
          push(&l3,d);
          l1=l1->next;
        }

        while(l2!=NULL)
        {
             int v = l2->val + car;
            int d = v%10;
            car=v/10;
          push(&l3,d);
          l2=l2->next;
        }
        if(car)
        {
            push(&l3,car);
        }
        //reverse(&l3);
        return l3;
      
    }
};