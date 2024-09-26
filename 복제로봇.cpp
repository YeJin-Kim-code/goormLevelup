#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 100, MAXQ = 1'000;

int main() {
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	int XS, YS, N;
	int Q;
	cin >> XS >> YS >> N;
	int XI[MAXN], YI[MAXN];

	for(int i=0; i<N; i++)
	{
		cin >> XI[i] >> YI[i];
	}
	cin >> Q;
	char cmd;
	int nx, ny;
	while(Q--)
	{
		cin >> cmd;
		if(cmd =='U'){
			nx = XS, ny = YS +1;
		}
		else if(cmd =='D'){
			nx = XS, ny = YS - 1;
		}
		else if(cmd =='L'){
			nx = XS - 1, ny = YS;
		}
		else if(cmd =='R'){
			nx = XS + 1, ny = YS;
		}
		
		bool bVaild = true;
		for(int i =0; i< N; i++)
		{
			if(XI[i] == nx && YI[i]==ny)
			{
				bVaild = false;
				break;
			}
		}
		
		if(bVaild)
		{
			XS=nx; YS=ny;
		}
	}
	
	cout << XS << ' ' << YS;
	/*for(int i=0; i<Q; i++)
	{
		cin >> CI(i);
	}
	
	for(int i=0; i<Q; i++)
	{
		if(CI(i) == "R")
			YS++;
		else if(CI(i) == "L")
			YS--;
		else if(CI(i) == "U")
			XS--;
		else if(CI(i) == "D")
			XS++;
	
	}*/
	return 0;
}
