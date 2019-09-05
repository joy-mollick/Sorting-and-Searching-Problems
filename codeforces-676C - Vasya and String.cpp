    #include <bits/stdc++.h>

    using namespace std;


   int main()

   {
       ios::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       int n,k;
       cin>>n>>k;
       char arr[n+1];
       int prefa[n+1]={0};
       int a=0;
       int prefb[n+1]={0};
       int b=0;
       char c;
       arr[0]='F';
       for(int i=1;i<n+1;i++)
        {
            cin>>c;
            arr[i]=c;
            if(c=='a') a++;
            else if(c=='b') b++;
            prefa[i]=a;
            prefb[i]=b;
        }
        if(n==1) {cout<<"1"<<endl;return 0;}
       int right=0;
       int left=1;
       int ans=0;
       int l=0;
       int la,lb;
       while(right<=n&&left<=n)
       {
               while(((prefa[right]-prefa[left-1]<=k)||(prefb[right]-prefb[left-1]<=k))&&(right<=n))
               {
                   if((prefa[right]-prefa[left-1]<=k)||(prefb[right]-prefb[left-1]<=k)){
                   if(ans<(right-left)){
                      ans=right-left;
                   //cout<<right<<" "<<left<<endl;
                   }
                   }
                   right++;
                   //cout<<left<<" "<<right<<endl;
               }
           left++;
       }
       cout<<ans+1<<endl;
   }
