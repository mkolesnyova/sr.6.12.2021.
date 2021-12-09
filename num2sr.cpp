#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[50][50];
	int i, j, n, m, x1, x2;
	cout << " strok n= ";
	cin >> n;
	cout << " stolbcov m= ";
	cin >> m;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j]<<setw(3);

		}
		cout << endl;
	}
	cout << " x1= "; 

}