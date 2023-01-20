#include<stdio.h>
#include<string.h>

int form(char name[],int password);
void intro();

void signinform(char uid[],int upass);
void home_data();
void info_data();
void contact_data();


void intro()
{
	printf("**************************************************************************\n");
	printf("*                                                                        *\n");
	printf("* Alternative Protein And Nutritional Supplements.                       *\n");
	printf("*                                                                        *\n");
	printf("* developed by:                                                          *\n");
	printf("* jeet dodia                                                             *\n");
	printf("**************************************************************************\n");
}

void form();
void form()
{
	int choice,upass;
	char uid[10];
	printf("-------------------------------Alternative protein and nutritional supplements-------------------------------\n");
	printf("Enter 1 to create a new account\nEnter 2 to sign into an existing account:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		        printf("***********************************************\n");
		        printf("Enter your new username:");
		        scanf("%s",&uid);
		        printf("\nEnter your password:");
		        scanf("%d",&upass);
		        printf("\n***********************************************\n");
		        signinform(uid,upass);
		case 2: signinform(uid,upass);
		        break;
	}
}

void app();
void app()
{
  int c;
  printf("1.Homepage\n2.Info\n3.Contact us\n");
  scanf("%d",&c);
  switch(c)
  {
  	case 1: home_data();
  	        app();
  	        break;
  	case 2: info_data();
  	        app();
  	        break;
  	case 3: contact_data();
  	        app();
			break;  
  }
}

void home_data()
{
	printf("_-_-_-_-_-_-_-Alternativesprotein_-_-_-_-_-_-_-_-\!\n\n");

    printf("Meat alternative are focused on delivering the same cultural and sensory experiences to animal-derived food, so that consumers and producers have alternatives doesn't fell like big sacrifice. Alt-protein products can be produced using one or a combination of the following three Modalities, Plant-based, Fermentation-derived & Cultivated ");
    printf("If you have any questions, please reach out to us. We are here to provide support, guidance, and resources to help you on your journey to a healthier life."); 
    printf("\n\n");
    printf("Thanks for visiting our protein sites!");
    printf("\n");
}

void info_data()
{
	printf("_-_-_-_-_-_-_-Alternativesprotein_-_-_-_-_-_-_-_-!\n"); 
    printf("1.Given how essential alternative proteins are to a global protein transition, the term itself needs to be universally understood,on the tip of more tongues, and at the top of more agendas.\n"); 
    printf("2.This is your guide to plant-based.Explore our tools, resources, and expert analysis of this field, from science to policy and markets.\n"); 
    printf("3.This is your guide to cultivated.Explore our tools, resources, and expert analysis of the cultivated industry\n"); 
    printf("4.This is your guide to precision fermentation and whole biomass fermentation for alt protein production. Find resources, tools, and expert industry analysis here\n"); 
    printf("5.As per a survey,meat and dairy use 83% of the world's farmland and are responsible<br> for 60% of the greenhouse gas emission from agriculture\n");
    printf("6.Schizophrenia: Delusions, hallucinations, disorganized speech, difficulty communicating, social withdrawal\n"); 
    printf("\n");
}
	
void  contact_data()
{
	long int phone;
	char email[30],name[20],msg[50];
	printf("Welcome to the contact page of alternative protein !\n We are here to answer any questions you have about protein in India. \nPlease fill out the form below and we will get back to you as soon as possible.\n");
	printf("-------Enter Name-------:");
	scanf("%s",&name);
	printf("\n------Enter Email------:");
	scanf("%s",&email);
	printf("\n------Enter Phone Number------:");
	scanf("%ld", &phone);
	printf("\n------Leave a message to us-------:");
	scanf("%s",&msg);
	
}


void signinform(char uid[],int upass)
{
	//printf("%s",uid);
  char user_id[10];
  int user_ip;
  printf("\n------Enter name and password------\n:");
  scanf("%s",&user_id);
  scanf("%d",&user_ip);
  if(strcmp(user_id,uid)==0 && user_ip==upass)
  {
  	app();
  }
  else
  {
  	printf("doesnt work");
  }
}


int main()
{
	intro();
	form();
}
