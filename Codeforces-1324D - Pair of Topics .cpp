#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> arr(n), brr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++) cin>>brr[i];
	vector<int> c(n);
	for (int i = 0; i < n; ++i) {
		c[i] = arr[i] - brr[i];
	}
	sort(c.begin(), c.end());

	long long ans = 0;
	int r=n-1;
	int l=0;
	 while(l<r){ if(c[r]+c[l] > 0){ ans+=r-l; r--; } else { l++; } }

	cout << ans << endl;

	return 0;
}
