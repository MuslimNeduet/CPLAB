#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
 const int MAX=100;
 char name[MAX];
 int index;
 int maxindex;
 cout<<"\nEnter your name (press ESC to stop)\n";
 index=0;
 name[index]=getche();
 while( name[index]!=27 )
 {
 index++;
 if(index==100)
 {
 cout<<"\nArray Overflow\n";
 break;
 }
 name[index]=getche();
 }
 maxindex=index;
 for(index=0; index<maxindex; index++)
 {
 if((name[index]>=97)&&(name[index]<=122))
 {
 name[index]=name[index]-32;
 }
 }
 cout<<"\nPrinting the processed array.\n";
 for(index=0;index<maxindex; index++)
 {
 cout<<name[index];
 }
 return 0;
}
