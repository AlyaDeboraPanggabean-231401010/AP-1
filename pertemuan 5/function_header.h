int kali (int a, int b) {
    return a * b ;
}

float bagi ( int a, int b ) { // hasilnya masih nol int bagi int = 0; nilai int masuk ke float jdi gak bisa

// bisa kita ubah int a jadi float a
    // return (float) a / (float) b ; //type casting = ubah secara paksa ada cara lain
    return static_cast <float> (a) / static_cast <float> (b) ;  // type casting  
}