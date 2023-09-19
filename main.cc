#include <cstdio>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> nums{};

  map<int, int> m;

  for (auto n : nums) {
     m[n]++;
  }
int temp =nums.size()/2;
auto result= find_if(m.begin(),m.end(),[temp](const pair<int, int>p){
    return p.second>temp;
  });

  

      return 0;
}