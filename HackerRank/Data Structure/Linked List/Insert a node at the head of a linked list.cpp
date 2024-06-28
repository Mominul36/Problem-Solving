

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    
 SinglyLinkedListNode * temp=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    temp->data=data;
    temp->next=head;
    return temp;

}

