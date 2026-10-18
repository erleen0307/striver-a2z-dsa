/* Implement linear queue using arrays
createQueue() - Time Complexity: O(1)
isEmpty()     - Time Complexity: O(1)
isFull()      - Time Complexity: O(1)
enqueue()     - Time Complexity: O(1)
dequeue()     - Time Complexity: O(1)
peek()        - Time Complexity: O(1) */

#include <iostream>
using namespace std;

const int MAX = 10;

class Queue {
    private:
        int front;
        int rear;
        int elements[MAX];
    public:
        void createQueue(){
            front = -1;
            rear = -1;
        }

        bool isEmpty(){
            return front == -1;
        }

        bool isFull(){
            return rear == MAX-1;
        }

        void enqueue(int value){
            if(isFull()){
                cout << "Queue overflow";
                return;
            }

            if(isEmpty()){
                front = 0;
            }

            rear++;
            elements[rear] = value;
        }

        int dequeue(){
            if(isEmpty()){
                cout << "Queue underflow";
                return -1;
            }

            int temp = elements[front];

            if(front == rear){
                front = -1;
                rear = -1;
            } else{
                front++;
            }

            return temp;
        }

        int peek(){
            if(isEmpty()){
                cout << "Empty queue";
                return -1;
            }

            return elements[front];
        }
};
