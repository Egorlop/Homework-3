#include <iostream> 
using namespace std;

int main()
{
	int n, k = 1, a, b;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i = i + 2) {
		if (i >= n - 1) {
		}
		else {
			cin >> arr[i + 1];
		}
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
		cout << arr[i];


	system("pause");
	return 0;
}