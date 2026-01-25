// Description: Check Whether All Elements Are Positive

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

bool CheckAllPositive(PNODE Head)
{
    bool bFlag = true;
    
    while(Head != NULL)
    {
        if(Head->Data < 0)
        {
            bFlag = false;
            break;
        }
        Head = Head->Next;
    }

    return bFlag;
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
    int bRet = 0;

    PNODE First = NULL;
    InsertFirst(&First, 650);
    InsertFirst(&First, 40);
    InsertFirst(&First, 393);
    InsertFirst(&First, 230);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Count(First);

    printf("Number of elements in node are : %d\n",iRet);

    bRet = CheckAllPositive(First);

    if(bRet == true)
    {
        printf("All elements are positive");
    }
    else
    {
        printf("All elements are not positive");
    }
    
    return 0;
} 