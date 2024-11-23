#include <string>
#include <map>
#include <iostream>

using namespace std;

map<string, int> wordsMapCounter(const string& str) {
    map<string, int> words;
    string word;



    for (int i = 0; i < str.size(); i++) {
        auto c = str[i];
        
        if (c!=' ' && c!=',' && c!='.') {
            word+=c;
            
        } else {
            
            if (word.size()>0) {
                words[word]++;
                word="";
                
            }
        }
    }
    if (word.size()>0) {
                words[word]++;
    }
    return words;
}




int main() {
    
    const string str = "can can can can can ban ban ban b a n asfldf;sdfk";
    map <string, int> ans = wordsMapCounter(str);
 
 for (auto pos : ans) {
     cout <<pos.first << " " << pos.second << endl;
 }
 }
    
    

