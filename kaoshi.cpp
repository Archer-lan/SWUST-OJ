#include<iostream>
#include<cstring>
#include<cstdlib> 
#include<ctime>
using namespace std; 

int main(){
	srand((int)time(0));
	for(int i=0;i<20;i++){
		int num = (rand() % (20 - 1 + 1)) + 1;
		cout<<num<<endl;
	}
	return 0;
}
