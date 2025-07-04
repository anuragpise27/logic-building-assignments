#include<iostream>
using namespace  std;
template<class T>
T Mutiply(T no1, T no2)
{
   T ans;
   ans = no1 * no2;
   return ans;
}
int main()
{
    int iRet = Mutiply(10,20);
    printf("%d",iRet);
    return 0;
}

