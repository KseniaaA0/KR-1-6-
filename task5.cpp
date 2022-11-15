#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
double Principal;
double IntRate;
double PayPerYear;
double NumYears;
double Payment;
double number,denom;
double b,e;
cout«"Введите сумму займа ";
cin» Principal;

cout«"Введите процентную ставку ";
cin»IntRate;
cout«"Введите количество выплат в год ";
cin» PayPerYear;
cout«"Введите срок займа в годах ";
cin»NumYears;
number=IntRate*Principal/PayPerYear;
e=-(PayPerYear* NumYears);
b=(IntRate/PayPerYear)+1;
denom=(1-pow(b,e));
Payment=number/denom;
cout«"\n\nРазмер платежа по займу = "«Payment«endl;
getch();
return 0;
}
