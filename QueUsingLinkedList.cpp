#include <iostream>
using namespace std;

class queue {
    public:
    int data;
    queue *next;


    queue(int d) {
        data = d;
        next = NULL;

    }

};


void enqueue(queue *&f,queue *&r,int d) {
    queue *ptr = new queue(d);
    queue *p = r;
    if(f == NULL && r == NULL) {
        f = r = ptr;
    }

    else {
        p->next = ptr;
        r = ptr;
    }

}

void traversal(queue *f) {
    while(f!=NULL) {
        cout<<f->data<<endl;
        f = f->next;
    }
}

void dequeue(queue *&f) {
    if(f==NULL) {
        cout<<"Queue is empty";
        return;
    }

    else {
        queue *p = f;
        f = f->next;
        delete p;
        

    }
}

int main() {
    queue *front= NULL;
    queue *rear = NULL;
    enqueue(front,rear,100);
    enqueue(front,rear,200);
    enqueue(front,rear,300);
    enqueue(front,rear,400);
    dequeue(front);
    dequeue(front);
    traversal(front);

    
}