// Develop an object oriented program in C++ to create a database of student information system containing the following information: Name, Roll number, Class, division, Date of Birth, Blood group, Contact address, telephone number, driving license no. and other. Construct the database with suitable member functions for initializing and destroying the data viz constructor, default constructor, Copy constructor, destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation operators-new and delete.
#include<iostream>
#include<string.h>
using namespace std;
static int count=0;
class Student;
class Person{
    string name,dob,bg,addr,num,lis;
    public:
    Person(){}
    Person(string name){
        this->name=name;
        name="",dob="",bg="",addr="",num="",lis="";
    }
    Person(Person &a){
        name=a.name;
        dob=a.dob;
        bg=a.bg;
        addr=a.addr;
        num=a.num;
        lis=a.lis;
    }

    friend class Student;
};
class Student{
    int roll;
    string cn;
    char d;
    char *div;
    public:
    
    Student(){
        Person();
        roll=0;
        cn="";
        div=NULL;
        count++;
    }
   
    inline void getdata(Person &p){
        cout<<"Enter the name of the student"<<endl;
        cin>>p.name;
        cout<<"Enter the date of birth of the student"<<endl;
        cin>>p.dob;
        cout<<"Enter the blood group of the student"<<endl;
        cin>>p.bg;
        cout<<"Enter the contact address of the student"<<endl;
        cin>>p.addr;
        cout<<"Enter the telephone number of the student"<<endl;
        cin>>p.num;
        cout<<"Enter the driving liscence number of the student"<<endl;
        cin>>p.lis;
        cout<<"Enter the roll number of the student"<<endl;
        cin>>roll;
        cout<<"Enter the class number of the student"<<endl;
        cin>>cn;
        cout<<"Enter the division of the student"<<endl;
        cin>>d;
        div=&d;
    }
    inline void displaydata(Person &p){
        cout<<"This is the database of "<<p.name<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"Name : "<<p.name<<endl;
        cout<<"Date of Birth : "<<p.dob<<endl;
        cout<<"Blood Group : "<<p.bg<<endl;
        cout<<"Address : "<<p.addr<<endl;
        cout<<"Telephone number : "<<p.num<<endl;
        cout<<"Liscence number : "<<p.lis<<endl;
        cout<<"Roll no : "<<roll<<endl;
        cout<<"Class Number : "<<cn<<endl;
        cout<<"Division : "<<*div<<endl;
        cout<<"----------------------------------------"<<endl;

    }
    
    ~Student(){
        delete(div);
    } 
    static int get(){
        return count;
    }
    
};

int main(){
	int ai;
    Person *p[10];
    Student *s[10];
    int ch;
    int f=0;
    while(1){
        cout<<"Enter the choice: 1->Takiing student info|2->Display the choice|0->Exit"<<endl;
        cin>>ch;
        if(ch==1){
            s[f]=new Student();
            p[f]=new Person();
            s[f]->getdata(*p[f]);
            f++;
        }
        else if(ch==2){
            for(int i=0;i<f;i++){
            	cout<<"This is the data ofstudent "<<s[f]->get()<<endl;
            	cout<<"------------------------------"<<endl;
                s[i]->displaydata(*p[i]);
                cout<<"-------------------------------"<<endl;
            }
           
            
        }
        else if(ch==0){
            cout<<"EXITED"<<endl;
            break;
        }
    }
    
    return 0; 
}
