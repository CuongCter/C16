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

void Tich(int a[][50],int b[][50],int c[][50], int m, int n){
	int tg;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(tg = 0; tg<n;tg++){
				c[i][j] += a[i][tg] * b[tg][j];
			}
		}
	}
}
int main(){
	int a[50][50];
	int b[50][50];
	int c[50][50];
	int m,n;
	input(a,m,n);
	output(a,m,n);
	input(b,m,n);
	cout<<"Tich: "<<endl;
	Tich(a,b,c,m,n);
	cout<<"Ma tran a*b = "<<endl;
	output(c,m,n);
}

