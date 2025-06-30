#include<stdio.h>
int main()
{
    int freq[122] = {0};
    char str[20];

    printf("enter str : ");
    scanf("%s",&str);

    for(int i=0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    for(int i=0; i<122; i++)
    {
        if(freq[i] > 0)
        {
            printf("\n %c => %d",i,freq[i]);
        }
    }
    return 0;

}