#include <stdio.h>

int main(int argc, char **argv){
    char str1[] = "Hello"; //[] � um array, que sabe-se que � equivalente a um endere�o
    char *str2 = "Goodbye"; //* � um ponteiro, seu valor n�o � uma string, mas o endere�o do array
    printf("%d %d %s\n", &str1, str1, str1); //endere�o do array, endere�o do array, conte�do do array
    printf("%d %d %s\n", &str2, str2, str2); //endere�o do array, endere�o do ponteiro, conte�do do array
    return 0;
}
