#include<bits/stdc++.h>

using namespace std;

int main(){
     // freopen("input.txt", "rt", stdin);
      // freopen("output.txt", "wt", stdout);
    	int n,a,k;
    	cin>>n;
    	vector<int>vf;
    	vector<int>vs;
    	for(int i=0;i<n;i++)
        {
            cin>>k;
            vf.push_back(k);
        }
        cin>>a;
        for(int i=0;i<a;i++)
        {
            cin>>k;
            vs.push_back(k);
        }
        sort(vf.begin(),vf.end());
        sort(vs.begin(),vs.end());
        int ans=-1000000000;
        int scnd=0;
        int frst=0;
        int up=0;
        int down=0;
        if(n>=a)
        {
            up=n*3;
            down=a*3;
            ans=(up-down);
        }
        for(int i=0;i<a;i++)
        {
            int pos=vf.end()-lower_bound(vf.begin(),vf.end(),vs[i]+1);
            int three=pos*3;
            int two=(n-pos)*2;
            frst=three+two;
            two=(i+1)*2;
            three=(a-(i+1))*3;
            scnd=two+three;
           // cout<<frst<<" "<<scnd<<endl;
            if(ans<=(frst-scnd))
            {
                if(ans==(frst-scnd)){
                        if(up<frst){
                up=frst;
                down=scnd;}}
                else
                {
                    up=frst;
                    down=scnd;
                }
                ans=frst-scnd;
            }
        }
        cout<<up<<":"<<down<<endl;
}
