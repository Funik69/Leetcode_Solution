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
int length(ListNode* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL or head->next==NULL) return head;
        int len=length(head);
        int cnt=0;
        if(len<k) return head;
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* next;
        while(cur!=NULL and cnt<k){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            cnt++;
        }
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};