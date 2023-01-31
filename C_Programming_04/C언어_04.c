// 포인터

// 포인터 : 다른 변수의 주소 가지고 있는 변수
// 메모리의 구조 : 변수는 메모리에 저장됨 (메모리는 바이트 단위)
// 변수의 주소 계산하는 연산자 : &

// 간접 참조 연산자 * 
// ※ 포인터 선언과 혼동 주의
// * 는 포인터가 가리키는 값을 가져오는 연산자

// 포인터 연산
// 가능한 연산 : 증가, 감소, 덧셈, 뺄셈
// 증가 연산의 경우, 증가되는 값은 포인터가 가리키는 객체의 크기

// 포인터 초기화

// 주소 연산자 사용하여 변수 주소 지정
/*
int i;
int* ptr = &i;
*/

// 동적 메모리 할당하고 그 시작 주소를 포인터 값으로 지정
/*
char* ptr = (char*)malloc(100);
*/

// 문자형 포인터에 문자열의 시작 주소를 지정
/*
char* ptr = "Data Structure";
*/

// 배열의 이름을 이용하여 배열의 시작 주소를 지정
/*
char A[100];
char* ptr = A;
*/

// 배열의 첫 번째 요소의 주소를 이용하여 배열의 시작 주소를 지정
/*
char A[100];
char* ptr = &A[0];
*/


// 포인터의 증감 연산 예제 코드
/*
#include <stdio.h>
int main()
{
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;

	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++; // +1
	pi++; // +4
	pd++; // +8

	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	return 0;
}
*/

// 지역변수 예제 코드
/*
#include <stdio.h>
int main()
{
	int i = 0;
	for (int i = 0; i < 10; i++) // 끝 0
		printf("%3d", i);

	for (i = 0; i < 10; i++) // 끝 10
		printf("%3d", i);
	
	printf("%3d\n", i);
}
*/

// 전역변수 예제 코드
/*
#include <stdio.h>
int i = 50; // 끝 50

int main()
{
	// int i = 0; // 끝 0
	for (int i = 0; i < 10; i++)
		printf("%3d", i);

	printf("%3d\n", i);
}
*/

// 포인터 예제 코드
/*
#include <stdio.h>

int main()
{
	int i = 10;
	int* p;

	p = &i;

	// printf("i의 값 : %d\n", i); // 10
	// printf("i의 값 : %d\n", i); // 10

	printf("i의 값 : %d\n", i); // 10

	*p = 20;
	printf("i의 값 : %d\n", i); // 20
}
*/

// 로그인 제한 (정적 변수 사용)
/*
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAIL 2
#define LIMIT 3
int check(int id, int password);
int main()
{
	int id, password, result;

	while (1)
	{
		printf("id : ____\b\b\b\b");
		scanf_s("%d", &id);
		printf("pass: ____\b\b\b\b");
		scanf_s("%d", &password);
		result = check(id, password);
		if (result == SUCCESS) break;
	}
	printf("로그인 성공\n");
	return 0;
}

int check(int id, int password)
{
	static int super_id = 1234;
	static int super_password = 5678;
	static int try_count = 0;

	try_count++;
	if (try_count >= LIMIT) {
		printf("횟수 초과\n");
		exit(1);
	}
	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		printf("다시 입력하세요.\n");
		return FAIL;
}
*/

// 포인터 이용한 더하기
/*
#include <stdio.h>

int main()
{
	int num1, num2;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	printf("두개의 정수 입력 : ");
	scanf_s("%d %d", ptr1, ptr2); // 포인터는 원래 자체가 주소이므로 '&' 사용X

	printf("%d + %d = %d\n", *ptr1, *ptr2, *ptr1 + *ptr2); // *ptr 은 변수 값 그 자체
}
*/