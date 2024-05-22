#include <stdio.h> // header C
#include <concio>

int main () {
int nim;
char kom;
char nama[20];
float ip;

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    // scanf(" %[^\n]", &nama); // terlalu ribet
    gets(nama); // get string, bisa pakai ini 

    printf("Masukkan nim : ");
    scanf(" %d", &nim); // fungsi masukan pada C

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    // printf("Nama: %s\n", nama); biasanya pake yg dibwah
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char
    
    printf("NIM: %d\n", nim);
    printf("KOM: %c\n", kom);
    printf("IP: %.2f\n", ip);

    printf("press any button to continue...");
    getch(); // gak nampilin karakter yang kita input, cuman di simpen di memori
}
