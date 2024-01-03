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
void insert_tail_2(Node *&head_2, Node *&tail_2, int val)
{
    Node *newNode = new Node(val);
    if (tail_2 == NULL)
    {
        head_2 = newNode;
        tail_2 = newNode;
        return;
    }
    tail_2->next = newNode;
    newNode->prev = tail_2;
    tail_2 = tail_2->next;
}
bool Check_Same(Node *head_1, Node *head_2)
{
    Node *tmp1 = head_1;
    Node *tmp2 = head_2;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return tmp1 == NULL && tmp2 == NULL;
}
int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail_1(head_1, tail_1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail_2(head_2, tail_2, val);
    }

    if (Check_Same(head_1, head_2))

    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
