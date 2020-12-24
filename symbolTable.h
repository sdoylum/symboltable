typedef struct symbolTable{
    int *valueI;
    char *valueS;
    char *valueC;
    float *valueF;
    double *valueD;
    long *valueL;
    short *valueS;
    symbolTable * next;
    char *valueName;
}symbolTable;

symbolTable *globalSymbolTable;

void *putsymI (symbolTable *table, char *name, int value);
symbolTable *getsym (symbolTable *table, char *name);

void *putsymS (symbolTable *table, char *name, char* value);

void *putsymC (symbolTable *table, char *name, char* value);

void *putsymF (symbolTable *table, char *name, float* value);

void *putsymD (symbolTable *table, char *name, double* value);

void *putsymL (symbolTable *table, char *name, long* value);

void *putsymS (symbolTable *table, char *name, short* value);

