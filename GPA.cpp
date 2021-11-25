//GPA GRADES
//A     -5
//B+    -4
//B     -3
//C     -2
//D     -1
//E & F - 0

#include<iostream>
using namespace std;
int main(){
	int totalSubject;
	double grade[totalSubject],credit[totalSubject],sumGrade=0,sumCredit=0,sumTotal=0,times;
	cout<<"Enter the Total Number Of The Subject: ";
	cin>>totalSubject;
	for(int i=1;i<=totalSubject;i++){
		cout<<"Subject "<<i<<endl;
		cout<<"Grade: ";
		cin>>grade[i];
		cout<<"Credit: ";
		cin>>credit[i];
		cout<<endl;
	}
	for(int i=1;i<=totalSubject;i++){
		times=credit[i]*grade[i];
		sumTotal=sumTotal+times;
		sumGrade=sumGrade+grade[i];
		sumCredit=sumCredit+credit[i];
	}
	cout<<"Total Subject: "<<totalSubject<<endl<<"Total Grade: "<<sumGrade<<endl<<"Total Credit: "<<sumCredit<<endl<<"Summation: "<<sumTotal<<endl<<"GPA: "<<sumTotal/sumCredit<<endl;
	return 0;
}
