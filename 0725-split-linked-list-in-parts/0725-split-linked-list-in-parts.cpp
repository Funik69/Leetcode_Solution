class Solution {
public:
    int length(ListNode* head) {
        int cnt = 0;
        while (head) {
            head = head->next;
            cnt++;
        }
        return cnt;
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = length(head);
        vector<ListNode*> result;
        int base_size = len / k;
        int extra_parts = len % k;
        for (int i = 0; i < k; i++) {
            ListNode* part_head = head;
            ListNode* prev = nullptr;
            int part_size = base_size + (i < extra_parts ? 1 : 0);
            for (int j = 0; j < part_size; j++) {
                if (head) {
                    prev = head;
                    head = head->next;
                }
            } 
            if (prev) prev->next = nullptr;
            result.push_back(part_head);
        }
        return result;
    }
};
