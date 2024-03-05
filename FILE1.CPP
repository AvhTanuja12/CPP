#include<conio.h>
#include<fstream.h>
int main()
{
char sname[20]="SYBBACA";
ofstream outfile;
outfile.open("tanuja.txt");
outfile.write((char *)& sname,sizeof(sname));
outfile.close();
ifstream infile;
infile.open("tanuja.txt");
infile.read((char *)& sname,sizeof(sname));
cout<<sname;
infile.close();
return 0;
getch();
}










