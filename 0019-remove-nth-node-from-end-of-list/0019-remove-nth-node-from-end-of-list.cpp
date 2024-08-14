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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        
        ListNode* temp = head;
        int count = 1;
        
        while(temp -> next != NULL){
            temp = temp -> next;
            count++;
        }
        
        int check = count - n;
        ListNode* prev = NULL;
        temp = head;
        
        if(check == 0){
            prev = temp -> next;
            delete temp;
            return prev;
        }
        
        while(check > 0){
            prev = temp;
            temp = temp -> next;
            check--;
        }
        
        prev -> next = temp -> next;
        delete temp;
        
        return head;
    }
};