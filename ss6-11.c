#include<stdio.h>

int main(){
	int n;
	int number = 1; 
	printf("Moi ban nhap so nguyen n: ");
	scanf("%d", &n);
	if(n < 0){
		printf("So khong hop le. Ban hay nhap lai so."); 
	} else
	    printf("Thuc hien chuong trinh.\n");
	
	int count =0;
	while(count <= n){
		int flag = 0;
		int i; 
		for(i =2; i<number; i++){
			if(number%i==0){
				flag=1;
				break; 
			} 
		}
		if(flag==0){
			printf("%2d  ", number);
			count++; 
		}
		number ++; 
	} 
	 
	return 0; 
} 
