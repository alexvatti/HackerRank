/*
problem description:
https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
*/

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
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *temp,*temp1;
    temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    if(temp==NULL){
        return head;
    }else {
        temp->data=data;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            return head;
        } else {
            temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
            return head;
        }
    }
    return head;
}
