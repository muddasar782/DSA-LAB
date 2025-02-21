//#include <iostream>
//#include <string>
//using namespace std;
//
//bool isValidParentheses(string expr) {
//    Stack<char> stack;
//
//    for (char ch : expr) {
//        if (ch == '(') {
//            stack.Push(ch);
//        }
//        else if (ch == ')') {
//            if (stack.IsEmpty()) {
//                return false;
//            }
//            char temp;
//            stack.Pop(temp);
//        }
//    }
//
//    return stack.IsEmpty();
//}
//
//int main() {
//    string expr;
//    cout << "Enter a parenthesized expression: ";
//    cin >> expr;
//
//    if (isValidParentheses(expr)) {
//        cout << "Valid expression" << endl;
//    }
//    else {
//        cout << "Invalid expression" << endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int precedence(char op) {
//    if (op == '+' || op == '-') return 1;
//    if (op == '*' || op == '/') return 2;
//    return 0;
//}
//
//string infixToPostfix(string infix) {
//    Stack<char> stack;
//    string postfix = "";
//
//    for (char ch : infix) {
//        if (isalnum(ch)) {
//            postfix += ch;
//        }
//        else if (ch == '(') {
//            stack.Push(ch);
//        }
//        else if (ch == ')') {
//            char top;
//            while (!stack.IsEmpty()) {
//                stack.Pop(top);
//                if (top == '(') break;
//                postfix += top;
//            }
//        }
//        else {
//            while (!stack.IsEmpty()) {
//                char top;
//                stack.Pop(top);
//                if (precedence(top) < precedence(ch)) {
//                    stack.Push(top);
//                    break;
//                }
//                postfix += top;
//            }
//            stack.Push(ch);
//        }
//    }
//
//    while (!stack.IsEmpty()) {
//        char top;
//        stack.Pop(top);
//        postfix += top;
//    }
//
//    return postfix;
//}
//
//int main() {
//    string infix;
//    cout << "Enter infix expression: ";
//    cin >> infix;
//
//    cout << "Postfix expression: " << infixToPostfix(infix) << endl;
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int evaluatePostfix(string postfix) {
//    Stack<int> stack;
//
//    for (char ch : postfix) {
//        if (isdigit(ch)) {
//            stack.Push(ch - '0');
//        }
//        else {
//            int val1, val2;
//            stack.Pop(val2);
//            stack.Pop(val1);
//
//            switch (ch) {
//            case '+': stack.Push(val1 + val2); break;
//            case '-': stack.Push(val1 - val2); break;
//            case '*': stack.Push(val1 * val2); break;
//            case '/': stack.Push(val1 / val2); break;
//            }
//        }
//    }
//
//    int result;
//    stack.Pop(result);
//    return result;
//}
//
//int main() {
//    string postfix;
//    cout << "Enter postfix expression: ";
//    cin >> postfix;
//
//    cout << "Evaluation result: " << evaluatePostfix(postfix) << endl;
//    return 0;
//}