#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, allow;
    float hra,da,pf;
    char grade;
    cin>>num>>grade;
    hra = (0.2 * num);
    da = (num * 0.5);
    pf = (num *0.11);
    if (grade == 'A'){
        allow = 1700;
    }
    else if (grade == 'B'){
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    int totalsalary;
    totalsalary = round(hra + da + allow + num - pf);
    cout<<totalsalary<<endl;
}
