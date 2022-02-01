#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void login();
void registeration();
void forgot();
int main()
{
   

   cout<<"\t\t\t____________________LOGIN/REGINSTRATION______________________\n\n\n\n";
cout<<"\t\t\t\t\tSelect one of the option\n\n";
cout<<"\t\t\t\t1.LOGIN\n";
cout<<"\t\t\t\t2.REGISTER\n";
cout<<"\t\t\t\t3.FORGOT PASSWORD\n";
cout<<"\t\t\t\t4.EXIT\n";


int choice;
cin>>choice;

switch(choice)
{
    case 1: login();
            break;
    case 2: registeration();
            break;
    case 3: forgot();
            break;
    case 4: cout<<"\t\t\t\t\tThankyou\n\n\n";
            break;
    default:
            system("cls");
            cout<<"Please enter from above option"; 
            main();               
    

}


}

void login()
{
        int count;
        string userid,password,id,pass;
        system("cls");
        cout<<"\t\t\tPlease Enter the Username and Password :"<<endl;
        cout<<"\t\t\tUsername :";
        cin>>userid;
        cout<<"\t\t\tPassword :";
        cin>>password;
        ifstream fin("record.txt",ios::in);
        while(fin>>id>>pass)
        {
                if(id==userid&&pass==password)
                {
                        count=1;
                        system("cls");
                }
        }
        fin.close();
        if(count==1)
        {
                cout<<"\n Success :";
                main();
        
        }
        else
        {
                cout<<"\nLogin error";
        }
}

void registeration()
{
       string ruserid,rpassword,rid,rpass;
       system("cls");
       cout<<"\t\t\tEnter the username: ";
       cin>>ruserid;
       
       cout<<"\t\t\tEnter the Password: ";
       cin>>rpassword;

       ofstream f1("record.txt",ios::app);
       f1<<ruserid<<' '<<rpassword<<endl;
       system("cls");
       cout<<"\n\t\t\tRegistration Successful\n";
       main();

}
void forgot()
{
        int option;
        system("cls");

        cout<<"\t\t\tYou Forgot the Password No Worries";
        cout<<"Press 1 to search your id by username"<<endl;
        cout<<"Press 2 to go back to the main menue"<<endl;
        cout<<"\t\t\tEnter your choice";
        cin>>option;
        switch(option)
        {
                case 1:
                {
                     int count=0;
                     string suserid,sid,spass;
                     cout<<"Enter the Username that you remmembered";
                     cin>>suserid;
                     ifstream f2("record.txt");
                     while(f2>>sid>>spass)
                     {
                             if(sid==suserid)
                             {
                                     count=1;
                             }
                     }
                     f2.close();
                     if(count==1)
                     {
                             cout<<"\n\nYour Account is found \n and your password is :"<<spass;
                             main();
                     }
                     else{
                             cout<<"Account doesnot exists";
                     }
                     break;

                } 
                case 2:
                {
                        main();
                }
                default:
                cout<<"\t\t\t\t\tWrong choice please try again";   
        }

}