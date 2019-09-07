    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;

    int main(){
         // freopen("input.txt", "rt", stdin);
          // freopen("output.txt", "wt", stdout);
         // ios::sync_with_stdio(false);
         // cin.tie(NULL);
         // cout.tie(NULL);
        	int n,k,a;
        	scanf("%d%d",&n,&k);
        	ll v[n+1];
        	for(int i=1;i<=n;i++){scanf("%lld",&v[i]);}
        	ll sum[n+1],l=0,times=0;
        	sort(v+1,v+n+1);
        	sum[0]=0;
        	for(int j=1;j<=n;j++){l=l+v[j];sum[j]=l;}
        	ll  val=v[1];
        	for(int i=1;i<=n;i++)
            {
                ll low=1,high=i,freq=-1;
                while(low<=high)
                {
                    ll mid=(low+high)>>1;
                    ll c=(i-mid+1ll)*v[i]-(sum[i]-sum[mid-1]);
                   // cout<<mid<<" "<<c<<" "<<v[i]<<endl;
                    if(c<=k)
                    {
                        high=mid-1;
                        freq=mid;
                    }
                    else
                    {
                        low=mid+1;
                    }
                }
                if(freq==-1) freq=1;
                else freq=i-freq+1;
                if(times<freq){
                   times=freq;
                   val=v[i];
                }
            }
            printf("%lld %lld\n",times,val);
    }
