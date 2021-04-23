#include <stdio.h>

int main(){
	
	int horaI, horaF, total;
	
	scanf("%d %d", &horaI, &horaF);
	
	if(horaI > horaF){
		total = (horaF + 24) - horaI;		
		printf("O JOGO DUROU %d HORA(S)\n", total);
	} else if(horaF > horaI){
		total = horaF - horaI;		
		printf("O JOGO DUROU %d HORA(S)\n", total);
	} else{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	return 0;
}
