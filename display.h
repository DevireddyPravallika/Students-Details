#include<iostream>
using namespace std;
#include<stdlib.h>
struct student2
{
    int stno;
    char stname[20];
    char cl[10],sec[5];
    int a[5];
}s2;
void display()
{
    int c;
    ifstream fin,f;
    while(1)
    {
        cout<<"\t\t1.DISPLAY ALL RECORDS"<<"\n"<<"\t\t2.DISPLAY SPECIFIC RECORD"<<endl;
        cout<<"\t\tENTER CHOICE"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            system("cls");
            int ch;
            fin.open("student.dat",ios::in);
            if(fin.eof())
            {
                cout<<"\t\terror opening file STUDATA.CPP"<<endl;
            }
            while(fin)
            {
                fin.read((char *)&s2,sizeof(s2));
                if(!fin)
                break;
                cout<<"                "<<"STUDENT NUMBER IS"<<" "<<"STUDENT NAME IS"<<" "<<"STUDENT CLASS IS"<<" "<<"STUDENT SECTION"<<" "<<"STUDENT MARKS LIST"<<endl;
                cout<<"                "<<s2.stno<<" "<<s2.stname<<" "<<s2.cl<<" "<<s2.sec;
                for(int i=0;i<5;i++)
                    cout<<s2.a[i]<<" ";
                cout<<endl;
            }
            fin.close();
            break;
            case 2:
            system("cls");
            int n;
            f.open("student.dat",ios::in);
            if(f.eof())
            {
                cout<<"\t\terror opening file STUDATA.CPP"<<endl;
            }
            cout<<"\t\tEnter student number ";
            cin>>n;
            while(f)
            {
                f.read((char *)&s2,sizeof(s2));
                if(!f)
                break;
                if(n==s2.stno)
                {
                    cout<<"                "<<s2.stno<<" "<<s2.stname<<" "<<s2.cl<<" "<<s2.sec;
                    for(int i=0;i<5;i++)
                        cout<<s2.a[i]<<" ";
                    cout<<endl;
                }
            }
            f.close();
            break;
            default:
                return;
        }
    }
}
