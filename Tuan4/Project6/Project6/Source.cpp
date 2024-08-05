#include <iostream>

using namespace std;


double Bai_Mot_Cham_3 (double n)
{
	if (n==1)
	{
		return 0.5;
	}
	else
	{
		return +Bai_Mot_Cham_3(n - 1)+ n / (n + 1) ;
	}

}


int Tong(double n)
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
	double n;
	cout << "Vui long nhap n " << endl;
	cin >> n;
	cout << "De quy tong" << endl;
	cout << Tong(n) << endl;
	cout << "Bai 1.3 De quy phan so " << endl;
	cout << Bai_Mot_Cham_3(n)<< endl;

	system("pause");
}