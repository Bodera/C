#include <stdio.h>

int main(){
    char str1[] = "Hello word!"; //Char '' <> String ""; // Todo fim de string � adicionado o caractere de nulidade '\0'
    printf("%s %c %d %d %d\n", str1, str1[0], &str1, &str1[0], str1); //Imprime o conte�do da string, depois o primeiro
                                                                      //caractere da string, depois o endere�o na mem�ria
                                                                      //da m�quina ocupado pela string, depois o endere�o
                                                                      //na mem�ria ocupado pelo primeiro caractere, e por fim
                                                                      //para saber o endere�o do array basta print�-lo com %d
    return 0;
}
