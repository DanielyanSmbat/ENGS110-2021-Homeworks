#include <stdio.h>

union converter
{
        char bytes[4];
        unsigned int number;
};

converter c;

int main()
{
        c.number = 0x1a2b3c4d;
        printf("c.number = 0x%x\n", c.number);
        printf("c.bytes[0] = 0x%x\n", c.bytes[0]);
        printf("c.bytes[1] = 0x%x\n", c.bytes[1]);
        printf("c.bytes[2] = 0x%x\n", c.bytes[2]);
        printf("c.bytes[3] = 0x%x\n", c.bytes[3]);
        return 0;
}


