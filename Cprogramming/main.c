#include <stdio.h>
struct login{
	char fname[100];
	char lname[200];
	char username[20];
	char password[100];

};
registe()
{
	FILE *log;
	log=fopen("login12.txt","w");
	struct login l;
	printf("Enter first name:");scanf("%s",l.fname);
	printf("Enter last name:");scanf("%s",l.lname);
	printf("Enter Username:");scanf("%s",l.username);
	printf("Enter password:");scanf("%s",l.password);
	fwrite(&l,sizeof(l),1,log);

	fclose(log);
	printf("\n\nYour user name is userID\n");
	printf("Now login with UserID and password\n");
	printf("\nPress any key to continue ........");
	getch();
	system("Cls");
	login();


}

login(){
	char username[200],password[20];
	FILE *log;
	log=fopen("login12.txt","r");
	struct login l;
	printf("UserID:");
	scanf("%d",&username);
	printf("Password:");
	scanf("%d",&password);

	while (fread(&l,sizeof(l),1,log))
	{
		if(strcmp(username,l.username)==0&&strcmp(password,l.password)==0)
{


		printf("succesful login\n");
}
		else{
			printf("please enter correct Username and password");

		}
	}
	fclose(log);


}
main(){
	int cho;
	printf("press '1' for register \npress '2' for login\n\n");
	scanf("%d",&cho);
	if (cho==1)
	{
		system("Cls");
		registe();

	}
	else if(cho==2){
		system("Cls");
		login();
	}
	}
