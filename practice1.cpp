#include <iostream>
using namespace std;

/*
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;

}
*/

/*
void test(int *b) {
	b = NULL;
}
*/

int fun(int* b) {
	*b += 1;
	return *b;
}

int main() {

	/*
	//������ͨ������ָ�����
	int* pi, i = 10;
	//�������ָ�����
	int** ppi;
	//��ָ���������ֵ
	pi = &i;

	//������ָ���������ֵ
	ppi = &pi;

	//���ǿ���ֱ���ö���ָ������ָͨ��Ĳ���
	//��ȡ i ������
	printf("i = %d\n", **ppi);
	//��ȡ i �ĵ�ַ
	printf("i �ĵ�ַΪ%d\n", *ppi);
	printf("i�ĵ�ַΪ%d", pi);
	*/

	/*
	int nums[5] = { 1,2,3,4,5 }, i;
	i = nums[1];
	printf("%d", i);
	*/

	/*
	int a = 10, b = 20;
	swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	*/

	/*
	int *a = (int *)malloc(sizeof(int));
	*a = 11;

	cout << a << endl;
	test(a);
	cout << a << endl;
	*/
	
	int a = 5;
	int* p;
	p = &a;

	fun(p);
	printf("a = %d\n", a);
	

	return 0;
}