
/// Codeforces- Div1 A.Mafia.
/// Category: greedy + binary search(medium).


#include<bits/stdc++.h>

using namespace std;

const int mx=100001;

typedef long long ll;

vector<ll>v;

///check if the number of round is mid.
///then number of games by total n players will be (n*mid-mid).

bool is_possible(ll mid,ll sum,ll n)
{
    if( (n*mid-mid)>=sum) return true;
    else return false;
}

int main()

{
    ll a,n;
    ll at_least_rounds=0ll;
    ll mx=0ll;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        ///assuming every ith player plays ai games.
        at_least_rounds+=a;
        mx=max(mx,a);
    }

    /// every player has to play at least aith round .
    /// So,binary search we will find the number of rounds (x)

    /// mx is the lower bound of our answer.
    ll left=mx;
    ll right=2e9+5;
    ll mid;

    while(left<right)
    {
        mid=(left+right)>>1ll;
        if(is_possible(mid,at_least_rounds,n))
        {
            right=mid;
        }
        else left=mid+1;
    }

    cout<<right<<endl;

    return 0;
}
