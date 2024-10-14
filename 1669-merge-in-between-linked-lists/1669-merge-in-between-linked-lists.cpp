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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count = 0;
        ListNode* prev = NULL;
        ListNode* current = list1;
        ListNode* last = list2;
        
        while(last -> next != NULL){
            last = last -> next;
        }
        
        while(current != NULL){
            if(count == a && count != b){
                prev -> next = list2;
            }
            else if(count == a && count == b){
                prev -> next = list2;
                last -> next = current -> next;
            }
            else if(count == b){
                last -> next = current -> next;
            }
            
            if(count < a){
                prev = current;
                current = current -> next;
            }
            else{
                current = current -> next;
            }
            count++;
        }
        return list1;
    }
};