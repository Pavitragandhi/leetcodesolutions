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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_map<int,int> store;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            store[nums[i]]++;
        }
        
        int count = 0;
        
        while(head != NULL){
            if(store.find(head -> val) != store.end()){
                while(head != NULL && store.find(head -> val) != store.end()){
                    head = head -> next;
                }
                count++;
            }
            
            if(head != NULL){
                head = head -> next;
            }
        }
        
        return count;
    }
};