#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001][1001];

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			arr[i][j] += max(arr[i - 1][j - 1], max(arr[i - 1][j], arr[i][j - 1]));
		}
	}
	cout << arr[n][m] << "\n";
}