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
  	freopen("joseph.in", "r", stdin);
  	freopen("joseph.out", "w", stdout);
	     
  	vi v;
  	vi tmp;
  	int n,p;
  	cin>>n>>p;
  	int sz=n;
  	
  	
  	for(int i=1;i<=sz;i++){
  		v.pb(i);	
	}
	
	
	int del=0;
	for(int i=1;i<sz;i++){
		if(p%n==0){
			del=n;
		}else{
			del=p%n;
		}
		
		tmp.clear();
		for(int i=del+1;i<=n;i++){
			tmp.pb(v[i-1]);
		}
		for(int i=1;i<del;i++){
			tmp.pb(v[i-1]);
		}
		
		v=tmp;
		n--;
	}
	
	cout<<v[0];
  	
  	return 0;
}
