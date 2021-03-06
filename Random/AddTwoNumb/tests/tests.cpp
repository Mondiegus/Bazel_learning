#include <gtest/gtest.h>
#include <addTwoNumb.h>

int listLength(ListNode *l)
{
    int len = 0;
    if (l != nullptr)
        len = 1;

    while (l->next != nullptr)
    {
        len++;
        l = l->next;
        std::cout << "next val: " << l->val << std::endl;
    }
    return len;
}

TEST(ListNode, assert_true)
{
    ASSERT_EQ(2, 2);
}

TEST(ListNode, assert_false)
{
    ASSERT_NE(2, 3);
}

TEST(ListNode, ListNode_00)
{
    ListNode *a = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode *b = new ListNode(5, new ListNode(6, new ListNode(4)));
    Solution solution;
    ListNode *c = solution.addTwoNumbers(a, b);
    ASSERT_EQ(a->val, 2);
    ASSERT_EQ(b->next->val, 6);
    ASSERT_EQ(c->val, 7);
    ASSERT_EQ(listLength(a), 3);
    ASSERT_EQ(listLength(b), 3);
    ASSERT_EQ(listLength(c), 3);
}

TEST(ListNode, ListNode_01)
{
    ListNode *a = new ListNode(2);
    ListNode *b = new ListNode(5, new ListNode(6, new ListNode(4)));
    Solution solution;
    ListNode *c = solution.addTwoNumbers(a, b);
    ASSERT_EQ(a->val, 2);
    ASSERT_EQ(b->next->val, 6);
    ASSERT_EQ(c->val, 7);
    ASSERT_EQ(c->next->val, 6);
    ASSERT_NE(listLength(a), 1);
    ASSERT_EQ(listLength(a), 3);
    ASSERT_EQ(listLength(b), 3);
    ASSERT_EQ(listLength(c), 3);
}
