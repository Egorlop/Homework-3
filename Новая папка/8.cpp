
#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	int *c = new int[n];
	cin >> n;
	for (i = 1; i <= n; i++) {
		c[i] = 0;
		c[0] = 1;
	}
	for (j = 1; j <= n; j++)
		for (i = j; i >= 1; i--)
			c[i] = c[i - 1] + c[i];
	cout << "[";
	for (i = 0; i <= n; i++)
		cout << c[i] << ",";
	cout << "]";
	system("pause");
	return 0;

}