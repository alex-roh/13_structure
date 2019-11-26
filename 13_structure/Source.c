#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	
	int id;
	char name[20];
	double grade;

};

int main() {

	struct student s1 = { 24, "eunyoung roh", 4.3 };
	s1.id = 1234;
	strcpy(s1.name, "another name");
	s1.grade = 1.0;

	printf("id: %d\n", s1.id);
	printf("name: %s\n", s1.name);
	printf("grade: %f\n", s1.grade);

	return 0;
}