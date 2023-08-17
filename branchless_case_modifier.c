//branchless character case modifier program

#include <stdio.h>
#include <string.h>

void low_to_up(char* str){
	for(int i = 0; i < strlen(str); i++) str[i] = str[i] -(32*(str[i]>90)) +(32*(str[i]<91));
}

int main(void){
	
	char str[] = "stRiNg\0";
	printf("%s\n", str);
	low_to_up(str);
	printf("%s\n", str);
	
	return 0;
}
