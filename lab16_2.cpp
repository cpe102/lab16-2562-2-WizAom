#include<iostream>
using namespace std;

void myString(char *&p,int N){
	char a='A';
	p= new char [N];
	for(int i=0;i<N;i++){
		p[i]=a;
		a++;
	}
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
