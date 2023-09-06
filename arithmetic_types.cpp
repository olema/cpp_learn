#include "using_define.h"

/*
    literals:
    prefix:
        U   symbol Unicode 16, 32   char16_t, char32_t
        L   wide symbol             wchar_t
        U8  utf-8 (string literals) char
    suffix:
        u or U      unsigned
        l or L      long
        Ll or LL    long long
        f or F      float
        l or L      long double

        20 - dec
        024 - oct
        0x14 - hex
*/

int main() {
    bool b = true;
    unsigned char c = 'a'; // symbol 8 bits
    wchar_t wc = 'w'; // wide symbol 16 bits
    char16_t c16t = U'Б'; // unicode 16 bits
    char32_t c32t = U'Г'; // unicode 32 bits
    short s = 1; // short int 16 bits
    int i = 16; // int 16 bits
    long l = 32L; // long int 32 bits
    long long ll = 64LL; // long long int 64 bits
    float f = 3.14F; // 6 numbers
    double d = 2.71828; // 10 numbers
    long double ld = 1.41421356237L; // 10 numbers

    cout << c16t << endl;
    cout << c32t << endl;
    cout << c << endl;
    
    c = 0;
    for (i = 0; i < 257; i++) {
        cout << int(c) << endl;
        c++;
    }
}
