#include <stdio.h>

int main() {
    int n;
    int tongsochan;
    int tongsole;
    

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
	for(int i = 0 ;i < n ; i++){
	
	printf("nhap phan tu:  %d:\n",i);
	scanf("%d",&arr[i]);
   }
   	printf("\n cac so chan la:");
   	for(int i = 0 ; i < n; i++){
   		if(	arr[i] % 2 == 0){
   			printf("%d",arr[i]);
   			tongsochan += arr[i];
		   }
   }
	printf("\n cac so le la: ");
	for(int i = 0 ; i < n ; i++){
			if(	arr[i] % 2 != 0){
			
			printf("%d",arr[i]);
			tongsole=tongsole+arr[i];
			}
	}  
	
   	
	
	printf("\n\n tong cac so chan la: %d ",tongsochan);
   	printf("\n tong cac so le la :%d ",tongsole);
   	
	return 0;
}
