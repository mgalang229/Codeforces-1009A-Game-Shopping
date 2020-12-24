#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int c[n], a[m];
	for(int i=0; i<n; ++i)
		cin >> c[i];
	for(int i=0; i<m; ++i)
		cin >> a[i];
	int cnt=0, id=0;
	//increment the index of the a[id] if its value is greater than or equal to c[i]
	//if a[id] is greater than or equal to c[i] then increment 'cnt'
	for(int i=0; i<n; ++i)
		if(a[id]>=c[i]&&id<m) {
			id++;
			cnt++;
		}
	cout << cnt << "\n";
}
