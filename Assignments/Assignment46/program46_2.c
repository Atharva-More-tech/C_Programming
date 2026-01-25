// Description: Display Elements Less Than X

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define True 1
#define False 0
typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head->Next;
    }
    printf("NULL \n");
}

void DisplayLess(PNODE Head, int X)
{    
    printf("Number less than %d are :\n",X);

    while(Head != NULL)
    {

        if(Head->Data < X)
        {
            printf("%d ",Head->Data);
        }
        Head = Head->Next;
    }
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head->Next;
    }
    return iCount;
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;
    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 230);
    InsertFirst(&First, 230);
    InsertFirst(&First, 111);

    Display(First);

    iRet = Count(First);

    printf("Number of elements in node are : %d\n",iRet);

    DisplayLess(First,210);

    return 0;
} 