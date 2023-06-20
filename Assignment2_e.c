//Accept number from user and check wheather the number is even or odd

#include<stdio.h>
typedef int BOOL;
#define true 1;

BOOL CheckEven(int iNum){
   if(iNum%2==0){
    return true;
   }
}
int main(){
    int iValue=0;
    printf("Enter the number");
    scanf("%d",&iValue);

    CheckEven(iValue);
    return 0;
}