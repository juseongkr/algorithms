# pragma GCC optimize ("O3")
# pragma GCC optimize ("Ofast")
# pragma GCC optimize ("unroll-loops")

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

#define ll		long long
#define fi		first
#define se		second
#define pb		push_back
#define all(a)		(a).begin(), (a).end()
#define sz(a)		((int)(a.size()))
#define REP(i, n)	for (int i=0; i<(n); ++i)
#define FOR(i, a, b)	for (int i=(a); i<=(b); ++i)
#define FORR(i, a, b)	for (int i=(a); i>=(b); --i)

typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef tuple<int, int, int> ti3;
typedef tuple<int, int, int, int> ti4;
typedef stack<int> si;
typedef queue<int> qi;
typedef priority_queue<int> pqi;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef tuple<ll, ll, ll> tl3;
typedef tuple<ll, ll, ll, ll> tl4;
typedef stack<ll> sl;
typedef queue<ll> ql;
typedef priority_queue<ll> pql;

const int mod = 1e9+7;
const ll inf = 1ll<<55;
const ld pi = 3.1415926535897932384626433;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int ddx[8] = {0, 0, 1, 1, 1, -1, -1, -1};
const int ddy[8] = {1, -1, 1, 0, -1, 1, 0, -1};

ll GCD(ll a, ll b) { return b ? GCD(b, a%b) : a; }

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifdef DEBUG_MODE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> v;
	int n, cnt = 0;

	cin >> n;
	for (int i=1; i<=40; ++i) {
		if (i%2 != 0) {
			int m = log2(n)+1;
			v.push_back(m);
			n ^= int(pow(2, m)-1);
			cnt++;
			if (((n+1) & n) == 0)
				break;
		} else {
			n++;
			cnt++;
			if (((n+1) & n) == 0)
				break;
		}
	}

	cout << cnt << '\n';
	for (int i=0; i<v.size(); ++i)
		cout << v[i] << " ";

	return 0;
}
