#include <stdio.h>

int main(void){
	int c = 0;
	long int lines = 0;
	while((c = getchar()) != EOF){
		if(c == '\n')
			lines++;	
	}
	if(lines > 0 && c == EOF)
		lines++;
	printf("%d", lines);
	return 0;
}
