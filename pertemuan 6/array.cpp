#include <iostream>
#include <string>
#include <array>
using namespace std;

int main () {
    
    // Array declaration and Initialization
    // string nama[5] = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    // nama[0] = "Andi"; // indeksnya mulai dari 0
    // nama[1] = "Budi";
    // nama[2] = "Santi";
    // nama[3] = "Wanto";
    // nama[4] = "Denis";

    // Ascending Element in Array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    // for (int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl;
    // } // singkatnya kita bisa buat kayak gini aja, sama-sama nampilin string nama juga

    // Multidimensional Array, artinya array dalam array
    // 1 3 5 
    // 2 4 6 
    // int matrix[2][3] = {{1, 3, 5}, {2, 4, 6}}; // [2][3] artinya barisnya ada 2, kolom nya ada 3
    // for (int i = 0; i < 2; i++) {
    //     for (int j =0; j < 3; j++) {
    //         cout << matrix[i][j] << "  ";
    //     }
    //     cout << endl;
    // }

    // String (array of characters), artinya karakter string itu mewakili setiap nilai di array
    // string nama = "zustine";
    // cout << nama[0] << endl; // contohnya kek gini, kita nampilin huruf di indeks ke 0, yaitu z
    // cout << nama[2] << endl; // kalau ini s
 
    // for (int i = 0; i < nama.length(); i++) {
    //     cout << nama[i] << endl;
    // }


    // masukkan banyak mahasiswa : (n)
    // 1 ke n masukkan nilai mahasiswa ke i (nilai)
    // 1 ke n keluarkan nilai

    // *contoh 1*
    // int n;
    // kalau buat disini float nilai[n] jdi di sini bkln kosong

    // cout << "Masukkan banyak mahasiswa : " ;
    // cin >> n;

    // float nilai[n]; // mending di sini

    // for (int i = 0; i < n; i++) {
    //     cout << "Masukkan nilai mahasiswa ke " << i + 1 << " : "; // array itukan indeksnya dari 0, jadi + 1 biar angkanya dari 1
    //     cin >> nilai[i];
    // }

    // for (int i = 0; i < n; i++) {
    //     cout << "Nilai mahasiswa ke " << i + 1 << " : " << nilai[i] << endl;
    // }

    // *contoh 2*
    // string nama_karyawan[] = {"Andy", "Yusuf", "Budi", "Yanto", "Santika", "Dodi"};

    // sizeof () -> fungsi untuk cek ukuran objek
    // n * sizeof (string) = sizeof(nama_karyawan)
    // n * sizeof (nama_karyawan) / sizeof(string)

    // for (int i = 0; i < sizeof(nama_karyawan) / sizeof(string); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    // *contoh 3*
    // penjumlahan matriks 2 x 2
    // int matriks1[2][2];
    // int matriks2[2][2];
    // int hasil[2][2];

    // cout << "Matriks 1 " << endl;
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << "Masukkkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
    //         cin >> matriks1[i][j];
    //     }
    // }

    // cout << "Matriks 2 " << endl;
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << "Masukkkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
    //         cin >> matriks2[i][j];
    //     }
    // }

    //     cout << "Hasil Penjumlahan" << endl;
    //     for (int i = 0; i < 2; i++) {
    //         for (int j = 0; j < 2; j++) {
    //         hasil[i][j] = matriks1[i][j] + matriks2[i][j];
    //         cout << hasil[i][j] << "  ";
    //     }
    //     cout << endl;
    // }

    // Array Library
    array<float, 5> nilai = {87.2, 90, 100, 95.7, 78.5};

    cout << "Nilai : ";

    // for (int i = 0; i < nilai.size(); i++){
    //     cout << nilai[i] << " ";
    // }

    for (float n : nilai) { //sama kek di atas tapi lebih simple
        cout << n << " "; // for each loop
    }
}