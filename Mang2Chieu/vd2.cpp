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
void find_max(int a[][50], int m, int n){
	int max = a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(max < a[i][j])
				max = a[i][j];
		}
	}
	cout<<"Max = "<<max<<endl;
}
void find_min(int a[][50], int m, int n){
	int min = a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(min > a[i][j])
				min = a[i][j];
		}
	}
	cout<<"Min = "<<min<<endl;
}
int main(){
	int a[50][50];
	int m,n;
	input(a,m,n);
	output(a,m,n);
	find_max(a,m,n);
	find_min(a,m,n);
}

