/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {


    struct ListNode *prev = NULL; last =head;

    for(i=1; i<last; i++){
        prev = last;
        last = last ->next;
    }

}