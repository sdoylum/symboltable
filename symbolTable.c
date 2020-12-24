#include "symbolTable.h"


void *putsymI (symbolTable *table, char *name, int value){
  struct symbolTable *ptr;
  ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
  ptr->valueName=(char *)malloc(strlen(name)+1);
  strcpy(ptr->valueName, name);
  ptr->valueI = (int*)malloc(sizeof(int));
  ptr->valueI = value;
  if(table == 0){

	table=ptr;
	return;
  }

  table->next = ptr; 
  table = table->next;
}

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