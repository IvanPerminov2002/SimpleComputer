

int sc_memoryInit();

int sc_memorySet(int address, int value);

int sc_memoryGet(int address, int *value);

int sc_memorySave(char* filename);

int sc_memoryLoad(char* filename);

int sc_regInit(void);

int sc_regSet(int regist, int value);

int sc_regGet(int regist, int * value);

int sc_commandEncode(int command, int operand, int *value);

int sc_commandDecode(int value, int * comand, int *operand);

int proverka();
