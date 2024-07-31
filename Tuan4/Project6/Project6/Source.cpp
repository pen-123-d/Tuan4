#include <iostream>

using namespace std;

int Tong(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + Tong(n - 1);
	}

}

int main()
{
	int n;
	cout << "Vui long nhap n " << endl;
	cin >> n;
	cout << "De quy tong" << endl;
	cout << Tong(n) << endl;
	system("pause");
}