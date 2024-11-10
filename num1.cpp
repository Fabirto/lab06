
#include <iostream>
#include <vector>
using namespace std;
vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el){
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
     vector<int> v = {6, 8, 1, 2, 3, 4, 5};
    vector<int>::iterator it = Find(v.begin(), v.end(), 0);
    cout << *it;
}