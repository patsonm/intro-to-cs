/********************************************************************* 
** Author: Michael Patson
** Date: October 22, 2017
** Description: Assignment 5c selection sory
*********************************************************************/ 


#include<iostream>
#include<string>

using namespace std;


int compareCaps(string a, string b)
{

    for(int x=0; x<a.size() && x<b.size(); x++)
    {
        if(toupper(a[x]) > toupper(b[x])) 
            return 1;
        else if(toupper(b[x]) > toupper(a[x])) 
            return 0;
    
  
    if(x == a.size()-1) 
        return 0;
    else 
        return 1;}
}

int main(){
  
int key,n=5;
string temp;
string arr[] = {"Zebra", "alligator", "Lion", "tiger", "monkey"};
  
for(int i=0;i<n-1;i++){
key=i;
for(int j=i+1;j<n;j++){
if(compareCaps(arr[key], arr[j])){
key = j;
}
}
temp = arr[key];
arr[key] = arr[i];
arr[i] = temp;
}
  
cout << "Sorted array:\n";
for(int i=0;i<n;i++) cout << arr[i] << ", ";
cout << endl;
return 0;
}