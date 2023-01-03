#include <stdio.h>
int b(int l);
int a(int l){
	printf("[a]:l=%d\n",l);
	if(l<0){
		return l;
	}
	return b(l-1);
}
