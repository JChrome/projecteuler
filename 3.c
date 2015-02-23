#include <stdio.h>

int main(int argc, char **argv){
	int top = 9;
	for (int i = 1; i <= top; i++){
		for (int n = 2; n <= i; n++){
			if (i % n == 0 && n != i){
				break;
			}
			printf("i is %d and tope is %d\n", 
				i,
				top);
			if (i % top == 0){
				printf("NEW i is %d and top is %d\n", 
				i,
				top);
			}
		}
	}
	return 0;
}