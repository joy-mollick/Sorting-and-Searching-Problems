    #include<bits/stdc++.h>

    using namespace std;

    const int mx=1e5+1;

    int arr[mx];

    int binarysearch(int low,int high,int key)
    {
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]<key)
            {
                low=mid+1;
            }
            else if(arr[mid]>key)
            {
                high=mid-1;
            }
            else{
                return mid;
            }
        }
    }

    int main()

    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n,q,num;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cin>>q;
        while(q--)
        {
            cin>>num;
            cout<<binarysearch(0,n-1,num)+1<<endl;
        }
    }
