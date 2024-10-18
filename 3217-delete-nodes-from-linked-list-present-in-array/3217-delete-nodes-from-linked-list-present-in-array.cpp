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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> store(nums.begin(), nums.end());
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* current = head;
        
        while(current != NULL){
            if(store.find(current -> val) != store.end()){
                prev -> next = current -> next;
            }
            else{
                prev = current;
            }
            
            current = current -> next;
        }
        
        ListNode* result = dummy -> next;
        delete dummy;
        return result;
    }
};