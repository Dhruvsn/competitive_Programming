




#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>& arr,int n){
	bool swapped = false;
	for(int i=1;i<n;i++){
		

		for(int j=0;j<n-1;j++){

			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = true;
				
			}

		}
		if(swapped == false){
			break;
		}

	}




}


int main(){

	vector<int> arr = {2,3,4,1};
	int n = 4;
	bubbleSort(arr,n);

	for(int x : arr){
		cout<<x<<" ";
	}
	

return 0;
}
