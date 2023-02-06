#include <iostream>
#include <string.h>
using namespace std;

class stack {
    public:
    string st;
    char *arr;
    char *arr2;
    char *final_stack;
    int top;
    int top2;
    int top3;

    stack(string s) {
        st = s;
        arr = new char[sizeof(st)+1];
        arr2 = new char[sizeof(st)+1];
        final_stack = new char[sizeof(st)+1];
        top = -1;
        top2 = -1;
        top3 = -1;
        
    }

    void conversion() {
        for(int i = 0; i<st.length(); i++) {
            if(st[i] == '*' || st[i] == '/') {
                if(arr[top]=='-' || arr[top] == '+') {
                    top++;
                    arr[top] = st[i];

                }
                
                else if(arr[top]=='*' || arr[top] == '/') {
                    top2++;
                    arr2[top2] = arr[top];
                    top--;

                     if(arr[top] == '*' || arr[top] == '/') {
                        top2++;
                        arr2[top2] = arr[top];
                        top--;
                    }

                    top++;
                    
                    arr[top] = st[i];


                }

                else {
                    top++;
                    arr[top] = st[i];
                }
                
            }

            else if (st[i] == '-' || st[i] == '+') {
                if(arr[top]=='*' || arr[top] == '/') {
                    top2++;
                    arr2[top2] = arr[top];
                    top--;

                    if(arr[top] == '-' || arr[top] == '+') {
                        top2++;
                        arr2[top2] = arr[top];
                        top--;
                    }


                    
                    top++;
                    arr[top] = st[i];

                    
                }

                else if(arr[top]=='+' || arr[top] == '-') {
                    top2++;
                    arr2[top2] = arr[top];
                    top--;
                    top++;
                    arr[top] = st[i];
                }

                else {
                    top++;
                    arr[top] = st[i];
                }



            }

            else {
                top2++;
                arr2[top2] = st[i];
            }

        }
        //cout<<top<<endl;
        while(top!=-1) {
            top2++;
            arr2[top2] = arr[top];
            top--;
        }
        
    }



    void printresult() {
    while(top2!=-1) {
        top3++;
        final_stack[top3] = arr2[top2];
        top2--;
    }

    while(top3!=-1) {
        cout<<final_stack[top3];
        top3--;
    }

   
}
};



int main() {
    stack st("x*y+b/c-a");
    st.conversion();
    st.printresult();
    




}