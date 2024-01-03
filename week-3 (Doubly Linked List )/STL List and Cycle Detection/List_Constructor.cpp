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
    // cout << MyList.size() << endl;
    // list<int> MyList_2 = {10, 20, 30, 40, 50};
    // list<int>MyList(MyList_2);
    // int a[6] = {10, 20, 30, 40, 50, 60};
    // list<int> mylist(a, a + 5);
    // vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    // list<int> MyList(v.begin(), v.end());
    list<int>Mylist( 10, 5);
    for (int val : Mylist)
    {
        cout << val << endl;
    }
    return 0;
}