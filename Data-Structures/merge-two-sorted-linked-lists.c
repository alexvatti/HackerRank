/*
problem description:
https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem
*/

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 SinglyLinkedListNode *head=NULL;
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {

    SinglyLinkedListNode *temp;

    if((headA==NULL)&&(headB==NULL))
        return NULL;
    if((headA!=NULL)&&(headB==NULL))
        return headA;
    if((headA == NULL)&&(headB!=NULL))
        return headB;
    if(headA->data < headB->data)
        headA->next = mergeLists(headA->next, headB);
    else if(headA->data >= headB->data)
    {
        temp = headB;
        headB = headB->next;
        temp->next = headA;
        headA = temp;
        headA->next = mergeLists(headA->next, headB);
    }
    return headA;
}
