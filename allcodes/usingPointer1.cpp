//using pointers

#include<iostream>
using namespace std;
void fun(int *p){
	*p= *p+5;

}
int main(){
	int x= 10;
	cout<<x<<endl;
	fun(&x);
	cout<<x;
	return 0;
}

