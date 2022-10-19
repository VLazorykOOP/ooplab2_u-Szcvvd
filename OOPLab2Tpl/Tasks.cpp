#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
void MenuTask()
{
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Examples of problems using bitwise operations \n";
    cout << "    6.  Exit \n";
}
void task1() {
    // Обчислення виразів з використанням побітових операцій
    // Calculation of expressions using bitwise operations 
    #include <iostream>
#include <clocale>
using namespace std;
int main()
{
    int a, b, x, d, c, y;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    cout << "Input d: ";
    cin >> d;
    x = (((a << 4) + a + (c << 8) + (c << 6) - (c << 3)) >> 5) - ((b << 7) - (b << 3)) + (d << 7) - d;
    y = ((17 * a + 312 * c) / 32) - b * 120 + d * 127;
    cout << x << "\n" << y;
}
    cout << " Calculation of expressions using bitwise operations  \n";
}

void task2()
{
    // Шифрування даних з використання побітових операцій 
    // Data encryption using bitwise operations
    cout << " Data encryption using bitwise operations  \n";

}

void task3()
{
    // Шифрування даних з використання стуктур з бітовими полями 
    // Data encryption using structures with bit fields
    cout << "  Data encryption using structures with bit fields \n";
}


void task4()
{   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";
    #include <iostream>
#include <fstream>
#include <clocale>
#include <string.h>
using namespace std;
void binaryView(char a) {
	int b[8];

	memset(b, 0, sizeof(b));

	b[0] = a & 0b10000000 ? 1 : 0;
	b[1] = a & 0b01000000 ? 1 : 0;
	b[2] = a & 0b00100000 ? 1 : 0;
	b[3] = a & 0b00010000 ? 1 : 0;
	b[4] = a & 0b00001000 ? 1 : 0;
	b[5] = a & 0b00000100 ? 1 : 0;
	b[6] = a & 0b00000010 ? 1 : 0;
	b[7] = a & 0b00000001 ? 1 : 0;

	for (int i = 0; i < 8; i++) {
		cout << b[i];
	}
	cout << "\n";
}
int main()
{
	int a, b, c, d, e;
	char p[3];
	p[0] = 0;
	p[1] = 0;
	p[2] = 0;

	//cin >> a >> b >> c >> d >> e;

	do {
		cout << "\n Input number a: ";
		cin >> a;
	} while ((a < 0) || (a > 12));

	do {
		cout << "\nInput number  b: ";
		cin >> b;
	} while ((a < 0) && (b > 9));

	do {
		cout << "\nInput number  c: ";
		cin >> c;
	} while ((c < 1940) && (c > 2065));

	do {
		cout << "\nInput number  d: ";
		cin >> d;
	} while ((d < 0) && (d > 31));

	do {
		cout << "\nInput number  e: ";
		cin >> e;
	} while ((a < 0) && (e > 1));


	p[0] = a << 4;
	p[0] = p[0] | (b & 0b00001111);

	p[2] = d << 3;

	p[1] = e << 7;
	p[1] = p[1] | ((c - 1940) & 0b01111111);

	cout << "    ";
	binaryView(p[0]);
	cout << "    ";
	binaryView(p[1]);
	cout << "    ";
	binaryView(p[2]);

	int a1 = (p[0] & 0b11110000) >> 4;
	int b1 = (p[0] & 0b00001111);
	int c1 = (p[1] & 0b01111111);
	int d1 = (p[1] & 0b11111000) >> 3;
	int e1 = (p[1] & 0b10000000) >> 7;

	cout << "    a = " << a1 << " binary a = ";
	binaryView(a1);
	cout << "    b = " << b1 << " binary b = ";
	binaryView(b1);
	cout << "    c = " << c1 + 1940 << " binary c = ";
	binaryView(c1);
	cout << "    d = " << d1 << " binary d = ";
	binaryView(d1);
	cout << "    e = " << e1 << " binary e = ";
	binaryView(e1);

	cin.get();
	cin.get();
}

}


