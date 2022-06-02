#include <stdio.h>

#difine N 100
//оперативная память массив целых чисел 100 элементов
int sc_memoryInit(){

	int memory[N] = {0}
}
//задает значение ячейки указанной памяти как value, если за границей памяти то флаг выход за 
////границу, то работа функции прекращается с ошибкой
int sc_memorySet(int address, int value){
	bool flag = true;
	if (value > 99) || (value < 0) flag = false;

}
