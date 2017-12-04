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
//	freopen("slalom.in", "r", stdin);
//	freopen("slalom.out", "w", stdout); 
	
	
	int n;
	cin>>n;
	
	int d[300][300] = {0};
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			cin>>d[i][j];
		}
	}
	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<i+1;j++){
//			cout<<d[i][j]<<" ";
//		}cout<<endl;
//	}
	
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<i+1;j++){
			d[i][j]=max(d[i][j]+d[i+1][j], d[i][j]+d[i+1][j+1]);
		}
	}
	
	
	cout<<d[0][0];	
	 

	return 0;
}
