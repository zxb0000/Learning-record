#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
int my_strlen(const char arr[]) {
	int count = 0;
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;
}
char* my_strcopy(char arr[], const char arr1[]) {
	char* ret = arr;
	assert(arr1 != NULL);
	while (*arr++ = *arr1++);
	return ret;
}

int main() {
	char arr[] = "abcdf";
	char arr1[] = "**********";
	my_strcopy(arr1, arr);
	printf("%s\n", arr1);
	return 0;
}