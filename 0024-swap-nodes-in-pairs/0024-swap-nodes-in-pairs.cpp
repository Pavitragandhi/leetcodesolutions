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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        int count = 0;
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* forward = NULL;
        
        while(current != NULL && count < 2){
            forward = current -> next;
            current -> next = prev;
            prev = current;
            current = forward;
            count++;
        }
        
        if(forward != NULL){
            head -> next = swapPairs(current);
        }
        
        return prev;
    }
};