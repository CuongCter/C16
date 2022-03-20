#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n;
	cin>>m; //hang
	cin>>n; //cot
	//cach 1: 
//	int **a = new int*[m];
//	for(int i=0;i<m;i++){
//		a[i] = new int [n];
//	}
	//cach 2:
	int **a;
	a = (int **)malloc(sizeof(int *)*m);
	for(int j=0;j<m;j++){
		a[j] = (int *)malloc(sizeof(int )*n);
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

