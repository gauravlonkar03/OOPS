#include<iostream>
using namespace std;

class Complex{
	private:
		float real;
		float img;
	public:
		Complex(){
			real=0.0;
			img=0.0;
		}
		friend istream& operator >>(istream& in,Complex &c);
		friend ostream& operator <<(ostream& out,Complex &c);
		friend Complex operator +(Complex c1,Complex c2);
		friend Complex operator -(Complex c1,Complex c2);
		friend Complex operator *(Complex c1,Complex c2);
		
};
istream& operator >>(istream& in,Complex &c){
	cout<<"Enter the real part"<<endl;
	in>>c.real;
	cout<<"Enter the imaginary part "<<endl;
	in>>c.img;
	return in;
}
ostream& operator <<(ostream& out,Complex &c){
	out<<"The complex no is"<<c.real<<"+"<<c.img<<"i"<<endl;
}
Complex operator +(Complex c1,Complex c2){
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
Complex operator -(Complex c1,Complex c2){
	Complex temp;
	temp.real=c1.real-c2.real;
	temp.img=c1.img-c2.img;
	return temp;
}
Complex operator *(Complex c1,Complex c2){
	Complex temp;
	temp.real=(c1.real*c2.real)-(c1.img*c2.img);
	temp.img=(c1.real*c2.img)+(c1.img*c2.real);
	return temp;
}
int main(){
	Complex c1,c2,c3;
	cin>>c1;
	cout<<c1;
	cout<<endl;
	cin>>c2;
	cout<<c2;
	cout<<endl;
	cout<<"Addition"<<endl;
	c3=c1+c2;
	cout<<c3;
	cout<<endl;
	cout<<"Subtraction"<<endl;
	c3=c1-c2;
	cout<<c3;
	cout<<endl;
	cout<<"Multiplication"<<endl;
	c3=c1*c2;
	cout<<c3;
	cout<<endl;
	return 0;
}
