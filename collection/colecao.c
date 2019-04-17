#IFNDEF _COLECAO_C_
#DEFINE _COLECAO_C_
#INCLUDE "colecao.h"

typedef struct _colecao_{
	int max;
	int numElms;
	int cur;
	void* *elms;//vetor de void* de tamanho max
}Col;

Col* colCreate(int n){
	Col* c;
	if(n>0){
		c = (Col*)malloc(sizeof(Col));
		if(c!=NULL){
			c->elms = (void**)malloc(sizeof(void*)*n);
			if (c->elms !=NULL){
				c->max = n;
				c->numElms = 0;
				c->cur = -1;
				return c;
			}else{
				free(c);
			}
		}
	}
	return NULL;
}
