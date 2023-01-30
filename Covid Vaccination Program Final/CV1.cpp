#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Node{
	char Name[30];
	char Phone[15];
	int Age;
	char Location[30];
	char Hoss[30];
	struct Node *next;
};

struct Node* head;

void Insert(char na[30],int age,char ph[15],int lo,int hoss);
void Search(char ph[15]);
void Insert_file(struct Node* temp);
void Print();
struct Node* Certificate(struct Node* temp);
void Status(char ph[15]);

int main(){
	char na[30];
	int age;
	int lo;
	int ch;
	int hoss;
	char ph[15];
	Insert("Sagar",21,"9663736347",1,2);
	Insert("Mahesh",74,"9945784538",2,3);
	Insert("Suraj",23,"8861026156",2,1);
	Insert("Ashok",44,"1234567890",3,6);
	while(1){
		printf("\t\t\t\t\t----------------------------------------\n");
		printf("\t\t\t\t\t| Welcome to Covid Vaccination Program |\n");
		printf("\t\t\t\t\t----------------------------------------\n");
		printf("Enter your choice:\n1.Registration\n2.Download Certificate\n3.Display\n4.Status\n5.Exit\n");
		scanf("%d",&ch);
		if(ch == 1){
			printf("\nWelcome to Registration\n");
			printf("Enter your Name: ");
			scanf("%s",na);
			printf("Enter your Age: ");
			scanf("%d",&age);
			printf("Enter your Phone Number: ");
			scanf("%s",ph);
			printf("Enter your Location:\n1.Kumarswamy Layout\n2.Hoskerihalli\n3.Jpnagar\n");
			scanf("%d",&lo);
			struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
			temp = head;
			int chh,chhh;
			if(lo == 1){
				strncpy(temp->Location,"Kumarswamy Layout",30);
				printf("\n");
				printf("You have selected Kumarswamy Layout as your location!\n");
				printf("Here are the Hospitals Nearby you:\n1.Sagar Hospitals\n2.Fortis\n");
				printf("Choose a Hospital to confirm your booking : ");
				scanf("%d",&chh);
				if(chh == 1){
					printf("You have selected Sagar Hospitals.\n");
					printf("Confirm Booking:\n1.Y\t2.N\n");
					scanf("%d",&chhh);      
					if(chhh == 1){
						printf("Booking Confirmed at Sagar Hospitals!\n");
						Insert(na,age,ph,lo,1);
					}
					else {
						printf("Booking Cancelled!\n");
					}
				}
				else if(chh == 2){
					printf("You have selected Fortis:\n");
					printf("Confirm Booking:\n1.Y\t2.N\n");
					scanf("%d",&chhh);
					if(chhh == 1){
						printf("Booking Confirmed at Fortis!\n");
						Insert(na,age,ph,lo,2);
					}
					else {
						printf("Booking Cancelled!\n");
					}
				}
			}
		else if(lo == 2){
			strncpy(temp->Location,"Hosakerihalli",30);
			printf("You have selected Hosakerihalli as your location!\n");
			printf("Here are the Hospitals Nearby you:\n1.NU Hospitals\n2.Motherhood\n");
			printf("Choose a Hospital to confirm your booking:\n");
			scanf("%d",&chh);
			if(chh == 1){
				printf("You have selected NU Hospital.\n");
				printf("Confirm Booking:\n1.Y\t2.N\n");
				scanf("%d",&chhh);
				if(chhh == 1){
					printf("Booking Confirmed at NU Hospital!\n");
					Insert(na,age,ph,lo,3);
				}
				else {
					printf("Booking Cancelled!\n");
				}
			}
			else if(chh == 2){
				printf("You have selected Motherhood Hospital\n");
				printf("Confirm Booking:\n1.Y\t2.N\n");
				scanf("%d",&chhh);
				if(chhh == 1){
					printf("Booking Confirmed at Motherhood Hospital\n");
					Insert(na,age,ph,lo,4);
				}
				else {
					printf("Booking Cancelled!\n");
				}
			}		
		}
		else if(lo == 3){
			strncpy(temp->Location,"JPNagar",30);
			printf("You have selected JPNagar as your location!\n");
			printf("Here are the Hospitals Nearby you:\n1.Apollo Hospitals\n2.Ayu Healthcare\n");
			printf("Choose a Hospital to confirm your booking:\n");
			scanf("%d",&chh);
			if(chh == 1){
				printf("You have selected Apollo Hospital.\n");
				printf("Confirm Booking:\n1.Y\t2.N\n");
				scanf("%d",&chhh);
				if(chhh == 1){
					printf("Booking Confirmed at Apollo Hospital!\n");
					Insert(na,age,ph,lo,5);
				}
				else {
					printf("Booking Cancelled!\n");
				}
			}
			else if(chh == 2){
				printf("You have selected Ayu Healthcare\n");
				printf("Confirm Booking:\n1.Y\t2.N\n");
				scanf("%d",&chhh);
					if(chhh == 1){
						printf("Booking Confirmed at Ayu Healthcare\n");
						Insert(na,age,ph,lo,6);
					}
					else {
						printf("Booking Cancelled!\n");
					}
			}
		}
	}
		else if(ch == 2){
			printf("Enter your Ph.no : ");
			scanf("%s",ph);
			Search(ph);
		}	
		else if(ch == 3){
			Print();
		}
		else if(ch == 4){
			printf("Check you're Booking Status:\n");
			printf("Enter you're Ph.no : ");
			scanf("%s",&ph);
			Status(ph);
		}
		else if(ch == 5){
			exit(EXIT_SUCCESS);
		}
		else if(ch == 6) printf("\nWrong Choice Buddy!\nGet a life now..\n");
	}
}


void Insert(char na[30],int age,char ph[15],int lo,int hoss){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	strncpy(temp->Name,na,15);
	temp->Age = age;
	strncpy(temp->Phone,ph,15);
	if(lo == 1){
		strncpy(temp->Location,"Kumarswamy Layout",40);
	}
	else if(lo == 2){
		strncpy(temp->Location,"Hosakerihalli",40);
	}
	else if(lo == 3){
		strncpy(temp->Location,"JPNagar",40);
	}
	if(hoss == 1){
		strncpy(temp->Hoss,"Sagar Hospitals",30);
	}
	else if(hoss == 2){
		strncpy(temp->Hoss,"Fortis",30);
	}
	else if(hoss == 3){
		strncpy(temp->Hoss,"NU Hospitals",30);
	}
	else if(hoss == 4){
		strncpy(temp->Hoss,"Motherhood Hospitals",30);
	}
	else if(hoss == 5){
		strncpy(temp->Hoss,"Apollo Hospitals",30);
	}
	else if(hoss == 6){
		strncpy(temp->Hoss,"Ayu Hospitals",30);
 	}
	temp->next = head;
	head = temp;
	Insert_file(temp);
}


void Status(char ph[15]){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp = head;
	int flag=0;
	while(temp!=NULL){
		if((strcmp(temp->Phone,ph))==0){
			printf("Booking confirmed at : ");
			printf("%s",temp->Hoss);
			printf("\n");
			flag=1;
			break;
		}
	temp = temp->next; 
    }
    if(flag==0){
    	printf("No Record Found!\n");
	}
}


void Search(char ph[15]){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node)) ;
	temp = head;
	int flag=0;
	while(temp!=NULL){
		if((strcmp(temp->Phone,ph))==0){
			Certificate(temp);
			flag=1;
			break;
		}
	temp = temp->next;
	}
	if(flag==0){
		printf("No Record Found!\n");
	}
}


void Insert_file(struct Node* temp){
	FILE *fp;
	fp = fopen("Database.txt","aw+");
	fprintf(fp,"Name\t\t :\t%s\nAge\t\t : \t%d\nPh Number\t :\t%s\nLocation\t :\t%s\nBooking\t\t :\t%s\n",temp->Name,temp->Age,temp->Phone,temp->Location,temp->Hoss);
	fprintf(fp,"-------------------------------------------------------------\n");
	fclose(fp);
}


void Print(){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp = head;
	printf("\nUser Details:\n");
	printf("-------------\n");
	while(temp!= NULL){
		printf("Name      : %s\nAge       : %d\nPh Number : %s\nLocation  : %s\n",temp->Name,temp->Age,temp->Phone,temp->Location);
		printf("\n");
		temp = temp->next;
	}
}

struct Node* Certificate(struct Node* temp){
	FILE *file;
	file = fopen("Vaccination_Certificate.txt", "w+");
	fprintf(file,"Congrats %s you're Vaccinated\n",temp->Name);
	printf("\nCertificate saved to device\n");
	fclose(file);
}
