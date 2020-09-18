
/// Codeforces- D - Array Splitting .
/// Category: greedy + observation + sorting .
/// Fantastic Classical one.

/// When we add total suffix,assuming when k is one
/// Then if again we add another suffix(starting from index i) that means there is another segment i to n-1.
/// which in turn implies  1*first segment + 2* (ai....an-1) .
/// in this process we can proceed.


#include<bits/stdc++.h>

using namespace std;

const int mxn=100005;

typedef long long ll;

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n,k;
   cin>>n>>k;

   int arr[n];

   for(int i=0;i<n;i++) cin>>arr[i];

   vector<long long>suffixes;

   long long suff=0;

   for(int i=n-1;i>=0;i--)
   {
       suff+=arr[i];
       if(i>0) suffixes.push_back(suff);
   }

   sort(suffixes.rbegin(),suffixes.rend());

   ///taken full segment one time
   long long ans=suff;
   k--;

   /// now finding k-1 segments
   for(int i=0;i<k;i++)
   {
        ans+=suffixes[i];
   }

   cout<<ans<<endl;

   return 0;
}
