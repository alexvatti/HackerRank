/*
problem description:
https://www.hackerrank.com/challenges/reverse-a-linked-list/problem
*/

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *cur=head,*prev=NULL,*next=NULL;
    
    if(head==NULL)
        return head;
    else {
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head=prev;
        return head;
    }
    return head;
}
