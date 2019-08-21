/*
problem description:
https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem
*/

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

  SinglyLinkedListNode *list2=head2;

  while (head1 != NULL) {
      list2=head2;
      while(list2!=NULL){
            if(head1==list2)
               return(list2->data);
            else
            list2=list2->next;
      }
      head1=head1->next;
  }
  return 0;
}
