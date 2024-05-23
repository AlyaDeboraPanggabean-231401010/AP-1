#include <iostream>
#include <math.h> 

using namespace std;

// kita bisa buat program kalkulator menggunakan function

void bintang() {
    cout << "*************************************" << endl;
} // function tanpa nilai balikan

void garis() {
    cout << "=====================================" << endl;
}

void operasi() {
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "5. Modulo" << endl;

}

int jumlah (int a, int b) {
    return a + b;
} // ini contoh function dengan nilai balikan
int kurang (int a, int b) {
    return a - b;
}
int kali (int a, int b) {
    return a * b;
}
float bagi (int a, int b) {
    return a / b;
}
int modulo (int a, int b) {
    return a % b;
}
int pangkat (int a, int b) {
    return paw (a, b);
}

int main () {
    char cont;
    int a, b, op;
    garis (); // kita tampilkan void garis()
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis ();
    operasi (); // kita tampilkan void operasi()
    garis ();
    ulang :
    cout << "Masukkan operasi : ";
    cin >> op;
    cout << "Masukkan angka pertama : ";
    cin << a;
    cout << "Masukkan angka kedua : ";
    cin << b;

   switch (op) {
    case : 'tambah' :
    cout << "Hasil a operasi b  = " << jumlah (a, b) << endl;
    break ;
    case : 'kurang' :
    cout << "Hasil a operasi b  = " << kurang (a, b) << endl;
    break ;
    case : 'kali' :
    cout << "Hasil a operasi b  = " << kali (a, b) << endl;
    break ;
    case : 'bagi' :
    cout << "Hasil a operasi b  = " << bagi (a, b) << endl;
    break ;
    case : 'modulo' :
    cout << "Hasil a operasi b  = " << modulo (a, b) << endl;
    break ;
    case : 'pangkat' :
    cout << "Hasil a operasi b  = " << pangkat (a, b) << endl;
    break ;
    default;
   }

    bintang ();

    cout << "Hasil a operasi b  = " << op << endl;
    cout << "Mau ulang gak ? " ;
    cin >>  cont ;

    while (cont == 'y') || (cont == 'Y');
    goto ulang ;
    
}