#include<bits/stdc++.h>

using namespace std;

vector<int>v;

 typedef long long ll;

 int main()
 {
      ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,d,a;
    cin>>n>>d;
    while(n--){
        cin>>a;
        v.push_back(a);
    }
    ll ans=0,k=0;
    ll right=1;
    ll pointer=0;
    for(int i=0;i<v.size();i++)
    {
        while(v[right]-v[i]<=d&&right<v.size())
        {
            right++;
        }
        k=(right-i)-1;
        ans+=(k*(k-1))>>1;
    }
    cout<<ans<<endl;
 }
