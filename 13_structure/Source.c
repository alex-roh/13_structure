
#include <stdio.h>

struct student {
	
	int id;
	char name[20];
	double grade;

};

int main() {

	struct student s1 = { 24, "eunyoung roh", 4.3 };

	return 0;
}