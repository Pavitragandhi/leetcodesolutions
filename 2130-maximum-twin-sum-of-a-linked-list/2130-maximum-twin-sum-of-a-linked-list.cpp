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
    int pairSum(ListNode* head) {
        unordered_map<int , int> store;
        ListNode* temp = head;
        int count = 0;
        
        while(temp != NULL){
            store[count] = temp -> val;
            count++;
            temp = temp -> next;
        }
        
        int maximum = INT_MIN;
        int n = (count/2) - 1;
        
        for(int i = 0; i<=n; i++){
            int sum = store[i] + store[count-1-i];
            maximum = max(maximum , sum);
        }
        
        return maximum;
    }
};