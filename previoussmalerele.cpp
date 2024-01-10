/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<stack>
#include<vector>
#include<array>
using namespace std;

int main()
{
    vector<int> v = {4,10,5,8,20,15,3,12};
    stack<int> st;
    int n=v.size();
    vector<int> ans(n,-1);
    for (int i = v.size(); i >0; i--)
    {
       while(!st.empty()&&v[i]<v[st.top()]){
            ans[st.top()]=v[i];
            st.pop();
       }
       st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
       return 0;
    }
        

