#include<bits/stdc++.h>
using namespace std;
void input(int a[][50], int &m, int &n){// m la hang , n la cot
	cout<<"Nhap so hang la: "; cin>>m;
	cout<<"Nhap so cot la:"; cin>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void output(int a[][50], int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void TongDong(int a[][50],int m, int n){
	int row, sum =0;
	cout<<"Nhap so dong can tinh tong: "; cin>>row;
	for(int i=0;i<n;i++){
		sum+=a[row-1][i];
	}
	cout<<sum<<endl;
}
void TongCot(int a[][50],int m, int n){
	int col, sum =0;
	cout<<"Nhap so dong can tinh col: "; cin>>col;
	for(int j=0;j<n;j++){
		sum+=a[j][col-1];
	}
	cout<<sum<<endl;
}
int main(){
	int a[50][50];
	int m,n;
	input(a,m,n);
	output(a,m,n);
	TongDong(a,m,n);
	TongCot(a,m,n);
}

