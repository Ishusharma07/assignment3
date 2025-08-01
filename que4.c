#include <stdio.h>
void main(){
	int n = 7;
	int i = 2, isprime = 1;
	
	while(i < n){
		if(n % i ==  0){
			isprime =0;
			break;
		}
		i++;
}

if(n <= 1){
	printf("this is a  not prime number %d" , n);
}else if(isprime){
	printf("this is a  prime number %d" , n);
}else{
	printf("this is a not prime number %d" , n);
}
} 