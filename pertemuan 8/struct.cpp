#include <iostream>
#include <vector>

using namespace std;

/*kalau di Pascal
var
mahasiswa : record*/

//Struct Declaration
struct Mahasiswa {
    string nama, nim;
    float nilai;
}; // disaranin pakai ini aja

// typedef struct {
//     string nama, nim;
//     float nilai;
// } mhs; // ini sama aja sih..

int main () {
    Mahasiswa mhs; // variabel "mhs" dari type Mahasiswa, untuk simpen data satu mahasiswa
    vector<Mahasiswa> mahasiswa; // untuk simpen daftar mahasiswa, mahasiswa berisi objek "Mahasiswa"
    int n;

    // cout << "Masukkan nama : ";
    // getline (cin, mhs.nama);

    // cout << "Masukkan NIM : ";
    // cin >> mhs.nim;

    // cout << "Masukkan nilai : ";
    // cin >> mhs.nilai;

    // cout << "Nama Anda " << mhs.nama << " dengan NIM " << mhs.nim << " dengan nilai " << mhs.nilai << endl;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama); //kalau mahasiswa[i], gak bisa krna vektor kosong, kita mau isi mahasiswa 1, 2 jdi kita pushback

        cout << "Masukkan NIM : ";
        cin >> mhs.nim; 

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs); // awalnya vektor tuh kan kosong, jadi data baru nya terisi masuk ke vektor 'mahasiswa'
    }

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa : " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "NIM : " << mahasiswa[i].nim << endl;
        cout << "NIlai : " << mahasiswa[i].nilai << endl;
    }

    // disini pakai mahasiswa[i], bukan mhs karna mhs tadi dipakai buat simpen data sementara tiap mahasiswa
    // terus mahasiswa[i] itukan akses elemen ke-i dalam vaktor, jadi kita bakal dapetin data setiap mahasiswa yg disimpen dlm vektor
    // misal, mahasiswa 1 : Alya, mahasiswa 2 : Tata
    // di loop, data alya disimpen dalam mhs, terus di push ke vektor, trs mhs diisi lagi sama data Tata
    // makanya mahasiswa[0] ada data alya, trs mahasiswa[1] ada data Tata

    return 0;
}