/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(-1);
        ListNode* small_head = small;
        ListNode* big = new ListNode(-1);
        ListNode* big_head = big;
        while(head!=NULL){
            if(head->val<x){
                small_head->next =head;
                small_head=small_head->next;
                head=head->next;
                small_head->next=NULL;
            }
            else {
                big_head->next = head;
                big_head = big_head->next;
                head=head->next;
                big_head->next=NULL;
            }
        }
        small_head->next = big->next;
        return small->next; }
};