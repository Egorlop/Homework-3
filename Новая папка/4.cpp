#include <iostream> 
using namespace std;

int main()
{
	int n, k = 1, a, b;
	cin >> n;
	cin >> b;
	int *arr = new int[n];
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (a > b) {
			k++;
			b = a;
		}
	}
	cout << k << endl;


	system("pause");
	return 0;
}