#include <iostream>
#include <vector> // header untuk vector

using namespace std;

int main () {

    // Vector Declaration and Initialization
    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Dodi", "Yanto"};

    // Ascending Elements of Vector
    // for (int i = 0; i < nama_karyawan.size(); i++) { // nama_karyawan.size() kita pakai untuk tau bnyk data yang dismpn dlm vektor
    //     cout << nama_karyawan[i] <<endl;
    // }

    for (string karyawan : nama_karyawan) { // For each loop
        cout << karyawan << endl;
    } 
    // kalau pake ini untuk setiap data kita simpan dlm string karyawan, misal andi simpan trs kita cout baru lnjt ke budi

    // Add data to vector (vektor itu lebih dinamis dibanding array, soalnya elemennya bisa ditambah)
    // nama_karyawan.pushback("Wawan");

    // Delete data from vector
    // nama_karyawan.pop_back(); // menghapus data vector paling akhir
    // nama_karyawan.erase(nama_karyawan.begin() + 3); // begin() untuk mendapatkan data paling awal
    
    // for (int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan << endl;
    // }
}