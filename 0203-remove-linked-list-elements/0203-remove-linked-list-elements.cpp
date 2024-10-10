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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL || (head ->val == val && head -> next == NULL)){
            return NULL;
        }
        
        ListNode* prev = NULL;
        ListNode* current = head;
        
        while(current != NULL){
            if(current -> val == val){
                if(current == head){
                    head = head -> next;
                    current = head;
                }
                else{
                    prev -> next = current -> next;
                    delete current;
                    current = prev -> next;
                }
            }
            else{
                prev = current;
                current = current -> next;
            }
        }
        
        return head;
    }
};