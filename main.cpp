#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;

typedef struct {
    char* data; // 4
    int i; // 4
    double d; // 8
} S;

typedef unsigned long long int ULLINT;
typedef long long int LLINT;
typedef unsigned char UCHAR;
typedef signed char SCHAR;
typedef short int SINT;
typedef unsigned int UINT;
typedef unsigned long ULONG;
typedef long double LDOUBLE;

int main() {

    char c;
    SCHAR sc;
    UCHAR uc;
    SINT si;
    UINT ui;
    int i;
    long l;
    ULONG ul;
    LLINT lli;
    ULLINT ulli;
    float f;
    double d;
    LDOUBLE ld;
    bool b;
    S s;

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