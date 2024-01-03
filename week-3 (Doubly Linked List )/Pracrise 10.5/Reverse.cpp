#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void Print_Normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_tail_1(Node *&head_1, Node *&tail_1, int val)
{
    Node *newNode = new Node(val);
    if (tail_1 == NULL)
    {
        head_1 = newNode;
        tail_1 = newNode;
        return;
    }
    tail_1->next = newNode;
    newNode->prev = tail_1;
    tail_1 = tail_1->next;
}

void Reverse_Doubly_Linked_List(Node *head, Node *tail) //2 pointer tecqniq
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}
int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail_1(head_1, tail_1, val);
    }
    Reverse_Doubly_Linked_List(head_1, tail_1);
    Print_Normal( head_1);

    return 0;
}
