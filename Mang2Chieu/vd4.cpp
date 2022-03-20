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
void SapXep(int a[][50], int m, int n){
	int k=m*n;
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(a[i/n][i%n] < a[j/n][j%n]);
			swap(a[i/n][i%n] , a[j/n][j%n]);
		}
	}
	
}
int main(){
	int a[50][50];
	int m,n;
	input(a,m,n);
	output(a,m,n);
	SapXep(a,m,n);
	cout<<"Swap: "<<endl;
	output(a,m,n);
}

