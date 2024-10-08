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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 1;
        
        while(temp -> next != NULL){
            temp = temp -> next;
            count++;
        }
        
        int middle = (count/2) + 1;
        temp = head;
        
        for(int i = 1; i<middle; i++){
            temp = temp -> next;
        }
        return temp;
    }
};