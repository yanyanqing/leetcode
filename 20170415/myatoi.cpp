/*************************************************************************
	> File Name: myatoi.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月15日 星期六 20时37分34秒
 ************************************************************************/
#include<iostream>
#include<limits.h>
using namespace std;
int myatoi(const string &str)
{
    int tag = 1;
    int res = 0;
    int i = 0;
    while(i < str.length())
    {
        if(str[i] == ' ') ++i;
        else if(str[i] == '-' || str[i] == '+')
        {
            tag = (str[i++] == '-') ? -1:1;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + str[i++] - '0';
            cout << res << endl;
            if(res*tag >= INT_MAX) return INT_MAX;
            if(res*tag <= INT_MIN) return INT_MIN;
        }
        else{
            cout << "invalid argument" << endl;
            return 0;
        }
    }
    return res*tag;
}
int main()
{
    cout << myatoi("17789") << endl;
}
