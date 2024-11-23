#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <set>

using namespace std;

int uniqueWords(const string& str) {
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
    return (wordsend.size());
}




int main() {
    
    const string str = "aa aa bb bb jj jj jj ii ii o ";
    int ans = uniqueWords(str);
 
cout << ans;
 }
 
    