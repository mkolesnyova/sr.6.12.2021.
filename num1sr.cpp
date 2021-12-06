#include <iostream>
using namespace std;
int main()
{
	int a[1000], i, n, k=0;
	cout << "n= ";
	cin >> n;
	if (n == 1) { cout << " no "; return(0); }
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << endl;
	for (i = 0; i < n-1; i++)
	{
		if (a[i + 1] > a[i]) a[i] = 1;
		else if (a[i + 1] < a[i]) a[i] = 0;
		     else {
			cout << " no "; return(0);
		}
	}
	for (i = 0; i < n - 2;)
		if (a[i + 1] != a[i])
		{
			i++; k++;
		}
		else k = 0;
	if (k == i)
		cout << " yes ";
	else cout << " no ";
	/*for (i = 0; i < n - 1; i++)
		if (a[i + 1] + a[i] == 1) { a[i] = 1; k++; }
		else a[i] = 0;
	if (k == (n - 1)) cout << " yes ";
	else cout << " no " << endl;
	*/
}