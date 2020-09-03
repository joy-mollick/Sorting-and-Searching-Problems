
/// Codeforces- Div1 372A - Counting Kangaroos is Fun .
/// Category: greedy + two pointer +sort .


/// it is better two compare two halves of the array

#include<bits/stdc++.h>

using namespace std;


typedef unsigned long long ll;


int main()

{
    int n,num;
    cin>>n;
    vector<int>v;
    int arr[n];
    for(int i=0;i<n;i++) {cin>>arr[i];v.push_back(arr[i]);}

    sort(v.begin(),v.end());

    int right=n/2,left=0;

    int visible=n;

    while( left<(n/2) && right<n )
    {
        while(right<n && v[left]*2>v[right])
        {
            right++;
        }
        if(right==n)
        {
           break;
        }
        right++;
        left++;
        visible--;
    }

    cout<<visible<<endl;

    return 0;
}
