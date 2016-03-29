#include <stdio.h>
#include <string.h>
#include <assert.h>

void swap(char *str, int i, int j)
{
	char t = str[i];
	str[i] = str[j];
	str[j] = t;
}

void reverse(char *str)
{
	if(str == NULL)
		return;
	int i, j, len;
	len = strlen(str);

	i = 0;
	j = i + len - 1;
	while(i < j) {
		swap(str, i++, j--);
	}
}

void assert_reverse(const char *s, char *r)
{
	int i, len;

	assert((len = strlen(s)) == strlen(r));
	i = 0;
	while(i < len) {
		assert(s[i] == r[len - i - 1]);
		i++;
	}
}

void test(const char *str)
{
	int str_len = strlen(str);
	char r[str_len+1];
	strcpy(r, str);
	reverse(r);
	assert_reverse(str, r);
}

int main()
{
	test("");
	test("a");
	test("ab");
	test("abc");
	test("aa");
	test("aaa");
}