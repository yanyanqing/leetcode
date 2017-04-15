/*************************************************************************
	> File Name: integer_reverser.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月15日 星期六 20时18分41秒
 ************************************************************************/
#include <cstdio>
#include <limits.h>
#include<iostream>
using namespace std;

int integer_reverser(int integer)
{
    long long res = 0;
    while(integer)
    {
        res = res*10 + integer%10;
        integer /= 10;
    }
    return (res > INT_MAX || res < INT_MIN) ? 0 : res;
}

int main()
{
    cout << integer_reverser(-123) << endl;
}
