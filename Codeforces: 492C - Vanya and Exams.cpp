
/// Codeforces: 492C - Vanya and Exams .
/// Category: greedy + sorting (medium).


#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()

{

    ll n,r,avg,a,b;
    cin>>n>>r>>avg;
    vector< pair<ll,ll> >V;
    ll sum_point=0ll,temp_point;
    ll target=avg*n;/// total minimum point ,we have to achieve
    ll essays=0ll; /// minimu essays should be written 
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum_point+=a;
        V.push_back(make_pair(b,a));
    }
    sort(V.begin(),V.end());
    /// we will try to increase our grade up to r
    /// keeping in mind that sum_point should be minimum crossing (avg*n) .
    for(int i=0;i<n;i++)
    {
        /// goal is achieved , no need to increase again.
         if(sum_point>=target) break;
         temp_point=min(target-sum_point,r-V[i].second);
         essays+=(temp_point*V[i].first);
         sum_point+=temp_point;
    }

    cout<<essays<<endl;

    return 0;
}
