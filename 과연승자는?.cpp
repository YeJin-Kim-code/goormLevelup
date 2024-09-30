#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	int N;//나열한 카드
	cin >> N;
	vector <int> A(N);
	vector <int> B(N);
	int aResult =0;
	int bResult = 0;

	for(int i =0; i<N; i++)
	{
		cin >> A[i];
	}
	for(int i =0; i<N; i++)
	{
		cin >> B[i];
	}
	
	for(int i =0; i<N; i++)
	{
		if(A[i]-B[i]==7)
		{
			aResult -= 1;
			bResult += 3;
		}
		else if(A[i]-B[i]== -7)
		{
			bResult -= 1;
			aResult += 3;
		}
		else if(A[i]<B[i])
		{
			bResult += 2;
		}
		else if(A[i]>B[i])
		{
			aResult += 2;
		}
		else if(A[i]==B[i])
		{
			aResult += 1;
			bResult += 1;
		}
	}
		
	cout << aResult << ' ' << bResult << endl;
	return 0;
}
