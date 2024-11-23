#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

void Sort(list<int>& nums) {
    nums.sort();
    nums.reverse();
}
int main() {
    list<int> nums = {1,2,2,23,-1,-1,2,-2};
    Sort(nums);
    for (auto i: nums) {
        cout <<i << " ";
    }
}