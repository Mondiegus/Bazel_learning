#include <addTwoNumb.h>
#include <iostream>

int main()
{
    ListNode *a = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode *b = new ListNode(5, new ListNode(6, new ListNode(4)));
    Solution solution;
    ListNode *c = solution.addTwoNumbers(a, b);
    std::cout << c->val << c->next->val << c->next->next->val;
}