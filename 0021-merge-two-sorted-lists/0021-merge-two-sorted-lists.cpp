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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* a=new ListNode();
        ListNode* b=a;
        while(l1!=NULL and l2!=NULL){
            if(l1->val <=l2->val){
                b->next = new ListNode(l1->val);
                b=b->next;
                l1=l1->next;
        }
        else {
            b->next = new ListNode(l2->val);
            b=b->next;
            l2=l2->next;
        }
        }
        while(l1!=NULL){
            b->next=new ListNode(l1->val);
            b=b->next;
            l1=l1->next;
        }
         while(l2!=NULL){
            b->next=new ListNode(l2->val);
            b=b->next;
            l2=l2->next;
        }
return a->next;
    }
};