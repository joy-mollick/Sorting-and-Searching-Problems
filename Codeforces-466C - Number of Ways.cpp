#include<bits/stdc++.h>

using namespace std;

 typedef long long ll;

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,a;
    cin>>n;
    vector<ll>v;
    ll prefix[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        v.push_back(a);
        prefix[i]=sum;
    }
    if(sum%3!=0) {cout<<"0"<<endl; return 0;}
    ll part=sum/3;
    ll count_index=0,ans=0;
    if(part!=0){
    for(int i=0;i<n-1;i++) // minimum one elemnt is remaining for third part
    {
        if(prefix[i]==part) {count_index++;}
        else if(prefix[i]==(2*part)) ans+=count_index;
    }
    cout<<ans<<endl;
    }
    else
    {
        for(int i=0;i<n-1;i++) // minimum one elemnt is remaining for third part
    {
        if(prefix[i]==0) {count_index++;}
    }
    ans=(count_index*(count_index-1))>>1;
    cout<<ans<<endl;
    }
}
