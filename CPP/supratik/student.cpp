#include <iostream>
#include<string>
using namespace std;

class student{
    protected:
    int roll,age;
    string name;
    int cur_sem;
    int cgpa;
    public:
    virtual void add_details()=0;
    virtual void add_sem_details()=0;
    virtual void view_details()=0;
    virtual void view_sem_details()=0;
};
class semester{
    float sgpa;
    string *subjects;
    float *marks;
    int subnum;
    public:
    void add_sub()
    {
        cout<<"Enter No. of Subjects:";
        cin>>subnum;
        subjects = new string[subnum];
        for(int i=0;i<subnum;++i)
        {
            cout<<"Enter Subject ",i+1,": ";
            getline(cin,subjects[i]);
        }
    }
    void view_sub()
    {
        cout<<"Subjects:"<<endl;
        for(int i=0;i<subnum;++i)
            cout<<subjects[i];
    }
    void add_marks()
    {
        float sum=0;
        cout<<"Enter the Marks:"<<endl;
        for(int i=0;i<subnum;++i)
        {
            cout<<subjects[i]<<": ";
            cin>>marks[i];
            sum+=marks[i];
        }
        sgpa=sum/subnum;
    }
    void view_marks()
    {
        cout<<"Marks:"<<endl;
        for(int i=0;i<subnum;++i)
        {
            cout<<subjects[i]<<": "<<marks[i]<<endl;
        }
        cout<<endl<<"SGPA: "<<sgpa<<endl;
    }
};
class ug: public student{
    protected:
    semester *ob[8];
    
    public:
    void add_details()
    {
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Roll: ";
        cin>>roll;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Current Sem: ";
        cin>>cur_sem;
    }
    void add_sem_details()
    {
        int i;
        cout<<"Enter Semester Number: ";
        cin>>i;
        if(i<=cur_sem)
        {
            ob[i]=new semester;
            int j;
            cout<<"1 - Add Subjects\n2 - Add Marks"<<endl;
            cout<<"Enter Choice: ";
            cin>>j;
            switch(j)
            {
                case 1:
                ob[i]->add_sub();
                break;
                case 2:
                ob[i]->add_marks();
                break;
            }
        }
        else
            return;
    }
    void view_details()
    {
        cout<<"Student Name: ",name;
        cout<<"Roll: ",roll;
        cout<<"Age: ",age;
        cout<<"Current Sem: ",cur_sem;
    }
    void view_sem_details()
    {
        int i;
        cout<<"Enter Semester Number: ";
        cin>>i;
        if(i<=cur_sem)
        {
            ob[i]=new semester;
            int j;
            cout<<"1 - Add Subjects\n2 - Add Marks"<<endl;
            cout<<"Enter Choice: ";
            cin>>j;
            switch(j)
            {
                case 1:
                ob[i]->add_sub();
                break;
                case 2:
                ob[i]->add_marks();
                break;
            }
        }
        else
            return;
    }

};
class pg: public student{
    protected:
    semester *ob[4];
    public:
    void add_details()
    {
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Roll: ";
        cin>>roll;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Current Sem: ";
        cin>>cur_sem;
    }
    void add_sem_details()
    {
        int i;
        cout<<"Enter Semester Number: ";
        cin>>i;
        if(i<=cur_sem)
        {
            ob[i]=new semester;
            int j;
            cout<<"1 - Add Subjects\n2 - Add Marks"<<endl;
            cout<<"Enter Choice: ";
            cin>>j;
            switch(j)
            {
                case 1:
                ob[i]->add_sub();
                break;
                case 2:
                ob[i]->add_marks();
                break;
            }
        }
        else
            return;
    }
    void view_details()
    {
        cout<<"Student Name: ",name;
        cout<<"Roll: ",roll;
        cout<<"Age: ",age;
        cout<<"Current Sem: ",cur_sem;
    }
    void view_sem_details()
    {
        int i;
        cout<<"Enter Semester Number: ";
        cin>>i;
        if(i<=cur_sem)
        {
            ob[i]=new semester;
            int j;
            cout<<"1 - Add Subjects\n2 - Add Marks"<<endl;
            cout<<"Enter Choice: ";
            cin>>j;
            switch(j)
            {
                case 1:
                ob[i]->add_sub();
                break;
                case 2:
                ob[i]->add_marks();
                break;
            }
        }
        else
            return;
    }
};

int main ()
{
    int n,i,j;
    student *ptr[n];
    while(true)
    {
        cout<<"Choose from the following:"<<endl;
        cout<<"1 - Add UG Student Details\n2 - View UG Student Details\n3 - Add PG Student Details\n4 - View PG Students"<<endl;
        switch(i)
        {
            case 1:
            cout<<"Enter No, of Students: ";
            cin>>n;
            for(j=0;j<n;j++)
            {
                ptr[j]=new ug;
                while(true)
                {
                    
                }
            }
        }
    }
    return 0;
}