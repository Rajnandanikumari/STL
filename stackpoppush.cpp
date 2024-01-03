
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int const size=5;
    stack<int>s;
    stack<int>copy;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top();
        copy.push(s.top());
        s.pop();
    }
    
    cout<<copy.top();
    // reverse(s.begin(),s.end())
    // for(const auto &value:s)
    // {
    //     cout<<*value;
    // }
    return 0;
}

