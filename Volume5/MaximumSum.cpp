#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N, K; cin >> N >> K;
	vector<int> a(N);
	REP(i,N) cin >> a[i];
	// int x1, x2; cin >> x1 >> x2;
	vector<int> sum(N+1, 0);

	REP(i,N) sum[i+1] = a[i] + sum[i];

	int ans = 0;
	int l = 0, r = K;
	REP(i,N-K+1){
		ans = max(ans, sum[r++] - sum[l++]);
	}
	


	cout << ans << endl;


	return 0;

}
