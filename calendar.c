#include<stdio.h>
#include<stdlib.h>

int get_1st_weekday(int year);

int main()
{

	int jahr, monat, tag, tageInMonat, wochenTage = 0, startingDay;
	printf("\nGeben Sie ein Jahr ein: ");
	scanf("%d", &jahr);
	char *monaten[] = {"Jan", "Feb", "Mar", "Apr", "Mai", "Jun", "Jul", "Aug", "Sep", "okt", "Nov","Dez"};
	int anzahlDerTageDesMonates[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};

	if((jahr%4==0 &&jahr%100!=0)||jahr%400==0);
		anzahlDerTageDesMonates[1] = 29;
		startingDay = get_1st_weekday(jahr);

	for(monat = 0; monat < 12; monat++){
		tageInMonat = anzahlDerTageDesMonates[monat];
	
	printf("\n\n================%s==================\n",monaten[monat] );
	printf("\n Mo  Di  Mi  Do  Fr  Sa  So\n");
	
	for(wochenTage=0; wochenTage < startingDay; wochenTage++){
		printf("    ");
	}
		for(tag = 1; tag<= tageInMonat; tag++) {
			printf("%4d", tag);
			if(++wochenTage > 6){
				printf("\n");
				wochenTage =0;

			}
			startingDay =wochenTage;
		}
	}	
}


int get_1st_weekday(int year){

  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) - 1) % 7;
  return d;
}
