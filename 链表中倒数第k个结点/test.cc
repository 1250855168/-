#include <iostream>

using namespace std;

struct ListNode
{

    int val;
    struct ListNode *next;

    ListNode(int _val) : val(_val), next(nullptr)
    {
    }
};

ListNode *test(ListNode *head, int number)
{

    if (head == nullptr)
    {
        return nullptr;
    }
    

    ListNode *node1 = head;
    ListNode *node2 = head;

    for (size_t i = 0; i < number - 1; i++)
    {
        node1 = node1->next;

        if (node1 == nullptr)
        {
            return nullptr;
        }
    }

    while (node1->next!=nullptr)
    {
        node2 = node2->next;
        node1 = node1->next;
    }

    return node2;
}

int main()
{

    ListNode x1(1);

    test(&x1,1);

    return 0;
}
