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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* store = head;
        ListNode* traverse = head -> next;
        ListNode* prev = head;
        ListNode* current = head -> next;
        int sum = 0;
        
        while(traverse != NULL){
            if(traverse -> val != 0){
                sum += traverse -> val;
                traverse = traverse -> next;
                prev = current;
                current = traverse;
            }
            else if(traverse -> val == 0){
                ListNode* new_node = new ListNode(sum);
                sum = 0;
                traverse = traverse -> next;
                store -> next = new_node;
                new_node -> next = current -> next;
                current = traverse;
                prev = new_node;
                store = prev;
            }
        }
        head = head -> next;
        return head;
    }
};