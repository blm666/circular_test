#include <stdio.h>
int a(int l);
int b(int l){
	printf("[b]:l=%d\n",l);
        if(l<0){
                return l;
        }
        return a(l-1);
}
