#include <iostream>

using namespace std;
int  Bai_Mot_Cham_5(double n)
{
	if (n == 1)
	{
		return 2;
	}
	else
	{
		return Bai_Mot_Cham_5(n - 1) + n * (n + 1);
	}
}


double Bai_Mot_Cham_4(double n)
{
	if (n==0)
	{
		return 1;
	
	}
	else
	{
		return Bai_Mot_Cham_4(n - 1) + (1 / (2*n + 1));
	}
}

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
	cout << "Bai 1.3 De quy n/n+1 " << endl;
	cout << Bai_Mot_Cham_3(n)<< endl;
	cout << "Bai 1.4 De quy 1/2n+1 " << endl;
	cout << Bai_Mot_Cham_4(n) << endl;
	cout << "Bai 1.5 De quy n*(n+1) " << endl;
	cout << Bai_Mot_Cham_5(n) << endl;
	system("pause");
}