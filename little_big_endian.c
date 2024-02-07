#include <stdio.h>

int isLittleEndian()
{
    int num = 1;
    char* ptr = (char*)&num;
    return (*ptr == 1);
}

int convertEndian(int num)
{
    int result = 0;
    result |= (num & 0x000000FF) << 24;
    result |= (num & 0x0000FF00) << 8;
    result |= (num & 0x00FF0000) >> 8;
    result |= (num & 0xFF000000) >> 24;
    return result;
}

int main()
{
    int num = 0x12345678;
    
    if (isLittleEndian())
    {
        num = convertEndian(num);
    }
    
    printf("0x%08X\n", num);

    return 0;
}



