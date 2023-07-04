//  the length of a string using a Pointer.
#include<stdio.h>

void main(){
	char a[100];
	int *length;
	puts("Enter any string :");
	gets(a);
	length = &a; 
	
	printf("The length of the string %d", strlen(a));
		
}
