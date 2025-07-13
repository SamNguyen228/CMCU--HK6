#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout << "Address of a: " << &a << endl;
    a = 20;
    cout << "Address of a: " << &a << endl;
    int b = a;
    int &c = a; // c is a reference to a
    int *d = &a; // d is a pointer to a
    int *e = new int(30); // e is a pointer to a dynamically allocated int

    cout << "Value of a: " << a << endl; // Output: 5
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Address of c: " << &c << endl;

    c = 10; // Changing c changes a
    cout << "Value of a after changing c: " << a << endl; // Output: 10

    cout << "Value of d: " << d << endl;
    cout << "Address of d: " << &d << endl;
    cout << "Value of e: " << e << endl;
    cout << "Address of e: " << &e << endl;
}