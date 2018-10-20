#include <iostream> 
using namespace std;

int main()
{
	int n, a, b = 1000000;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > b) {
			arr[i] = a;
		}
		b = a;
	}
	for (int i = 1; i < n; i++) {
		if (arr[i] != 0)
			cout<<arr[i];
	}

	system("pause");
	return 0;
}