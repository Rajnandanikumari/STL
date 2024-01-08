/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    stack<string>s;
    stack<string>copy;
    s.push("a");
    s.push("b");
    s.push("c");
    s.push("d");
    while(!s.empty()){
        cout<<s.top();
        copy.push(s.top());
        s.pop();
      //  cout<<endl;
    }
    cout<<copy.top();
    return 0;
}