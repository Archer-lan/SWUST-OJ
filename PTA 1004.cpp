#include<iostream>
#include<cstring>
using namespace std;
struct students{
	char name[15];
	char ID[15];
	int grades;
};
students stud[10001];
int main(){
	int n,max,maxk,mink,min;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stud[i].name>>stud[i].ID>>stud[i].grades;
	}
	max=-1;
	min=101;
	for(int i=0;i<n;i++){
		if(stud[i].grades>max){
			max=stud[i].grades;
			maxk=i;
		}
		if(stud[i].grades<min){
			min=stud[i].grades;
			mink=i;
		}
	}
	cout<<stud[maxk].name<<" "<<stud[maxk].ID<<endl;
	cout<<stud[mink].name<<" "<<stud[mink].ID<<endl;
	return 0;
}
