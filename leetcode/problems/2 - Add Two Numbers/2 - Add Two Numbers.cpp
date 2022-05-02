/*
Question Source: "Leetcode (Problems)"
Problem URL: "https://leetcode.com/problems/add-two-numbers/"
Solution by: "https://github.com/pawansinghpks01"
Problem Difficulty: "Easy"
*/



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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, flag;
        
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* ans = new ListNode((p1->val + p2->val)%10);
        carry = (p1->val + p2->val)>9 ? 1 : 0;
        ListNode* curr = ans;
        
        while(1){
            if(p1->next==NULL){
                flag = 2;
                break;
            }
            else if(p2->next==NULL){
                flag = 1;
                break;
            }
            else{
                p1 = p1->next;
                p2 = p2->next;
                curr->next = new ListNode((p1->val + p2->val + carry)%10);
                carry = (p1->val + p2->val + carry)>9 ? 1 : 0;
                curr = curr->next;
            }
        }
        
        if(flag==1){
            while(p1->next != NULL){
                p1 = p1->next;
                curr->next = new ListNode((p1->val + carry)%10);
                carry = (p1->val + carry)>9 ? 1 : 0;
                curr = curr->next;
            }
        }
        else{
            while(p2->next != NULL){
                p2 = p2->next;
                curr->next = new ListNode((p2->val + carry)%10);
                carry = (p2->val + carry)>9 ? 1 : 0;
                curr = curr->next;
            }
        }
        
        if(carry == 1){
            curr->next = new ListNode(1);
        }
        
        return ans;
    }
};