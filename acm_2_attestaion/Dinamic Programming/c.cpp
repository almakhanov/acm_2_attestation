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
	freopen("knight.in", "r", stdin);
	freopen("knight.out", "w", stdout); 
	int n,m;
	cin>>n>>m;
	
	int d[100][100];
	
	d[1][1]=1; 
	
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
	   		d[i][j]=d[i-2][j-1]+d[i-1][j-2];
	  	}
	}
	
	cout<<d[n][m];
	 

	return 0;
}
