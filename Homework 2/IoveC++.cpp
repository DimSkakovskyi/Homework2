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
	int product; //добуток
	cin >> x >> y;
	sum = SumOfTwo(x, y);
	product = ProductOfTwo(x, y);

	cout << "The sum is: " << sum << endl;
	cout << "And the product is: " << product << endl;

	/*
	cout << Is there a bug here?" - початковий вигляд рядка з помилкою
	1 - перед початком речення не вистачало лапок "
	2 - не вистачало в кінці крапки з комою ;
	*/
	cout << " Is there a bug here ? ";

	return 0;
}
