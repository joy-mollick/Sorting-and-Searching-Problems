
/// Codeforces- 732D - Exams.
/// Category: greedy + binary search.


#include<bits/stdc++.h>

using namespace std;

const int mxn=100005;
bool visit[mxn];
int d[mxn];
int a[mxn];

bool ok(int n,int m,int days)
{
    memset(visit,false,sizeof(visit));
    int prepare=0,cont=0;
    for(int i=days;i>=1;i--)
    {
        int exam=d[i];
        if(exam!=0&&!visit[exam])
        {
            ++cont;
            visit[exam]=true;
            prepare+=a[exam];///need prepare days to sit for exam.
        }
        ///preparation for another exam so day decreases
        else
        {
            prepare=max(0,prepare-1);
        }
    }

    /// not able to sit for m exams
    if(cont<m) return false;
    /// preparation needs more days
    else if(prepare>0) return false;

    else return true;
}


int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n,m;
   cin>>n>>m;

   for(int i=1;i<=n;i++) cin>>d[i];
   for(int i=1;i<=m;i++) cin>>a[i];

   int low=0,high=n+1;
   int mid;

   while(low<high)
   {
       mid=(low+high)>>1;
       if(ok(n,m,mid))
       {
           high=mid;
       }
       else
       {
           low=mid+1;
       }
   }


   if(high<=n) cout<<high<<endl;
   else cout<<"-1"<<endl;

   return 0;
}
