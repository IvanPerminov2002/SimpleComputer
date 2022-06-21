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

}

//устанавливает значение указанного регистра флагов. для номеров регистров флагов должны 
//использоваться маски, задаваемые макросами №дефайн
//если указан недопустимый номер регистра функция завершается с ошибкой
int sc_regSet(int regist, int value){

}

//возвращает значение указанного флага

int sc_regGet(int regist, int * value){

}

//кодирует команду с указанным номером и операндом и помещает результат в валуе. Если указаны
// неправельные значения, то функция завершается с ошибкой, валуе не изменяется
int sc_commandEncode(int command, int operand, int *value){

}

//декодирует значение как команду симплкомпьютер . если декодирование невозможено, устанавливается
// флаг "ошибочная команда" и функция завершается с ошибкой
int sc_commandDecode(int value, int * comand, int *operand){

}


int proverka(){

 printf("%4d\n%4d\n%4d\n", memory[5], memory[33], memory[98]);

return 0;
}
