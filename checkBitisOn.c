typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 0001 1100 0000
// 0     0    0      0  0     1    C   0
// 000001C0
// 0X000001C0
bool checkOn(UINT no)
{
    UINT iMask = 0X000001C0;
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