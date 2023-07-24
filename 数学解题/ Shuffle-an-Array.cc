#include <algorithm>
#include <any>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
题目描述
给定一个数组，要求实现两个指令函数。第一个函数“shuffle”可以随机打乱这个数组，第
二个函数“reset”可以恢复原来的顺序。
输入输出样例
输入是一个存有整数数字的数组，和一个包含指令函数名称的数组。输出是一个二维数组，
表示每个指令生成的数组。
Input: nums = [1,2,3], actions: ["shuffle","shuffle","reset"]
Output: [[2,1,3],[3,2,1],[1,2,3]]
在这个样例中，前两次打乱的结果只要是随机生成即可
*/

class Solution
{
private:
    vector<int> origin; 

public:
    Solution(vector<int> number) : origin(number) {}

    vector<int> reset()
    {
        return origin;
    }

    vector<int> MyShuffle()
    {

        if (origin.empty())
        {
            return {};
        }

        vector<int> myShuffle(origin);

        for (size_t i = 0; i < myShuffle.size(); i++)
        {
            int pos = rand() % (myShuffle.size() - i);

            swap(myShuffle[i], myShuffle[i + pos]);
        }

        return myShuffle;
    }
};

int main()
{

    return 0;
}