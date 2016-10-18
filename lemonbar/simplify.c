#include <stdio.h>


int main(void){
	int hours = 0, minutes = 0;
	long int num = 0;
	char array[30];
	int i = 0, c;
	while(i < 30)
		array[i++] = 0;
	i = 0;
	while((array[i++] = getchar()) != '\n');
	i = 0;
	while(array[i] != '\n'){
		array[i] = array[i] - '0';
		i++;
	}
	i = 0;
	while(array[i] != '\n'){
		num = 10 * (num + array[i]);
		i++;
	}
	num = num / 10;
	while(num > 60){
		minutes++;
		num = num - 60;
		if(minutes >= 60){
				hours++;
				minutes = 0;
			}
	}
	printf("%d hours, %d minutes\n", hours, minutes);
	return 0;
}
