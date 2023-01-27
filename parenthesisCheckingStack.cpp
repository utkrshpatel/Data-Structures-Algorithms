#include <iostream>
using namespace std;

class stack {
    public: 
    int top;
    char *arr;
    string p;

    stack(int size) {
        arr = new char[size];
        top = -1;
        
    } 

    void push(string stack) {
        p = stack;
        for(int i = 0; i<p.length(); i++) {
            if(p[i]=='(' || p[i]== '{' || p[i]== '[') {
                top++;
                arr[top] = p[i];
            }

            else if(p[i] == ')' || p[i]== '}' || p[i] == ']') {
               if(top>=0){
                if(arr[top] == '(' && p[i] == ')'  || arr[top] == '{' && p[i] == '}' || arr[top] == '[' && p[i] == ']' ) {
                    top--;
                }

               
               }
                
            }
        }
        

        if(top==-1) {
            cout<<"Balanced equation";
        }

        else {
            cout<<"unbalanced equation";
        }
    }

};

int main() {
    stack st(50);
    st.push("{(a+b)-[c]{");



}