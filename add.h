#include<iostream>
using namespace std;
struct student1
{
    int stno;
    char stname[20];
    int c;
    char sec;
    int marks[6];
}s1;
void add()
{
    ofstream fout;
    int n=0;
    fout.open("student.dat",ios::app);
    if(fout.eof())
    {
        cout<<"\t\terror creating file STUDENT.CPP"<<endl;
    }
    cout<<"\t\tENTER STUDENT NUMBER:"<<endl;
    cout<<"\t\t";
    cin>>s1.stno;
    cout<<"\t\tENTER STUDENT NAME:"<<endl;
    cout<<"\t\t";
    cin>>s1.stname;
    cout<<"\t\tENTER STUDENT CLASS:"<<endl;
    cout<<"\t\t";
    cin>>s1.c;
    cout<<"\t\tENTER SECTION:"<<endl;
    cout<<"\t\t";
    cin>>s1.sec;
    cout<<"\t\tENTER MARKS IN 6 SUBJECTS:"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<"\t\t";
        cin>>s1.marks[i];
    }
    fout.write((char *)&s1,sizeof(s1));
    fout.close();
}
