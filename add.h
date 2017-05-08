#include<iostream>
using namespace std;
struct student1
{
    int stno;
    char stname[20];
    char cl[10],sec[5];
    int a[5];
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
    cin>>s1.cl;
    cout<<"\t\tENTER SECTION:"<<endl;
    cout<<"\t\t";
    cin>>s1.sec;
    cout<<"\t\tENTER MARKS IN 5 SUBJECTS:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\t\t";
        cin>>s1.a[i];
    }
    fout.write((char *)&s1,sizeof(s1));
    fout.close();
}
