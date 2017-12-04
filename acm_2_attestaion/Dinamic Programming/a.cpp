#include <functional>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <sstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstdio>
#include <bitset>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <stdlib.h>

using namespace std;
#define sz(a) (int)a.size()
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ll long long
#define sc scanf
#define pf printf
#define f first
#define s second

const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);

const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// /////////////////////////////////////////////////////////////////////



int main(){
    
    freopen ("ladder.in", "r",stdin );
    freopen ("ladder.out","w", stdout);
    
    int n;
    cin>>n;
    int A[100100];
    A[0]=0;
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	
	int d[100100];
	d[0]=0;
	d[1]=A[1];
	
	for(int i=2;i<=n;i++){
		d[i]=max(d[i-1]+A[i], d[i-2]+A[i]);
	}
	cout<<d[n];
	
	
    return 0;
}
