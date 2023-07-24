#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct ListNode
{
    int val;

    struct ListNode *next;

    ListNode(int _val) : val(_val), next(nullptr)
    {
    }
};

vector<int> test(ListNode *head)
{

    vector<int> result{};
    stack<int> temp{};

    ListNode *node = head;

    while (node != nullptr)
    {
        temp.push(node->val);

        node = node->next;
    }

    while (!temp.empty())
    {
        result.emplace_back(temp.top());
        temp.pop();
    }
    

    return result;
}

int main()
{

    return 0;
}