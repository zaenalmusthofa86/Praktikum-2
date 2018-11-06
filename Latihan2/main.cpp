#include<iostream>

using namespace std;

int main()
{
    int A, B, C, D;

    cout << "Masukkan bilangan 1: ";
    cin >> A;

    cout << "Masukkan bilangan 2: ";
    cin >> B;

    cout << "Masukkan bilangan 3: ";
    cin >> C;

    cout << "Masukkan bilangan 4: ";
    cin >> D;

    if (A > B) {
        if (A > C) {
                if (A > D) {
            cout << "Bilangan terbesar adalah: " << A << endl;
       } else
            cout << "Bilangan terbesar adalah: " << D << endl;
    } else if (A < C) {
        if (C > D) {
            cout << "Bilangan terbesar adalah: " << C << endl;
       } else
            cout << "Bilangan terbesar adalah: " << D << endl;
    } else if (B > C) {
        if (B > D) {
            cout << "Bilangan terbesar adalah: " << B << endl;
       } else
            cout << "Bilangan terbesar adalah: " << D << endl;
        if (C > D) {
            cout << "Bilangan terbesar aadalah: " << C << endl;
        } else
             cout << "Bilangan terbesar adalah: " << D << endl;
    return 0;
    }
                   }
 }


