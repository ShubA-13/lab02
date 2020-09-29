

#include <iostream>
using namespace std;

int main()
{ 
	using byte = unsigned char;
	std::pair<byte, byte> position1;
	std::pair<byte, byte> position2;
	std::cin >> position1.first >> position1.second;
	std::cin >> position2.first >> position2.second;
	if ((position1.second + 1 == position2.second && position1.first-1 == position2.first)
		|| (position1.second + 1 == position2.second && position1.first+1 == position2.first)) {
		std::cout << "Пешка ест" << std::endl;
	}
	if ((position1.second + 1 == position2.second && position1.first == position2.first)
		|| (position1.second + 2 == position2.second && position1.first == position2.first)) {
		std::cout << "Пешка дойдет" << std::endl;
	}
	if (position1.first == position2.first || position1.second == position2.second || abs(position1.first - position2.first) == abs(position2.second - position1.second)) {
		std::cout << "Ферзь угрожает" << std::endl;//task 2.4
	}
	if ((position1.first + 1 == position2.first && position1.second == position2.second)
		|| (position1.first - 1 == position2.first && position1.second == position2.second)
		|| (position1.first + 1 == position2.first && position1.second + 1 == position2.second)
		|| (position1.first - 1 == position2.first && position1.second - 1 == position2.second)
		|| (position1.first + 1 == position2.first && position1.second - 1 == position2.second)
		|| (position1.first - 1 == position2.first && position1.second + 1 == position2.second)
		|| (position1.first == position2.first && position1.second + 1 == position2.second)
		|| (position1.first == position2.first && position1.second - 1 == position2.second)) {
		std::cout << "Король угрожает" << std:: endl;// task2.3
	}
	if (abs(position1.first - position2.first) == abs(position1.second - position2.second)) {
		std :: cout << "Слон угрожает" << std::endl;  // task 2.2
	}
	if (position1.first == position1.first || position2.second == position2.second) {
		std ::cout << "Ладья угрожает" <<std:: endl;// task 2.1
	}
	int a1, b1, p3 = 1;
	cin >> a1 >> b1;
	for (a1; a1 < b1; a1++) {
		p3 *= a1;
	}
	cout << p3 << endl; // task 4.4
	int b, p2 = 1;
	cin >> b;
	1 < b < 20;
	for (int i = 1; i < b; i++) {
		p2 *= i;
	}
	cout << p2 << endl; // task 4.3
	int a, p1 = 1;
	cin >> a;
	1 < a < 20;
	for (a; a < 20; a++) {
		p1 *= a;
	}
	cout << p1 << endl; //task 4.2
	int p = 1;
	for (int i = 8; i < 16; i++) {
		p *= i;
	}
	cout << p << endl; // task 4.1
	int n;
	cin >> n;
	for(int i = 1; i < 10; i++) {
		cout << i << " x " << n << " = " << i * n << endl; // task 3.2
	}
	for (int i = 1; i < 10; i++) {
		cout << i << " x 7 = " << i * 7 << endl; //task 3.1
	}
	int x, y, z;
	cin >> x >> y >> z;
	if ((x > 100) || (y > 100) || (z > 100)) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;// task 1.6
	}
	if (((x % 5 == 0) && (y % 5 !=0) && (z % 5 !=0))|| ((x % 5 != 0) && (y % 5 == 0) && (z % 5 != 0)) || ((x % 5 != 0) && (y % 5 != 0) && (z % 5 == 0))) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;// task 1.5
	}
	if ((x < 0) && (y < 0 ) && (z < 0)) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;// task 1.4
	}
	if (( x == 0) || (y  == 0)) {
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false" << endl;// task 1.3
	}
	if (((x < 20) && (y > 20)) || ((x > 20) && (y < 20))){
		cout << "condition is true" << endl;
	}
	else {
		cout << "condition is false"<< endl;// task 1.2
	}

	if ((x % 2 != 0) || (y % 2 != 0)) {
		cout << "condition is true" << endl; 
	}
	else {
		cout << "condition is false" << endl;// task 1.1
	}
		

}
