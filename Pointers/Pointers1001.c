#include <stdio.h>
int main(int argc, char **argv){
    int num;
    int *numPtr; //ponteiros s�o declarados com um '*' que deve ser inserido entre o tipo e o nome associado
    int num2;

    num = 100; //estou atribuindo 100 � vari�vel num
    numPtr = &num; //estrou atribuindo a posi��o da mem�ria de num � vari�vel numPtr
    num2 = *numPtr; //indirection

    printf("num=%d, numPtr=%d, address of num=%d, num2=%d\n", num, numPtr, &num, num2);
    return 0;
}
