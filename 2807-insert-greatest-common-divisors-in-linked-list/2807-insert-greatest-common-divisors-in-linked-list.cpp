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
    int GCD(int a , int b){
        if(b == 0){
            return a;
        }
        
        return GCD(b , a%b);
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* prev = head;
        ListNode* current = head -> next;
        
        while(current != NULL){
            ListNode* new_node = new ListNode(GCD(prev -> val , current -> val));
            prev -> next = new_node;
            new_node -> next = current;
            prev = current;
            current = current -> next;
        }
        
        return head;
    }
};