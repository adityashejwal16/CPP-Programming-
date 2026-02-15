#include<iostream>
using namespace std;

int Addx(int iNo1, int iNo2)
{
    int iAns;

    iAns = iNo1 + iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 10, iValue2 = 13, iRet = 0;

    iRet = Addx(iValue1, iValue2);
     
    cout<<"Addition is :\n"<<iRet;
    return 0;
}