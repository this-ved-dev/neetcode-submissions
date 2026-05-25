#include <unordered_map>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::unordered_map<ListNode*, int> map;

        while(head)
        {
            ListNode* key = head;
            auto it = map.find(key);
            if(it != map.end())
            {
                return true;
            }
            else
            {
                map[key] = key->val;
            }
            head = head->next;
        }
        return false;

            
    }
};