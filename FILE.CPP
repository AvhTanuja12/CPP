#include<iostream.h>
#include<fstream.h>
int main()
{
char sname[20]="SYBBA",line[20];
ofstream outfile;
outfile.open("tanuja.txt");
outfile<<sname;
outfile.close();
ifstream infile;
infile.open("tanuja.txt");
infile.getline(line,20);
cout<<line;
infile.close();
return 0;
}









