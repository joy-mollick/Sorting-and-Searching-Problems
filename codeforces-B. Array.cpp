    #include <bits/stdc++.h>

    using namespace std;


   int main()

   {
       ios::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       int n,a,k;
       cin>>n>>k;
       int arr[n];
       map<int,int>m;
       int left=0,right=0,dstnct=0,l=0,r=0,res=INT_MAX;
       for(int i=0;i<n;i++) {cin>>arr[i];}
       cout<<endl;
       bool vis[n]={false};
       while(left<n&&right<n&&left<=right)
       {
           while(true&&right<n){
               if(m[arr[right]]==0&&!vis[right]) {dstnct++;}
                if(!vis[right]){
               m[arr[right]]++;
               vis[right]=true;}
               if(dstnct==k && (right-left)<res)
               {
                   res=(right-left);
                   l=left;
                   r=right;
               }
               if(dstnct==k) {break;}
               else if(dstnct<k)
               right++;}
           if(m[arr[left]]==1) {dstnct--;}
           m[arr[left]]--;
           left++;
       }
        if(k==1) cout<<"1 1"<<endl;
        else if((l==0&&r==0)) cout<<"-1 -1"<<endl;
       else cout<<l+1<<" "<<r+1<<endl;
   }
