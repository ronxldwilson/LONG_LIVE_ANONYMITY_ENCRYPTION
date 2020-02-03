#include<time.h>

void CLEAR(void){
	system("cls");
}

void display(void)
{
	printf("\n\t***********************************************************\n");
}
void nametag(void)
{
	display();
	printf("\n\tPROGRAM MADE BY RONALD WILSON\n");
	display();
}
//include a function to check for if a number is entered or a character
void COIL(int ch){
	int i;
	for(i=0;i<ch;i++)
	{
		if(i%2==0)
			printf("#");	
	}
}
void ABOUT(void) 
{
	CLEAR();
	display();
	display();
	printf("File :%s\n", __FILE__ );
	printf("Date :%s\n", __DATE__ );
	printf("Time :%s\n", __TIME__ );
	printf("Line :%d\n", __LINE__ );
	printf("ANSI :%d\n", __STDC__ );
	display();
	display();
	getch();
	CLEAR();
}


void HOME(void)
{
	printf("\n\tTHERE'S NO PLACE LIKE HOME\n\n");
	display();
	printf("\t\t\t  #    ##  #####     ####       ####      ####       # \n");
	printf("\t\t\t ##   #  #     #    ######     ######    #####      ## \n");
	printf("\t\t\t# #     #     #     ######     ######    ######    # # \n");
	printf("\t\t\t  #    #   #####    ######     ######    ######      # \n");
	printf("\t\t\t  #   #      #      ######     ######    ######      # \n");
	printf("\t\t\t####  ####   #    #  ####   #   ####   #  ####  # ##### \n");
	display();
}

void EXIT(void)
{
	system("cls");
	display();
	HOME();
	printf("\n\tEND OF PROGRAM\n");
	display();
	printf("\n\tPRESS ANY KEY TO CONTINUE\n");
	getch();
}

void DELAY(float NUMBER_OF_SECONDS){
	
	int millisecond=1000*NUMBER_OF_SECONDS;
	
	clock_t START_TIME=clock();
	
	while(clock()<START_TIME+millisecond);
}
void LOAD(void){
	int i;
	
	display();
	printf("\n\tPRESS ENTER TO LOAD PROGRAM\n\t");
	display();
	getch();
	CLEAR();
	printf("\e[?25l");
	for(i=0;i<=100;i++)
	{
		CLEAR();
		display();
		printf("\n\tLOADING PROGRAM...(%d)\n\t",i);
		display();
		printf("\t");
		if(i%2==0)
			COIL(i);
		//printf("");
		DELAY(0.00007);
	}
	printf("\e[?25h");
	display();
	printf("\n\tPROGRAM LOADED PRESS ANY KEY TO CONTINUE\n");
	display();
	getch();
}


