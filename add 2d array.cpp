#include<iostream>
using namespace std;
int main2()
{
	int r,c;
	cout<<"Enter row and column for array"<<endl;
	cin>>r>>c;
	int arr1[r][c];
	int arr2[r][c];
	int sum[r][c];
	
	cout<<"Enter the element of first array"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the element of second array"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr2[i][j];
		}
	}
	cout<<"Addition of two dimentional array is:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

	
}
