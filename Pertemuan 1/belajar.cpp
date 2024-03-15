#include <iostream>
using namespace std;

main()
{
    string nama;
    int nim;
    char kom;
    float ip;
    
    cout<<"Hello world" <<endl;

    cout<<"Masukkan nama : ";
    // cin>>nama; 
    getline (cin, nama);

    cout<<"Masukkan nim : ";
    cin>>nim; 

    cout<<"Masukkan kom : ";
    cin>>kom; 

    cout<<"Masukkan ip : ";
    cin>>ip; 

    cout<<"Nama : "<<nama<<endl;
    cout<<"NIM : "<<nim<<endl;
    cout<<"KOM : "<<kom<<endl;
    cout<<"IP : "<<ip<<endl;
}