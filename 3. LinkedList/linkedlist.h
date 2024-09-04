#pragma once

#include <sstream>

template<typename T>
class LinkedList {

public:

    // Complexity: O(1)
    LinkedList()
    {
        _sentinel = new Node;
        _sentinel->next = _sentinel;
        _sentinel->prev = _sentinel;
    }

    // Complexity: O(N)
    ~LinkedList()
    {
        Node* p = _sentinel->next;
        while (p != _sentinel) {
            Node* q = p;
            p = p->next;
            delete q;
        }
        delete _sentinel;
    }

    // Complexity: O(1)
    void insert_front(T value)
    {
        Node* p = new Node;
        p->value = value;
        p->next = _sentinel->next;
        p->prev = _sentinel;
        _sentinel->next->prev = p;
        _sentinel->next = p;
        _size++;
    }

    // Complexity: O(1)
    int size() const
    {
        return _size;
    }

    // Complexity: O(N)
    std::string to_string() const
    {
        std::ostringstream result;
        result << "[";
        bool first_time = true;
        Node* p = _sentinel->next;
        while (p != _sentinel) {
            if (first_time) {
                first_time = false;
            } else {
                result << ", ";
            }
            result << p->value;
            p = p->next;
        }
        result << "]";
        return result.str();
    }

private:

    struct Node {
        T value;
        Node* next;
        Node* prev;
    };

    Node* _sentinel = nullptr;
    int _size = 0;
};