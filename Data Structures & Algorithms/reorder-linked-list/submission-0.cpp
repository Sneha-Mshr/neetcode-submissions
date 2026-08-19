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
    ListNode* reverseFun(ListNode* head){
        if(!head) return head;
        ListNode* temp = NULL;
        while(head){
            ListNode* next = head->next;
            head->next = temp;
            temp = head;
            head = next;
        }
        return temp;
    }
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow -> next;
            fast = fast->next->next;
        }
        ListNode * mid = slow->next;
        slow->next = NULL;
        mid = reverseFun(mid);

        while(mid){
             ListNode* nextMid = mid->next;
            ListNode* nextTemp = temp->next;

            temp->next = mid;
            mid->next = nextTemp;

            temp = nextTemp;
            mid = nextMid;
        }
        
    }
};
