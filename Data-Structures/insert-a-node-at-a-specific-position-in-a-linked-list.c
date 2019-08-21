/*
problem description:
https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
*/

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* node = create_singly_linked_list_node(data);
    SinglyLinkedListNode *temp=head;

    printf("position=%d data=%d\n", position, data);
    if(position==0){
       head = node;
    } else {
        position--;
        while (position) {
            temp = temp->next;
            position--;
       }
       node->next=temp->next; 
       temp->next = node;
    }
    return head;
}
