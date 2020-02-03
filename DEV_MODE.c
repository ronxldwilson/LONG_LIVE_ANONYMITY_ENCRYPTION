#include"DEV_MODE_MESSAGE.c"
#include"SOURCE_MESSAGE.c"
#include"ABOUT_DEV.c"
/** PASS CHANGE.c AND PASS_FORGET.c
	already included in the menu function no need to include again*/

void DEV_MODE(void){
	int choice;
	DEV_MODE_MESSAGE();
	display();
	printf("\n\tMENU:\n");
	display();
	printf("\n\t1. GET SOURCE CODE FOR THE PROGRAM\n");
	printf("\n\t2. PASSWORD OF THE PROGRAM\n");
	printf("\n\t3. CHANGE PASSWORD OF THE PROGRAM\n");
	printf("\n\t4. DEVELOPERS MESSAGE\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:SOURCE_MESSAGE();
			break;
		case 2:PASS_CHANGE();
			break;
		case 3:PASS_FORGET();
			break;
		case 4:ABOUT_DEV();
			break;
		default:break;	
	}	
	system("color 0A");
	
}


