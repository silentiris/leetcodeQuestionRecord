/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int len1 = 1;
        int len2 = 1;
        ListNode *temp = l1;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            len1++;
        }
        temp = l2;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            len2++;
        }
        if (len1 >= len2)
        {
            ListNode *resNode = l1;
            for (int i = 0; i < len1; i++)
            {
                l1->val = l1->val + l2->val;
                if (l1->val >= 10 && i != len1 - 1)
                {
                    l1->next->val++;
                    l1->val -= 10;
                }
                else if (l1->val >= 10 && i == len1 - 1)
                {
                    l1->val -= 10;
                    ListNode *lastNode = new ListNode(1, nullptr);
                    l1->next = lastNode;
                }
                if (i != len1 - 1)
                {
                    l1 = l1->next;
                    if (l2->next != nullptr)
                        l2 = l2->next;
                    else
                        l2->val = 0;
                }
            }
            return resNode;
        }
        else
        {
            ListNode *resNode = l2;
            for (int i = 0; i < len2; i++)
            {
                l2->val = l1->val + l2->val;
                if (l2->val >= 10 && i != len2 - 1)
                {
                    l2->next->val++;
                    l2->val -= 10;
                }
                else if (l2->val >= 10 && i == len2 - 1)
                {
                    l2->val -= 10;
                    ListNode *lastNode = new ListNode(1, nullptr);
                    l2->next = lastNode;
                }
                if (i != len2 - 1)
                {
                    l2 = l2->next;
                    if (l1->next != nullptr)
                        l1 = l1->next;
                    else
                        l1->val = 0;
                }
            }
            return resNode;
        }
    }
};
// @lc code=end
