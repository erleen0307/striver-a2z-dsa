/* Implement stack using linked list
createStack() - Time Complexity: O(1)
isEmpty()     - Time Complexity: O(1)
push()        - Time Complexity: O(1)
pop()         - Time Complexity: O(1)
peek()        - Time Complexity: O(1)
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    private:
        Node* top;

    public:
        Stack() {
            top = NULL;
        }

        bool isEmpty() {
            return top == NULL;
        }

        void push(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = top;

            top = newNode;
        }

        int pop() {
            if (isEmpty()) {
                cout << "Stack underflow" << endl;
                return -1;
            }

            Node* nodeToDelete = top;
            int temp = nodeToDelete->data;

            top = top->next;
            delete nodeToDelete;

            return temp;
        }

        int peek() {
            if (isEmpty()) {
                cout << "Empty stack" << endl;
                return -1;
            }

            return top->data;
        }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Top element after pop: " << s.peek() << endl;

    return 0;
}
