/// Time -0.01s

#include<bits/stdc++.h>

using namespace std;

/// Use binary search and greedy approach 

typedef long long ll;

void print(ll pages[],ll mid,ll n,ll k)
{
    vector<ll>v;
    ll cont=1;/// already assign to last scriber
    ll sum=0ll;
    /// everyone can't take assigned to pages more than mid .
    /// traversing from last ,so that the first category scribers can get assigned to small number of pages task
    for(int i=n-1;i>=0;i--)
    {
        if(sum+pages[i]>mid || (i==k-cont-1))/// when the limit crossed then there will be border or all the other scribers will take only one pages[i] to make every scriber assigned to at least one pages[i]
        {
            v.push_back(-1);
            sum=0;
            cont++;
        }
        sum=sum+pages[i];
        v.push_back(pages[i]);
    }
    /// this should be printed according to reverse order
    reverse(v.begin(),v.end());
    int sz=v.size();
    for(int i=0;i<sz;i++)
    {
        if(v[i]==-1) printf("/ ");
        else printf("%lld ",v[i]);
    }
    printf("\n");
}

bool can_be_distributed_to_k_scribers(ll pages[],ll n,ll mid,ll k)
{
    ll cont=1ll;///first assign pages to one scriber
    ll sum=0ll;
    for(int i=n-1;i>=0;i--)
    {
        if(sum+pages[i]>mid)
        {
            cont++;
            sum=0;
        }
        sum=sum+pages[i];
    }
    if(cont<=k) return true;
    else return false;
}

void binarY_search(ll pages[],ll n,ll mx,ll k,ll sum)
{
    ll low=mx;/// maximum number of pages can be low limit,because when scribers are equal to number of books then mx will be minimum assigned number of pages
    ll high=sum;/// this can be high limit of one can be assigned ,when scribers number is one
    ll mid;
    while(low<high)
    {
        mid=(low+high)>>1;
        if(can_be_distributed_to_k_scribers(pages,n,mid,k))///try to minimize the value of mid
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    print(pages,high,n,k);
}

int main()

{
   int tc;
   scanf("%d",&tc);
   while(tc--)
   {
       int n;
       ll k;
       scanf("%d%lld",&n,&k);
       ll pages[n];
       ll mx=0;
       ll sum=0ll;
       for(int i=0;i<n;i++)
       {
           scanf("%lld",&pages[i]);
           mx=max(mx,pages[i]);
           sum=sum+pages[i];
       }
       binarY_search(pages,n,mx,k,sum);
   }
   return 0;
}
