#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char boongan;

struct house{
	char location[101];
	char city[101];
	long long int price;
	int room, bathroom, car_park;
	char type[101];
	char furnish[101];
	char label[101];
};
struct house arr_house[4000];

struct isi{
	char location[101];
	char city[101];
	long long int price;
	int room, bathroom, car_park;
	char type[101];
	char furnish[101];
	char label[101];
};

struct isi arr_isi[4000];

void displaymenu(){
	printf("What do you want to do?\n");
	printf("1.	Display data\n");
	printf("2.	Search Data\n");
	printf("3.	Sort Data\n");
	printf("4.	Export Data\n");
	printf("5.	Exit\n");
	printf("Your choice: ");
}

void display_data(struct house arr_house[4000]){
	int num_rows;
	
	printf("Number of rows: ");
	scanf("%d", &num_rows);
	printf("\n");
	
	// print header
	printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
	
	// print isi
	for(int i=0; i<num_rows; i++){
		printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
	}
	
	scanf("%c", &boongan); getchar();
	system("cls");
}

void search_data(struct house arr_house[4000], int size){
	char input[50];
	printf("\n");
	printf("=====================================================================================================================\n");
	printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
	printf("=====================================================================================================================\n\n");
	printf("Choose column: ");
	scanf("%[^\n]s", &input); getchar();
	
	if(strcmp(input,"Location")==0){
		char find[101];
		int check=0;
		
		printf("What data do you want to find? ");
		scanf("%[^\n]s", &find); getchar();
		
		for (int i=0; i<size; i++){
			if(strcmp(arr_house[i].location, find)== 0){
				strcpy(arr_isi[check].location,arr_house[i].location);
				strcpy(arr_isi[check].city,arr_house[i].city);
				
				arr_isi[check].price=arr_house[i].price;
				arr_isi[check].room=arr_house[i].room;
				arr_isi[check].bathroom=arr_house[i].bathroom;
				arr_isi[check].car_park=arr_house[i].car_park;
				
				strcpy(arr_isi[check].type,arr_house[i].type);
				strcpy(arr_isi[check].furnish,arr_house[i].furnish);
				check++;
				
			}
		}
		
		if(check>0){
			printf("Data found. Detail of data:\n");
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<check; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_isi[i].location, arr_isi[i].city, arr_isi[i].price, arr_isi[i].room, arr_isi[i].bathroom, arr_isi[i].car_park, arr_isi[i].type, arr_isi[i].furnish);
			}
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(check ==0){
			printf("Data not found!");
			scanf("%c", &boongan); 
			system("cls");
		}
		
		
	
	}else if(strcmp(input,"City")==0 ){
		char find[101];
		int check=0;
		
		printf("What data do you want to find? ");
		scanf("%[^\n]s", &find); getchar();
		
		for (int i=0; i<size; i++){
			if(strcmp(arr_house[i].city, find)== 0){
				strcpy(arr_isi[check].location,arr_house[i].location);
				strcpy(arr_isi[check].city,arr_house[i].city);
				
				arr_isi[check].price=arr_house[i].price;
				arr_isi[check].room=arr_house[i].room;
				arr_isi[check].bathroom=arr_house[i].bathroom;
				arr_isi[check].car_park=arr_house[i].car_park;
				
				strcpy(arr_isi[check].type,arr_house[i].type);
				strcpy(arr_isi[check].furnish,arr_house[i].furnish);
				check++;
				
			}
		}
		
		if(check>0){
			printf("Data found. Detail of data:\n");
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<check; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_isi[i].location, arr_isi[i].city, arr_isi[i].price, arr_isi[i].room, arr_isi[i].bathroom, arr_isi[i].car_park, arr_isi[i].type, arr_isi[i].furnish);
			}
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(check ==0){
			printf("Data not found!");
			scanf("%c", &boongan); 
			system("cls");
		}
		
		
	}else if(strcmp(input,"Type")==0){
		char find[101];
		int check=0;
		
		printf("What data do you want to find? ");
		scanf("%[^\n]s", &find); getchar();
		
		for (int i=0; i<size; i++){
			if(strcmp(arr_house[i].type, find)== 0){
				strcpy(arr_isi[check].location,arr_house[i].location);
				strcpy(arr_isi[check].city,arr_house[i].city);
				
				arr_isi[check].price=arr_house[i].price;
				arr_isi[check].room=arr_house[i].room;
				arr_isi[check].bathroom=arr_house[i].bathroom;
				arr_isi[check].car_park=arr_house[i].car_park;
				
				strcpy(arr_isi[check].type,arr_house[i].type);
				strcpy(arr_isi[check].furnish,arr_house[i].furnish);
				check++;
				
			}
		}
		
		if(check>0){
			printf("Data found. Detail of data:\n");
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<check; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_isi[i].location, arr_isi[i].city, arr_isi[i].price, arr_isi[i].room, arr_isi[i].bathroom, arr_isi[i].car_park, arr_isi[i].type, arr_isi[i].furnish);
			}
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(check ==0){
			printf("Data not found!");
			scanf("%c", &boongan); 
			system("cls");
		}
		
	}else if(strcmp(input,"Furnish")==0){
		char find[101];
		int check=0;
		
		printf("What data do you want to find? ");
		scanf("%[^\n]s", &find); getchar();
		
		for (int i=0; i<size; i++){
			if(strcmp(arr_house[i].furnish, find)== 0){
				strcpy(arr_isi[check].location,arr_house[i].location);
				strcpy(arr_isi[check].city,arr_house[i].city);
				
				arr_isi[check].price=arr_house[i].price;
				arr_isi[check].room=arr_house[i].room;
				arr_isi[check].bathroom=arr_house[i].bathroom;
				arr_isi[check].car_park=arr_house[i].car_park;
				
				strcpy(arr_isi[check].type,arr_house[i].type);
				strcpy(arr_isi[check].furnish,arr_house[i].furnish);
				check++;
				
			}
		}
		
		if(check>0){
			printf("Data found. Detail of data:\n");
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<check; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_isi[i].location, arr_isi[i].city, arr_isi[i].price, arr_isi[i].room, arr_isi[i].bathroom, arr_isi[i].car_park, arr_isi[i].type, arr_isi[i].furnish);
			}
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(check ==0){
			printf("Data not found!");
			scanf("%c", &boongan); 
			system("cls");
		}
		
		
	}else if(strcmp(input,"Price")==0){
		long long int find;
		int check=0;
		
		printf("What data do you want to find? ");
		scanf("%lld", &find);
		
		for (int i=0; i<size; i++){
			if(arr_house[i].price== find){
				strcpy(arr_isi[check].location,arr_house[i].location);
				strcpy(arr_isi[check].city,arr_house[i].city);
				
				arr_isi[check].price=arr_house[i].price;
				arr_isi[check].room=arr_house[i].room;
				arr_isi[check].bathroom=arr_house[i].bathroom;
				arr_isi[check].car_park=arr_house[i].car_park;
				
				strcpy(arr_isi[check].type,arr_house[i].type);
				strcpy(arr_isi[check].furnish,arr_house[i].furnish);
				check++;
				
			}
		}
		
		if(check>0){
			printf("Data found. Detail of data:\n");
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<check; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_isi[i].location, arr_isi[i].city, arr_isi[i].price, arr_isi[i].room, arr_isi[i].bathroom, arr_isi[i].car_park, arr_isi[i].type, arr_isi[i].furnish);
			}
			scanf("%c", &boongan); getchar();
			system("cls");
			
		}else if(check ==0){
			printf("Data not found!");
			scanf("%c", &boongan); getchar();
			system("cls");
		}
		
	}else if(strcmp(input,"Rooms")==0){
		int find;
		int check=0;
		
		printf("What data do you want to find? ");
		scanf("%d", &find);
		
		for (int i=0; i<size; i++){
			if(arr_house[i].room== find){
				strcpy(arr_isi[check].location,arr_house[i].location);
				strcpy(arr_isi[check].city,arr_house[i].city);
				
				arr_isi[check].price=arr_house[i].price;
				arr_isi[check].room=arr_house[i].room;
				arr_isi[check].bathroom=arr_house[i].bathroom;
				arr_isi[check].car_park=arr_house[i].car_park;
				
				strcpy(arr_isi[check].type,arr_house[i].type);
				strcpy(arr_isi[check].furnish,arr_house[i].furnish);
				check++;
				
			}
		}
		
		if(check>0){
			printf("Data found. Detail of data:\n");
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<check; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_isi[i].location, arr_isi[i].city, arr_isi[i].price, arr_isi[i].room, arr_isi[i].bathroom, arr_isi[i].car_park, arr_isi[i].type, arr_isi[i].furnish);
			}
			scanf("%c", &boongan); getchar();
			system("cls");
			
		}else if(check ==0){
			printf("Data not found!");
			scanf("%c", &boongan); getchar();
			system("cls");
		}
		
	}else if(strcmp(input,"Bathrooms")==0){
		int find;
		int check=0;
		
		printf("What data do you want to find? ");
		scanf("%d", &find);
		
		for (int i=0; i<size; i++){
			if(arr_house[i].bathroom== find){
				strcpy(arr_isi[check].location,arr_house[i].location);
				strcpy(arr_isi[check].city,arr_house[i].city);
				
				arr_isi[check].price=arr_house[i].price;
				arr_isi[check].room=arr_house[i].room;
				arr_isi[check].bathroom=arr_house[i].bathroom;
				arr_isi[check].car_park=arr_house[i].car_park;
				
				strcpy(arr_isi[check].type,arr_house[i].type);
				strcpy(arr_isi[check].furnish,arr_house[i].furnish);
				check++;
				
			}
		}
		
		if(check>0){
			printf("Data found. Detail of data:\n");
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<check; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_isi[i].location, arr_isi[i].city, arr_isi[i].price, arr_isi[i].room, arr_isi[i].bathroom, arr_isi[i].car_park, arr_isi[i].type, arr_isi[i].furnish);
			}
			scanf("%c", &boongan); getchar();
			system("cls");
			
		}else if(check ==0){
			printf("Data not found!");
			scanf("%c", &boongan); getchar();
			system("cls");
		}
		
	}else if(strcmp(input,"Carpark")==0){
		int find;
		int check=0;
		
		printf("What data do you want to find? ");
		scanf("%d", &find);
		
		for (int i=0; i<size; i++){
			if(arr_house[i].car_park== find){
				strcpy(arr_isi[check].location,arr_house[i].location);
				strcpy(arr_isi[check].city,arr_house[i].city);
				
				arr_isi[check].price=arr_house[i].price;
				arr_isi[check].room=arr_house[i].room;
				arr_isi[check].bathroom=arr_house[i].bathroom;
				arr_isi[check].car_park=arr_house[i].car_park;
				
				strcpy(arr_isi[check].type,arr_house[i].type);
				strcpy(arr_isi[check].furnish,arr_house[i].furnish);
				check++;
				
			}
		}
		
		if(check>0){
			printf("Data found. Detail of data:\n");
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<check; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_isi[i].location, arr_isi[i].city, arr_isi[i].price, arr_isi[i].room, arr_isi[i].bathroom, arr_isi[i].car_park, arr_isi[i].type, arr_isi[i].furnish);
			}
			scanf("%c", &boongan); getchar();
			system("cls");
			
		}else if(check ==0){
			printf("Data not found!");
			scanf("%c", &boongan); getchar();
			system("cls");
		}
		
	}else{
		system("cls");
	}
	
}

void sort_by(struct house arr_house[4000], int size){
	char input[50];
	printf("\n");
	printf("=====================================================================================================================\n");
	printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
	printf("=====================================================================================================================\n\n");
	printf("Choose column: ");
	scanf("%[^\n]s", &input); getchar();
	
	if(strcmp(input,"Location")==0){
		char sort[50];
		printf("Sort ascending or descending [asc/dsc]: ");
		scanf("%[^\n]s", &sort); getchar();
		
		if(strcmp(sort,"asc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(strcmp(arr_house[j].location, arr_house[j-1].location)<0){
						char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
						
					}
				}
			}
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(strcmp(sort,"dsc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(strcmp(arr_house[j].location, arr_house[j-1].location)>0){
						char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
						
					}
				}
			}
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
		}
				
	
	}else if(strcmp(input,"City")==0 ){
		char sort[50];
		printf("Sort ascending or descending [asc/dsc]: ");
		scanf("%[^\n]s", &sort); getchar();
		
		if(strcmp(sort,"asc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(strcmp(arr_house[j].city, arr_house[j-1].city)<0){
						char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
						
					}
				}
			}
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(strcmp(sort,"dsc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(strcmp(arr_house[j].city, arr_house[j-1].city)>0){
						char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
						
					}
				}
			}
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
		}
		
		
	}else if(strcmp(input,"Type")==0){
		char sort[50];
		printf("Sort ascending or descending [asc/dsc]: ");
		scanf("%[^\n]s", &sort); getchar();
		
		if(strcmp(sort,"asc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(strcmp(arr_house[j].type, arr_house[j-1].type)<0){
						char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
						
					}
				}
			}
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(strcmp(sort,"dsc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(strcmp(arr_house[j].type, arr_house[j-1].type)>0){
						char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
						
					}
				}
			}
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
		}
		
	}else if(strcmp(input,"Furnish")==0){
		
		char sort[50];
		printf("Sort ascending or descending [asc/dsc]: ");
		scanf("%[^\n]s", &sort); getchar();
		
		if(strcmp(sort,"asc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(strcmp(arr_house[j].furnish, arr_house[j-1].furnish)<0){
						char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
						
					}
				}
			}
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(strcmp(sort,"dsc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(strcmp(arr_house[j].furnish, arr_house[j-1].furnish)>0){
						char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
						
					}
				}
			}
			
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
		}
		
	}else if(strcmp(input,"Price")==0){
		
		char sort[50];
		printf("Sort ascending or descending [asc/dsc]: ");
		scanf("%[^\n]s", &sort); getchar();
		
		if(strcmp(sort,"asc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(arr_house[j].price < arr_house[j-1].price){
		    			char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
					}
				}
			}
		
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(strcmp(sort,"dsc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(arr_house[j].price > arr_house[j-1].price){
		    			char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
					}
				}
			}
		
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
		}
		
	}else if(strcmp(input,"Rooms")==0){
		
		char sort[50];
		printf("Sort ascending or descending [asc/dsc]: ");
		scanf("%[^\n]s", &sort); getchar();
		
		if(strcmp(sort,"asc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(arr_house[j].room < arr_house[j-1].room){
		    			char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
					}
				}
			}
		
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(strcmp(sort,"dsc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(arr_house[j].room > arr_house[j-1].room){
		    			char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
					}
				}
			}
		
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan);
			system("cls");
		}
		
	}else if(strcmp(input,"Bathrooms")==0){
		
		char sort[50];
		printf("Sort ascending or descending [asc/dsc]: ");
		scanf("%[^\n]s", &sort); getchar();
		
		if(strcmp(sort,"asc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(arr_house[j].bathroom < arr_house[j-1].bathroom){
		    			char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
					}
				}
			}
		
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(strcmp(sort,"dsc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(arr_house[j].bathroom > arr_house[j-1].bathroom){
		    			char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
					}
				}
			}
		
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
		}
		
	}else if(strcmp(input,"Carpark")==0){
		
		char sort[50];
		printf("Sort ascending or descending [asc/dsc]: ");
		scanf("%[^\n]s", &sort); getchar();
		
		if(strcmp(sort,"asc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(arr_house[j].car_park < arr_house[j-1].car_park){
		    			char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
					}
				}
			}
		
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
			
		}else if(strcmp(sort,"dsc")==0){
			
			for(int i=0; i<size-1; i++){
				for(int j=size-1; j>i; j--){
					if(arr_house[j].car_park > arr_house[j-1].car_park){
		    			char temp[101];
						int temps;
						
						strcpy(temp, arr_house[j].location);
		    			strcpy(arr_house[j].location, arr_house[j-1].location);
		    			strcpy(arr_house[j-1].location, temp);
		    			
		    			strcpy(temp, arr_house[j].city);
		    			strcpy(arr_house[j].city, arr_house[j-1].city);
		    			strcpy(arr_house[j-1].city, temp);
		    			
		    			strcpy(temp, arr_house[j].type);
		    			strcpy(arr_house[j].type, arr_house[j-1].type);
		    			strcpy(arr_house[j-1].type, temp);
		    			
		    			strcpy(temp, arr_house[j].furnish);
		    			strcpy(arr_house[j].furnish, arr_house[j-1].furnish);
		    			strcpy(arr_house[j-1].furnish, temp);
		    			
		    			temps= arr_house[j].price;
						arr_house[j].price= arr_house[j-1].price;
						arr_house[j-1].price= temps;
						
						temps= arr_house[j].room;
						arr_house[j].room= arr_house[j-1].room;
						arr_house[j-1].room= temps;
						
						temps= arr_house[j].bathroom;
						arr_house[j].bathroom= arr_house[j-1].bathroom;
						arr_house[j-1].bathroom= temps;
						
						temps= arr_house[j].car_park;
						arr_house[j].car_park= arr_house[j-1].car_park;
						arr_house[j-1].car_park= temps;
					}
				}
			}
		
			printf("%-30s%-19s%-13s%-7s%-13s%-13s%-13s%-13s\n", arr_house[0].label, arr_house[1].label, arr_house[2].label, arr_house[3].label, arr_house[4].label, arr_house[5].label ,arr_house[6].label ,arr_house[7].label );
			for(int i=0; i<10; i++){
				printf("%-30s%-19s%-13lld%-7d%-13d%-13d%-13s%-13s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
			}
			
			scanf("%c", &boongan); 
			system("cls");
		}
		
	}else{
		system("cls");
	}
	
}

void export_data(struct house arr_house[4000], int size){
	char name[101];
	char name_f[101];
	
	printf("File name: ");
	scanf("%[^\n]", name); getchar();
	
	int panjang= strlen(name);
	
	for(int i=0; i<panjang; i++){
		if(name[i] == ' '){
			name[i]= '_';
		}
	}
	
	sprintf(name_f, "%s.csv", name);
	
	FILE*f= fopen(name_f, "w");
	
	for(int i=0; i<8;i++){
		if(i<7){
			fprintf(f, "%s,", arr_house[i].label);
		}else{
			fprintf(f, "%s\n", arr_house[i].label);
		}
	}
	
	for(int i=0; i<size; i++){
		fprintf(f,"%s,%s,%lld,%d,%d,%d,%s,%s\n", arr_house[i].location, arr_house[i].city, arr_house[i].price, arr_house[i].room, arr_house[i].bathroom, arr_house[i].car_park, arr_house[i].type, arr_house[i].furnish);
	}
	
	printf("Data successfully written to file %s!\n", name_f);
	fclose(f);
	scanf("%c", &boongan); 
	system("cls"); 
	
}

int main(){
	int menu;
	
	while(1){
		int count=0;
		
		FILE* fp= fopen("file.csv", "r");
		
		// scan header
		for(int i=0; i<8;i++){
			if(i<7){
				fscanf(fp, "%[^,],", arr_house[i].label);
			}else{
				fscanf(fp, "%[^\n]\n,", arr_house[i].label);
			}
		}
		
		// scan isi
		while(!feof(fp)){
			fscanf(fp,"%[^,],%[^,],%lld,%d,%d,%d,%[^,],%[^\n]\n", &arr_house[count].location, &arr_house[count].city, &arr_house[count].price, &arr_house[count].room, &arr_house[count].bathroom, &arr_house[count].car_park, &arr_house[count].type, &arr_house[count].furnish);
			count++;
		}
		
		fclose(fp);
		
		displaymenu();
		scanf("%d", &menu); getchar();
		
		if(menu==1){
			display_data(arr_house);
		}else if(menu==2){
			search_data(arr_house, count);
		}else if(menu==3){
			sort_by(arr_house, count);
		}else if(menu==4){
			export_data(arr_house, count);
		}else if(menu==5){
			break;
		}else{
			printf("\n");
			system("cls");
		}
		
		
	}
	
	return 0;
}
