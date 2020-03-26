#include<bits/stdc++.h>

using namespace std;

/// Use sort and customize comp function in sort

struct structure{
    string S;
    int a;
    int v;
    int s;
};

bool comp(structure a,structure b)
{

    string ssa=a.S;
    string ssb=b.S;

    int aa=a.a;
    int ab=b.a;

    int va=a.v;
    int vb=b.v;

    int sa=a.s;
    int sb=b.s;

    if(aa<ab)
    {
        return true;
    }
    else if(aa>ab)
    {
        return false;
    }

    else if(aa==ab)
    {
        if(va<vb) {return true;}
        else if(va>vb) {return false;}

        else if(va==vb)
        {
            if(sa>sb) {return true;}
            else if(sa<sb) {return false;}

            else if(sa==sb)
            {
                if(ssa>ssb)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}


int main()

{
    ios_base::sync_with_stdio(false);
    int a,v,s;
    string S;
    int n;
    cin>>n;
    vector<structure>V(n);
    for(int i=0;i<n;i++)
    {
        cin>>S>>a>>v>>s;
        V[i].S=S;
        V[i].a=a;
        V[i].v=v;
        V[i].s=s;
    }
    sort(V.begin(),V.end(),comp);
    for(int i=n-1;i>=0;i--)
    {
        cout<<V[i].S<<'\n';
    }
    return 0;
}
