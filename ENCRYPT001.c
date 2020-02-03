#define TEXT_LENGTH 1000
#define PASS_LEN 64

void ENCRYPT001(void){
	char TEXT[1000],CIPHER[1000],password[64];
	int i,COUNT,PASS_LENGTH,j=0;
	display();
	printf("\n\tENTER THE TEXT TO BE ENCRYPTED:\n");
	display();
	scanf("%s",TEXT);
	display();
	printf("\n\tENTER THE PASSWORD\n");
	display();
	scanf("%d",&password);
	getch();
	/* ENCRYPTION ALGO FOR ENTERED TEXT*/
	
	//length of the text determination
	for(COUNT=0;TEXT[COUNT]!='\0';COUNT++);
	//length of password determination;
	for(PASS_LENGTH=0;password[PASS_LENGTH]!='\0';PASS_LENGTH++);
	//encrypting the text
	for(i=0;i<COUNT;i++)
	{
		if(j<PASS_LENGTH)
		{	
			CIPHER[i]=TEXT[i]+password[j];
			j++;	
		}else
			j=0;
	}
	
	display();
	printf("\n\tTHE CIPHER TEXT IS:\n");
	display();
	printf("\n%s\n",CIPHER);
	getch();
	CLEAR();
	
	/*After printing the cipher text its 
	is to be made sure that the array which
	contained the cipher text and the message
	are again nullifid back to zero so
	that there is no garbage memory left in
	the form of cipher,text or password
	*/
	for(i=0;i<TEXT_LENGTH;i++)
	{
		CIPHER[i]=0;
		TEXT[i]=0;
	}
	for(i=0;i<PASS_LEN;i++)
	{
		password[i]=0;
	}
	PASS_LENGTH=0;
	COUNT=0;
	i=0;
	j=0;
}
