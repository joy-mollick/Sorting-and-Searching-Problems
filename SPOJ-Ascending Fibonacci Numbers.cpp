#include<bits/stdc++.h>

using namespace std;

/// Counting sort has linear time complexity ,use this algorithm

const int mx=1100001 ;
const int mod=100000;

int fibonacchi[mx];

void compute()
{
    fibonacchi[1]=0;
    fibonacchi[2]=1;
    for(int i=3;i<1100001;i++)
    {
        fibonacchi[i]=(fibonacchi[i-1]+fibonacchi[i-2])%mod;
    }
}

void countSort(vector <int>& arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    vector<int> count(range), output(arr.size());
    for(int i = 0; i < arr.size(); i++)
        count[arr[i]-min]++;

    for(int i = 1; i < count.size(); i++)
           count[i] += count[i-1];

    for(int i = arr.size()-1; i >= 0; i--)
    {
         output[ count[arr[i]-min] -1 ] = arr[i];
              count[arr[i]-min]--;
    }

    for(int i=0; i < arr.size(); i++)
            arr[i] = output[i];
}

int main()

{
    compute();
    int tc,a,b;
    scanf("%d",&tc);
    int caso=1;
    while(tc--)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d:",caso);
        vector<int>v;
        for(int i=a;i<=(a+b);i++)
        {
            v.push_back(fibonacchi[i]);
        }
        countSort(v);
        int sz=v.size();
        for(int i=0;i<min(sz,100);i++)
        {
            printf(" %d",v[i]);
        }
        printf("\n");
        caso++;
    }
    return 0;
}
