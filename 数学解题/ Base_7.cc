#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
题目描述
给定一个十进制整数，求它在七进制下的表示。
输入输出样例
输入一个整数，输出一个字符串，表示其七进制。
Input: 100
Output: "202"
在这个样例中， 100 的七进制表示法来源于 101 = 2 * 49 + 0 * 7 + 2 * 1
*/

string test(int number)
{

    bool is_negative;

    string N;
    if (number < 0)
    {
        is_negative = true;
    }

    int a;
    int b;

    while (number)
    {
        a = number / 7;
        b = number % 7;
        N = to_string(b) + N;
        number = number + b;
    }

    return is_negative ? "-" + N : N;
}

int main()
{

    return 0;
}