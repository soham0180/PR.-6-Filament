#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    int size=0;
    char ispalidrom = 'T';

    printf("Enter the string : ");
    scanf("%s",str1);

    for(int i = 0; str1[i] != '\0'; i++ )
    {
        size++;
    }
     for(int i = 0,j =size-1; str1[i] != '\0'; i++,j-- )
    {
        str2[j]=str1[i];
    }
    str2[size] = '\0';
    printf("\n str1 is : %s",str1);
    printf("\n str2 is : %s",str2);

     for(int i = 0; str1[i] != '\0'; i++ )
    {
        if(!(str1[i] == str2[i]))
        {
            ispalidrom = 'F';
            break;
        }
    }
    if(ispalidrom == 'T')
    {
        printf("\n string is pelidrom");
    }
    else
    {
        printf("\n string is not pelidrom");
    }

    return 0;
}