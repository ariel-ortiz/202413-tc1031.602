#include <iostream>

struct Node {
    int value;
    Node* next;
};

void insert(Node*& lst, int x)
{
    Node* new_node = new Node;
    new_node->value = x;
    new_node->next = lst;
    lst = new_node;
}

void display(Node* lst)
{
    Node* current = lst;

    std::cout << "[";
    while (current) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << "]\n";
}

int length(Node* lst)
{
    Node* current = lst;
    int counter = 0;

    while (current) {
        counter++;
        current = current->next;
    }

    return counter;
}

void dispose(Node*& lst)
{
    Node* current = lst;
    while (lst) {
        lst = lst->next;
        delete current;
        current = lst;
    }
}

int main()
{
    // Not very useful:
    Node n;
    n.value = 5;
    n.next = nullptr;

    Node* p = new Node;
    // (*p).value = 7;
    p->value = 7;
    p->next = nullptr;

    Node* q = new Node;
    q->value = 9;
    q->next = p;

    delete p;
    delete q;

    Node* start = nullptr;
    display(start);
    std::cout << "length(start) = " << length(start) << "\n";
    insert(start, 10);
    insert(start, 12);
    insert(start, 15);
    insert(start, 20);
    display(start);
    std::cout << "length(start) = " << length(start) << "\n";
    dispose(start);
    display(start);
    std::cout << "length(start) = " << length(start) << "\n";
    return 0;
}
