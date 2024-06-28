

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int x) {	
   SinglyLinkedListNode* temp = new SinglyLinkedListNode(x);

        if (head == NULL) {
            head = temp;
        }
        else {
            SinglyLinkedListNode* t = head;
            while (t->next != NULL) {
                t = t->next;
            }
            t->next = temp;
        }
     return head;
}

