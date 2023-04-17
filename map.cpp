#include<map>
#include<iostream>
#include<string>
using namespace std;
void search(){}
int main(){
    string s;
    char a;
    map<string,int> m1;
    m1["Maharashtra"]=1000234;
    m1["Telangana"]=347284;
    m1["Delhi"]=84395;
    m1["JammuandKashmir"]=347829;
    m1["Punjab"]=743829;
    m1["Kerala"]=437892;
    cout<<"Enter the name of the state of which population you want:"<<endl;
    cin>>s;
    int flag=0;
    map<string,int>::iterator it;
    for(it=m1.begin();it!=m1.end();it++){
            if((*it).first==s){
                flag=1;
                break;
            }
    }
    if(flag==1){
        cout<<"THE population is"<<(*it).second<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
    }