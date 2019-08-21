/*
problem description:
https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
*/

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode *temp=head,*prev=NULL;
    int i;
    if(position==0){
        temp=head;
        head=temp->next;
        free(temp);
        return head;
    } else {
        temp=head;
        i=0;
        while((i<position) && (temp!=NULL)){
        //for(i=0;i<position;i++){
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        free(temp);
        return head;
    }
    return head;
}
