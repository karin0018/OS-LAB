#define __LIBRARY__

#include <unistd.h>
#include <stdio.h>
#include <string.h>

_syscall1(int, print_val, int, a);
_syscall3(int, str2num, char *,str, int, str_len, long *, ret);

#define MAXSIZE 8

int main(int argc, char *argv[]){
	int str_len;
	long b;
	char str[MAXSIZE];
	printf("Give me a string:\n");
	scanf("%s",str);
	str_len = strlen(str);
	str2num(str,str_len,&b);
	print_val(b);
	return 0;
}
