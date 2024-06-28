

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int count(SinglyLinkedListNode* head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}
int getNode(SinglyLinkedListNode* head, int pos) {
       int c= count(head);
       int p=c-pos;
       for(int i=1;i<=c;i++)
       {
           if(i==p)
           return head->data;
           
           head=head->next;
       }
     return 0;      
}

