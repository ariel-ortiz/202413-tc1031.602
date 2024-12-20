#pragma once

#include <functional>
#include <initializer_list>
#include <queue>
#include <cmath>

template<typename T>
class TreeSet {

public:

    // Complexity: O(1)
    TreeSet() {}

    // Complexity: O(N)
    ~TreeSet()
    {
        _destructor(_root);
    }

    // Complexity: O(N log N)
    TreeSet(std::initializer_list<T> args)
    {
        for (T value : args) {
            add(value);
        }
    }

    // Complexity: O(log N)
    bool add(T value)
    {
        if (_root) {
            Node* p = _root;
            while (true) {
                if (value == p->value) {
                    return false;
                } else if (value < p->value) {
                    if (p->left) {
                        p = p->left;
                    } else {
                        p->left = new Node(value);
                        _size++;
                        return true;
                    }
                } else {
                    if (p->right) {
                        p = p->right;
                    } else {
                        p->right = new Node(value);
                        _size++;
                        return true;
                    }
                }
            }
        }
        _root = new Node(value);
        _size++;
        return true;
    }

    // Complexity: O(1)
    int size() const
    {
        return _size;
    }

    // Complexity: O(1)
    bool is_empty() const
    {
        return size() == 0;
    }

    // Complexity: O(log N)
    bool contains(T value) const
    {
        return _contains(value, _root);
    }

    // Complexity: O(N)
    void inorder(std::function<void(T)> fn) const
    {
        _inorder(fn, _root);
    }

    // Complexity: O(N)
    void preorder(std::function<void(T)> fn) const
    {
        _preorder(fn, _root);
    }

    // Complexity: O(N)
    void postorder(std::function<void(T)> fn) const
    {
        _postorder(fn, _root);
    }

    // Complexity: O(N)
    void levelorder(std::function<void(T)> fn) const
    {
        std::queue<Node*> queue;
        queue.push(_root);
        while (not queue.empty()) {
            Node* p = queue.front();
            queue.pop();
            if (p) {
                fn(p->value);
                queue.push(p->left);
                queue.push(p->right);
            }
        }
    }

    // Complexity: O(N)
    int height() const
    {
        return _height(_root);
    }

    // Complexity: O(N)
    bool is_full() const
    {
        return _is_full(_root);
    }

    // Complexity: O(N)
    int leaf_count() const
    {
        return _leaf_count(_root);
    }

    // Complexity: O(N)
    bool is_perfect() const
    {
        return size() == std::pow(2, height() + 1) - 1;
    }

private:

    struct Node {
        Node(T value)
        {
            this->value = value;
        }
        T value;
        Node* left = nullptr;
        Node* right = nullptr;
    };

    void _destructor(Node* p) {
        if (not p) {
            return;
        }
        _destructor(p->left);
        _destructor(p->right);
        delete p;
    }

    bool _contains(T value, Node* p) const
    {
        if (not p) {
            return false;
        }
        if (value == p->value) {
            return true;
        }
        if (value < p->value) {
            return _contains(value, p->left);
        }
        return _contains(value, p->right);
    }

    void _inorder(std::function<void(T)> fn, Node* p) const
    {
        if (not p) {
            return;
        }
        _inorder(fn, p->left);
        fn(p->value);
        _inorder(fn, p->right);
    }

    void _preorder(std::function<void(T)> fn, Node* p) const
    {
        if (not p) {
            return;
        }
        fn(p->value);
        _preorder(fn, p->left);
        _preorder(fn, p->right);
    }

    void _postorder(std::function<void(T)> fn, Node* p) const
    {
        if (not p) {
            return;
        }
        _postorder(fn, p->left);
        _postorder(fn, p->right);
        fn(p->value);
    }

    int _height(Node* p) const
    {
        if (not p) {
            return -1;
        }
        return std::max(_height(p->left), _height(p->right)) + 1;
    }

    bool _is_full(Node* p) const
    {
        if (not p) {
            return true;
        }
        if (not p->left and not p->right) {
            return true;
        }
        if (p->left and p->right) {
            return _is_full(p->left) and _is_full(p->right);
        }
        return false;
    }

    int _leaf_count(Node* p) const
    {
        if (not p) {
            return 0;
        }
        if (not p->left and not p->right) {
            return 1;
        }
        return _leaf_count(p->left) + _leaf_count(p->right);
    }

    Node* _root = nullptr;
    int _size = 0;
};
