#include<bits/stdc++.h>

using namespace std;

/// Use sort and binary search ,it's a classical problem 
/// Try to keep not giving candies equal to each student 

typedef long long ll;


int main()

{
    ll m,n,x;
    scanf("%lld %lld",&m,&n);
    vector<ll>v;
    while(n--)
    {
        scanf("%lld",&x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int sz=v.size();
    ll low=0ll;
    ll high=v[sz-1];
    ll mid;
    ll ans=0ll;
    while(low<high)
    {
        int mid=(low+high)>>1ll;
        ll sum_given=0;
        ll given;
        for(int i=0;i<sz;i++)
        {
            if(v[i]>=mid)
            {
                given=(v[i]-mid);
                sum_given=sum_given+given;
            }
        }

        if(sum_given>m)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }
    //cout<<high<<endl;
    for(int i=0;i<sz;i++)
    {
        if(v[i]>=high)
        {
            m=m-(v[i]-high);
            v[i]=high;
        }
    }
    if(m==0)
    {
        for(int i=0;i<sz;i++) ans=ans+(v[i]*v[i]);
        printf("%lld\n",ans);
    }
    else
    {
        for(int i=sz-1;i>=0&&m>0;i--)
        {
            if(v[i]>=high)
            {
                m--;
                v[i]--;
            }
        }
        for(int i=0;i<sz;i++) ans=ans+(v[i]*v[i]);
        printf("%lld\n",ans);
    }
    return 0;
}
