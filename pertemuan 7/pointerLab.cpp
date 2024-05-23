#include <iostream>

using namespace std;

void penjumlahan (int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer (int *a, int *b) {
    *a += *b;
    cout << *a << endl; // nilai dari variabel int yang ditunjuk oleh a diperbarui dengan nilai penjumlahan tersebut.
}

void doubleValue(int *a) { // void itu gak punya nilai kembalian
    *a *= 2; //a gak bisa diakses sama program, cuma bisa di sini aja, jdi klo mau diakses ya pake pointer
} // misal kita return a*2, cuma kali 2 di sini, gak berubah nnt datanya, jadi variabel nya berubah

int main () {
    // Pointer Declaration
    //*Normal Variabel --> variabel(data), &variabel(alamat memori)
    int number = 35;
    //*Pointer Variabel --> variavel (alamat memori variabel yang ditunjuk), &variabel(alamat memori), *variabel(data variabel yang ditunjuk)
    int *pointer_number = &number;

    cout << "Isi variabel number = " << number << endl; // 35
    cout << "Alamat memori variabel number = " << &number << endl; // outputnya angka atau huruf acak aja
    cout << "Isi variabel pointer_number = " << pointer_number << endl; // isinya alamat memori si &number
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl; // 35
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl; // alamat memori pointer_number
    cout << endl;

    //Pointer Operation
    *pointer_number = 25; // diganti ini, 35 jg ganti, cuman itu aja, alamatnya gak terganti
    cout << "Isi variabel number = " << number << endl; // 25
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl; // 25
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;

    //Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num;
    cout << "Isi variabel num = " << num[0] << endl; // 1
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    // cout << "Alamat memori variabel num = " << num << endl; // kalau gak pake & bkln ambil indeks ke 0
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;

    *pointer_num +=5; // num[0] kan 1 terus di tambah 5, jadinya 6
    cout << "Isi variabel num = " << num[0] << endl; // 6
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl; // 6
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;

    //Pointer in Parameter, argumen yg dimasukkin dlm sebuah fungsi
    int num1 = 5;
    int num2 = 7;
    penjumlahan (num1, num2); // 12 
    cout << num1 << endl; // 5 
    cout << num2 << endl; // 7
    penjumlahanPointer (&num1, &num2); // 12, a+=b mkanya hasilnya 12
    cout << num1 << endl; // 12, Di dalam fungsi penjumlahanPointer, nilai *a (nilai num1) diperbarui dengan *a + *b
    cout << num2 << endl; // 7
    cout << endl;

    //Pointer in Pointer, pointer bisa nunjuk pointer lain
    int score = 4;
    int *pointer_score = &score; // pointer ke variabel
    int **ptr_pointer_score = &pointer_score; // pointer ke pointer
    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    cout << "isi variabel ptr_pointer_score " << pointer_score << " isi variabel yang dintunjuk oleh ptr_pointer_score  " << **ptr_pointer_score << " alamat memori ptr_pointer " << &ptr_pointer_score << endl;

    cout << endl;

    //Dynamic Pointer -- pointer tnpa nunjuk pointer lain
    int *ptr = new int; // *memory allocation
    *ptr = 30;
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;
    delete ptr; // memory deallocation --buang isi
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;
    cout << endl;

    // *Contoh
    int n;
    cout << "Masukkan sebuah angka : " ;
    cin >> n;

    doubleValue(&n);
    cout << "Nilai angka setelah dikali 2 = " << n << endl;
}