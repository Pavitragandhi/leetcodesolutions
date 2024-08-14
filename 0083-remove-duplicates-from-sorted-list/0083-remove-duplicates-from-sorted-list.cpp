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
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* prev = head;
        ListNode* current = head -> next;
        
        while(current != NULL){
            if(prev -> val == current -> val){
                prev -> next = current -> next;
                delete current;
                current = prev -> next;
            }
            else{
                prev = current;
                current = current -> next;
            }
        }
        
        return head;
    }
};