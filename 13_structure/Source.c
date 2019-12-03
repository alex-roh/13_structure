#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "keyword.h"
#define MAXLINE 200

int is_whitespace(char c)
{
	if (c == ' ' ||
		c == '\n' || 
		c == '\r' || 
		c == '\t' || 
		c == '(')
	{
		return 1;
	}

	return 0;
}


int fget_word(FILE* fp, char *word)
{
	char c, cnt;

	while ((c = fgetc(fp)) != EOF)
	{
		if (is_whitespace(c) == 0)
			break;
	}

	// ������ڰ� ��������, ���� c�� ����� ���� EOF���
	if (c == EOF)
	{
		return 0;
	}

	cnt = 0;
	word[cnt++] = c;
	word[cnt] = '\0';

	while ((word[cnt] = fgetc(fp)) != EOF)
	{
		if (is_whitespace(word[cnt]) == 1)
		{
			word[cnt] = '\0';
			break;
		}
		cnt++;
	}

	return cnt;
}

int main() {

	// file pointer
	FILE* file_ptr;

	// get file path
	char file_name[MAXLINE];
	char word[MAXLINE];
	printf("�м��� �ҽ� �ڵ� ������ ��θ� �Է��ϼ���: ");
	scanf("%s", file_name);

	// file open
	file_ptr = fopen(file_name, "r");

	if (file_ptr == NULL) 
	{
		printf("%s���� ������ ã�� ���߽��ϴ�.", file_name);
		return -1; // ���� �߻�
	}
	else
	{
		printf("%s���� ������ ã�ҽ��ϴ�.\n", file_name);
	}

	// word reading & analysis
	while (fget_word(file_ptr, word) != 0)
	{
		count_word(word);
	}

	// output
	print_word();

	fclose(file_ptr);

	return 0;
}