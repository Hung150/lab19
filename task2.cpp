#include<iostream>
using namespace std;
swap_2_columns(double a[][100],int m,int n,int c1,int c2){
	double t;
	for(int i=1;i<=m;i++){
		t=a[i][c1];
		a[i][c1]=a[i][c2];
		a[i][c2]=t;
	}
}
export_array(double a[][100],int m,int n){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
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
		cout<<"the matrix: ";
		cout<<"\n";
	    export_array(a,m,n);
		cout<<"\n";
		cout<<"the matrix after swap column containning the minimum and maximum elements of the matrix: ";
		cout<<"\n";
		int jmax=1;
		int jmin=1;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				if(a[i][j]>a[i][jmax]){
					jmax=j;
				}
				if(a[i][j]<a[i][jmin]){
					jmin=j;
				}
			}
		}
		swap_2_columns(a,m,n,jmax,jmin);
		export_array(a,m,n);
	}
}
