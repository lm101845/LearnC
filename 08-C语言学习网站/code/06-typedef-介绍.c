//2023��2��13��13:46:36

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
} Book;

int main()
{
	Book book;

	strcpy(book.title, "C �̳�");
	strcpy(book.author, "Runoob");
	strcpy(book.subject, "�������");
	book.book_id = 12345;

	printf("����� : %s\n", book.title);
	printf("������ : %s\n", book.author);
	printf("����Ŀ : %s\n", book.subject);
	printf("�� ID : %d\n", book.book_id);
	system("pause");
	return EXIT_SUCCESS;
}
