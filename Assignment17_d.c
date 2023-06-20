/*accept  n numebrs from user and display all such numbers which contains 3 digits*/

#include <stdio.h>
#include <stdlib.h>
void display(int *Arr, int iSize)
{
    int iCnt = 0, iRem = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        int temp = Arr[iCnt], cnt = 0;
        while (temp != 0)
        {
            iRem = temp % 10;
            cnt++;
            temp = temp / 10;
        }
        printf("Displying elements which contains 3 digits:\n");
        if (cnt == 3)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}
int main()
{
    int iLen = 0;
    printf("enter the number of elements:\n");
    scanf("%d", &iLen);

    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int) * iLen);

    printf("Enter array elements:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    display(ptr, iLen);

    free(ptr);
    return 0;
}