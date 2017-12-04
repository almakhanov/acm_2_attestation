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

    freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);

	int n, A[10];
		
    cin >> n;

    for(int i=0;i<n;i++){
    	A[i] = i + 1;
	} 

    do {
        for(int i=0;i<n;i++){
        	cout << A[i] << " ";
		} 
        cout << endl;
    } while(next_permutation(A, A + n));

    return 0;
}
