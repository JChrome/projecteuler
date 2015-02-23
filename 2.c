#include <stdio.h>

int main(int argc, char **argv){
	int start = 1;
	int previous = 2;
	int current = 0;
	while(current < 4000000){

		current = start + previous;
		start = previous;
		previous = current;
		printf("%d + %d == %d, current==%d\n", 
			start, 
			previous, 
			start + previous, 
			current);
	}
	return 0;
}