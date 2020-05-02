#define __LIBRARY__
#include <asm/segment.h>
#include <unistd.h>

int sys_print_val(int a){
    printk("int print_val: %d \n",a);
    return 0;
}

int sys_str2num(char *str, int str_len,long *ret){
	char num[str_len];
	for(int i = 0;i < str_len ; i++){
		num[i] = get_fs_byte(str+i);
	}

	int sum = 0;
	int j = 0;
	while(j < str_len - 1){
		sum = (sum + (num[j] - '0'))*10;
		j++;
	}
	sum = sum + (num[str_len-1] - '0');
	put_fs_long(sum,ret);
	return 0;
}
	
