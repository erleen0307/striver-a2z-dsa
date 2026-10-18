/* Implement circular queue using arrays
createCircularQueue() - Time Complexity: O(1)
isEmpty()             - Time Complexity: O(1)
isFull()              - Time Complexity: O(1)
enqueue()             - Time Complexity: O(1)
dequeue()             - Time Complexity: O(1)
peek()                - Time Complexity: O(1)
*/

#include <iostream>
using namespace std;

const int MAX = 10;

class CircularQueue {
    private:
        int front;
        int rear;
        int elements[MAX];

    public:
        void createCircularQueue() {
            front = -1;
            rear = -1;
        }

        bool isEmpty() {
            return front == -1;
        }

        bool isFull() {
            return (rear + 1) % MAX == front;
        }

        void enqueue(int value) {
            if (isFull()) {
                cout << "Queue overflow";
                return;
            }

            if (isEmpty()) {
                front = 0;
            }

            rear = (rear + 1) % MAX;
            elements[rear] = value;
        }

        int dequeue() {
            if (isEmpty()) {
                cout << "Queue underflow";
                return -1;
            }

            int temp = elements[front];

            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % MAX;
            }

            return temp;
        }

        int peek() {
            if (isEmpty()) {
                cout << "Empty queue";
                return -1;
            }

            return elements[front];
        }
};
