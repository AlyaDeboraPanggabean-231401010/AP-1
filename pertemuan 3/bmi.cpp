#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float berat, tinggi, bmi;

        cout<<"Masukkan berat badan anda (kg) : ";
        cin>>berat;

        cout<<"Masukkan tinggi anda (m) : ";
        cin>>tinggi;

        bmi = berat/(tinggi*tinggi);
        
        cout<<fixed<<setprecision(0);
        cout<<"BMI Anda : "<<bmi<<endl;

        if (bmi < 18.5){
            cout<<"Kategori berat badan : kurang "<<endl;
        }

        if (bmi >= 18.5 && bmi < 25) {
        cout<<"Kategori berat badan : normal "<<endl;
        }

        else if (bmi>=25 && bmi<30){
             cout<<"Kategori berat badan : berlebih "<<endl;
        }

        else if ( bmi >= 30){
            cout<<"Kategori berat badan : obesitas "<<endl;
        }

    return 0;
}