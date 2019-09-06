
    #include<bits/stdc++.h>

    using namespace std;

    int n, dat[100005],m,a,b;
    int incrs[100005];
    int decrs[100005];
    int inv[100005];
    int main(){
    	scanf("%d%d",&n,&m);
    	for(int i = 0; i < n; i++) {
    		scanf("%d",&dat[i]);
    		if (i == 0 || dat[i] < dat[i-1]) {
    			incrs[i] = 1;
    		} else {
    			incrs[i] = incrs[i-1] + 1;
    		}
    	}
    	for(int i=0;i<n;i++)
        {
            if (i == 0 || dat[i] > dat[i-1]) {
    			decrs[i] = 1;
    		} else {
    			decrs[i] = decrs[i-1] + 1;
    		}
        }
        int r=0;
        for(int i=0;i<n;i++)
        {
            if(i==0) r=0;
            else if((dat[i]<dat[i-1])){ r++;inv[i]=r;}
            else inv[i]=0;
        }
    	int ans = 0;
    	int inc=0;
        while(m--)
        {
            cin>>a>>b;
            a--;
            b--;
            if(a==0)inc=inv[b];
            else inc=inv[b]-inv[a-1];
            if(a==b) cout<<"Yes"<<endl;
            else if(incrs[a]+(b-a)==incrs[b]) cout<<"Yes"<<endl;
            else if(decrs[a]+(b-a)==decrs[b]) cout<<"Yes"<<endl;
            else{
            bool ok=true;
            int left=a,right=b;
            while(left<=right)
            {
                int mid=(left+right)>>1;
                if(incrs[a]+(mid-a)==incrs[mid]&&(decrs[mid]+(b-mid)==decrs[b])) {ok=false;break;}
                else if(incrs[a]+(mid-a)==incrs[mid]) left=mid+1;
                else right=mid-1;
            }
            if(ok) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
            }
        }
    	return 0;
    }
