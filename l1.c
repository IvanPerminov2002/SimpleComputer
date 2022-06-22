#include <stdio.h>
#include "l1.h"

//#define N 100
int memory[100];
int flag;

//оперативная память массив целых чисел 100 элементов
int sc_memoryInit(){

	//int memory[N] = {0};
    for(int i=0; i<100; i++){
        memory[i]=0;
        printf("%3d%2d", i, memory[i]);
    }
    printf("\n");
    return 0;
}
//задает значение ячейки указанной памяти как value, если за границей памяти то флаг выход за 
////границу, то работа функции прекращается с ошибкой
int sc_memorySet(int address, int value){
	if ((value > 99) || (value < 0)){
        return 1;
    }

    memory[address] = value;
    return 0;

}
//возваращает значение указанной ячейки памяти в value, если адрес выходит за границы, 
// то устанавливается флаг "выход за границу памяти", заначение переменной валуе не изменяется
int sc_memoryGet(int address, int *value){
    if ((address > 99) || (address < 0)){
        return 1;
    }
    *value=memory[address];
    return 0;
}

//сохраняет содержимое памяти в бинарный файл (write, fwrite)
int sc_memorySave(char* filename){

}

//загружает из указанного файла содержимое оперативной памяти
int sc_memoryLoad(char* filename){

}

//инициализирует регистр флагов нулевым значением
int sc_regInit(void){
    flag = 0;
    return 0;
}

//устанавливает значение указанного регистра флагов. для номеров регистров флагов должны 
//использоваться маски, задаваемые макросами №дефайн
//если указан недопустимый номер регистра функция завершается с ошибкой
int sc_regSet(int regist, int value){
    if(regist > 0 && regist < 6){
        if(value == 1){
            flag = flag | (1 << (regist-1));
            return 0;
        }
        else if(value == 0){
            flag = flag & (~(1 << (regist-1)));
            return 0;
        }
    }
    else return 1;
}

//возвращает значение указанного флага

int sc_regGet(int regist, int * value){
    if(regist > 0 && regist < 6){
        *value = (flag >> (regist-1) & 0x1);
        return 0;
    }
    else return 1;
}

//кодирует команду с указанным номером и операндом и помещает результат в валуе. Если указаны
// неправельные значения, то функция завершается с ошибкой, валуе не изменяется
int sc_commandEncode(int command, int operand, int *value){
    //if((command < 0 || command > 127) || (operand < 0 || operand > 127)
   // *value = ((command << 7) | operand));
    //return 0;
}

//декодирует значение как команду симплкомпьютер . если декодирование невозможено, устанавливается
// флаг "ошибочная команда" и функция завершается с ошибкой
int sc_commandDecode(int value, int * command, int *operand){
    if(value >> 14) return 1;
    *command = value >> 7;
    *operand = value & 0x7f;
    return 0;
}


int proverka(){

 printf("%4d\n%4d\n%4d\n", memory[5], memory[33], memory[98]);

return 0;
}
