#include <iostream>
using namespace std;

int SumOfTwo(int x, int y) {
	int sum;
	sum = x + y;
	return sum;
}

int ProductOfTwo(int x, int y) {
	int product;
	product = x * y;
	return product;
}

int main()
{
	cout << "I love C++\n";

	cout << "Enter 2 number\n";
	int x;
	int y;
	int sum;
	int product; //�������
	cin >> x >> y;
	sum = SumOfTwo(x, y);
	product = ProductOfTwo(x, y);

	cout << "The sum is: " << sum << endl;
	cout << "And the product is: " << product << endl;

	/*
	cout << Is there a bug here?" - ���������� ������ ����� � ��������
	1 - ����� �������� ������� �� ��������� ����� "
	2 - �� ��������� � ���� ������ � ����� ;
	*/
	cout << " Is there a bug here ? ";

	return 0;
}