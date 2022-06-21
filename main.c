#include <stdio.h>
#include "l1.h"

int main(){
	printf("Simple Computer");
    //проверка функций
    sc_memoryInit();

    sc_memorySet(5, 20);
    sc_memorySet(33, 14);
    sc_memorySet(98, 35);

    proverka();
   
    //sc_memoryGet();
    
	char c;
	scanf("%c", &c);
return 0;
}
