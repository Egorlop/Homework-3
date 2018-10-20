 #include <iostream>
using namespace std;

int main()
{
	int n, a, b, c = 0;
	cin >> n;
	int *arr = new int[n];
	cin >> b;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
			arr[i] = a;
			arr[i - 1] = b;
		}
		b = a;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0 && c < 2) {
			cout << arr[i] << ";";
			c++;
		}
	}

	system("pause");
	return 0;
}