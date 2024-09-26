#include <stdio.h>
#include <stdlib.h>

float heron (int a , int n){
	if (n==0)
		return 1 ;
	else{ 
		float prev = heron (a, n-1);
		if (prev == 0) {
            		printf("Erreur : division par zéro.\n");
            		exit(EXIT_FAILURE);
		}
		return ( prev +a / prev )/2 ;
	}
}

int main(void){
    int a,b;
    // Invitation et lecture de 'a'
    printf("Choisis le nombre a : ");
    if (scanf("%d", &a) != 1) {
        printf("Erreur de lecture pour 'a'.\n");
        return 1;
    }
    printf("%d\n",a);
    // Invitation et lecture de 'b'
    printf("Choisis le nombre d'itérations b : ");
    if (scanf("%d", &b) != 1) {
        printf("Erreur de lecture pour 'b'.\n");
        return 1;
    }
    
    // Vérification des entrées
    if (b < 0) {
        printf("Erreur : le nombre d'itérations doit être non négatif.\n");
        return 1;
    }
    if (a < 0) {
        printf("Erreur : le nombre 'a' doit être non négatif pour calculer une racine carrée.\n");
        return 1;
    }

    printf("le résultat de la racine de %d approximé %d fois est %.2f\n", a, b, heron(a,b)); 

}    
