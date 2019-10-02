#include<iostream>
using namespace std;
swap(double a[][100],int M,int N,int x){
	int imax=1,imin=1;
	for(int i=1;i<=N;i++){
		if(a[x][i]>a[x][imax]) imax=i;
		if(a[x][i]<a[x][imin]) imin=i;
	}
	double t;
	t=a[x][imax];
	a[x][imax]=a[x][imin];
	a[x][imin]=t;
}
main(){
	double a[100][100];
	int M,N,i,j;
	cout<<"enter the number of rows M: "; cin>>M;
	cout<<"enter the number of columns N: "; cin>>N;
	if(M*N==0){ cout<<"error";
	}else{
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				cout<<"enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		cout<<"the matrix: ";
		cout<<"\n";
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
		for(i=1;i<=N;i++){
			swap(a,M,N,i);
		}
		cout<<"the matrix after swap: ";
		cout<<"\n";
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
	    }
    }
}
