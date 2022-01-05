#include<fstream>
#include<iostream>
#include<string>
using namespace std;
void write()
{
    ofstream fout;
    char ch[100];
    fout.open("search.txt",ios::out);
    cout<<"Write\n";
    gets(ch);
    fout<<ch;
    fout.close();

}

void search()
{
    string c;
    string word;
    ifstream fin;
    fin.open("search.txt",ios::in);
    cout<<"Enter the word to search\n";
    cin>>word;
    if(fin)
    {
        getline(fin,c);
        //use this getline in while condition if you want to perform some task meanwhile
    }
    
     
    
    //now we need to search the word in file
    

    // char *temp;
    // temp=str.find(c,word);
       int t;
    t=c.find(word);

    // cout<<t;  this returns the position 
   if(t<0||t>100)
   {
     cout<<word<<" is not present in the sentence";
   }
   else
   {
       cout<<word<<" is present";
   }
    fin.close();
    

}
int main()
{
    write();
    search();
}