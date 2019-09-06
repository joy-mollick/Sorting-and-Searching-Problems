    #include <bits/stdc++.h>

    using namespace std;


   int main()

   {
       ios::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       int n;
       cin>>n;
       int arr[n];
       int incrs[n]={0};
       int decrs[n]={0};
       for(int i=0;i<n;i++) cin>>arr[i];
       for(int i=0;i<n;i++)
       {
           if(i==0) incrs[i]=1;
           else if(arr[i]>arr[i-1]) incrs[i]=incrs[i-1]+1;
           else incrs[i]=1;
       }
       for(int i=n-1;i>=0;i--)
       {
           if(i==n-1) decrs[i]=1;
           else if(arr[i+1]>arr[i]) decrs[i]=decrs[i+1]+1;
           else decrs[i]=1;
       }
       int ans=0,left=0,right=0;
       for(int i=0;i<n;i++)
       {
          if(i==0) left=0;
          else left=incrs[i-1];
          if(i==n-1) right=0;
          else right=decrs[i+1];
          if(arr[i-1]+1<arr[i+1])//we can change the arr[i] element
          ans=max(ans,(left+right+1));
          else
            ans=max(ans,max(left,right)+1);// we can decrease one element from the left  or increase one element from the first

       }
        cout<<ans<<endl;
   }
