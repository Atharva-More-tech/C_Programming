#include<stdio.h>
//////////////////////////
//
// Function Name: Pattern
// Description: display pattern.
// INPUT : void
// OUTPUT : void
// Author : Atharva Sanjay More
// Date : 22/11/25
//
//////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j =0 ;
    char ch = 'A';
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch = 'A'; j<= iCol; j++)
        {
           printf("%c\t",ch);
           ch++;
           
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;

    printf("Enter the number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}