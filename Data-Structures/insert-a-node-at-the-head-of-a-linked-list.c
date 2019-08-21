/*
problem description:
https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
*/

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

    SinglyLinkedListNode *temp;

    temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    if(temp==NULL){
        return head;
    }else {
        temp->data=data;
        temp->next=NULL;

        if(head==NULL){
            head=temp;
            return head;
        }else {
            temp->next=head;
            head=temp;
            return head;
        }
    }
    return head;
}
