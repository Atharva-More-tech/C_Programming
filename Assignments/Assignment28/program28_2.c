#include<stdio.h>
//////////////////////////
//
// Function Name: Pattern
// Description: display pattern.
// INPUT : void
// OUTPUT : void
// Author : Atharva Sanjay More
// Date : 21/11/25
//
//////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j =0 ;
    char ch1 ;
    char ch2 ;
    
    for(i = 1; i <= iRow; i++)
    {
             ch1 = 'A';
             ch2 = 'a';
        for(j = 1; j<= iCol; j++)
        {
           if((i % 2) == 0)
           {
            printf("%c\t",ch2);
            ch2++;
           }
           else
           {
            printf("%c\t",ch1);
            ch1++;
           }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the number of row :");
    scanf("%d",&iValue1);

    printf("Enter the number of column :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}