#include <iostream>
#include <list>

using namespace std;
void reverseNum(list<int>& nums) {
    list<int> ans;    //создать побочный лист
    
    for (auto num: nums) {
        ans.push_back(-num);  //добавить в лист элементы
        ans.push_back(num);
    }
    nums=ans;    //приравнять лист к начальному
}


int main() {
    
    list<int> nums = {1,2,3,3,4,5,4,5};
    reverseNum(nums);
    for (auto i: nums) {
        cout << i <<" ";
    }
 }