typedef enum { t, f } boolean;


typedef struct symbolTable{
    int *valueI;
    char *valueSt;
    char *valueC;
    float *valueF;
    double *valueD;
    long *valueL;
    short *valueSh;
    struct symbolTable * next;
    char *valueName;
    boolean valueB;
}symbolTable;

symbolTable *globalSymbolTable;


symbolTable *getsym (symbolTable *table, char *name);

void *putsymI (symbolTable *table, char *name, int value);

void *putsymSt (symbolTable *table, char *name, char* value);

void *putsymC (symbolTable *table, char *name, char* value);

//void *putsymF (symbolTable *table, char *name, float value);

void *putsymD (symbolTable *table, char *name, double value);

void *putsymL (symbolTable *table, char *name, long value);

void *putsymSh (symbolTable *table, char *name, short value);

