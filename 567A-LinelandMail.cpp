/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int main()
{
	int n,a[N],x;
	a[0]=INT_MAX;
	cin>>n;
	FOR(i,1,n+1,1)
	{
		cin>>x;
		a[i]=x;
	}

	cout<<a[2]-a[1]<<" "<<a[n]-a[1]<<endl;
	FOR(i,2,n,1)
	{
		cout<<min((a[i]-a[i-1]),a[i+1]-a[i])<<" "<<max(a[n]-a[i],a[i]-a[1])<<endl;
	}
	cout<<a[n]-a[n-1]<<" "<<a[n]-a[1];


	return 0;
}