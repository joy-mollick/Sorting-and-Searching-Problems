
/// Codeforces- D - Maxim and Array.
/// Category: simple greedy .


#include<bits/stdc++.h>

using namespace std;

const int mxn=100005;

typedef long long ll;

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   ll n,k,x;
   cin>>n>>k>>x;

    set< pair<ll,int> >s;
    int negative_odd=0;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ///checking the number of negative numbers odd or not ?
        if(arr[i]<0) negative_odd^=1;
        s.insert(make_pair(abs(arr[i]),i));
    }

   /// k operations
    while(k--)
    {
        int i=s.begin()->second;
        s.erase(s.begin());
        if(arr[i]<0) negative_odd^=1;
        ///there are even negative numbers
        /// so ,product obviously positive
        /// so adding x to smallest number to minimize product
        if(negative_odd) arr[i]+=x;
        /// when negative numbers odd times
        /// it is greedy to decrease minimum number all time
        else arr[i]-=x;
        /// restore the number of negative numbers
        if(arr[i]<0) negative_odd^=1;
        s.insert(make_pair(abs(arr[i]),i));
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";


   return 0;
}
