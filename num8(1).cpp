#include <iostream>
#include <vector>

using namespace std;

void plusesDeleter(vector<int>& v) {   // проходим двойным циклом чтобы не оставить одинаковые числа
    for (auto it = v.begin(); it != v.end();it++){
        for (auto it = v.begin(); it != v.end();it++){
            if (*it >0){
                v.erase(it);   
            }
    }
    
    }
    
}
    
int main() {
    vector<int> nums = {1,2,2,23,-1,-1,2,-2};
    plusesDeleter(nums);
    for (auto i: nums) {
        cout <<i << " ";
    }
}