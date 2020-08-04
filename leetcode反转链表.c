/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p = NULL, *q = NULL;
    while (head != NULL) {
        q = head->next;
        head->next = p;
        p = head;
        head = q;
    }
    return p;
}