#include "stack.h"
#include<string>

#include <stdlib.h>

Stack::Stack() {
    top = -1;
}

Stack::~Stack() {

}

bool Stack::isEmpty() const {
    return (top == -1);
}

bool Stack::isFull() const {
    return (top == MAX_ITEMS - 1);
}

void Stack::push(char newitem) {
    if (isFull()) {
        cout << "Stack overflow" << endl;
        exit(1);
    }
    top++;
    items[top] = newitem;
}

void Stack::pop(char& item) {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
        exit(1);
    }
    item = items[top];
    top--;
}

int Stack::peek() const {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        exit(1);
    }
    return items[top];
}
void Stack::reverse(string input) {
    char c;
    string reversed = "";


    for (char c : input) {
        push(c);
    }
    while (!isEmpty())
    {
        pop(c);

        reversed += c;

    }
    cout << reversed;
}




#pragma once
#ifndef STACK_H
#define STACK_H
#define MAX_ITEMS 100

#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    char items[MAX_ITEMS];

public:
    Stack();
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    void push(char newitem);
    void pop(char& item);
    int  peek() const;
    void reverse(string input);






};

#endif




#include <iostream>
#include "stack.h"
using namespace std;

/*int main() {
    Stack s;
    s.push(10);
    s.push(120);
    s.push(1);


    cout << "Top element is: " << s.peek() << endl;

    return 0;
}*/
int main()
{
    char c;
    Stack s;
    string input;
    cin >> input;
    s.reverse(input);


//}