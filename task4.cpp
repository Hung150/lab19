#include<iostream>
using namespace std;
export_array(double a[][100],int m,int n){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<a[i][j];
		}
		cout<<"\n";
	}
}
swap_2_rows(double a[][100],int m,int n,int r1,int r2){
	int i,t;
	for(i=1;i<=n;i++){
		t=a[r1][i];
		a[r1][i]=a[r2][i];
		a[r2][i]=t;
	}
}
swap(double a[][100],int m,int n){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=i+1;j<=m;j++){
			if(a[i][1]>a[j][1]){
				swap_2_rows(a,m,n,i,j);
			}
		}
	}
}
main(){
	double a[100][100];
	int m,n,i,j;
	cout<<"enter the number of rows of the matrix M: "; cin>>m;
	cout<<"enter the number of columns of the matrix N: "; cin>>n;
	if(m*n==0){ cout<<"error";
	}else{
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<"enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		cout<<"the array: ";
		cout<<"\n";
		export_array(a,m,n);
		cout<<"the array after swap: ";
		cout<<"\n";
		swap(a,m,n);
		export_array(a,m,n);
	}
}
