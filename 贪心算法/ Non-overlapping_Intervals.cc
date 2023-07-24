#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*
题目描述
给定多个区间，计算让这些区间互不重叠所需要移除区间的最少个数。起止相连不算重叠。
输入输出样例
输入是一个数组，数组由多个长度固定为 2 的数组组成，表示区间的开始和结尾。输出一个
整数，表示需要移除的区间数量。
Input: [[1,2], [2,4], [1,3]]
Output: 1
在这个样例中，我们可以移除区间 [1,3]，使得剩余的区间 [[1,2], [2,4]] 互不重叠

*/

void test(vector<vector<int>> &v)
{

    if (v.empty())
    {

        cout << "empty" << endl;
        return;
    }

    sort(v.begin(), v.end(), [](vector<int> &a, vector<int> &b)
         { return a[1] < b[1]; });

    int pre = v[0][1];

    int remove = 0;

    for (size_t i = 1; i < v.size(); i++)
    {
        if (v[i][0] <= pre)
        {
            remove++;
        }
        else
        {
            pre = v[i][1];
        }
    }

    cout << remove << endl;
}

int main()
{

    vector<vector<int>> v = {{1, 2}, {2, 4}, {1, 3}};

    test(v);

    return 0;
}