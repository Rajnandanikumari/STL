#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    stack<int>copy;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    int size =s.size();
    int halfSize =size/2;
    while(halfSize>0){
        copy.push(s.top());
        s.pop();
        halfSize--;
    }
    s.pop();
    while(!copy.empty()){
        s.push(copy.top());
        copy.pop();
    }
        
       
   // return 0;
}