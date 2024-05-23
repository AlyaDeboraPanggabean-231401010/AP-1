#include <iostream>
#include <vector>

using namespace std;

//class bisa bkin function dlm nya, kalau struct kan tipe aja

class Mahasiswa {
    private:
        string nama, nim;
        float nilai; // class Mahasiswa doang yg bisa akses

    public:
        // Constructor --> Fungsi yg lngsg dipanggil ketika class diinstansiasi
        Mahasiswa(string nama, string nim, float nilai) { //ini wajib diisi
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai; // pakai ini, kalau bikin objek dr class , biar wajib terisi
            /*mis kalau di struct nilai gak diisi gak msalah, tapi kalau di sini wajib, kalau gak bakal error */
    }

    // Getter Function -> berfungsi untuk mengembalikan data sebuah variabel yang memiliki akses private
    string getName() {
        return this->nama;
    }

    void display() {
        cout << "Nama :" << this->nama << endl;
        cout << "NIM :" << this->nim << endl;
        cout << "Nilai : " << this->nilai << endl;
    }
};

int main () {

    Mahasiswa siswa1("Andi", "231401010", 45.6);

    // cout << siswa1.nama << endl; // ini gak bisa di akses, krna private
    // siswa1.nama = "Budi"; // kesannya gak amankan, mknya diatas di buat private
    // cout << siswa1.nama << endl;

    // siswa1.display();

    // cout <<  siswa1.getName() << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : " ;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline (cin, nama);

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;

        Mahasiswa mhs(nama, nim, nilai); //sama kek si Andi, cuman kita mau berdsar inputan user
        mahasiswa.push_back(mhs);
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display(); //dptin mahasiswa k brp
    }

    return 0;

}