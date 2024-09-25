#include <iostream>
#include <vector>
using namespace std;
//벡터로 풀어보기
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
  vector<string> arr1(N);
  vector<int> arr2(N);
	int max =0;
	int min =0;
	cin >> N;
	for(int i=0; i<N; i++)
	{
		cin >> arr1[i];
		cin >> arr2[i];
	}

	for(int i=1; i<N; i++)
	{
		if(arr2[i]>arr2[max])
		{
			max = i;
		}
		if(arr2[min]>arr2[i])
		{
			min = i;
		}
	}

	cout << arr1[max] << ' ' ;
	cout << arr2[max] << '\n';
	cout << arr1[min] << ' ';
	cout << arr2[min];
	return 0;
}
