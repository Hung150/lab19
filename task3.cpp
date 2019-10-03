#include<iostream>
using namespace std;
export_array(double a[][100],int m,int n){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
swap(double a[][100],int m,int n){
	double t;
	int i,j;
	for(i=1;i<=m/2;i++){
		for(j=1;j<=n/2;j++){
			t=a[i][j];
			a[i][j]=a[i+m/2][j+n/2];
			a[i+m/2][j+n/2]=t;
		}
	}
}
main(){
	double a[100][100];
	int m,n,i,j;
	cout<<"enter the number of rows of the matrix M(even number): "; cin>>m;
	cout<<"enter the number of columns of the matrix N(even number): "; cin>>n;
	if(m*n!=0&&m%2==0&&n%2==0){
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<"enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		cout<<"the matrix: ";
		cout<<"\n";
	    export_array(a,m,n);
		swap(a,m,n);
		cout<<"the matrix after swaping: ";
		cout<<"\n";
		export_array(a,m,n);	
	}else{
		cout<<"error";
	}
}
