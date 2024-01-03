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
//---------------------------------------------------------
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
//-----------------------------------------------------------
void sort_it(Node *head, Node *tail) // soto_theke_Boro
{
    Node *tmp1 = head;
    Node *tmp2;
    while (tmp1 != NULL)
    {
        tmp2 = tmp1->next;
        while (tmp2 != NULL)
        {
            if (tmp1->val > tmp2->val)
            {
                swap(tmp1->val, tmp2->val);
            }
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
}
//------------------------------------------------------------
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    sort_it(head, tail);
    Print_Normal(head);
}