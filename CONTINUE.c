void CONTINUE(void){
	int ch;
	display();
	display();
	printf("\n\tWANT TO ENCRYPT ANOTHER TEXT\n");
	display();
	display();
	scanf("%d",ch);
	if(ch==0)
		PROGRAM();
}
