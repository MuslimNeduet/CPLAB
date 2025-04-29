#include<iostream>
#include<conio.h>
using namespace std;
#define LIM 10
int main(void)
{
 float num[LIM];
 int index_count;
 for(index_count=0;index_count<LIM;index_count++)
 {
 num[index_count]=(index_count+1)*2;
 }
 cout<<"\nPress any key to continue";
 getch();
 for(index_count=0;index_count<LIM;index_count++)
 {
 cout<<"\nElement no."<<index_count<<" = "<<num[index_count];
 }
 getch();
 return 0; }
