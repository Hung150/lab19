#include<iostream>
using namespace std;
export_array(int m,double a[][100]){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
swap_2_columns(int m,double a[][100],int c1,int c2){
	int i;
	double t;
	for(i=1;i<=m;i++){
		t=a[i][c1];
		a[i][c1]=a[i][c2];
		a[i][c2]=t;
	}
}
swap(int m,double a[][100]){
	int i;
    for(i=1;i<=m/2;i++){
		swap_2_columns(m,a,i,m+1-i);
	}
}
sum(int m,double a[][100],int x){
	int i;
	double s=0;
		for(i=1;i<=m;i++){
			s+=a[i][x-i];
	    }
	return s;
}
main(){
	double a[100][100],t;
	int m,i,j,s=0;
	cout<<"Enter M(M>=1): "; cin>>m;
	if(m<1){ cout<<"Error(please enter M>=1)";
	}else{
		for(i=1;i<=m;i++){
			for(j=1;j<=m;j++){
				cout<<"Enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		cout<<"The matrix: ";
		cout<<"\n";
		export_array(m,a);
		cout<<"The sum of the elements of each diagonal parallel to the main one: ";
		swap(m,a);
		for(i=2;i<=2*m;i++){
			if(i!=m+1){
				cout<<sum(m,a,i)<<" ";
			}
		}
	}
}
