#pragma once

#include <stdexcept>

template<typename T>
class Stack {

public:

    // Time complexity: O(1)
    Stack(int capacity)
    {
        _capacity = capacity;
        _top = 0;
        _data = new T[_capacity];
    }

    // Time complexity: O(1)
    ~Stack()
    {
        delete [] _data;
    }

    // Time complexity: O(1)
    void push(T value)
    {
        if (_top == _capacity) {
            throw std::overflow_error("Stack Overflow!");
        }
        _data[_top] = value;
        _top++;
    }

    // Time complexity: O(1)
    T pop()
    {
        if (is_empty()) {
            throw std::underflow_error("Stack Underflow!");
        }
        _top--;
        return _data[_top];
    }

    // Time complexity: O(1)
    bool is_empty() const
    {
        return _top == 0;
    }

    // Time complexity: O(1)
    int size() const
    {
        return _top;
    }

    // Time complexity: O(1)
    int capacity() const
    {
        return _capacity;
    }

    // Time complexity: O(1)
    T peek() const
    {
        // Alternative #1
        // T result = pop();
        // push(result);
        // return result;

        // Alternative #2
        return _data[_top - 1];
    }

    // Time complexity: O(1)
    void clear()
    {
        // while (not is_empty()) {
        //     pop();
        // }
        _top = 0;
    }

private:
    T*  _data;
    int _capacity;
    int _top;
};
