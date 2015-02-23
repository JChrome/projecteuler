#include <stdio.h>

int main(int argc, char **argv){
	int total = 0;
	for (int i = 0; i < 1000; i++){
		if (i % 3 == 0){
			total = total + i;
		}
		else if (i % 5 == 0){
			total = total + i;
		}
	}
	printf("Total is %d\n", total);
	return 0;
}