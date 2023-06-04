// accept n number from user and check 12 th number is on or off
typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 1000 0000 0000
// 0     0    0      0  0     2    0   0
// 00000800
// 0X00000800
bool checkOn(UINT no)
{
    UINT iMask = 0X00000800;
    UINT iResult = 0;

    iResult = iMask & no;
    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT val = 0;
    printf("Enter the value:\n");
    scanf("%d", &val);
    bool bRet = false;
    bRet = checkOn(val);
    if (bRet == true)
    {
        printf("10th bit is on:\n");
    }
    else
    {
        printf("10th bit is off:\n");
    }
    return 0;
}