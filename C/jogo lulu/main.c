#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//bibilhoteca para escrever em pt br.
#include <conio.h>
#include <time.h>//bibilhoteca pra usar a função rand.
#include <string.h>//para nomes e letras e cissas do genero.

typedef struct
{
    int po;
    int ban;
}teste;
teste comp(teste x){
    x.po=6;
    x.ban=9;
    return x;
}

int main(){
    teste uva;
    teste goiaba;
    uva.ban=69;
    uva.po=88;
    goiaba=comp(uva);
    printf("%d %d",goiaba.ban,goiaba.po);
return 0;
}
