#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N=0;
	cin >> N;
	int num=0;
	int result =0;
	vector <int> D(N);
	vector <int> S(N);
	vector <int> arr(N);
	for(int i=0; i<N; i++)
	{
		cin >> D[i];
		cin >> S[i];
	}
	for(int i=1; i<100; i++)
	{
		result =0;
		num=0;
		for(int j=0; j<5; j++)
		{
			if(result < (i*D[j])+(100-i)*S[j])
			{
				result = (i*D[j])+(100-i)*S[j];
				num = j;
			}
		}
		arr[num]++;
	}
	for(int i=0; i<N; i++)
	{
			cout << arr[i] << ' ';
	}

	return 0;
}
