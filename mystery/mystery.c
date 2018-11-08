#include "mystery.h"

int     add(int num1, int num2)
{
        return  num1 + num2;
}

int     dothething(int num)
{
        int     num1 = 1, num2 = 1, result = 0, i;
        if(num == 1 || num == 2)
        {
                return  1;
        }
        else
        {
                for (i = 1; i <= num - 2; i ++)
                {
                        result = num1 + num2;
                        num1 = num2;
                        num2 = result;
                }
                return  result;
        }
}

int     main(int argc, char** argv)
{
        int     num = atoi(argv[1]);
        printf("value = %d\n", dothething(num));

        return  0;
}
