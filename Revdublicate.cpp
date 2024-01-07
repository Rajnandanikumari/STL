/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5,6,3,2};
    int n=v.size()-1;
    queue<int>q;
    sort(v.begin(),v.end());
    {
    for(int i=0;i<=n;i++){
    for(int j=i+1;j<=n;j++){
    if(v[i]==v[j]){
       q.push(i);
       i++;
       }
        }
      //  cout<<v[i];
       cout<<v[i]<<endl;
    }
        }
   // return 0;
}