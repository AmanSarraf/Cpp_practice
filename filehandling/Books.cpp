//Object by Object read and writing


#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
class book
{

    char bookname[100];
    int bookid;
    float price;

   public:

   void setbook(int a , char *c , float p)
   {
       strcpy(bookname,c);
       bookid=a;
       price=p;

   } 

   void showbook()
   {
       cout<<"=======The book details are as=========\n 1.bookname ="<<bookname<<"\n2.bookid ="<<bookid<<"\n3.bookprice ="<<price;
   }


   // for saving non primitive type of data to file we will use write fun or << can also be used but its overloading is required
   void savebook()
   {
       ofstream fout;
       fout.open("book.dat",ios::app|ios::binary);  /// .dat for data file 
       fout.write((char*)this,sizeof(*this));    /// dont write fout<<b1
                                  // since write don't know what type of address will come so the pointer is typecasted as char
                        //1st arg is address of the object jiska data file me write krna hai 
                        //2nd arg is the size of the data

     
     fout.close();

   }

   void viewallbook()
   {
       ifstream fin;
       fin.open("book.dat",ios::in);
       if(!fin)
       {
           cout<<"No bookfile available";

       }
       else
       {
        //    char ch;
        //    ch=fin.get()//read from file charecters 
        //we have to read from file and put in object

        fin.read((char*)this,sizeof(*this)); //reading from file is done here and putting in object 
                                             //this will bring first data in first object

      while(!fin.eof())
      {
          showbook();   //displaying the data
          fin.read((char*)this,sizeof(*this)); //reading next data
      }



       }

       fin.close();
   }

};

int main()
{
   book b1;
   b1.setbook(1,"cpp",275.68);
   b1.savebook();
   b1.setbook(2,"Swift",475.68);
   b1.savebook();
   b1.setbook(3,"Go lng",375.68);
   b1.savebook();
   b1.setbook(4,"c lng",175.68);
   b1.savebook();
   b1.setbook(5,"java",675.68);
   b1.savebook();
   b1.viewallbook();
}
