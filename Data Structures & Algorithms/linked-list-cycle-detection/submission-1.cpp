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
        unordered_set<ListNode*> map;

        while(head)
        {
            ListNode* key = head;
            if(map.find(key) != map.end())
            {
                return true;
            }
            else
            {
                map.insert(key);
            }
            head = head->next;
        }
        return false;

            
    }
};