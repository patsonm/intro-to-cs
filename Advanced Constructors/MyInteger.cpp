/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7B.  This defines the my integer::class and
executes the main() from the question prompt
*******************************************************/








#include <iostream>
#include "MyInteger.hpp"
using namespace std;


MyInteger::MyInteger(int n) 
{
    pInteger = new int;
    *pInteger = n;
} 

MyInteger::MyInteger(MyInteger &n)
{
    pInteger = new int;
    *pInteger = n.getMyInt();
}  


int MyInteger::getMyInt()
{
return *pInteger;
}
    
void MyInteger::setMyInt(int n) 
{
*pInteger = n;
}

void MyInteger::operator=(MyInteger &n)
{
pInteger = new int;
*pInteger = n.getMyInt();
}

/*int main() 
{

MyInteger obj1(17);

MyInteger obj2 = obj1;
std::cout << obj1.getMyInt() << std::endl;
std::cout << obj2.getMyInt() << std::endl;  

obj2.setMyInt(9);
std::cout << obj1.getMyInt() << std::endl;
std::cout << obj2.getMyInt() << std::endl;
  

MyInteger obj3(42);
obj2 = obj3;
std::cout << obj2.getMyInt() << std::endl;
std::cout << obj3.getMyInt() << std::endl;

obj3.setMyInt(1);
std::cout << obj2.getMyInt() << std::endl;
std::cout << obj3.getMyInt() << std::endl;

return 0;
}*/