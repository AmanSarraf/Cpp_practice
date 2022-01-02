#include<fstream>
#include<iostream>
using namespace std;
void write()
{

    char ch[100];
    ofstream fout;
    fout.open("file2.txt",ios::out);

    cout<<"Enter charecters\n";
    gets(ch);

    fout<<ch;

    fout.close();

}

void read()
{
 
 char ch;
 ifstream fin;
 fin.open("file2.txt",ios::in);
 if(!fin)
 {
     cout<<"No file found";
 }
 else
 {

     fin.seekg(2);
     cout<<fin.tellg();
     ch=fin.get();
     
     while(!fin.eof())
     {
         cout<<"="<<ch<<"\n";
         
         cout<<fin.tellg();
         ch=fin.get();
     }


 }

}
int main()
{
    write();
    read();
}
