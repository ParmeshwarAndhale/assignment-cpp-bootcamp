
//Map Digit to Word and print output.......
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* read();



int main()
{
    char* a;
    char* b = read();
    int n = strtol(b, &a, 10);

    if (a == b || *a != '\0') 
        {
                 exit(0); 
         }

    
     if(n>=1 && n<=20)
    {   if(n==1)
        printf("one");
        if(n==2)
        printf("two");
        if(n==3)
        printf("three");
        if(n==4)
        printf("four");
        if(n==5)
        printf("five");
        if(n==6)
        printf("six");
        if(n==7)
        printf("seven");
        if(n==8)
        printf("eight");
        if(n==9)
        printf("nine");
        if(n==10)
        printf("Ten");
        if(n==11)
        printf("Eleven");
        if(n==12)
        printf("twelve");
        if(n==13)
        printf("thirteen");
        if(n==14)
        printf("fourteen");
        if(n==15)
        printf("fifteen");
        if(n==16)
        printf("sixteen");
        if(n==17)
        printf("seventeen");
        if(n==18)
        printf("eighteen");
        if(n==19)
        printf("nineteen");
        if(n==20)
        printf("twenty");
    }
    else
        printf("Greater than 20");
    

    return 0;
}

char* read() 
{
    size_t x = 1024;
    size_t y = 0;
    char* data = malloc(x);

    while (true) {
        char* c = data + y;
        printf("Enter the number\n");
        char* line = fgets(c, x - y, stdin);

        if (!line) 
        { 
            break; 
        }
        y += strlen(c);
        if (y < x - 1 || data[y - 1] == '\n') { break; }

        size_t new_length = x << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        x = new_length;
    }

    if (data[y - 1] == '\n') {
        data[y - 1] = '\0';
    }

    data = realloc(data, y);
    return data;
}