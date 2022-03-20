#include<bits/stdc++.h>
using namespace std;
int main(){
//	int a[2][2] = {{1,2} , {3,4}};
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	float b[1][3] = {{1,2,3}};
//	int c[2][3] = {{1,2,3},{4,5,6}};
//	cout<<"mang c:"<<endl;
//	for(int i=0;i<2;i++){
//		for(int j=0;j<3;j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	int d[3][4];
	cout<<"Nhap ma tran d:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"d["<<i<<"]["<<j<<"]= ";
			cin>>d[i][j];
		}
	}
	cout<<"show mang d:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"d[0][1] = "<<endl;
	cout<<d[0][1]<<endl;
}

