#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int N){
	vector<int> a(N);
    for(int i=0;i<N;i++){
        a[i]=rand()%9;
    }
	return a;
}
void showVector(vector<int> a){
	cout << "[";
	for(int i=0;i<a.size();i++){
		cout << a[i] << " ";
	}
	cout << "]";
}
int dotProduct(vector<int> a,vector<int> b){
	int x;
    for(int i=0;i<a.size();i++){
		x+=a[i]*b[i];
	}
	return x;
}

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
