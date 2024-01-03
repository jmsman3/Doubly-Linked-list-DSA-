#include <bits/stdc++.h>
using namespace std;
void Print_Normal(list<int> myList)
{
    for (int val : myList)
    {
        cout << val << " ";
    }
}

int main()
{
    int val;
    cin >> val;
    list<int> myList;

    while (val != -1)
    {
        myList.push_back(val);
        cin>>val;
    }
    myList.sort();
    myList.unique();
    Print_Normal(myList);

    return 0;
}