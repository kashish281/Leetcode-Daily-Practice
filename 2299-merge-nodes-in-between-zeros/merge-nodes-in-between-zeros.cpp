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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ptr = head->next->next;
        ListNode* start = head->next;
        while (ptr) {
            int sum = 0;
            while (ptr && ptr->val != 0) {
                sum += ptr->val;
                start->next = ptr->next;
                delete ptr;
                ptr = start->next;
            }
            if (ptr) {
                start->val += sum;
                start->next = ptr->next;
                delete ptr;
                ptr = NULL;
                start = start->next;
                if (start)
                    ptr = start->next;
            }
        }
        head = head->next;
        return head;
    }
};