#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

/*
题目描述
给定一个数字 n，求小于 n 的质数的个数。
输入输出样例
输入一个整数，输出也是一个整数，表示小于输入数的质数的个数。
Input: 10
Output: 4
在这个样例中，小于 10 的质数只有 [2,3,5,7]
*/

vector<int> test(int number)
{

    vector<int> sum{};

    if (number < 2)
    {
        return sum;
    }

    int i, j;

    for (i = 3; i <= number; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (j == i)
        {
            sum.push_back(i);
        }
    }

    return sum;
}

int main()
{

    test(100);

    return 0;
}