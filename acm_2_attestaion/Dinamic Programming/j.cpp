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



int main()
{
 	int n;
 	cin>>n;
 	int d[300][300];
 	
 	if(n==0){
  		cout<<1;
		return 0;
 	}
 	
 	d[1][0]=1;
 	d[1][1]=1;
 	d[1][2]=1;
 	
 	for(int i=2;i<=n;i++){
 		d[i][0]=d[i-1][1]+d[i-1][0]+d[i-1][2];
  		d[i][1]=d[i-1][1]+d[i-1][2];
  		d[i][2]=d[i-1][1]+d[i-1][0]+d[i-1][2];
 	}
 	
	 cout<<d[n][0]+d[n][1]+d[n][2];
 
}
