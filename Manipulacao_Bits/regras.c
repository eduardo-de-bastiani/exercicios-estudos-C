#include <stdio.h>

        //'bit' é a quantidade de vezes que o deslocamento será feito
        //'x' é o conjunto de bits que queremos alterar

//Zera todos os bits: 
unsigned int clear(unsigned int x){
    return x & 0;
    //return 0;
}

//Seta um único bit:
unsigned int setbit (unsigned int x, int bit){

    return x | (0x1 << bit);    // desloct 'bit' vezes e faz um OR para alterar um bit
}

//Resseta um único bit:
unsigned int clearbit (unsigned int x, int bit){

    return x & ~(0x1 << bit);
}

//Inverte o valor de um único bit: 
unsigned int invertBit (unsigned int x, int bit){

    unsigned int mask = 0x1 << bit;
    return x ^ mask;                    // '^' significa XOR    // iguais = 0, diferentes = 1
}

//Retorna o estado de um determinado bit: 
int testBit (unsigned int x, int bit){      //(retorna 0 ou 1)
    
    unsigned int mask = 0x1 << bit;

    if((x & mask) == 0){        //se um AND com a mascara dá 0, o bit ali era 0;
        return 0;
    }
    else{
        return 1;
    }
}       