#include "using_define.h"

int main() {
    bool b = true;
    unsigned char c = 'a'; // symbol 8 bits
    wchar_t wc = 'w'; // wide symbol 16 bits
    char16_t c16t = 'Б'; // unicode 16 bits
    char32_t c32t = 'Г'; // unicode 32 bits
    short s = 1; // short int 16 bits
    int i = 16; // int 16 bits
    long l = 32; // long int 32 bits
    long long ll = 64; // long long int 64 bits
    float f = 3.14; // 6 numbers
    double d = 2.71828; // 10 numbers
    long double ld = 1.41421356237; // 10 numbers

    cout << c16t << endl;
    cout << c32t << endl;
    cout << c << endl;
    
    c = 0;
    for (i = 0; i < 257; i++) {
        cout << int(c) << endl;
        c++;
    }
}
