#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *prev;
    Node *next;

    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void next_address(Node *&curr)
{
    if (curr->next != NULL)
    {
        curr = curr->next;
        cout << curr->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void prev_address(Node *&curr)
{
    if (curr->prev != NULL)
    {
        curr = curr->prev;
        cout << curr->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void visit_address(Node *&curr, Node *head, string address)
{
    Node *tmp = head;
    while (tmp != NULL && tmp->val != address)
    {
        tmp = tmp->next;
    }
    if (tmp != NULL)
    {
        curr = tmp;
        cout << curr->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    int Q;
    cin >> Q;
    Node *curr = head;
    while (Q--)
    {
        string command, address;
        cin >> command;
        if (command == "visit")
        {
            cin >> address;
            visit_address(curr, head, address);
        }
        else if (command == "next")
        {
            next_address(curr);
        }
        else if (command == "prev")
        {
            prev_address(curr);
        }
    }
    return 0;
}