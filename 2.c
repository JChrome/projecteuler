#include <stdio.h>

int main(int argc, char **argv){
	int start = 1;
	int previous = 2;
	int current = 0;
	int specialk = 0;
	while(current < 40){
		current = start + previous;
		start = previous;
		previous = current;
		printf("%d + %d == %d, current==%d\n", 
			start, 
			previous, 
			start + previous, 
			current);
		if (current % 2 == 0){
			specialk += current;
			printf("total is == %d\n", specialk);
		}
	}
	return 0;
}