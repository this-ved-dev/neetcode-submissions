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
    void reorderList(ListNode* head) {
        
        ListNode* single = head; 
        ListNode* hop = head;
        
        while(hop && hop->next)
        {
            single = single->next;
            hop = hop->next->next;
        }
        ListNode* head2 = single->next;
        single->next = NULL;
        ListNode* nxt = nullptr;
        while(head2)
        {
            ListNode* temp = head2->next;
            head2->next = nxt; 
            nxt = head2; 
            head2 = temp;
        }
        head2 = nxt;
        ListNode* curr = head;
        while(curr && head2)
        {
            ListNode* tmp1 = curr->next;
            ListNode* tmp2 = head2->next;

            curr->next = head2;
            head2->next = tmp1;

            head2 = tmp2;
            curr = tmp1;
        }
    }
};
