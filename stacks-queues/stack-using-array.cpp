/* Implement stack using arrays
createStack() - Time Complexity: O(1)
isEmpty()     - Time Complexity: O(1)
isFull()      - Time Complexity: O(1)
push()        - Time Complexity: O(1)
pop()         - Time Complexity: O(1)
peek()        - Time Complexity: O(1) */

#include <iostream>
using namespace std;

const int MAX = 10;

class Stack {
    private:
        int top;
        int elements[MAX];
    public:
        void createStack(){
            top = -1;
        }

        bool isEmpty(){
            return top == -1;
        }

        bool isFull(){
            return top == MAX-1;
        }

        void push(int value){
            if(isFull()){
                cout << "Stack overflow";
                return;
            }

            top++;
            elements[top] = value;
        }

        int pop(){
            if(isEmpty()){
                cout << "Stack underflow";
                return -1;
            }

            int temp = elements[top];
            top--;
            return temp;
        }

        int peek(){
            if(isEmpty()){
                cout << "Empty stack";
                return -1;
            }

            return elements[top];
        }
};
