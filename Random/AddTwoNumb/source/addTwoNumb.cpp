// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.

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

#include <addTwoNumb.h>
#include <iostream>

int Solution::checkListNode(ListNode *l)
{
    return l == nullptr ? 0 : l->val;
}

ListNode *Solution::addNums(ListNode *l1, ListNode *l2, int nextNum)
{
    int currentNum = checkListNode(l1) + checkListNode(l2) + nextNum;
    int addToNextNum = 0;

    if (currentNum / 10 > 0)
    {
        addToNextNum = currentNum / 10;
    }

    if (l1->next == nullptr && l2->next == nullptr)
    {
        if (addToNextNum > 0)
            return new ListNode(currentNum % 10, new ListNode(addToNextNum));
        else
            return new ListNode(currentNum % 10, nullptr);
    }

    if (l1->next == nullptr)
    {
        l1->next = new ListNode(0);
    }

    if (l2->next == nullptr)
    {
        l2->next = new ListNode(0);
    }

    return new ListNode(currentNum % 10, addNums(l1->next, l2->next, addToNextNum));
}

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    return addNums(l1, l2, 0);
}
