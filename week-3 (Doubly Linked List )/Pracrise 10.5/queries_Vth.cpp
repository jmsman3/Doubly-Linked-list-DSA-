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
//-------------------------------------------------(Reverse)
void Reverse_koro(Node *tail)
{
    Node *tmp = tail;
 cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
//-------------------------------------------------(Size)
int size_here(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
//-------------------------------------------------(Print_Linked_List)
void Print_Normal(Node *head)
{

    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
//-------------------------------------------------( head)
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
//-------------------------------------------------( tail)
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
//-------------------------------------------------( Insert_Any)
void insert_any_Position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;

    tmp->next->prev = newNode;
    tmp->next = newNode;
}
int main()
{
    int Q;
    cin >> Q;
    Node *head = NULL;
    Node *tail = NULL;
    while (Q--)
    {
        int x, v;
        cin >> x >> v;
        if (x > size_here(head))
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            insert_head(head, tail, v);
            Print_Normal(head);
            Reverse_koro(tail);
        }
        else if (x == size_here(head))
        {
            insert_tail(head, tail, v);
            Print_Normal(head);
            Reverse_koro(tail);
        }
        else
        {
            insert_any_Position(head, x, v);
            Print_Normal(head);
            Reverse_koro(tail);
        }
    }

    return 0;
}