// ������

// ������ : �ٸ� ������ �ּ� ������ �ִ� ����
// �޸��� ���� : ������ �޸𸮿� ����� (�޸𸮴� ����Ʈ ����)
// ������ �ּ� ����ϴ� ������ : &

// ���� ���� ������ * 
// �� ������ ����� ȥ�� ����
// * �� �����Ͱ� ����Ű�� ���� �������� ������

// ������ ����
// ������ ���� : ����, ����, ����, ����
// ���� ������ ���, �����Ǵ� ���� �����Ͱ� ����Ű�� ��ü�� ũ��

// ������ �ʱ�ȭ

// �ּ� ������ ����Ͽ� ���� �ּ� ����
/*
int i;
int* ptr = &i;
*/

// ���� �޸� �Ҵ��ϰ� �� ���� �ּҸ� ������ ������ ����
/*
char* ptr = (char*)malloc(100);
*/

// ������ �����Ϳ� ���ڿ��� ���� �ּҸ� ����
/*
char* ptr = "Data Structure";
*/

// �迭�� �̸��� �̿��Ͽ� �迭�� ���� �ּҸ� ����
/*
char A[100];
char* ptr = A;
*/

// �迭�� ù ��° ����� �ּҸ� �̿��Ͽ� �迭�� ���� �ּҸ� ����
/*
char A[100];
char* ptr = &A[0];
*/


// �������� ���� ���� ���� �ڵ�
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

	printf("���� �� pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++; // +1
	pi++; // +4
	pd++; // +8

	printf("���� �� pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	return 0;
}
*/

// �������� ���� �ڵ�
/*
#include <stdio.h>
int main()
{
	int i = 0;
	for (int i = 0; i < 10; i++) // �� 0
		printf("%3d", i);

	for (i = 0; i < 10; i++) // �� 10
		printf("%3d", i);
	
	printf("%3d\n", i);
}
*/

// �������� ���� �ڵ�
/*
#include <stdio.h>
int i = 50; // �� 50

int main()
{
	// int i = 0; // �� 0
	for (int i = 0; i < 10; i++)
		printf("%3d", i);

	printf("%3d\n", i);
}
*/

// ������ ���� �ڵ�
/*
#include <stdio.h>

int main()
{
	int i = 10;
	int* p;

	p = &i;

	// printf("i�� �� : %d\n", i); // 10
	// printf("i�� �� : %d\n", i); // 10

	printf("i�� �� : %d\n", i); // 10

	*p = 20;
	printf("i�� �� : %d\n", i); // 20
}
*/

// �α��� ���� (���� ���� ���)
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
	printf("�α��� ����\n");
	return 0;
}

int check(int id, int password)
{
	static int super_id = 1234;
	static int super_password = 5678;
	static int try_count = 0;

	try_count++;
	if (try_count >= LIMIT) {
		printf("Ƚ�� �ʰ�\n");
		exit(1);
	}
	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		printf("�ٽ� �Է��ϼ���.\n");
		return FAIL;
}
*/

// ������ �̿��� ���ϱ�
/*
#include <stdio.h>

int main()
{
	int num1, num2;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	printf("�ΰ��� ���� �Է� : ");
	scanf_s("%d %d", ptr1, ptr2); // �����ʹ� ���� ��ü�� �ּ��̹Ƿ� '&' ���X

	printf("%d + %d = %d\n", *ptr1, *ptr2, *ptr1 + *ptr2); // *ptr �� ���� �� �� ��ü
}
*/