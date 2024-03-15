#include <iostream>
using namespace std;

int main()
    {
        float luas, volume, jari;
        const float phi = 3.14;

        cout<<"Input jari-jari : ";
        cin>>jari;

        volume = (4/3) * (phi) * (jari*jari*jari);
        luas = 4 * phi * jari * jari;

         cout<<"Volume : "<<volume<<endl;
         cout<<"luas : "<<luas<<endl;
         

    }