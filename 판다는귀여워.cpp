#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N=0,M=0,K=0;
	int cal =0;
	int result=1e9;
	cin >> N >> M >> K;
	
	vector <int> R(K);
	vector <int> C(K);
	
	for(int i=0; i<K; i++)
	{
		cin >> R[i] >> C[i];
	}

	for(int i=1; i<=N; i++)
	{

		for(int j=1; j<=M; j++)
		{
			bool bValid = true;
			for(int a=0; a<K; a++)
			{

				if(i==R[a]&&j==C[a])
				{
					bValid = false;
					break;
				}
			}
			if(!bValid) continue;
				
			
			cal=0;
			for(int a=0; a<K; a++)
			{
				cal += (i - R[a])*(i - R[a]) + (j - C[a])*(j - C[a]);
			}

			result = min(result, cal);
			
		}
	}

	cout << result;
	return 0;
}
