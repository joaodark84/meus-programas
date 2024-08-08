#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct
{
    char nome[20];
    int vida;
    int atk;
    int def;
    int sorte;
} personagem;
int defendendo(personagem m,personagem p)
{
    srand(time(NULL));
    int a,crit,desvio,x=0,h;
    x=p.vida+p.def;
    a=rand()%100;
    crit=d10(a);
    desvio=d10(a);
    if (p.sorte > desvio)
    {
        h=p.vida;
        printf("\nVOCE DESVIOU!!");
        return h;
    }
    else
    {
        if(m.sorte > crit)
        {
                h=x-m.atk*2;
                printf("\n VOCE SOFREU UM  CRITICO!!!!\nDeu %d dano\nFicou com %d de vida",x,h);
                if(h>0){return h;}
                else{
                    printf("\nVOCE MORREU");
                }
        }
        else
        {
            h=x-m.atk;
            printf("\nrecebeu %d de dano,ficou com %d",x,h);
            if(h>0){return h;}
                else{
                    printf("\nVOCE MORREU");
            }
        }
    }
}
int atacando(personagem m,personagem p)
{
    srand(time(NULL));
    int a,crit,desvio,rng=0,v=1,x=0,h;
    x=m.vida+m.def;
    a=rand()%100;
    crit=d10(a);
    desvio=d10(a);
    if (m.sorte< desvio)
    {
        h=m.vida;
        printf("\nVOCE ERROU!!");
        return h;
    }
    else
    {
        if(m.sorte > crit)
        {
            h=x-p.atk*2;
            printf("\nVOCE CAUSOU UM  CRITICO!!!!\n Deu %d dano\nSeu inimigo ficou com %d de vida",x,h);
                if(h>0){
                        return h;
                }
                else{
                    printf("\nVOCE GANHOU");
                    return(v);
            }
        }
        else
        {
            h=x-p.atk;
            printf("\nCausou %d de dano,ficou com %d restantes",x,h);
            if(h>0){return h;}
                else{
                    printf("\nVOCE GANHOU");
                    return(v);
            }
        }
    }
}
int d5(int x)
{
    int res;
    if(x>=1&&x<20)
    {
        res=1;
        return res;
    }
    if(x>=20&&x<40)
    {
        res=2;
        return res;
    }
    if(x>=40&&x<60)
    {
        res=3;
        return res;
    }
    if(x>=60&&x<80)
    {
        res=4;
        return res;
    }
    if(x>=80&&x<100)
    {
        res=5;
        return res;
    }

}
int d10(int x)
{
    int res;
    if(x>=1&&x<10)
    {
        res=1;
        return res;
    }
    if(x>=10&&x<20)
    {
        res=2;
        return res;
    }
    if(x>=20&&x<30)
    {
        res=3;
        return res;
    }
    if(x>=30&&x<40)
    {
        res=4;
        return res;
    }
    if(x>=40&&x<50)
    {
        res=5;
        return res;
    }
    if(x>=50&&x<60)
    {
        res=6;
        return res;
    }
    if(x>60&&x<70)
    {
        res=7;
        return res;
    }
    if(x>=70&&x<80)
    {
        res=8;
        return res;
    }
    if(x>80&&x<90)
    {
        res=9;
        return res;
    }
    if(x>90&&x<=100)
    {
        res=10;
        return res;
    }
}
int d20(int x)
{
    int res;
    if(x>=1&&x<5)
    {
        res=1;
        return res;
    }
    if(x>=5&&x<10)
    {
        res=2;
        return res;
    }
    if(x>=10&&x<15)
    {
        res=3;
        return res;
    }
    if(x>=15&&x<20)
    {
        res=4;
        return res;
    }
    if(x>=20&&x<25)
    {
        res=5;
        return res;
    }
    if(x>=25&&x<30)
    {
        res=6;
        return res;
    }
    if(x>=30&&x<35)
    {
        res=7;
        return res;
    }
    if(x>=35&&x<40)
    {
        res=8;
        return res;
    }
    if(x>=40&&x<45)
    {
        res=9;
        return res;
    }
    if(x>=45&&x<50)
    {
        res=10;
        return res;
    }
    if(x>=50&&x<55)
    {
        res=11;
        return res;
    }
    if(x>=55&&x<60)
    {
        res=12;
        return res;
    }
    if(x>=60&&x<65)
    {
        res=13;
        return res;
    }
    if(x>=65&&x<70)
    {
        res=14;
        return res;
    }
    if(x>=70&&x<75)
    {
        res=15;
        return res;
    }
    if(x>=75&&x<80)
    {
        res=16;
        return res;
    }
    if(x>=80&&x<85)
    {
        res=17;
        return res;
    }
    if(x>=85&&x<90)
    {
        res=18;
        return res;
    }
    if(x>=90&&x<95)
    {
        res=19;
        return res;
    }
    if(x>=95&&x<=100)
    {
        res=20;
        return res;
    }
}
int habM(int r,float dg)
{
    int f,p=dg;

    //regeneracao
    if (r==1){
        if(p<=70){
            p=p+5;
            return p;
        }
    }
    //corte perfeito
    else if(r==2){
        p=p/2;
        printf("\nsua vida foi cortada ao meio");
        return p;
    }
    //corpo adamantino
    else if(r==3){
        p=30;
        printf("\nA armadura do golem foi transformada em adamantium e sua defesa dobrou");
        return p;
    }
    //fim dos tempos
    else if(r==5){
        printf("\nO poder do dragao foi despertado voce escuta as seguintes palavras 'FIM DOS TEMPOS'");
        printf("\nVOCE MORREU O MUNDO ACABOU");
        f = 1;
        return f;
    }
}
personagem hab(int p,personagem d)
{
//ira draconica
    if(p==1){
        d.vida=d.vida+15;
        d.atk=d.atk+16;
        d.def=d.def+12;
        d.sorte=3;
        printf("\nSeu sangue draconico desperta e voce se sente mais moonstruoso\n Seus atributos foram aumentados e sorte reduzida");
        return d;
    }
    //guerreito da morte
    else if(p==2){
        d.vida=d.vida+25;
        d.atk=d.atk+10;
        d.def=d.def+8;
        printf("\nVoce invoca um esqueleto para lutar com voce");
        return d;
    }
    //manto das sombras
    else if(p==3){
        d.vida=d.vida-18;
        d.atk=d.atk+8;
        d.def=4;
        d.sorte=9;
        printf("\nVoce sacrifica %d em troca do manto de sombras\n Que aumenta sua forca e sorte",d.vida);
        if(d.vida>0){
            return d;
        }
        else{
            printf("\nVoce foi consumido pelas trevas e MORREU");
        }

    }
    //sorte acidental
    else if(p==4){
        d.sorte=9;
        printf("voce ganha a bencao de um deus piedoso e teve sua sorte aumentada");
        return d;
    }
    //bencao da floresta
    else if(p==5){
        d.vida=40;
        d.atk=d.atk+6;
        d.def=d.def+12;
        printf("voce invoca as raizes de ygdrasil te curando completamente\n E ");
        return d;
    }
}
personagem monstro(int r)
{
    if(r==1)
    {
        personagem orc;
        strcpy(orc.nome,"orc");
        orc.vida=80;
        orc.atk=18;
        orc.def=10;
        orc.sorte=3;
        //pasiva regeneracao
        return orc;
    }
    else if(r==2)
    {
        personagem leo;
        strcpy(leo.nome,"leonine");
        leo.vida=45;
        leo.atk=36;
        leo.def=16;
        leo.sorte=6;
        //ativa corte perfeito
        return leo;
    }
    else if(r==3)
    {
        personagem gol;
        strcpy(gol.nome,"golem");
        gol.vida=70;
        gol.atk=15;
        gol.def=40;
        gol.sorte=3;
        //ativa corpo adamantino
        return gol;
    }
    else if(r==4)
    {
        personagem gob;
        strcpy(gob.nome,"goblim");
        gob.vida=30;
        gob.atk=15;
        gob.def=8;
        gob.sorte=7;
        //pasiva ataque sorrateiro
        return gob;
    }
    else if(r==5)
    {
        personagem drag;
        strcpy(drag.nome,"O dragao negro");
        drag.vida=66;
        drag.atk=36;
        drag.def=30;
        drag.sorte=5;
        //ativa fim dos tempos
        printf("\nVoce escuta o rugido de novo mas desta vez\nOs gritos ensurdecedores da plateia cessam\nUma enorme sombra aparece sobre a arena");
        return drag;
    }
}
personagem heroi (int p)
{

    if(p==1){
        personagem vish;
        strcpy(vish.nome,"VISHUVAC");
        vish.vida=33;
        vish.atk=20;
        vish.def=18;
        vish.sorte=5;
        printf("\nO heroi foi o grande %s um guerreiro draconico\n",vish.nome);
        //ativa ira draconica
        return vish;
        }
    else if(p==2){
        personagem mal;
        strcpy(mal.nome,"MALACUS");
        mal.vida=18;
        mal.atk=24;
        mal.def=16;
        mal.sorte=6;
        printf("\nO heroi foi o poderoso necromante %s\n",mal.nome);
        //ativa guerreiro da morte
        return mal;
    }
    else if(p==3){
        personagem shi;
        strcpy(shi.nome,"SHIMADA");
        shi.vida=28;
        shi.atk=26;
        shi.def=10;
        shi.sorte=7;
        printf("\nO heroi foi o ardiloso %s o assasino\n",shi.nome);
        //ativa manto das sombras
        return shi;
    }
    else if(p==4){
        personagem jos;
        strcpy(jos.nome,"JOSEF");
        jos.vida=26;
        jos.atk=18;
        jos.def=14;
        jos.sorte=5;
        printf("\nO heroi foi %s o plebeu revoltado\n",jos.nome);
        //passiva sorte acidental
        return jos;
    }
    else if(p==5){
        personagem dras;
        strcpy(dras.nome,"DRASIF");
        dras.vida=34;
        dras.atk=18;
        dras.def=18;
        dras.sorte=6;
        printf("\nO heroi foi o %s o xama abencoado\n",dras.nome);
        //ativa floresta ancestral
        return dras;
    }
}

int main()
{   personagem vc;
    personagem r1;
    int x,r,p,y,o=4,esc,g;
    char nome[61];
    srand(time(NULL));
    x=rand()%100;
    y=rand()%100;
    r=d5(x);
    p=d5(y);
    printf("***************BEM VINDO**************\n\n\n"
           "Digite seu nome com ate 60 caracteres:\n");
    gets(nome);
    printf("\n Voce sera desafiado em uma dungeon\n"
           "%s agora recebe o poder de um heroi lendario\n"
           "Que mais se encaixa com voce boa sorte!!!\n",nome);
    vc=heroi(p);
    system("pause");
    system("cls");
    printf("\n QUE OS JOGOS COMECEM\n");
    printf("%s agora comeca a tremer com os gritos da plateia \n e escuta tambem um grito monstruoso",nome);
    printf("\nAs portas se abrem e voce ve seu inimigo\n");
    r1=monstro(o);
    printf("Um %s vermelho segurando uma adaga enferrujada",r1.nome);
    printf("\nO combate se inicia voce se sente como se ja \nTivesse enfrentado inimigos assim antes e sente q pode fazer algo\nDigite 1 para atacar e digite 2 para usar sua habilidade: ");
    do{
    scanf("%d",&esc);
    }while(esc<1||esc>2);
    printf("%d %d %d %d",r1.atk,vc.atk,r1.vida,vc.vida);
    printf("\nA habilidade do %s foi ativada ele te ataca antes de voce poder reagir\n",r1.nome);
    vc.vida=defendendo(r1,vc);
    printf("%d",vc.vida);

    if(esc==1){
        atacando(r1,vc);
    }
    else{
        vc=hab(p,vc);
    }
    return 0;
}
