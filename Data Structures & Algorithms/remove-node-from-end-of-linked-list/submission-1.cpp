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
        if(!head) return head;
        ListNode* temp = head;
        int k=0;
        while(temp){
            k++;
            temp = temp->next;
        }
        
        if(n==k) return head->next;
        int m = k-n-1;
        ListNode* newh = head;
        
        while(m-- && head){
            head = head->next;  
        }
        
        head->next = head->next->next;

        return newh;
        
    }
};
