#include <iostream> 
using namespace std;

int main()
{
	int n, c;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	c = arr[0];
	arr[0] = arr[n - 1]; //5 2 3 4 5 
	for (int i = n - 1; i > 1; i--) {
		arr[i] = arr[i - 1];


	}
	arr[1] = c;
	for (int i = 0; i < n; i++)
		cout << arr[i];
	system("pause");
	return 0;
}
