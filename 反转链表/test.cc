#include <cstddef>
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



ListNode *test(ListNode *head)
{

ListNode *ReverseList{};

ListNode *preNode{};

ListNode *nextNode{};

ListNode *curNode=head;

while (curNode!=nullptr) {

    nextNode = curNode->next;

    if (curNode->next==nullptr) {

        ReverseList = curNode;    
    }

    curNode->next = preNode;

    preNode = curNode;

    curNode = nextNode;

}

return ReverseList;

}



int main(){








    return 0;
}