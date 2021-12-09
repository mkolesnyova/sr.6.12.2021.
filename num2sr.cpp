#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[50][50];
	int i, j, n, m, x1, x2, y1, y2, q, k=0;
	cout << " strok n= ";
	cin >> n;
	cout << " stolbcov m= ";
	cin >> m;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			a[i][j] = rand() % 10;
			cout << setw(3)<<a[i][j] ;

		}
		cout << endl;
	}
	cout << "kolichestvo blokov chisel q=";
	cin >> q;
	for (n = 1; n <= q; n++)
	{
		m = 0;
		cout << "nomer verhney stroky 1-go elementa\n";
		cout << " x1= ";
		cin >> x1;
		cout << "nomer nizhney stroky 2-go elementa\n";
		cout << " x2= ";
		cin >> x2;
		cout << "nomer levogo stolbca 1-go elementa\n";
		cout << " y1= ";
		cin >> y1;
		cout << "nomer pravogo stolbca 2-go elementa\n";
		cout << " y2= ";
		cin >> y2;
		for (i = x1; i <= x2; i++)
			for (j = y1; j <= y2; j++)
				m += a[i][j];
		cout << "summa elementov " << n << "-go bloka = " << m << endl;
		k += m;
	}
	cout << "summa vsyeh elementov blokov = " << k;
	return(0);
}
