#include "symbolTable.h"


void *putsymI (symbolTable *table, char *name, int value){

};

symbolTable *getsym (symbolTable *table, char *name){
	struct symbolTable *iter = table;
	while(iter!=0){;
		
		if (strcmp (iter->valueName, name) == 0){
			return iter;
		}
		iter=iter->next;
	} 
};

void *putsymS (symbolTable *table, char *name, char* value){
    
};

void *putsymC (symbolTable *table, char *name, char* value){
    
};

void *putsymF (symbolTable *table, char *name, float* value){
    
};

void *putsymD (symbolTable *table, char *name, double* value){
    
};

void *putsymL (symbolTable *table, char *name, long* value){
    
};

void *putsymS (symbolTable *table, char *name, short* value){
    
};


int main(){
    

    return 0;
}