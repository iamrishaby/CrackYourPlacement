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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        
        ListNode* currnode = head;
        ListNode* nextnode = head->next;
        
        
        while(nextnode){
            ListNode* temp = new ListNode(__gcd(currnode->val, nextnode->val));
            
            currnode->next = temp;
            temp->next = nextnode;
            
            currnode = nextnode;
            nextnode = nextnode->next;
        }
        
        return head;
    }
};