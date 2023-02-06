#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//int check_sys() {//判断系统大端还小端，小端返回1，大端返回0
//	int a = 1;
//	return * (char*) & a;
//}
//int main() {
//	int ret=check_sys();
//	if (ret) printf("小端！\n");
//	else
//		printf("大端！\n");	
//	return 0;
//}
//int main() {
//	char* c = "abncx";//"abncx"为常量字符串
//	printf("%s\n", c);
//	return 0;
//}
//int main() {
//	char* p = "asdc";
//	*p = 'mm';
//	printf("%s", p);
//	return 0;
//}
//int main() {
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 3,4,5,6,7 };
//	int c[] = { 6,7,8,9,10 };
//	int* parr[] = { a,b,c };//指针数组
//	int i = 0,j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10]= & arr;
//	int i;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", (*p)[i]);//p[i]==arr[i]==*(p+i)==*(arr+i)
//	}
//	return 0;
//}
print1(int(*p)[5], int x, int y) {
	int i,j;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			//printf("%d ", p[i][j]);
			printf("%d ", (*(p+i))[j]);
			//printf("%d ", *(p[i]) + j);
			//printf("%d ", *(*(p + i) + j));//(p + i) 指向二维数组的第i个数组，(*(p + i) + j))指向第i个数组的第j个元素
		}
	}
}
int main() {
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{0,0,0,0,0} };
	print1(arr, 3, 5);

	return 0;
}
