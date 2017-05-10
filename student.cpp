#include<iostream>
using namespace std;
#include<fstream>
#include"add.h"
#include"display.h"
#include<stdlib.h>
struct student
{
    int stno;
    char stname[20];
    int c;
    char sec;
    int marks[6];
}s;
void add();
void display();
int main()
{
    int choice;
    system("cls");
    do
    {
        cout<<"\n\n\t\tSTUDENTS INFORMATION";
        cout<<"\n";
        cout<<"\t\t1.ADD RECORD"<<endl;
        cout<<"\t\t2.DISPLAY"<<endl;
        cout<<"\t\t3.EXIT"<<endl;
        cout<<"\t\tENTER YOUR CHOICE"<<endl;
        cout<<"\t\t";
        cin>>choice;
        system("cls");
        switch(choice)
        {
        case 1:
            add();
            cout<<"\t\tRECORD SAVED";
            break;
        case 2:
            display();
            break;
        case 3:
            break;
        default:
            cout<<"\t\tSORRY!TRY AGAIN";
            break;
        }
    }while(choice!=3);
   return 0;
}
