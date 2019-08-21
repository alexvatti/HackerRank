/*
problem description:
https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
*/

// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
    if(head==NULL)
        return;
    else {
        reversePrint(head->next);
        printf("%d\n",head->data);
    }
}
