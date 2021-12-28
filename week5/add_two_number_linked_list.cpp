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
        vector<int> v1,v2;
        ListNode *head = nullptr;
        ListNode *p = nullptr;
        while(l1)
        {
            v1.push_back(l1->val);
            l1 = l1->next;
        }
        while(l2)
        {
            v2.push_back(l2->val);
            l2 = l2->next;
        }
        int m = v1.size()-1;
        int n = v2.size()-1;
        int carry = 0;
        for(int i = m,j = n;i>=0 or j>=0 or carry ; i--,j-- )
        {
            int sum = 0;
            if(i>=0)
            {
                sum+=v1[i];
            }
            if(j>=0)
            {
                sum+=v2[j];
            }
            sum+=carry;
            carry = sum/10;
            p = new ListNode(sum%10);
            p->next = head;
            head = p;
        }
        return head;
    }
};