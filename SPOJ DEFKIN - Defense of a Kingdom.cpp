#include<bits/stdc++.h>

using namespace std;

/// chess and rook problem variation 
/// Just think about maximum adjacent gap of co_ordinate on y axis
/// Just think about maximum adjacent gap of co_ordinate on X axis 
/// This will make longest undefended rectangle 
/// Find out the number of cells on this rectangle 

int main()

{
   int tc;
   scanf("%d",&tc);
   while(tc--)
   {
       int h,w,n;
       scanf("%d %d %d",&w,&h,&n);
       int x[n+2];
       int y[n+2];
       for(int i=1;i<=n;i++)
       {
           scanf("%d%d",&x[i],&y[i]);
       }
       x[0] = 0;
       x[n+1] = w + 1;
       y[0] = 0;
       y[n+1] = h + 1;
       sort(x,x+n+1);
       sort(y,y+n+1);
       int maxX_by_adjacent=0;
       int maxY_by_adjacent=0;
       for(int i=1;i<=n+1;i++)
       {
           maxX_by_adjacent=max(maxX_by_adjacent,x[i]-x[i-1]-1);
       }
       for(int i=1;i<=n+1;i++)
       {
           maxY_by_adjacent=max(maxY_by_adjacent,y[i]-y[i-1]-1);
       }
       int ans=maxX_by_adjacent*maxY_by_adjacent;
       printf("%d\n",ans);
   }
   return 0;
}
