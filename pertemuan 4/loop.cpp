#include <iostream>

using namespace std;

int main () {
    // goto label, instruksi yang memungkinkan kita untuk melompat ke bagian program lagi
    // a:
    //     cout << "Hello world" << endl;
    //     goto d;
    // b:
    //     cout << "Universitas Sumatera Utara" << endl;
    //     return 0;
    // c:
    //     cout << "Fasilkom-TI" << endl;
    //     goto b;
    // d:
    //     cout << "Ilmu Komputer" << endl;
    //     goto c;
    
    // kita tampilin bilangan genap pake goto
    // int i = 1;
    // genap:
    //     if(i % 2 == 0) {
    //         cout << i << " ";
    //     }
    //     i++;

    // if (i <= 10) {
    //     goto genap;
    // }
    
    // While itu statement perulangan, dimana pernyataan yang terdapat dlm while di ulang selama kondisi True.
    // while
    // int i = 1;
    // while (i <= 10) {
    //     if(i % 2 == 0) {
    //         cout << i << " ";
    //     }
    //     i++;
    // } // program ini bakal nampilin bilangan genap 1 - 10

    // Do while, kalau di sini statementnya itu dijalankan dulu, terakhir kondisinya di periksa
    // jadi, statement akan dikerjakan minimal sekali, sekalipun kondisi gak terpenuhi
    // int i = 1;
    // do {
    //     cout << i << endl;
    // }
    // while (i <= 0);

    // For, berfungsi untuk perulangan selama kondisi masih nilai True
    // for (int i = 1; i <= 10; i+=2) {
    //     cout << "Hello world" << endl;
    // } // kalau program ini, akan nampilin "Hello world" sebanyak 5 kali

    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 5; j++) {
    //     cout << "* ";
    //     }
    //     cout<<endl;
    // }

    //program ini buat pola segitiga siku-siku
    int i,j; 
        for(i = 1; i <= 5; i++) {
            for(j = 1; j <= i; j++) {
                cout << "* ";
            }
        cout << endl;
        } 
}
