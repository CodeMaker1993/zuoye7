
#include<stdio.h>

char reverse(char* string) {
	if (*string) {
		string++;
		reverse(string);
		printf("%c ", *(string - 1));
	}
	return 0;

}



int main() {
	char arr[] ="abcdef";
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr);
	
	return 0;
}