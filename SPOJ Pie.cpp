#include<bits/stdc++.h>

using namespace std;

/// Use sort and binary search 
/// Use prestoring volume of cylinder 
/// Use binary search on double values 

typedef long long ll;

double p=acos(-1.0);

int main()

{
   int tc;
   scanf("%d",&tc);
   while(tc--)
   {
       int n,f;
       scanf("%d%d",&n,&f);
       f++;
       double pi[n];
       for(int i=0;i<n;i++)
       {
           scanf("%lf",&pi[i]);
           pi[i]=(pi[i]*pi[i])*p;
       }
       sort(pi,pi+n);
       double high=pi[n-1];
       double low=0.0;
       double mid;
       double ans=0.0;
       while((high-low)>=0.0001)
       {
           mid=(low+high)/2.0;
           double tot=0;
           for(int i=0;i<n;i++)
           {
               tot=tot+(int)(pi[i]/mid);
           }
           if((int)tot>=f)
           {
               low=mid;
               ans=mid;
           }
           else
           {
               high=mid;
           }
       }
       printf("%.4lf\n",ans);
   }
   return 0;
}
