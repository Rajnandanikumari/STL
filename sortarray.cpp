
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int size = 6;
    array<int,size> l={1,2,4,3,6,5};
    sort(l.begin(),l.end());
    for(const auto &value:l) {
        cout<<value<<"\n";
    }
    return 0;
}

