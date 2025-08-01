#include <stdio.h>
void main(){
	int n = 82345;
	int first , last;
	
	last = n %10;
	
	while(n>=10){
		n = n / 10;
	}
	
	first = n;
	
	printf("value is last and first sum = %d" , first + last);
}