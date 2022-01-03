#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class fruit
{
    char name[100];
    int id;
    float price;

    public:
    void setfruit()
    {
        int a;
        char c[50];
        float p;
        cout<<"\nId=";
        cin>>a;
        cin.ignore();
        cout<<"\nName=";
        
        gets(c);
        cout<<"\nPrice=";
        cin>>p;
        id=a;
        strcpy(name,c);
        price=p;



    }
    void showfruit()
    {
        cout<<name<<" "<<id<<" "<<price<<endl;
    }

    void savedata()
    {
        ofstream fout;
        fout.open("fruit.dat",ios::app|ios::binary);
        fout.write((char*)this,sizeof(*this));
        fout.close();

    }

    void copydata()
    {
        string line;
        ifstream fin;
        
        fin.open("fruit.dat",ios::in);

        ofstream copin;
            copin.open("copy.dat",ios::app|ios::binary);

         if(fin&&copin)
         {
             while(getline(fin,line))
             {
                 copin<<line<<endl;
             }
             cout<<"copy finished";
         }   

         else
         {
             cout<<"Can't read from file";
         }

         fin.close();
         copin.close();  


    }

    void showalldata()
    {
        ifstream fin;
        cout<<"\nfrom original file";
        fin.open("fruit.dat",ios::in);
        if(!fin)
        {
            cout<<"file not found";
        }
        else
        {
            fin.read((char*)this,sizeof(*this));
            while(!fin.eof())
            {
                showfruit();
                fin.read((char*)this,sizeof(*this));
        
            }


        }
        fin.close();

        cout<<"\nfrom copied file";

          fin.open("copy.dat",ios::in);
        if(!fin)
        {
            cout<<"file not found";
        }
        else
        {
            fin.read((char*)this,sizeof(*this));
            while(!fin.eof())
            {
                showfruit();
                fin.read((char*)this,sizeof(*this));
        
            }


        }
        fin.close();
    }
};

int main()
{
    fruit f1;
    
    f1.setfruit();
    // f1.showfruit();
    f1.savedata();
    f1.copydata();
   
   f1.setfruit();
   f1.savedata();
   f1.copydata();
   f1.setfruit();
   f1.savedata();
    f1.copydata();
f1.showalldata();
}