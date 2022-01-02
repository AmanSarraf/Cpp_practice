#include<fstream>
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void write()
{
    string stmt;
    //cin>>stmt;     this will take only one word not statement
    getline(cin,stmt);   // this is for statements  
ofstream lol;
    lol.open("file1.txt");
    lol<<stmt;
    lol.close();


}

void read()
{
    char ch;
    ifstream lil;
    lil.open("file1.txt");
    if(!lil)
    {
        cout<<"Requested file not found";

    }
    else
    {
    
        ch=lil.get();

        while(!lil.eof())
        {
            cout<<ch<<endl;
            ch=lil.get();

           
        }

    }

    lil.close();

}
int main()
{
    write();
    getch();
    read();
  
}