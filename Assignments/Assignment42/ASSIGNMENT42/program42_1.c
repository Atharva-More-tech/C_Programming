// Description: search first occurrence of particular element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

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

int SearchFirstOcc(PNODE Head, int no)
{
    int iIndex = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return iIndex;
            break;
        }
        iIndex++;
        Head = Head->Next;
    }
    return 0;
}

int Count(PNODE Head)
{
    int iCount = 0;

    while (Head != NULL)
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

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);


    Display(First);

    iRet = Count(First);

    printf("Number of elements in node are : %d\n",iRet);

    iRet = SearchFirstOcc(First,30);

    if(iRet == 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element is at position : %d\n",iRet);
    }



    return 0;
}
