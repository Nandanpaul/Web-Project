#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }

        vector<ll>v2;
        for(ll i=0;i<n;i++)
        {
            v2.push_back(n+1-v[i]);
        }
        for(auto x:v2) cout<<x<<" ";
        cout<<endl;
    }   

} 
   