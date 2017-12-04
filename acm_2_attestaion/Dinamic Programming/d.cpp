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


int a[100][100];
int d[100][100];
int main()
{ 
	freopen("king2.in", "r", stdin);
 	freopen("king2.out", "w", stdout);
 
 	for(int i=1;i<=8;i++){
  		for(int j=1;j<=8;j++){
   			cin>>a[i][j];
  		}
 	}
 
 	d[8][1]=a[8][1];
 	
 	
 	for(int i=8;i>=1;i--)
 	{
  		for(int j=1;j<=8;j++){
   			if(i==8 && j==1){
    			continue;
   			}
   			if(i==8){
    			d[i][j]=d[i][j-1]+a[i][j];
   			}else if(j==1){
   				d[i][j]=d[i+1][j]+a[i][j];
   			}else{
    			d[i][j]=min(min(d[i][j-1],d[i+1][j]),d[i+1][j-1])+a[i][j];
   			}
   
 		}
 	}
 	
 	
 	cout<<d[1][8];
 

	return 0;
}
