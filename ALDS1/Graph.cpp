#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int N_MAX = 101;


int main(void){

	int N; cin >> N;
	int adj[N_MAX][N_MAX];
	REP(i,N) REP(j,N) adj[i][j] = 0;

	REP(i,N){
		int u,k; cin >> u >> k; u--;
		REP(j,k){
			int v; cin >> v; v--;
			adj[u][v] = 1;
		}
	}

	REP(i,N){
		int j;
		for(j=0;j<N-1;++j){
			cout << adj[i][j] << ' ';
		}
		cout << adj[i][j] << endl;
	}


	return 0;

}
