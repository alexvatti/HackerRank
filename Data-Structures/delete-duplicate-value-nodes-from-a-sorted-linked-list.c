/*
problem description:
https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem
*/

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp1,*temp2,*head1=head;

    if(head!=NULL){
        temp1=head;
        temp2=temp1->next;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->data!= temp2->data){
                temp1=temp2;
                temp2=temp1->next;
            }else {
                temp1->next=temp2->next;
                free(temp2);
                temp2=temp1->next;
            }

        }
    }
    return head1;
}
