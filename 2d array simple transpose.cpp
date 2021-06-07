#include <iostream>
using namespace std;

int main(){
 int m,n;
 cout<<"enter no. of rows:";
 cin>>m;
 cout<<"enter no. of columns:";
 cin>>n;
 
 int x[m][n],i,j,sum=0;
 for(i=0;i<m;i++){
 	
 	for(j=0;j<n;j++){
	 cout<<"value of x["<<i<<j<<"]:";
	 cin>>x[i][j];
	 }
	 	
 }
	
	 for(i=0;i<m;i++){
 	cout<<endl;
 	for(j=0;j<n;j++){
	  cout<<x[i][j]<<" | ";
	  sum=sum+x[i][j];
	 }
	 	
 }
 cout<<sum;
 // for transpose of matrix:
 
 cout<<endl; 
 
	 for(i=0;i<m;i++){
 	  cout<<endl;
 	for(j=0;j<n;j++){
	  cout<<x[j][i]<<" | ";
	 }
	 	
 }
 
 
 
 
	return 0;
}
