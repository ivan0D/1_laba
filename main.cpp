#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;

struct A{
    int a; // 4
    char c; // 1
    int f; // 4
    double d; // 8
}; // 17

/*
 *
 *#[a][a][a][a][c][][][]#[f][f][f][f][][][][]#[d][d][d][d][d][d][d][d]#[][][][][][][][]#
 *
 * 
 */

int main() {

    A a{0, 0, 0, 0};
    cout << "sizeof(A.a) = " << sizeof(a.a) << endl;
    cout << "sizeof(A.c) = " << sizeof(a.c) << endl;
    cout << "sizeof(A.f) = " << sizeof(a.f) << endl;
    cout << "sizeof(A.d) = " << sizeof(a.d) << endl;
    cout << "Total: " << sizeof(a.a) + sizeof(a.c) + sizeof(a.f) + sizeof(a.d) << endl;
    cout << "sizeof(A) = " << sizeof(A) << endl;

    return 0;
}