#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*
输入是一个链表，输出是链表的一个节点。如果没有环路，返回一个空指针
*/

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x= 0) : val(x), next(nullptr){}
};

void test()
{

    ListNode *slow = nullptr;
    ListNode *fast = nullptr;

    do
    {
        if (!fast||!fast->next)
        {
            cout<<"Is has not circle!"<<endl;
            return ;
        }
        
    } while (slow!=fast);


    cout<<"Is has circle!"<<endl;
}

int main()
{

    ListNode n;

    cout<<n.val<<endl;


    return 0;
}