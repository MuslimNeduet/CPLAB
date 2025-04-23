#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
 char guess;
 cout<<"Press any key from keyboard :";
 cout<<"\n This program shall end only"
 <<" when you press the secret key";
 guess=getche();
 while( guess!='x' )
 {
 cout<<"\n Wrong input, try another key:";
 guess=getche();
 }
 cout<<"\nEureka! You have discovered it.";
 getch();
 return 0;
}
