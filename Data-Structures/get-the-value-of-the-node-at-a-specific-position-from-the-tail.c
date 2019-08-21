/*
problem description:
https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
*/

// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode *temp,*temp1;
    int i=0;

    if(head!=NULL){
        temp=head;
        temp1=head;

        for(i=0;i<=position;i++){
            temp=temp->next;
        }
        while(temp!=NULL){
            temp=temp->next;
            temp1=temp1->next;
        }
    return (temp1->data);
    }
    return 0;
    
}
