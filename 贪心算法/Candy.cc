#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

一群孩子站成一排，每一个孩子有自己的评分。现在需要给这些孩子发糖果，规则是如果一
个孩子的评分比自己身旁的一个孩子要高，那么这个孩子就必须得到比身旁孩子更多的糖果；所
有孩子至少要有一个糖果。求解最少需要多少个糖果。
输入输出样例
输入是一个数组，表示孩子的评分。输出是最少糖果的数量。
Input: [1,0,2]
Output: 5
在这个样例中，最少的糖果分法是 [2,1,2]

*/

void test(vector<int> &childern)
{

    int candy = 0;

    if (childern.size() > 0)
    {
        candy = childern.size();
    }
    else
    {
        cout << "cadny = " << candy << endl;
        return;
    }

    for (size_t i = 0; i < childern.size() - 1; i++)
    {
        if (childern[i] > childern[i + 1])
        {
            candy++;
        }
    }

    for (size_t i = childern.size() - 1; i > 0; i--)
    {
        if (childern[i] > childern[i - 1])
        {
            candy++;
        }
    }

    cout << "cadny = " << candy << endl;
}

int main()
{

    vector<int> childern = {1, 0, 2};

    test(childern);

    return 0;
}