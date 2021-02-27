#include "destruct.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct mything{
	void* p;
	int a;
} mything;

mything default_construct_mything(){
	mything retval;
	retval.p = NULL;
	retval.a = 0;
	return retval;
}

void destroy_mything(mything* d){
	if(d->p)free(d->p);
	puts("\nDestroyed!");
}
int main(){
	{
		var(mything, damn);
		damn.p = malloc(1000);
	}
}
