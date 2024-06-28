

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int pos) {
    SinglyLinkedListNode * temp=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
       SinglyLinkedListNode* front=head;
       SinglyLinkedListNode * back=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
       temp->data=data;
       temp->next=NULL;
       if(head==NULL)
        return temp;
      int c=0;
        while(1)
        {
            if(c==pos-1)
            {
                back=front->next;
                front->next=temp;
                temp->next=back;
                return head;
            }
            front=front->next;
            c++;
        }
}

