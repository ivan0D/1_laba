#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;

typedef struct {
	char* data; // 4
	int i; // 4
	double d; // 8
} S;

int main() {

	char c = 'a';
    signed char sc = 'b';
    unsigned char uc = 'c';
    short int si = 1000;
    unsigned int ui = 10000;
	int i = 100000;
	long l = 1000000;
    unsigned long ul = 10000000;
    long long int lli = 100000000;
    unsigned long long int ulli = 1000000000;
	float f = 123.456789;
	double d = 345.678912345;
    long double ld = 1234567891234.123456879439684;
	bool b = 1;
	S s = S{nullptr,
            1,
            1.234};

	cout << "\t Type name\tSize(bytes)" << endl;
	cout << setw(17) << typeid(c).name() << setw(15) << sizeof(c) << endl;
	cout << setw(17) << typeid(sc).name() << setw(15) << sizeof(sc) << endl;
	cout << setw(17) << typeid(uc).name() << setw(15) << sizeof(uc) << endl;
	cout << setw(17) << typeid(si).name() << setw(15) << sizeof(si) << endl;
	cout << setw(17) << typeid(ui).name() << setw(15) << sizeof(ui) << endl;
	cout << setw(17) << typeid(i).name() << setw(15) << sizeof(i) << endl;
	cout << setw(17) << typeid(l).name() << setw(15) << sizeof(l) << endl;
	cout << setw(17) << typeid(ul).name() << setw(15) << sizeof(ul) << endl;
	cout << setw(17) << typeid(lli).name() << setw(15) << sizeof(lli) << endl;
	cout << setw(17) << typeid(ulli).name() << setw(15) << sizeof(ulli) << endl;
	cout << setw(17) << typeid(f).name() << setw(15) << sizeof(f) << endl;
	cout << setw(17) << typeid(d).name() << setw(15) << sizeof(d) << endl;
	cout << setw(17) << typeid(ld).name() << setw(15) << sizeof(ld) << endl;
	cout << setw(17) << typeid(b).name() << setw(15) << sizeof(b) << endl;
	cout << setw(17) << typeid(s).name() << setw(15) << sizeof(s) << endl;

	return 0;
}