    #include <bits/stdc++.h>

    using namespace std;


   int main()

   {
       int n;
       cin>>n;
       int arr[n+1];
       for(int i=1;i<=n;i++) cin>>arr[i];
        arr[0]=0;
       sort(arr,arr+n+1);
       int ans=0;
       bool ok=false;
       int target=0;
       for(int i=1;i<=n;i++) {
            target=max(arr[i-1]+1,arr[i]);
           // cout<<target<<" "<<arr[i]<<endl;
       ans+=(target-arr[i]);
       arr[i]=target;
       }
       cout<<ans<<endl;
       return 0;
   }
