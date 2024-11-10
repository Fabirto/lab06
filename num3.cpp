
#include <iostream>
#include <vector>
using namespace std;
int wordsCounter(const std::string& str){
    int sum = 0;
    for (int i = 0; i <str.length(); i++) {
        if ((str[i] == ' ') or (str[i] == ',') or (str[i] == '.')) {
            sum +=1;
        }
        
    }
    return sum+1;
    
}

int main()
{
   int words = wordsCounter("can.can.you can awdawd,alalwd");
   cout << words;
}