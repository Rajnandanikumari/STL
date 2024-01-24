#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="ram";
    string t="mar";
   // string s1,t1;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
         cout<<"Anagram";
    }
    else
    {
        cout<<"Not Anagram";
    }
    return 0;
}