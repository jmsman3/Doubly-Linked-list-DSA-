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

int main()
{
    list<int> myList = {10, 20, 30, 40};
    //cout << myList.max_size();
    // myList.clear();
    // myList.resize(2);
    myList.resize(5,100 );
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}