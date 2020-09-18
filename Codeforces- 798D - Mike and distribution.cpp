
/// Codeforces- 798D - Mike and distribution.
/// Category: greedy .


#include<bits/stdc++.h>

using namespace std;

const int mxn=100005;

struct Array
{
     int a;
     int b;
     int id;
};

Array arr[mxn];

bool comp(Array c,Array d)
{
    return (c.a>d.a);
}

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n;
   cin>>n;

   for(int i=0;i<n;i++) {cin>>arr[i].a;arr[i].id=i+1;}

   for(int i=0;i<n;i++) {cin>>arr[i].b;}

   sort(arr,arr+n,comp);
   cout<<(n/2)+1<<endl;
   /// we can take total (n/2 +1) elements

   /// extra 1 takes max one
   cout<<(arr[0].id)<<" ";
   
   /// for taking other (n/2) elements compare adjacent elements 

   for(int i=1;i<n;i=i+2)
   {
       if(i+1==n) {cout<<arr[i].id<<" ";break;}
       if(arr[i].b>arr[i+1].b)
       {
           cout<<arr[i].id<<" ";
       }
       else
       {
           cout<<arr[i+1].id<<" ";
       }
   }

   return 0;
}
