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
        ListNode* dummy = new ListNode(0);
        ListNode* res = dummy;
        int carry = 0;

        while(l1!=nullptr || l2!=nullptr || carry) {
            //We get the sum of the two values and seperate carry and digit
            int sum = carry;
            if(l1!=nullptr) {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr) {
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            //Create node with digit and move to next digit
            ListNode* digit = new ListNode(sum%10);
            dummy->next=digit;
            dummy=dummy->next;
        }
        return res->next;

    }
};