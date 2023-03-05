#include <iostream>
#include <stack>
using namespace std;
void driverfn(stack<int> st,int data){
    if(st.empty()) {
        st.push(data);
        return;
    }

    int n = st.top();
    st.pop();
    driverfn(st,n);
    st.push(n);
}
void reverseStack(stack<int> st) {
    if(st.empty()) {
        return;
    }

    int n = st.top();
    st.pop();
    reverseStack(st);
    driverfn(st,n);


}

void printstack(stack<int> st) {
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();

    }
}

int main() {
    stack<int> st;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    reverseStack(st);
    printstack(st);
}