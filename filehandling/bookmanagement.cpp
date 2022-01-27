#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class book
{
  string bookname;
  int bookid;
  float bookprice;
  public:
  void inputbook();
  void savebook();
  void showbook();
  void viewallbook();
  void searchbook();
  void deletebook();
  void editbook();
};
void book::inputbook()
{
    string n;
    int id;
    float p;
    cout<<"Enter Book_name:\n";
    cin>>n;
    bookname=n;
    cout<<"Enter Book_id:\n";
    cin>>id;
    bookid=id;
    cout<<"Enter Book_price:\n";
    cin>>p;
    bookprice=p;


}
void book::showbook()
{
  cout<<"Book ID = "<<bookid<<endl;
  cout<<"Book Name = "<<bookname<<endl;
  cout<<"Book Price = "<<bookprice<<endl;
}
void book::savebook()
{
 ofstream fout;
 fout.open("booksave.dat",ios::app|ios::binary);
 fout.write((char*)this,sizeof(*this));
 fout.close();


}
void book::viewallbook()
{
    ifstream fin;
    fin.open("booksave.dat",ios::in);
    if(!fin)
    {
        cout<<"File not found";
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showbook();
            fin.read((char*)this,sizeof(*this));
            
        }
    }
    fin.close();
}
void book::searchbook()
{
   int i;
   cout<<"Entered the ID of book to search";
   cin>>i;
   ifstream fin;
   fin.open("booksave.dat",ios::in);

fin.read((char*)this,sizeof(*this));
while(!fin.eof())
{
    if(this->bookid==i)
    {
        showbook();
    }
    // else
    // {
    //     cout<<"no data found";
    // }
    fin.read((char*)this,sizeof(*this));

}
fin.close();


}
void book::deletebook()
{
    int i;
    cout<<"Enter the id of the boook you want to delete";
    cin>>i;
     ifstream fin;
   fin.open("booksave.dat",ios::in);

fin.read((char*)this,sizeof(*this));
while(!fin.eof())
{
    if(this->bookid==i)
    {
        showbook();
    }
    fin.read((char*)this,sizeof(*this));

}
fin.close();

}





int main()
{
    book b1;
//    b1.inputbook();
//     b1.savebook();
    ///b1.viewallbook();
    b1.searchbook();

}