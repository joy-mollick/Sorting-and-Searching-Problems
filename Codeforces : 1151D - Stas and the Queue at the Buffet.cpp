
/// Codeforces : 1151D - Stas and the Queue at the Buffet.
/// Category : Greedy + math

/// ai⋅(i−1) + bi⋅(n−i) for every position(i)
/// It can be transformed to ai*i - ai + bi*n -i*bi = i*(ai-bi) + (bi*n-ai)
/// so , we have to make this equation minimum i*(ai-bi) + (bi*n-ai) .
/// It is easy to see that only first part will be optimal.
/// the second part will be constant.
/// So ,sort diff[i]=(ai-bi). according to descending order.
/// Then multiply with i.


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool comp(ll a,ll b)
{
    return (a>b);
}

int main()
{

  ll n,num;
  cin>>n;
  ll a[n];
  ll b[n];
  ll diff[n];
  ll constant=0ll;

  for(int i=0;i<n;i++)
  {
      cin>>a[i]>>b[i];
      diff[i]=a[i]-b[i];
      constant+=(b[i]*n-a[i]);
  }

  ll optimal=0ll;
  sort(diff,diff+n,comp);

  for(int i=0;i<n;i++)
  {
      optimal+=(i+1)*diff[i];
  }

  ll ans=constant+optimal;

  cout<<ans<<endl;

  return 0;
}
