    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long ll;

    int main()
    {
         ios::sync_with_stdio(false);
         cin.tie(NULL);
         cout.tie(NULL);
         ll n,m,qi,sum=0,mx=0;
         cin>>n>>m;
         ll arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             sum+=arr[i];
             mx=max(mx,arr[i]);
         }
         ll low=mx;
         ll high=sum;
         while(low<=high)
         {
             ll mid=low+(high-low)/2;
             ll curr_sum=0;
             ll days=1;
             for(int i=0;i<n;i++)
             {
                 if(curr_sum+arr[i]<=mid)
                 {
                     curr_sum+=arr[i];
                 }
                 else{
                    curr_sum=arr[i];
                    days++;
                 }
             }
             if(days<=m)
             {
                 high=mid-1;// when days are under limit , we can decrease our hour work per day
             }
             else{
                low=mid+1; // when days are over our limit , we have to increase our hour work per day to decrease number of days
             }
         }
         cout<<low<<endl;
    }
