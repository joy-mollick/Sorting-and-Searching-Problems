
/// Codeforces- 222D - Olympiad.
/// Category: greedy + binary_search.

/// it can be done by only sorting ,but I used binary search


#include<bits/stdc++.h>

using namespace std;

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n,x,num;
   cin>>n>>x;
   vector<int>first;
   while(n--)
   {
       cin>>num;
       first.push_back(num);
   }
   sort(first.begin(),first.end());
   n=(int)first.size();

   int ans=0;
   while(n--)
   {
       cin>>num;
       auto it=lower_bound(first.begin(),first.end(),x-num);
       if(it!=first.end())
       {
           ans++;
           first.erase(it);
       }
   }

   cout<<"1 "<<ans<<endl;

   return 0;
}
