#include<bits/stdc++.h>
using namespace std;
void input(int **a, int m, int n){// m la hang , n la cot
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void output(int **a, int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int m,n;
	cout<<"Nhap so hang la: "; cin>>m;
	cout<<"Nhap so cot la:"; cin>>n;
	int **a = new int *[m];
	for(int i=0;i<m;i++){
		a[i] = new int [n];
	}
	input(a,m,n);
	output(a,m,n);
}	

