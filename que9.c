#include <stdio.h>
void main(){
	int n = 251;
	int rev = 0 , p;
	int temp = n;
	
	while(n> 0){
		p = n %10;
		rev = rev * 10 + p;
		n = n/10;
	}
	printf("Reversed number =%d \n" , rev);
	
	if(temp ==  rev){
		printf("polidrom %d" , temp);
	}else{
		printf("polidrom %d" , temp);
	}
}