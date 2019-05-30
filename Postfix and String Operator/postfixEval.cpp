/***************************************************
**Michael Patson
**Assignment 9.b
**November 22nd 2017

Write a function that uses postfix notation, remembering postfix soes from left to right
**************************************************/


#include <iostream>
#include <stack>
using namespace std;

double postfixEval(char *str){
   stack<double> NewStack;
   char *sArray = str;
   while(*sArray != '\0'){
       if(*sArray >= '0' && *sArray <= '9'){
           int num = 0;
           while(*sArray >= '0' && *sArray <= '9' && *sArray != '\0'){
               num *= 10;
               num += *sArray - '0';
               sArray++;
           }
           NewStack.push(num);
       }
       if(*sArray == '+' || *sArray == '-' || *sArray == '*' || *sArray == '/'){
           double a, b;
           a = NewStack.top();
           NewStack.pop();
           b = NewStack.top();
           NewStack.pop();

           if(*sArray == '+'){
               NewStack.push(b + a);
           }
           if(*sArray == '-'){
               NewStack.push(b - a);
           }
           if(*sArray == '*'){
               NewStack.push(b * a);
           }
           if(*sArray == '/'){
               NewStack.push(b / a);
           }
       }
       sArray++;
   }
   return NewStack.top();
}

/*

testing

int main(){
   char x[] = "25 2 *";
   cout << postfixEval(x) << "\n";
}

*/