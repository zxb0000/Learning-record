#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void getmem(char* p) {
	p = (char*)malloc(100);
}
void test() {
	char* str =NULL;
	getmem(str);
	//����ط�Ϊ��ֵ�����͵���str��ֵ����p���ܺ�Ϊstr�Ŀ�����p��strͬΪchar*���ͣ������Ǵ�ֵ��������Ӱ��ԭ����ֵ��Ҫ����д���ַ��Ҫ&str��
	//�����������βθ�Ϊ����ָ�룬�����ú����malloc����Ҳ������ȷ������ռ��str��
	printf(str);
	strcpy(str, "hello");
	printf(str);
}
int main() {
	test();
	return 0;
}