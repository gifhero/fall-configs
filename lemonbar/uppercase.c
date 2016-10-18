#include <stdio.h>

int main(void){
	char array[100];
	int c, i = 0;
	while(i < 100)
		array[i++] = 0;
	i = 0;
	while((array[i++] = getchar()) != '\n');
		i = 0;
		if(array[0] < 97 && array[0] > 122)
			printf("Error");
		else{
			array[0] = array[0] - 32;
			if(array[12] && array[13] && array[14] && array[15]){
				while(i < 13)
					printf("%c", array[i++]);
				printf("...");
			}
			else{
				while(array[i]){
					printf("%c", array[i++]);
				}
			}
		}
	return 0;
}
