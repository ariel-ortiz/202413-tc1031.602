#include <iostream>
#include "stack.h"

// Time complexity: O(N)
bool is_palindrome(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c : input) {
        s.push(c);
    }

    for (char c : input) {
        if (c != s.pop()) {
            return false;
        }
    }

    return true;
}

bool is_balanced(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c : input) {
        switch (c) {
            case '(':
            case '[':
            case '{':
                s.push(c);
                break;
            case ')':
                if (s.is_empty() or s.pop() != '(') {
                    return false;
                }
                break;
            case ']':
                if (s.is_empty() or s.pop() != '[') {
                    return false;
                }
                break;
            case '}':
                if (s.is_empty() or s.pop() != '{') {
                    return false;
                }
                break;
        }
    }
    return s.is_empty();
}

int main()
{
    // Stack<std::string> s(4);
    // s.push("Alpha");
    // s.push("Beta");
    // s.push("Gamma");
    // std::cout << "s.size() = " << s.size() << "\n";
    // std::cout << "s.capacity() = " << s.capacity() << "\n";
    // std::cout << "s.peek() = " << s.peek() << "\n";
    // std::cout << "s.pop() = " << s.pop() << "\n";
    // std::cout << "s.size() = " << s.size() << "\n";
    // std::cout << "s.peek() = " << s.peek() << "\n";
    // std::cout << "s.is_empty() = " << s.is_empty() << "\n";
    // std::cout << "s.pop() = " << s.pop() << "\n";
    // std::cout << "s.pop() = " << s.pop() << "\n";
    // std::cout << "s.is_empty() = " << s.is_empty() << "\n";
    // std::cout << "s.size() = " << s.size() << "\n";
    // s.push("Delta");
    // s.push("Omega");
    // std::cout << "s.size() = " << s.size() << "\n";
    // s.clear();
    // std::cout << "s.size() = " << s.size() << "\n";
    // s.push("A");
    // s.push("B");
    // s.push("C");
    // s.push("D");
    // try {
    //     s.push("E");
    // } catch (std::overflow_error err) {
    //     std::cout << "Oops!\n";
    // }
    // std::cout << "s.size() = " << s.size() << "\n";

    std::cout << "is_palindrome(\"racecar\") = " << is_palindrome("racecar") << "\n";
    std::cout << "is_palindrome(\"johny\") = " << is_palindrome("johny") << "\n";
    std::cout << "is_balanced(\"()([]{})\") = " << is_balanced("()([]{})") << "\n";
    std::cout << "is_balanced(\"([]{}\") = " << is_balanced("([]{}") << "\n";

    return 0;
}
