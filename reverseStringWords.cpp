#include <iostream>
#include <string.h>
#include <stack>

using namespace std;



string reverseWords(string s) {
    stack<string>store;
    string st;
    string newString;
    bool isEntered = false;
    int last = s.size()-1;

    for(int i = 0; i<s.length(); i++) {
        if(!isspace(s[i])) {
            st += s[i];
            isEntered = true;
        }

        else if(isspace(s[i])&& isEntered == true){
           store.push(st);
            st = "";
            isEntered  = false;

        }
    }

    if(!isspace(s[last])) store.push(st);
    while(!store.empty() ) {

        if(store.top()!="") {
            newString += store.top();
            if(store.size() != 1) {
                newString +=" ";
            }
        }
        store.pop();
    }
    
    return newString;
}



int main() {
    string st = "        hello world";
    reverseWords(st);
    
}