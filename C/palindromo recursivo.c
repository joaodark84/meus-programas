#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Lerlinha(char *s){
	scanf(" %[^\r\n]",s);
}
int Ehpalindromo(char *array,int i,int j){
	if(i>=j){
		return 1;	
	}
	if(array[i]!=array[j]){
			return 0;
		}
	return Ehpalindromo(array,i+1,j-1);
	
}	
int main(){
	char array[1000],finalizador[]="FIM";
	int i=0,j;
	do{
		Lerlinha(array);
		if(strcmp(array,finalizador)!=0){
			if(Ehpalindromo(array,i,j=strlen(array)-1)==1){
				printf("SIM\n");	
			}
			else {
				printf("NAO\n");
			}
		}
	}while(strcmp(array,finalizador)!=0);
	return 0;
}