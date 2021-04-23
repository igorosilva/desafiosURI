#include <stdio.h>

int main(){
	
	char a1[20], a2[20], a3[20];
	
	scanf("%s", a1);
	scanf("%s", a2);
	scanf("%s", a3);
	
	if(a1[0] == 'v'){ //se a1 = [V]ertebrado		
		if(a2[0] == 'a'){	//se a2 = [A]ve		
			if(a3[0] == 'c'){ //se a3 = [C]arnivoro
				printf("aguia\n");	
			} else {
				printf("pomba\n");
			}
			
		} else { //mamifero
			if(a3[0] == 'o'){ //se a3 = [O]nivoro
				printf("homem\n");
			} else {
				printf("vaca\n");
			}
		}
	} else { //senao invertebrado
		if(a2[0] == 'i'){ //se a2 = [I]nseto
			if(a3[2] == 'm'){ //se a3 = [H]ematofago
				printf("pulga\n");
			} else {
				printf("lagarta\n");
			}
		} else { //anelideo
			if(a3[0] == 'h'){ //se a3 = [H]ematofago
				printf("sanguessuga\n");
			} else {
				printf("minhoca\n");
			}	 
		} 	
	}
	
	
	return 0;
}
