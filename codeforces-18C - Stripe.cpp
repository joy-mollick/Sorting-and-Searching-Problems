    #include <bits/stdc++.h>

    using namespace std;


   int main()

   {
       ios::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       int n,a;
       cin>>n;
       int arr[n];
       int prefix[n]={0};
       int sum=0;
       for(int i=0;i<n;i++)
       {
           cin>>a;
           sum=sum+a;
           arr[i]=a;
           prefix[i]=sum;
       }
       int ans=0;
       for(int i=0;i<n-1;i++)
       {
           int left=prefix[i];
           int right=prefix[n-1]-left;
           if(left==right) ans++;
       }
       cout<<ans<<endl;
   }
