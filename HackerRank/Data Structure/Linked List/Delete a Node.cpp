

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int pos) {
         SinglyLinkedListNode* front=head;
    SinglyLinkedListNode * back=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    if(head==NULL)
        return head;
    if(pos==0)
    {
       front=front->next;
       return front;     
    }
    int c=0;
    while(1)
    {
        if(c==pos-1)
        {
            back=front->next;
            back=back->next;
            front->next=back;
            return head;
        }
        front=front->next;
        c++;
    }
}

