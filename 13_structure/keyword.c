#define MAX_NAME 30
#define TOTAL_WORDS 13

struct keytab {

	int nums;
	char name[MAX_NAME];

};

struct keytab keywrds[TOTAL_WORDS] = 
{
	{0, "int"},
	{0, "float"},
	{0, "return"},
	{0, "if"},
	{0, "for"},
	{0, "while"},
	{0, "goto"},
	{0, "switch"},
	{0, "case"},
	{0, "void"},
	{0, "default"},
	{0, "char"},
	{0, "do"}
};

void count_word(char* word)
{
	int i;
	
	// traverse each keyword
	for (i = 0; i < TOTAL_WORDS; i++)
	{
		// if word and ith keyword are equal
		// strncmp() : 문자열을 n개까지만 비교하는 함수, 같을 경우 0을 반환
		if(strncmp(word, keywrds[i].name, strlen(keywrds[i].name)) == 0)
		{ 
			keywrds[i].nums++;
		}
	
	}
}

void print_word()
{
	int i;

	// when it comes to ith keyword
	for (i = 0; i < TOTAL_WORDS; i++)
	{
		// printf(name of keyword, num)
		printf("%s : %d번\n", keywrds[i].name, keywrds[i].nums);
	}

}