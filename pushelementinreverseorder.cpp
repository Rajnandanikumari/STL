
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    stack<int>copy;
    stack<int>copys;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top();
        copy.push(s.top());
        s.pop();
    }
    cout<<copy.top()<<endl;
    while(!copy.empty()){
    copys.push(copy.top());
    copy.pop();
    cout<<copys.top();
    }
    return 0;
}

