#include<stdio.h>
#include<stdlib.h>

int sentinel_linear_search( int arr[], int len, int key ){
	if(key == arr[len-1]){
		return len-1;
	}
	int temp = arr[len-1];
	arr[len-1] = key;
	int i;
	for(i=0;arr[len-1]!=arr[i];i++){
		if(i==len-1){
			break;
		}
	}
	arr[len-1] = temp;
	return i != len-1 ? i : -1;
	 
}

int main(){
	int n,i,value;
	printf("Enter the size of the array:\n");
	scanf("%d",&n); //Input the size of the array.
	
	int *arr = (int *)malloc(n * sizeof(int));
	printf("Enter the contents for an array of size %d\n", n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the value to be searched:\n");
	scanf("%d",&value);
	
	if(sentinel_linear_search( arr, n, value )!=-1){
		printf("Value %d is at position %d in the array",value,sentinel_linear_search( arr, n, value )+1);
	}
	if(sentinel_linear_search( arr, n, value )==-1){
		printf("Value %d is not in the array.\n", value);
	}
	return 0;
} 
