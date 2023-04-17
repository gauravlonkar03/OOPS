// Imagine a publishing company which does marketing for book and audio cassette versions. Create a class publication that stores the title (a string) and price (type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float). Write a program that instantiates the book and tape classes, allows user to enter data and displays the data members. If an exception is caught, replace all the data member values with zero values.
#include<iostream>
#include<string>
using namespace std;
class Publication{
    public:
    string bname,aname;
    float bprice ,aprice;
    void setbookdata(){
        cout<<"ENter the name of the book : "<<endl;
        cin.ignore();
        getline(cin,bname);
        cout<<"Enter the price of the book"<<endl;
        cin>>bprice;

    }
    void setaudiodata(){
        cout<<"Enter the name of casette : "<<endl;
        cin.ignore();
        getline(cin,aname);
        cout<<"Enter the price of the audio : "<<endl;
        cin>>aprice;
    }
   

   

};
class Book :public Publication{
    public:
    int pages;
    void setbdata(){
    cout<<"Enter no. of pages of the book"<<endl;
    cin>>pages;
    }
    void displaybdata(){
        cout<<"The name of the book is : "<<bname<<endl;
        cout<<"The price of the book is : "<<bprice<<endl;
        cout<<"The pages of the book is : "<<pages<<endl;
    }
    };
class Tape: public Publication{
    public:
    float audio;
    void setadata(){
        cout<<"Enter playing time of audio"<<endl;
        cin>>audio;
    }
    
     void displayadata(){
        cout<<"The name of the audio is : "<<aname<<endl;
        cout<<"The price of the audio is : "<<aprice<<endl;
        cout<<"The duration of the audio is : "<<audio<<endl;
    }
};
int main(){
    cout<<"WELCOME"<<endl;
    Book b[10];
    Tape t[10];
    int ch;
    int f=0,i;
    int g=0;
    while(1){
        cout<<"Please Enter a choice: "<<endl;
        cout<<"1->BOOKS |2->AUDIO|3->DISPLAY INFORMATION|4->EXIT"<<endl;
        cin>>ch;
        if(ch==1){
            
            b[f].setbookdata();
            b[f].setbdata();
           
            f++;
            
        }
        else if(ch==2){
            
            t[g].setaudiodata();
            t[g].setadata();
            
            g++;
        
        }
        else if(ch==3){
            for(i=0;i<f;i++){
                b[i].displaybdata();
                cout<<endl;
                
            }
            for(i=0;i<g;i++){
                t[i].displayadata();
                cout<<endl;
            }
        }
        else if(ch==4){
            cout<<"EXITED"<<endl;
            break;
        }

    }
    return 0;
}