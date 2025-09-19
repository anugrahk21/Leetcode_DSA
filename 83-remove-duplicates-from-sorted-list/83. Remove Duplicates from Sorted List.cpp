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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* newnode = new ListNode();
        ListNode* temp = newnode;

        while (head != NULL) {
            if (head->next == nullptr || head->val != head->next->val) {
                temp->next = head; // changing next of temp()
                temp = temp->next; // going to the next(like going to the head)
            }
            head = head->next;
        };
        return newnode->next;
    }
};