#include <cstddef>
#include <iostream>



struct  ListNode{
    int val;
    struct ListNode *next;
    explicit ListNode(int x):val(x),next(nullptr){
    }
};

//两个链表的第一个公共结点

int getLenthList(ListNode *node){
    if(node== nullptr){
        return 0;
    }
    int number = 1;
    while (node->next!= nullptr){
        node = node->next;
        number++;
    }
    return number;
}


ListNode *test(ListNode *node1,ListNode *node2)
{

    if (node1==nullptr||node2==nullptr) {
        return nullptr;
    }

    ListNode *result= nullptr;

    int len1 = getLenthList(node1);
    int len2 = getLenthList(node2);

    if (len1<len2) {
        for (int i=0; i<len2-len1; i++) {
            node2 = node2->next;
        }
    }else if(len1>len2){
        for (int i=0; i<len1-len2; i++) {
            node1 =node1->next;
        }
    }

    while (node1!=node2) {
        node1=node1->next;
        node2=node2->next;
    }

    result =node1;

    return result;
}



int main() {

    ListNode(1);


    return 0;
}
