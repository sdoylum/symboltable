#include "symbolTable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *putsymI (symbolTable *table, char *name, int value){
  struct symbolTable *ptr;
  if(table == NULL){
	ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
	ptr->valueName=(char *)malloc(strlen(name)+1);
	strcpy(ptr->valueName, name);
	ptr->valueI = (int*)malloc(sizeof(int));
	*ptr->valueI = value;
	table->next = ptr; 
  }
  while(table -> next != NULL){
	  table = table -> next;
  }

  ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
  ptr->valueName=(char *)malloc(strlen(name)+1);
  strcpy(ptr->valueName, name);
  ptr->valueI = (int*)malloc(sizeof(int));
  *ptr->valueI = value;
  table -> next = ptr;
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


void *putsymSt (symbolTable *table, char *name, char* value){
  struct symbolTable *ptr;
  if(table == NULL){
	ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
	ptr->valueName=(char *)malloc(strlen(name)+1);
	strcpy(ptr->valueName, name);
	ptr->valueSt = (char *)malloc(strlen(value)+1);
	strcpy(ptr->valueSt, value);
	table->next = ptr; 
  }
  while(table -> next != NULL){
	  table = table -> next;
  }

  ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
  ptr->valueName=(char *)malloc(strlen(name)+1);
  strcpy(ptr->valueName, name);
	ptr->valueSt = (char *)malloc(strlen(value)+1);
	strcpy(ptr->valueSt, value);
  table -> next = ptr;
}

void *putsymC (symbolTable *table, char *name, char* value){
  struct symbolTable *ptr;
  if(table == NULL){
	ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
	ptr->valueName=(char *)malloc(strlen(value)+1);
	strcpy(ptr->valueName, name);
	ptr->valueC = (char *)malloc(strlen(value)+1);
	strcpy(ptr->valueC, value);
	table->next = ptr; 
  }
  while(table -> next != NULL){
	  table = table -> next;
  }

  ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
  ptr->valueName=(char *)malloc(strlen(value)+1);
  strcpy(ptr->valueName, name);
	ptr->valueC = (char *)malloc(strlen(value)+1);
	strcpy(ptr->valueC, value);
  table -> next = ptr;
}

void putsymF (symbolTable *table, char *name, float value){
  struct symbolTable *ptr;
  if(table == NULL){
	ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
	ptr->valueName=(char *)malloc(strlen(name)+1);
	strcpy(ptr->valueName, name);
	ptr->valueF = (float*)malloc(sizeof(float));
	*ptr->valueF = value;
	table->next = ptr; 
  }
  while(table -> next != NULL){
	  table = table -> next;
  }

  ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
  ptr->valueName=(char *)malloc(strlen(name)+1);
  strcpy(ptr->valueName, name);
  ptr->valueF = (float*)malloc(sizeof(float));
  *ptr->valueF = value;
  table -> next = ptr;
}

void *putsymD (symbolTable *table, char *name, double value){
  struct symbolTable *ptr;
  if(table == NULL){
	ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
	ptr->valueName=(char *)malloc(strlen(name)+1);
	strcpy(ptr->valueName, name);
	ptr->valueD = (double*)malloc(sizeof(double));
	*ptr->valueD = value;
	table->next = ptr; 
  }
  while(table -> next != NULL){
	  table = table -> next;
  }

  ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
  ptr->valueName=(char *)malloc(strlen(name)+1);
  strcpy(ptr->valueName, name);
  ptr->valueD = (double*)malloc(sizeof(double));
  *ptr->valueD = value;
  table -> next = ptr;
}

void *putsymL (symbolTable *table, char *name, long value){
  struct symbolTable *ptr;
  if(table == NULL){
	ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
	ptr->valueName=(char *)malloc(strlen(name)+1);
	strcpy(ptr->valueName, name);
	ptr->valueL = (long*)malloc(sizeof(long));
	*ptr->valueL = value;
	table->next = ptr; 
  }
  while(table -> next != NULL){
	  table = table -> next;
  }

  ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
  ptr->valueName=(char *)malloc(strlen(name)+1);
  strcpy(ptr->valueName, name);
  ptr->valueL = (long*)malloc(sizeof(long));
  *ptr->valueL = value;
  table -> next = ptr;
}

void *putsymSh (symbolTable *table, char *name, short value){
  struct symbolTable *ptr;
  if(table == NULL){
	ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
	ptr->valueName=(char *)malloc(strlen(name)+1);
	strcpy(ptr->valueName, name);
	ptr->valueSh = (short*)malloc(sizeof(short));
	*ptr->valueSh = value;
	table->next = ptr; 
  }
  while(table -> next != NULL){
	  table = table -> next;
  }

  ptr = (struct symbolTable*) malloc(sizeof(struct symbolTable));
  ptr->valueName=(char *)malloc(strlen(name)+1);
  strcpy(ptr->valueName, name);
  ptr->valueSh = (short*)malloc(sizeof(short));
  *ptr->valueSh = value;
  table -> next = ptr;
}

void symbolTablePrint(symbolTable *table){
	int a = 0;
	while(table != NULL){
		if(table->valueC != NULL){
			printf("%d -> name: %s, value: %s\n",a, table->valueName, table->valueC);
		}else if(table->valueD != NULL){
			printf("%d -> name: %s, value: %lf\n",a, table->valueName, *table->valueD);
		}else if(table->valueF != NULL){
			printf("%d -> name: %s, value: %f\n",a, table->valueName, *table->valueF);
		}else if(table->valueI != NULL){
			printf("%d -> name: %s, value: %d\n",a, table->valueName, *table->valueI);
		}else if(table->valueL != NULL){
			printf("%d -> name: %s, value: %ld\n",a, table->valueName, *table->valueL);
		}else if(table->valueSh != NULL){
			printf("%d -> name: %s, value: %u\n",a, table->valueName, *table->valueSh);
		}else if(table->valueSt != NULL){
			printf("%d -> name: %s, value: %s\n",a, table->valueName, table->valueSt);
		}
    a++;
		table = table -> next;
	}
}

symbolTable *initialize(symbolTable *table){
  table = (symbolTable*) malloc(sizeof(symbolTable));
  symbolTable *iter = table;
  iter->valueName=(char *)malloc(5);
  strcpy(iter->valueName, "true");
  iter -> valueB = t;
  iter -> next = (symbolTable*) malloc(sizeof(symbolTable));
  iter -> next -> valueName=(char *)malloc(6);
  strcpy(iter -> next -> valueName, "false");
  iter -> next -> valueB = f;
  return table;
}

int main(){
  globalSymbolTable = initialize(globalSymbolTable);
	putsymI(globalSymbolTable, "test", 3);
	putsymSt(globalSymbolTable, "test2", "deneme");
  putsymC(globalSymbolTable, "test3", "d");
  putsymD(globalSymbolTable, "test4", 3.2);
  putsymSh(globalSymbolTable, "test5", 1);
  putsymL(globalSymbolTable, "test6", 1000);

	symbolTablePrint(globalSymbolTable);

    return 0;
}