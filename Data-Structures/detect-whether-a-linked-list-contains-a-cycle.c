/*
problem description:
https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem
*/

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *slow_ptr=head,*fast_ptr=head->next;

    while(slow_ptr!=NULL && fast_ptr!=NULL){
        if(slow_ptr==fast_ptr) 
            return 1;
        else {
            slow_ptr=slow_ptr->next;
            if(fast_ptr->next!=NULL)
                fast_ptr=fast_ptr->next->next;
            else 
                return 0;
        }

    }
    return 0;
}

