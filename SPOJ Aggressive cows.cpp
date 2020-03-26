#include<bits/stdc++.h>

using namespace std;

/// Use sort and binary search 
/// Try to keep a minimum distance equal for adjacent all cows 

typedef long long ll;


int main()

{
    ll tc,n,c;
    scanf("%lld",&tc);
    while(tc--)
    {
        scanf("%lld%lld",&n,&c);
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+n);
        ll low=1;
        ll high=arr[n-1];/// max distance can be maximum distance of given 
        ll ans=0;
        while(low<=high)
        {
            int mid=(low+high)>>1;
            int totalcows_gap_wth_mid=1;
            int start=arr[0];/// place here one cow
            /// keep track of start point
            for(int i=1;i<n;i++)
            {
                if(arr[i]-start>=mid)
                {
                    totalcows_gap_wth_mid++;
                    start=arr[i];
                }
            }
            if(totalcows_gap_wth_mid<c) /// distance should be decreased,more cows should be placed
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
                ans=mid;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
