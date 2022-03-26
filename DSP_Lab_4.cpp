#include <iostream>
#include<windows.h>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

void Permutation(int n)
{
	int* a = new int[n];
	for (int k = 0; k < n; k++)
	{
		a[k] = k + 1;
	}

	sort(a, a + n);

	do
	{
		for (int k = 0; k < n; k++)
		{
			cout << setw(2) << a[k];
		}
		cout << endl;
	} while (next_permutation(a, a + n));
}

void Combination(int n, int r)
{
	vector<bool> a(n);

	fill(a.begin(), a.begin() + r, true);

	cout <<" Комбінації з " << n << " по " << r << ":" << endl;
	do
	{
		for (int i = 0; i < n; ++i)
			if (a[i])
				cout << setw(2) << (i + 1);
		
		cout << endl;
	} while (prev_permutation(a.begin(), a.end()));
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	unsigned int r;
	cout << " Завдання 1:"<<endl;
	cout << " n = "; cin >> n;
	Permutation(n);

	cout << endl;
	cout << " Завдання 2:" << endl;
	cout << " n = "; cin >> n;
	cout << " r (r <= n) = "; cin >> r;
	Combination(n, r);

	
}