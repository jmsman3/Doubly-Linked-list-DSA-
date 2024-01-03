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
    list<int> MyList = {10, 20, 30, 30, 30, 30, 40, 50, 60, 30, 30, 70};
    // MyList.push_back(99);
    // MyList.push_front(100);
    //  MyList.pop_back();
    //  MyList.pop_front();
    // list<int>newlist = MyList;
    // MyList.insert(next(MyList.begin(), 2), 100);
    // MyList.erase( next( MyList.begin(), 2));
    // MyList.insert(next( MyList.begin(), 2) , {99,33,66}); //multiple-Insertkora
    // list<int> NewList = {11, 22, 33};
    // MyList.insert(next(MyList.begin(), 1), NewList.begin(), NewList.end());
    // MyList.erase(next(MyList.begin(), 1), next(MyList.begin(), 5)); //multiple-Erase_kora
    // replace(MyList.begin(), MyList.end(), 30, 100); //REPLACE KORa
    auto it = find(MyList.begin(), MyList.end(), 110);
    if (it == MyList.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    // for (int val : MyList)
    // {
    //     cout << val << endl;
    // }

    return 0;
}