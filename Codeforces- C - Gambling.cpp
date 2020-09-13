
/// Codeforces- C - Gambling.
/// Category: greedy .

/// Bad explanation of question.

#include<bits/stdc++.h>

using namespace std;

const int mxn=100002;

typedef long long ll;

ll a[mxn];
ll b[mxn];


int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n,num;
   cin>>n;

   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(int i=0;i<n;i++)
   {
       cin>>b[i];
   }

   sort(a,a+n);
   sort(b,b+n);
   reverse(a,a+n);
   reverse(b,b+n);

   int alen=0;
   int blen=0;

   ll a_score=0,b_score=0;

   /// total i moves
   while(alen<n || blen<n)
   {
       if(a[alen]>b[blen])
       {
           a_score+=a[alen];
           alen++;
       }
       else
       {
           blen++;
           ///removing this element
       }
       if(b[blen]>a[alen])
       {
           b_score+=b[blen];
           blen++;
       }
       else
       {
           alen++;
       }
   }

   cout<<(a_score-b_score)<<endl;

   return 0;
}
