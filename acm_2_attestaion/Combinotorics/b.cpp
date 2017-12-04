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
#define vi vector<int>
#define pb push_back
#define ll long long
#define f first
#define s second

const int inf = (int)1e9;
const double pi = acos(-1.0);

// /////////////////////////////////////////////////////////////////////




int main () {

    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);

	int n, A[100100];
	cin>>n;
	
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		A[a]=i;		
	}
	
	for(int i=1;i<=n;i++){
		cout<<A[i]<<' ';
	}
	
	

    return 0;
}
