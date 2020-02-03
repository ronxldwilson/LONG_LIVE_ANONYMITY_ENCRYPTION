#include"DEV_MODE.c"
#include"ENCRYPT001.c"
#include"DECRYPT001.c"

#include"PASS_CHANGE.c"
#include"PASS_FORGET.c"
#include"EXIT_MESSAGE.c"

void MENU(void){
	int CONT=0,ch;
	char choice;
	do{
	CLEAR();
	display();
	display();
	printf("\n\tMENU\n");
	printf("\n\t1.\tENCRYPT TEXT\n");
	printf("\n\t2.\tDECRYPT TEXT\n");
	printf("\n\t3.\tPASSWORD CHANGE\n");
	printf("\n\t4.\tFORGOT PASSWORD\n");
	printf("\n\t5.\tABOUT\n");
	printf("\n\t6.\tEXIT\n");
	display();
	display();
	fflush(stdin);
	scanf("%c",&ch);

	switch(ch){
		case '1':ENCRYPT001();
			break;
		case '2':DECRYPT001();
			break;
		case '3':PASS_CHANGE();
			break;
		case '4':PASS_FORGET();
			break;
		case '5':ABOUT();
			break;
		case '6':EXIT_MESSAGE();
				CONT=1;
			break;
		case '~':DEV_MODE();
			break;
		default:printf("\n\tWRONG CHOICE\n");	
		printf("%c",ch);	

	}
	if(CONT!=1){
		printf("\n\tWANT OT RUN THE MENU AGAIN(PRESS 0)\n");
		scanf("%d",&CONT);
		}
	}while(CONT==0);
}
