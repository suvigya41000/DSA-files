#include <iostream>
#include <string>

using namespace std;

class CharStack {
public:
    CharStack(int capacity) {
        stackArray = new char[capacity];
        top = -1;
        this->capacity = capacity;
    }

    ~CharStack() {
        delete[] stackArray;
    }

    void push(char c) {
        if (top < capacity - 1) {
            stackArray[++top] = c;
        }
    }

    char pop() {
        if (top >= 0) {
            return stackArray[top--];
        }
        return '\0'; // You can choose a suitable return value for an empty stack.
    }

    char peek() {
        if (top >= 0) {
            return stackArray[top];
        }
        return '\0'; // You can choose a suitable return value for an empty stack.
    }

    bool isEmpty() {
        return top == -1;
    }

private:
    char* stackArray;
    int top;
    int capacity;
};

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0; // Lower precedence for other characters
}

string infixToPostfix(const string& infix) {
    int length = infix.length();
    CharStack operatorStack(length);
    string postfix = "";

    for (int i = 0; i < length; i++) {
        char c = infix[i];
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            operatorStack.push(c);
        } else if (c == ')') {
            while (!operatorStack.isEmpty() && operatorStack.peek() != '(') {
                postfix += operatorStack.pop();
            }
            operatorStack.pop();
        } else {
            while (!operatorStack.isEmpty() && precedence(c) <= precedence(operatorStack.peek())) {
                postfix += operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }

    while (!operatorStack.isEmpty()) {
        postfix += operatorStack.pop();
    }

    return postfix;
}

int main() {
    string infixExpressionA = "(A+B)*C/D+E^F/G";
    string infixExpressionB = "A + ((B+C) + (D+E) * F) / G";

    string postfixA = infixToPostfix(infixExpressionA);
    string postfixB = infixToPostfix(infixExpressionB);

    cout << "Infix A: " << infixExpressionA << endl;
    cout << "Postfix A: " << postfixA << endl << endl;
    cout << "Infix B: " << infixExpressionB << endl;
    cout << "Postfix B: " << postfixB << endl;

    return 0;
}