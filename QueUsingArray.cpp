#include <iostream>
using namespace std;

class queue {
    public:
    int *array;
    int size;
    int front;
    int rear;

    queue(int s) {
        size = s;
        array = new int[size];
        front = -1;
        rear = -1;
    }

    int isEmpty() {
        if(front == rear) {
            return 1;
        }

        else {
            return 0;
        }

    }

    int isFull() {
        if(size-1 == rear) {
            return 1;
        }

        else {
            return 0;
        }
    }


    void enque(int d) {
        if(isFull()) {
            cout<<"Queue Overflow";
            return;
        }

        else {
            rear++;
            array[rear] = d;
        }


    }

    void deque() {
        if(isEmpty()) {
            cout<<"Queue underflow";
            return;
        }

        else {
            front++;
            if(front == rear) {
                front = rear = -1;
            }
        }
    }

    void peak() {
        if(isEmpty()) {
            cout<<"Que is empty";
            return;
        }

        else {
            cout<<array[front+1];
        }

    }
};


int main() {
    queue q(5);
    q.enque(5);
    q.enque(6);
    q.enque(7);
    q.enque(8);
    q.enque(9);
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
}