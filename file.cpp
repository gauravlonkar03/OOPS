#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    // string st="My name is Gaurav Lonkar";
     string st2;
    // ofstream out("sample.txt");
    // out<<st;
    ifstream in("sample.txt");
    getline(in,st2);
    cout<<st2;
    
    return 0;
}