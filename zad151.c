// Program treba napisat zadani string obrnuto preko pokazivaca.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
        char str[50];
        int duljina,i;
        char *s;

        printf("Unesi neki string : ");
        scanf("%s",str);

        s=str;

        duljina=strlen(s);
        printf("\nObrnuti string je : ");
        for(i=duljina;i>=0;i--)
    {
       printf("%c",*(s+i));
    }

    printf("\n");

        return 0;
}
