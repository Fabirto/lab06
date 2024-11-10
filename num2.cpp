
#include <iostream>
#include <vector>
using namespace std;
vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el){
    while (first != last-1) {
        if (*first == el) {
            break;
        }
        else {
             first +=1;
        }
       
        
    }
    return first;
}

int main()
{
     std::vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = findInSorted(v.begin(), v.end(), 0);
    cout << *it;
}