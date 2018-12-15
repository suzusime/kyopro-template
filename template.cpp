#include <bits/stdc++.h>
using namespace std;
// iteration helper
#define FOR(i,l,r) for(int i=(l);i<(r);++i)
#define REP(i,n)  FOR(i,0,n)
#define RFOR(i,l,r) for(int i=(r)-1;i>=(l);--i)
#define RREP(i,n) RFOR(i,0,n)
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define PB push_back
// debug method
#define debug(x) cout<<#x<<": "<<x<<endl
#define DEBUG(x) cout<<#x<<": "<<x<<endl
// typedefs
#define ll long long
#define vi vector<int>
#define vi2 vector<vi>
// input
#define ci(x) int x;cin>>x
#define cs(x) string x;cin>>x
#define cd(x) double x;cin>>x
#define cvi(x,n) vi x(n);REP(i,n){cin>>x[i];}
// const input
#define cci(x) const int x = [](){int t;cin>>t;return t;}()
#define ccs(x) const string x = [](){string t;cin>>t;return t;}()
#define ccd(x) const double x = [](){double t;cin>>t;return t;}()
// output
#define pr(x) cout<<x<<endl
#define prvec(v) REP(i,v.size()) pr(v[i])
#define ppr(x) cout<<x
#define lf() cout<<endl
// const number
const double PI  = acos(-1.0);
const double EPS = 1e-10;

int powint(int a, int x){
	int res = 1;
	REP(i,x){
		res = res *a; 
	}
	return res;
}


int main(){
	cci(N);
	pr(N);
	return 0;
}
