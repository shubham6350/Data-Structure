#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int n,int mid,int m){
	int student=1;
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]>mid)
			return false;
		if(sum+arr[i]>mid){
			student++;
			if(student>m){
				return false;
			}
		}
		else{
			sum+=arr[i];
		}
	}
	return true;
}
int find_pages(int arr[],int n,int m){
	int low=0;
	int sum=0;
	int ans=-1;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int high=sum;
	while(low<=high){
		int mid=(low+high)/2;
		if(solve(arr,n,mid,m)){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<find_pages(arr,n,m)<<endl;
	return 0;
}

