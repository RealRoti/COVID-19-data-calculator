#include<stdio.h>
int main(void)
{
	float positivi;
	float abitanti;
	float incidenza;
	float bollprec;
	float differenza;
	float fine;
	
	printf("Inserisci il numero di positivi: ");
	scanf("%f", &positivi); /*la funzione scanf legge l'input e lo assegna alla variabile*/
	printf("Inserisci abitanti del tuo paese: ");
	scanf("%f", &abitanti);
	incidenza=positivi/abitanti*1000;
	printf("La cifra equivale a %.2f", incidenza);
	printf(" come incidenza su mille abitanti. ");
	
/*positivi rispetto al bollettino precedente*/
	printf("Ora segui le indicazioni per compilare i positivi rispetto al bollettino precedente. ");
	printf("Inserisci il numero di positivi: ");
	scanf("%f", &positivi); /*la funzione scanf legge l'input e lo assegna alla variabile*/
	printf("Inserisci positivi nello scorso bollettino: ");
	scanf("%f", &bollprec);
	differenza=positivi-bollprec;
	printf("La cifra equivale a %.2f", differenza);
	
	printf("Ora segui le indicazioni per compilare la media giornaliera ");
	printf(" ");
	scanf("%f", &positivi); /*la funzione scanf legge l'input e lo assegna alla variabile*/
	printf("Inserisci positivi nello scorso bollettino: ");
	scanf("%f", &bollprec);
	differenza=positivi-bollprec;
	printf("La cifra equivale a %.2f", differenza);
	
	printf("Premi un pulsante per uscire: ");
	scanf("%f", &fine);
	
	
	return;
}
