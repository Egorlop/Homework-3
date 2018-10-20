#include <iostream> 
using namespace std;

int main()
{
	int n, m = 100000;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > 0 && arr[i] < m) {
			m = arr[i];
		}
	}
	cout << m << endl;


	system("pause");
	return 0;
}