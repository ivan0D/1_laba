#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

struct A{
    int a;
    int b;
};

struct B{
    char a;
    char b;
};

int main() {

    const char* type_name1 = typeid(A).name();

    cout << typeid(A).name() << endl;

    A a;

    cout << "Type of a: " << typeid(a).name() << endl;

    int c = 3;
    short d = 10;
    float e = 1.234;
    double g = 1.28847489;

    int result = (c * d) / (e - g * c);

    cout << "Type of (c * d) / (e - g * c): " << typeid((c * d) / (e - g * c)).name() << endl;

    return 0;
}