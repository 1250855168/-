#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

有一群孩子和一堆饼干，每个孩子有一个饥饿度，每个饼干都有一个大小。每个孩子只能吃
一个饼干，且只有饼干的大小不小于孩子的饥饿度时，这个孩子才能吃饱。求解最多有多少孩子
可以吃饱

输入两个数组，分别代表孩子的饥饿度和饼干的大小。输出最多有多少孩子可以吃饱的数
量。
Input: [1,2], [1,2,3]
Output: 2
在这个样例中，我们可以给两个孩子喂 [1,2]、 [1,3]、 [2,3] 这三种组合的任意一种

*/

void test(vector<int> &Cookies, vector<int> &children)
{

    sort(Cookies.begin(), Cookies.end());

    sort(children.begin(), children.end());

    int sum = 0;

    for (size_t i = 0; i < Cookies.size(); i++)
    {
        if (Cookies[i] >= children[sum])
        {
            sum++;
        }
    }

    cout << "有" << sum << "小孩可以吃饱" << endl;
}

int main()
{

    vector<int> Cookies = {5, 4, 3, 1, 2};

    vector<int> children = {5, 4, 3, 2, 1};

    test(Cookies, children);

    return 0;
}