#include<fstream>
#include<iostream>
using namespace std;
void write()
{
    ofstream fout;
    fout.open("orignal.txt",ios::out);
    char ch[100];
    cout<<"Write something\n";
    gets(ch);
    fout<<ch;
    fout.close();

}
//for coing charecters from a file to another
void copy()
{
    string line;
    ifstream read;
    ofstream copy;
    read.open("orignal.txt",ios::in);
    copy.open("copy.txt",ios::out);
    if(read&&copy)
    {
        while(getline(read,line))
        {
            copy<<line<<endl;
        }
        cout<<"Copy successful";
    }
    else
    {
        cout<<"Can't read from file";
    }
    read.close();
    copy.close();
}
void show()
{
    ifstream fin;
    fin.open("copy.txt",ios::in);
    if(!fin)
    {
        cout<<"file not found";
    }
    else{
        char ch;
        ch=fin.get();
    
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();
}

int main()
{
    write();
    copy();
    show();
}