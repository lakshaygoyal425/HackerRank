#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    char *arr[] = {"one","two","three","four","five","six","seven","eight","nine"};

    for(;a<=b;a++)
    {
        if(a<10)
        {
            printf("%s\n",arr[a-1]);
        }
        else if (a%2 == 0) {
        printf("even\n");
        }
        else {
        printf("odd\n");
        }
    }
    return 0;
}


