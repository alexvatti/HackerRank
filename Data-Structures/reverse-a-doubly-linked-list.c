/*
problem description:
https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem
*/

// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
  DoublyLinkedListNode *prev_node=NULL,*next_node=NULL,*cur_node=head;

  while(cur_node!=NULL){

      next_node=cur_node->next;
      cur_node->next=prev_node;
      cur_node->prev=next_node;
      prev_node=cur_node;
      cur_node=next_node;
   }
   head=prev_node;
   return head;
}
