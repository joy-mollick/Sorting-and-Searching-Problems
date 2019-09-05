#include<bits/stdc++.h>

using namespace std;

 typedef long long ll;

 int main()
 {
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for(int y=0;y<n;y++) {scanf("%d",&a);arr[y]=a;}
    int kill_num=n,alive=0;
    for(int i=n-1;i>=0;i--)
    {
            if(i<kill_num)alive++;
            kill_num=min(kill_num,i-arr[i]);
    }
    printf("%d\n",alive);
 }
