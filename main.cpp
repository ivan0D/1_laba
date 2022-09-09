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

    float f = 1.234;
    int a = f; // неявное преобразование
    cout << a << endl;

    int b = (int)f; // явное преобразование
    cout << b << endl;

    A a_;
    B b_;

    // a_ = b_; // ошибка

    float s = 1.23344; // неявное преобразование double к float

    int c = 3;
    short d = 10;
    float e = 1.234;
    double g = 1.28847489;

    int result = (c * d) / (e - g * c);
    result = (double)(c * (int)d) / ((double)e - g * (double)c);
    cout << result;

    return 0;
}