#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*
在一个增序的整数数组里找到两个数，使它们的和为给定值。已知有且只有一对解。
输入输出样例
输入是一个数组（numbers）和一个给定值（target）。输出是两个数的位置，从 1 开始计数。
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
*/

vector<int> test(vector<int> &number, int target)
{

    int pre = 0;
    int tail = number.size() - 1;

    sort(number.begin(), number.end(), [](int a, int b)
         { return a < b; });

    while (pre < tail)
    {
        if (number[pre] + number[tail] == target)
        {

            return vector<int>{pre, tail};
            break;
        }
        else if (number[pre] + number[tail] < target)
        {
            pre++;
        }
        else
        {
            tail--;
        }
    }
    return vector<int>{};
}

int main()
{

    vector<int> number = {2, 7, 11, 15};

    vector<int> output = test(number, 9);

    for (auto i : output)
    {
        cout << i << endl;
    }

    return 0;
}