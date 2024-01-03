#include <bits/stdc++.h>
using namespace std;

void Print_Normal(list<int> myList)
{

    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;
    list<int> myList;
    while (Q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
            cout << "L -> ";
            Print_Normal(myList);
            cout << "R -> ";
            myList.reverse();
            Print_Normal(myList);
            myList.reverse();
        }
        else if (x == 1)
        {
            myList.push_back(v);
            cout << "L -> ";
            Print_Normal(myList);
            cout << "R -> ";
            myList.reverse();
            Print_Normal(myList);
            myList.reverse();
        }
        else if (x == 2)
        {
            if (v >= 0 && v < myList.size())
            {

                myList.erase(next(myList.begin(), v));
            }
            cout << "L -> ";
            Print_Normal(myList);
            cout << "R -> ";
            myList.reverse();
            Print_Normal(myList);
            myList.reverse();
        }
    }
    return 0;
}