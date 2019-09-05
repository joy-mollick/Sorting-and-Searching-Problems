    #include <cstdio>
    #include <algorithm>
    #include <cstring>
    #include <iostream>
    #include <climits>

    using namespace std;

    int arr[200005];

    int main()
    {
       //freopen("input.txt","r",stdin);
       int n,ans=0,maxi,range;
       scanf("%d",&n);
       for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
       sort(arr,arr+n);
       maxi=arr[n-1];
       for(int i=0;i<n;i++)
       {
           if(i&&arr[i]==arr[i-1])
            continue;
           int tmp=arr[i]*2;
           range=arr[n-1]/arr[i];
           range=(range+1)*arr[i];
           while(tmp<=range)
           {
               int p=lower_bound(arr,arr+n,tmp)-arr;
               //cout<<arr[p-1]<<endl;
               if(p>0)
                ans=max(ans,arr[p-1]%arr[i]);
               tmp+=arr[i];
           }
       }
       printf("%d",ans);
       return 0;
    }
