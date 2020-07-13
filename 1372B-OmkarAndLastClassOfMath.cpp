/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

void solve()
{
    int n;
    cin >> n;
    if(n%2==0)
    {
    	cout<<n/2<<" "<<n/2;
    	return;
    }

    int i;
    for(i=2;i*i<=n;i+=1)
    {
    	if(n%i==0)
    		break;
    }

    if(i*i>n)
    	i=n;

    cout<<n/i<<" "<<n-n/i;


}


int main()
{
    sync;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}