#include<iostream>
using namespace std;
#include<stdlib.h>
struct student2
{
    int stno;
    char stname[20];
    int c;
    char sec;
    int marks[5];
}s2;
void display()
{
    int c,class1;
    char section;
    ifstream fin,f;
    while(1)
    {
        cout<<"\t\t1.DISPLAY ALL RECORDS OF A CLASS"<<"\n"<<"\t\t2.DISPLAY SPECIFIC RECORD"<<endl;
        cout<<"\t\tENTER CHOICE"<<endl;
        cout<<"\t\t";
        cin>>c;
        switch(c)
        {
            case 1:
                system("cls");
                cout<<"\t\t ENTER THE CLASS TO BE DISPLAYED"<<endl;
                cout<<"\t\t";
                cin>>class1;
                cout<<"\t\t ENTER THE SECTION TO BE DISPLAYED"<<endl;
                cout<<"\t\t";
                cin>>section;
                fin.open("student.dat",ios::in);
                if(fin.eof())
                {
                    cout<<"\t\terror opening file STUDATA.CPP"<<endl;
                }
                printf("HAi");
                while(fin)
                {
                       fin.read((char *)&s2,sizeof(s2));
                        if(!fin)
                            break;
                        if(class1==s2.c && section==s2.sec)
                        {

                        cout<<"                "<<"STUDENT'S NUMBER IS"<<" "<<"STUDENT'S NAME IS"<<" "<<"STUDENT'S CLASS"<<" "<<"STUDENT'S SECTION"<<" "<<"STUDENT'S MARKS LIST"<<endl;
                        cout<<"                "<<s2.stno<<" "<<s2.stname<<" "<<s2.c<<" "<<s2.sec;
                        for(int i=0;i<6;i++)
                            cout<<s2.marks[i]<<" ";
                        cout<<endl;
                            n=0;
                        for(int i=1;i<=6;i++)
                        {
                            if(s2.marks[i]<24)
                            {
                                cout<<"\t\t FAIL";
                                break;
                            }
                            else
                                n=n+s2.marks[i];
                        }
                        int avg=0;
                        avg=n/6;
                        if(avg>75)
                            cout<<"\t\t"<<"Total is "<<n<<"Grade is A"<<endl;
                        else if(avg>=50 && avg<75)
                             cout<<"\t\t"<<"Total is "<<n<<"Grade is B"<<endl;
                        else if(avg>=35 && avg<50)
                            cout<<"\t\t"<<"Total is "<<n<<"Grade is C"<<endl;
                        else
                            {
                                cout<<"\t\tFAIL"<<endl;
                            }
                        }
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
                cout<<"\t\tENTER THE NUMBER OF STUDENT TO BE DISPLAYED"<<endl;
                cout<<"\t\t";
                cin>>n;
                while(f)
                {
                    f.read((char *)&s2,sizeof(s2));
                    if(!f)
                    break;
                    if(n==s2.stno)
                    {
                        cout<<"                "<<s2.stno<<" "<<s2.stname<<" "<<s2.c<<" "<<s2.sec;
                        for(int i=0;i<6;i++)
                            cout<<s2.marks[i]<<" ";
                        cout<<endl;
                        n=0;
                        for(int i=1;i<=6;i++)
                        {
                            if(s2.marks[i]<24)
                            {
                                cout<<"\t\t FAIL";
                                break;
                            }
                            else
                                n=n+s2.marks[i];
                        }
                        int avg=0;
                        avg=n/6;
                        if(avg>75)
                            cout<<"\t\t"<<"Total is "<<n<<"Grade is A"<<endl;
                        else if(avg>=50 && avg<75)
                             cout<<"\t\t"<<"Total is "<<n<<"Grade is B"<<endl;
                        else if(avg>=35 && avg<50)
                            cout<<"\t\t"<<"Total is "<<n<<"Grade is C"<<endl;
                        else
                            {
                                cout<<"\t\tFAIL"<<endl;
                            }
                    }
                }
            f.close();
            break;
            default:
                return;
        }
    }
}
