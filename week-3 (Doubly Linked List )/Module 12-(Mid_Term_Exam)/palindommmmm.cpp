#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* prev;
    Node* next;

    Node(string val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Function to move to the next address
void moveNext(Node*& tmp) {
    if (tmp->next != NULL) {
        tmp = tmp->next;
        cout << tmp->val << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

// Function to move to the previous address
void movePrev(Node*& tmp) {
    if (tmp->prev != NULL) {
        tmp = tmp->prev;
        cout << tmp->val << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

// Function to visit a specific address
void visitAddress(Node*& tmp, string address) {
    Node* current = tmp;
    while (current != NULL && current->val != address) {
        current = current->next;
    }

    if (current != NULL) {
        tmp = current;
        cout << current->val << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

int main() {
    // Read input and create a doubly linked list
    string val;
    Node* head = NULL;
    Node* tail = NULL;

    while (cin >> val && val != "end") {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Process queries
    int Q;
    cin >> Q;

    Node* tmp = head;  // Initially at the head

    while (Q--) {
        string command, address;
        cin >> command;

        if (command == "visit") {
            cin >> address;
            visitAddress(tmp, address);
        } else if (command == "next") {
            moveNext(tmp);
        } else if (command == "prev") {
            movePrev(tmp);
        }
    }

    return 0;
}
