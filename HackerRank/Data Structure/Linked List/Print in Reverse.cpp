

/*
 * Complete the 'reversePrint' function below.
 *
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head)
    {
        SinglyLinkedListNode* current = head;
        SinglyLinkedListNode *front = NULL, *back = NULL;
 
        while (current != NULL) {
            back = current->next;
            current->next = front;
            front = current;
            current = back;
        }
       return front;
    }
void print(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *temp=head;
    while(temp!=NULL)
    {
       cout<< temp->data<<endl;
       temp=temp->next;
    }
    //cout<<endl;
}
void reversePrint(SinglyLinkedListNode* head) {
    head = reverse(head);
    print(head);

}

