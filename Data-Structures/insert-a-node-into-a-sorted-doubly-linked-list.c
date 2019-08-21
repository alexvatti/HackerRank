/*
problem description:
https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem
*/

// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
  DoublyLinkedListNode *node = create_doubly_linked_list_node(data);
  DoublyLinkedListNode *prev_node=NULL,*temp_node=head,*next_node=NULL,*ptr=head;

    if(temp_node==NULL) {
      temp_node=node;
      return head;

    }else if (temp_node->data > data) {
        node->next = temp_node;
        temp_node->prev = node;
        head = node;
        return head;
    
    } else {
       while ((temp_node != NULL)&& (temp_node->data < data)) {
             prev_node = temp_node;
             temp_node = temp_node->next;
       }
       if (temp_node != NULL) {
         node->next = prev_node->next;
         prev_node->next = node;
         node->prev = prev_node;
         temp_node->prev = node;
         return head;
       } else{
         node->prev = prev_node;
         prev_node->next = node;
         return head;
       }
   }
  return head;
}
