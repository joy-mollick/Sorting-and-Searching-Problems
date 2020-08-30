
/// Codeforces: D2 - Magic Powder - 2 .
/// Category: binary search + observation.(medium)



#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
    int n,k;
    cin>>n>>k;
    ll need[n];
    ll available[n];
    for(int i=0;i<n;i++)
    {
        cin>>need[i];
    }


    for(int i=0;i<n;i++)
    {
        cin>>available[i];
    }

    ll left=0ll,right=(ll)2e9,mid;

    while(left<right)
    {
        mid=(left+right+1)>>1ll;
        ll xtra=0ll;
        for(int i=0;i<n;i++)
        {
            xtra+=max(0ll,need[i]*mid-available[i]);
            /// we can use xtra only up to k.
            if(xtra>k)
            {
                break;
            }
        }
        if(xtra<=k) left=mid;
        else right=mid-1;
    }

    cout<<left<<endl;

    return 0;
}
