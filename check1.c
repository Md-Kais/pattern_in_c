#include <stdio.h>
#define string "Kais"
int main()
{
    char s[] = "Kais";
    char d[]=string;
    printf("%p\n", string);
    printf("%p\n", &d);
    printf("%p\n", "Kais");
    printf("%p\n", &s);
    printf("%p\n", "Kais");
    printf("%p\n", "Discord");
    printf("%p\n", "Discord");
    printf("%s",d);
    //Macro er Address and Macro er moddhe thaka constant er address ekoi. Macros are generally used to define constant values that are being used repeatedly in program.But shei ekoi constant jodi onno kono variable e akhi tobe oi variable er address change hbe. But macro er address change hbe na. Therefore,we can say that, macro can be accessed by the address of it's constant.
}
// 0000000000404000
// 000000000064FE16    
// 0000000000404000    
// 000000000064FE1B    
// 0000000000404000    
// 0000000000404009    
// 0000000000404009    
// Kais