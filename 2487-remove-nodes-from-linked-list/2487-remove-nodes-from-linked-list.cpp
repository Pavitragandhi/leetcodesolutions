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
    ListNode* Reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* store = NULL;
        
        while(current != NULL){
            store = current -> next;
            current -> next = prev;
            prev = current;
            current = store;
        }
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* result = Reverse(head);
        ListNode* prev = result;
        ListNode* current = prev -> next;
        
        while(current != NULL){
            if(prev -> val > current -> val){
                prev -> next = current -> next;
                delete current;
                current = prev -> next;
            }
            else{
                prev = current;
                current = current -> next;
            }
        }
        ListNode* answer = Reverse(result);
        return answer;
    }
};