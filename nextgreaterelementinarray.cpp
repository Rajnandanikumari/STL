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
    for (int i = 0; i <v.size(); i++)
    {
       while(!st.empty()&&v[i]>v[st.top()]){
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
        

