#include <iostream>
#include <string>
using namespace std;

string num1(int x)
{
string a;
x%=10;
switch (x)
{
case 0 : a=" ";break;
case 1 : a="I";break;
case 2 : a="II";break;
case 3 : a="III";break;
case 4 : a="IV";break;
case 5 : a="V";break;
case 6 : a="VI";break;
case 7 : a="VII";break;
case 8 : a="VIII";break;
case 9 : a="IX";break;

}
return a;
}

string num2(int x)
{

string a;
x/=10;
switch (x)
{
case 0 : a=" ";break;
case 1 : a="X";break;
case 2 : a="XX";break;
case 3 : a="XXX";break;
case 4 : a="XL";break;
case 5 : a="L";break;
case 6 : a="LX";break;
case 7 : a="LXX";break;
case 8 : a="LXXX";break;
case 9 : a="XC";break;
}
return a;
}
string num3(int x)
{

string a;
x/=10;
switch (x)
{
case 0: a=" ";break;
case 1: a="c";break;
case 2: a="cc";break;
case 3: a="ccc";break;
case 4: a="CD";break;
case 5: a="D";break;
case 6: a="DC";break;
case 7: a="DCC";break;
case 8: a="DCCC";break;
case 9: a="CM";break;
}
return a;
}

int main()
{
int x;
cout << "*********************************"<<endl;
cout << "** TECHZONPT **" << endl;
cout << "** **" << endl;
cout << "*********************************"<< endl;

do
{
cin >> x;

if(x>10)
{
cout << num3(x)<< num2(x)<< num1(x)<< endl;
}
else
{
cout<<num1(x)<<endl;
}
}
while(1);
return 0;
}
