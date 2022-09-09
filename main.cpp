#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;

typedef struct {
    char* data; // 4
    int i; // 4
    double d; // 8
} S;

enum ERROR : short {
    BAD_ALLOC,
    OVERFLOW_ERROR,
    RUNTIME_ERROR
};

enum EVENT{
    A = 10,
    B,
    C = 12
};

int main() {

    cout << "\t Type name\tSize(bytes)" << endl;
    cout << setw(17) << typeid(EVENT).name() << setw(15) << sizeof(EVENT) << endl;
    cout << setw(17) << typeid(ERROR).name() << setw(15) << sizeof(ERROR) << endl << endl;

    EVENT e = EVENT ::A;
    EVENT e1 = EVENT ::B;
    EVENT e2 = EVENT ::C;

    cout << "EVENT::A = " << e << endl;
    cout << "EVENT::B = " << e1 << endl;
    cout << "EVENT::C = " << e2 << endl << endl;

    int e_ = e;
    int e1_ = e1;
    int e2_ = e2;

    // e = e_; // invalid conversion from 'int' to 'EVENT'
    e = static_cast<EVENT>(e_); // вот так надо!
    cout << "e = " << e << endl;

    e_ = 1;
    cout << "e_ = " << e_ << endl;

    // e = e * e1; // e * e1 - int
    e_ = e * e1;
    e_ = e / e1;
    e_ = e + e1;
    e_ = e - e1;




    return 0;
}