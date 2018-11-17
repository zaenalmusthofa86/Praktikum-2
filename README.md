# Praktikum_2


#Latihan pertama (Membuat penentuan bilangan terbesar dari 3 variabel)
```
-Mendeklarasikan variabel int a,b,c sebagai variabel input
-Menginputkan nilai a,b,c
-Membandingkan nilai a,b,c dengan rumus if
-Berikut kode lengkapnya:

#include<iostream>

using namespace std;

int main()
{
    int A, B, C;

    cout << "Masukkan bilangan 1: ";
    cin >> A;

    cout << "Masukkan bilangan 2: ";
    cin >> B;

    cout << "Masukkan bilangan 3: ";
    cin >> C;

    if (A > B) {
        if (A > C)
            cout << "Bilangan terbesar adalah: " << A << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "Bilangan terbesar adalah: " << B << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    }
    return 0;
}
```
-Berikut hasil screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum-2/blob/master/Latihan1.png) 

#Latihan kedua (Membuat penentuan bilangan terbesar dari 4 variabel)
```
-Mendeklarasikan variabel int A,B,C,D sebagai variabel input
-Menginputkan nilai A,B,C,D
-Membandingkan nilai A,B,C,D dengan rumus if
-Berikut kode lengkapnya:

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
```
-Berikut hasil screeenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum-2/blob/master/Latihan2.png) 

