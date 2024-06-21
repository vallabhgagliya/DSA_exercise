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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = 0;
        ListNode* current = head;
        while (current) {
            l++;
            current = current->next;
        }
        if (n == l)
            return head->next;
        current = head;
        for (int i = 1; i < l - n; i++) {
            current = current->next;
        }
        current->next = current->next->next;
        return head;
    }
};