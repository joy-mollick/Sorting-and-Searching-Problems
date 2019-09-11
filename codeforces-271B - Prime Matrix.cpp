#include<bits/stdc++.h>

using namespace std;

const int mx=1e5+500;
bool prime[mx];
void sieve()
 {
    for(int i=4;i<mx;i=i+2)
    {
        prime[i]=false;
    }
    for(int i=3;i*i<mx;i=i+2)
     {
         if(prime[i])
         {
             //cout<<i<<endl;
             for(int j=i*i;j<mx;j=j+2*i)
             {
                 prime[j]=false;
             }
         }
     }
     prime[2]=true;
     prime[0]=false;
     prime[1]=false;
 }
int main()

{
    memset(prime,true,sizeof(prime));
  	sieve();
  	vector<int>v;
  	for(int i=1;i<mx;i++)
    {
        //cout<<prime[i]<<endl;
        if(prime[i])
        {
            v.push_back(i);
        }
    }
  //  cout<<v.size()<<endl;
  	int n,m;
  	cin>>n>>m;
  	int arr[n][m];
  	for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int row_min=INT_MAX;
    int col_min=INT_MAX;
    vector<int>::iterator it;
    //row
    for(int i=0;i<n;i++)
    {
        int ans=0;
        for(int j=0;j<m;j++)
        {
            it=lower_bound(v.begin(),v.end(),arr[i][j]);
            ans+=(*it)-arr[i][j];
        }
        row_min=min(row_min,ans);
    }
   // cout<<row_min<<endl;
    //column
    for(int i=0;i<m;i++)
    {
        int ans=0;
        for(int j=0;j<n;j++)
        {
            it=lower_bound(v.begin(),v.end(),arr[j][i]);
            ans+=(*it)-arr[j][i];
        }
        col_min=min(col_min,ans);
    }
   int res=min(col_min,row_min);
   cout<<res<<endl;
}
