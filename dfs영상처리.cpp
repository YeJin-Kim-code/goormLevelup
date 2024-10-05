#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

const int MAX = 150;

int N, M;
string S[MAX];
bool visited[MAX][MAX];

int dfs(int i, int j)
{
	visited[i][j] = true;
	
	int sz = 1;
	
	if(0<= i-1 && !visited[i-1][j]&&S[i-1][j] == '#')
		sz += dfs(i-1, j);
	if(i+1<M && !visited[i+1][j]&& S[i+1][j] == '#')
		sz += dfs(i+1, j);
	if(0<= j-1 && !visited[i][j-1]&&S[i][j-1] == '#')
		sz += dfs(i, j-1);
	if(i+1<M && !visited[i][j+1]&& S[i][j+1] == '#')
		sz += dfs(i, j+1);
	
	return sz;
}
int main() {

	cin >> N >> M;
	
	for(int i=0; i<M; i++) cin >> S[i];
	
	vector<int>res;
	for(int i=0; i<M; i++)
	{
		for(int j =0; j<N; j++)
		{
			if(visited[i][j]||S[i][j]=='.')
				continue;
			int sz = dfs(i, j);
			res.push_back(sz);
		}
		
	}

		int ans1 = res.size();
		int ans2 = res[0];
		for(int i=1; i<ans1; i++)
			ans2 = max(ans2, res[i]);
	
	cout << ans1 << '\n' << ans2;
	return 0;
}
