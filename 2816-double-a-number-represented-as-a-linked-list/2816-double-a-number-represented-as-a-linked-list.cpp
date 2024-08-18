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
    ListNode* doubleIt(ListNode* head) {
        stack<ListNode*> store;
        ListNode* temp = head;
        
        while(temp != NULL){
            store.push(temp);
            temp = temp -> next;
        }
        
        int add = 0;
        ListNode* store_2 = NULL;
        int mul  = 0;
        
        while(!store.empty()){
            store_2 = store.top();
            store.pop();
            
            mul = (2*store_2 -> val) + add;
            store_2 -> val = mul % 10;
            add = mul / 10;
        }
        
        if(add != 0){
            ListNode* start_node = new ListNode(add);
            start_node -> next = head;
            head = start_node;
        }
        return head;
    }
};