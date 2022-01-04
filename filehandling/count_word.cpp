#include<fstream>
#include<iostream>
using namespace std;

void write()
{
   char ch[100];
   ofstream fout;
   fout.open("word_count.txt",ios::out);
   cout<<"write\n";
   gets(ch);
   fout<<ch;
   fout.close();
}

void show()
{
  ifstream fin;
  fin.open("word_count.txt",ios::in);
  if(!fin)
  {
      cout<<"File not found";
  }
  
  else
  {
      char c;
      c=fin.get();
      while(!fin.eof())
      {
          cout<<c;
          c=fin.get();

      }

  }
  fin.close();
}

void count()
{
   int word=1,line=1;
   char ch;
   ifstream fin;
   fin.open("word_count.txt",ios::in);
   fin.seekg(0,ios::beg);
  if(!fin)
  {
      cout<<"File not found";
  }
  
  else
  {
      while(fin)
 {
  ch=fin.get();
  if(ch==' '||ch=='\t')
   word++;
   if(ch=='\n'||ch=='\0')
   line++;

 } 
  }
  cout<<"\nWords="<<word<<"\n";
  cout<<"\nLines="<<line<<"\n";
  fin.close();
  
 
}

int main()
{
    write();
    show();
    count();
}





