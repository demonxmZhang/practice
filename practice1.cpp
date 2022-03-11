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
	//定义普通变量和指针变量
	int* pi, i = 10;
	//定义二级指针变量
	int** ppi;
	//给指针变量赋初值
	pi = &i;

	//给二级指针变量赋初值
	ppi = &pi;

	//我们可以直接用二级指针做普通指针的操作
	//获取 i 的内容
	printf("i = %d\n", **ppi);
	//获取 i 的地址
	printf("i 的地址为%d\n", *ppi);
	printf("i的地址为%d", pi);
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