
/// Codeforces:  448D - Multiplication Table.
/// Category: binary search + observation.


/*
n                  m
1 | 1  2  3   4    5  ....

2 | 2  4  6   8    10 ....

3 | 3  6  9   12   15 ....

4 | 4  8  12  16   20 ......

Now ,if I will say how many numbers less than or equal to a number (x) say in the first row ?
then if x is less than m ,then answer is x, otherwise answer is m when x is greater than m.

Now come to the second row, how many numbers are there less or equal to x in second row .
then maximum value of second row can be 2*m .So,if  x is greater than 2*m ,answer is m but if x is less than 2*m , then answer is m/2 ,right ?

Formally we can say,how many numbers are less or equal to a particular number x for ith row ?  ans= min(x/i,m) .
Now use binary search to find out x.

*/

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


ll number_of_equal_or_less(ll x, int n, int m){
    ll res = 0;
    for(int i=1;i<=n;++i) res+=min((ll)m, x/i);
    return res;
}


int main()

{
   ll n,m,k;
   cin>>n>>m>>k;
   ll low=1ll;
   ll high=250000000000ll;
   ll mid;
   while(low<high)
   {
       mid=(low+high)/2ll;
       if(number_of_equal_or_less(mid,n,m)<k)
       {
           low=mid+1;
       }
       else
       {
           high=mid;
       }
   }
   cout<<low<<endl;
}
