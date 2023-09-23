#include <iostream>  
using namespace std; 

int myintvar = 345;
float myfloatvar = 50.89;
char mycharvar = 'P';
string mystr = "ENTC";
int yourint;
float yourfloat;
char yourchar;
string yourstring;

int main() {  
     cout<<"my integer variable is " << myintvar <<"\n";
    cout<<"My float variable is " << myfloatvar <<"\n";
    cout<<"My character variable is " << mycharvar <<"\n";
    cout<<"Size of that character is " << sizeof(mycharvar) <<"\n";
    cout<<"The string is = "<<mystr <<"\n";
    cout<<"Size of that string is " << sizeof(mystr) <<"\n";
    
    cout<<"Name an integer value: ";
    cin>>yourint;
    cout<<"float value: ";
    cin>>yourfloat;
    cout<<"Name a character: ";
    cin>>yourchar;
    cout<<"Write a string: ";
    cin>>yourstring;
    cout<<"\n the integer value is "<<yourint<<", float value: "<<yourfloat <<", the character was "<<yourchar<<" and that string was "<<yourstring;    
    return 0;
}
 
