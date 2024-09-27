#include <iostream>
#include <vector>
using namespace std;
int main() {
	//높이가 M이상인 나무만 벌목가능벌목가능
	int N =0, M=0, x=0;
	int result=0;
	cin >> N >> M >> x;
	vector <int> height(N);
	for(int i=0; i<N; i++)
	{
		cin >> height[i];
	}
	int Q=0;
	cin>>Q;
	vector <char> doing(Q);
	for(int i=0; i<Q; i++)
	{
		cin >> doing[i];
	}
	
	for(int i =0; i<Q; i++)
	{
		if(height[x-1]>=M)//높이 측정
		{
			result +=height[x-1];
			height[x-1] = 0;
		}
		
		if(doing[i]=='R')//동작바꾸기
		{
			x += 1;
			if(x>N)
			{
				x=1;
			}
		}
		else if(doing[i]=='L')
		{
			x -= 1;
			if(x<=0)
			{
				x=N;
			}
		}
		else
		{
		}
		
		for(int j =0; j<N; j++)
		{
			height[j] += 1;
		}
	}
	cout << result << endl;
	return 0;
}
