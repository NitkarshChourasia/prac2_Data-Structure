#include<iostream.h>
#include<conio.h>
void tower(int,char,char,char);
int main()
{
clrscr();
int num;
cout<<"enter the number of disks:";
cin>>num;
cout<<"the squence of moves involved in the towers of the hanoi are:\n";
tower(num,'A','C','B');
return 0;
}
void tower(int num,char frompeg,char topeg,char auxpeg)
{
if(num==1)
{
cout<<"\n move disk 1 from peg "<<frompeg<<" to peg "<<topeg;
return;
}
tower(num-1,frompeg,auxpeg,topeg);
cout<<"\n move disk "<<num<<" frompeg "<<from peg<<" to peg "<<topeg;
tower(num-1,auxpeg,topeg,frompeg);
getch();
}
