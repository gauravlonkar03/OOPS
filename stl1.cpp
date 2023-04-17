#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class student{
	public:
		int rollno;
		string name;
		char dob[10];
		bool operator ==(const student &s1){
			return(rollno==s1.rollno);
			}
		friend istream& operator >>(istream &in,student &s);
		friend ostream& operator <<(ostream &out,student &s);
};
istream& operator >>(istream &in,student &s){
	cout<<"Enter the roll no. of the student : ";
	in>>s.rollno;
	cout<<"Enter the name of the student : ";
	in>>s.name;
	cout<<"Enter the dob of the student : ";
	cin>>s.dob;
	return in;
}
ostream& operator <<(ostream &out,student &s){
	out<<"\t\t"<<s.rollno<<"\t\t"<<s.name<<"\t"<<s.dob<<endl;
	return out;
}
vector<student> read(){
	student k;
	vector<student> j;
	int n;
	cout<<"How many student's data you want to enter :";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		j.push_back(k);
	}
	return j;
}
void printfunc(student &s){
	cout<<s;
	}
void print(vector<student>& j){
	cout<<"\t\tRoll no.\tName\tDOB"<<endl;
	for_each(j.begin(),j.end(),printfunc);
}


void search(vector<student>& j){
	student k;
	cout<<"Enter the roll no. you want to search";
	cin>>k.rollno;
	vector<student>::iterator it;
	it=find(j.begin(),j.end(),k);
	if(it!=j.end()){
		cout<<*it<<endl;
	}
	else{
		cout<<"roll no not found"<<endl;
	}
}
bool sortfunc(student &s1,student &s2){
	return(s1.rollno<s2.rollno);
}
void sort(vector<student>& j){
	sort(j.begin(),j.end(),sortfunc);
}

int main(){
	vector<student> s;
	int ch;
	do{
		cout<<"Enter the choice :"<<endl;
		cout<<"1->Fill data"<<endl<<"2->Display Data"<<endl<<"3->Search"<<endl<<"4->Sort Data"<<"5->Exit"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				s=read();
				break;
			case 2:
				print(s);
				break;
			case 3:
				search(s);
				break;
			case 4:
				sort(s);
				print(s);
				break;
		}
	}while(ch!=5);
	cout<<"EXITED"<<endl;
	return 0;
}

