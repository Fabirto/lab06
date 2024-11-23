#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <set>

using namespace std;

vector<string> uniqueWords(const string& str) {
    set<string> words;
    vector<string> wordsend;
    string word;


    for (int i = 0; i < str.size(); i++) {
        auto c = str[i];
        
        if (c!=' ' && c!=',' && c!='.') {
            word+=c;
            
        } else {
            
            if (word.size()>0) {
                words.insert(word);
                word="";
                
            }
        }
    }
    if (word.size()>0) {
                words.insert(word);
    }
    for( auto i: words) {
        wordsend.push_back(i);
    }
    return wordsend;
}




int main() {
    
    const string str = "can can aa a bb bb nia nia nini";
    vector<string> ans = uniqueWords(str);
 
 for (auto pos : ans) {
     cout <<pos << endl;
 }
 }
    