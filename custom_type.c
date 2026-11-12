#include <stdio.h>
#include <stdint.h>
int main() {

    typedef unsigned char byte; // Define a new type 'byte' as an alias for 'unsigned char'

    byte b = 255;
    unsigned char c = 255;
    printf("The value of b is: %d\n", b);
    printf("The value of c is: %d\n", c);

    typedef unsigned char uint8; // Define a new type 'uint8' as an alias for 'unsigned char'
    typedef unsigned short uint16; // Define a new type 'uint16' as an alias for 'unsigned short'
    typedef unsigned int uint32; // Define a new type 'uint32' as an alias for 'unsigned int'
    typedef unsigned long long uint64; // Define a new type 'uint64' as an alias for 'unsigned long long'

    uint16 u16 = 65535;
    uint32 u32 = 4294967295;
    uint64 u64 = 18446744073709551615ULL;
    

}