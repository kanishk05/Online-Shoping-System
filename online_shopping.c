
//Online Shoping System

#include<stdio.h>
#include<string.h>

int main()
{
	
	static int totalCost;
	int i , j , choice ,c=1 , a[9] , cost[9] ;
	
	for(i=0 ; i<9 ; i++)
	a[i] = 0;
 	char str[100];
	char items[9][100] = {
						  "Dell Keyboard",
						  "Logitech Mouse",
						  "Pendrve 16 GB",
					   	  "Adidas",
						  "Nike",
						  "Leecooper",
						  "Lenovo Vibe K5",
						  "Gionee S6",
						  "Samsung J7"  
						 };
						
	printf("Please Enter Your Name\n");
	gets(str);
	printf("Hello %s, Welcome to our Online Shopping System.\n",str);
	
	do{
	//C is 1 by default
	if(c==1)
	{
		printf("Enter\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\nAny other number to exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			{
				int accessoriesChoice;
				printf("Enter\n1 - Dell Keyboard - Rs.355\n2 - Logitech Mouse- Rs.500\n3 - Pendrive 16 GB - Rs.550\nAny other number to exit\n");
				scanf("%d",&accessoriesChoice);
				cost[0] = 355;
				cost[1] = 500;
				cost[2] = 550;
				
				switch(accessoriesChoice)
				{
					case 1:
					{
						int num;
						printf("You chose Dell Keyboard with Rs.355.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
    					scanf("%d",&num);
    					if(num == 1)
    					{
    						a[0]++;
    						totalCost = totalCost+355;
						}
    					printf("Your Cost in Cart is %d\n",totalCost);
    					break;
					}
					
     				case 2:
    				{
    					int num;
    					printf("You chose Logitech Mouse with Rs.500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
    					scanf("%d",&num);
    					if(num==1)
    					{
    						a[1]++;
    						totalCost = totalCost+500;
    					}
    					printf("Your Cost in Cart is %d\n",totalCost);
    					break;
    				}
    				
    				case 3:
    				{
    					int num;
      					printf("You chose Pendrive 16GB with Rs.550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      					scanf("%d",&num);
    					if(num==1)
    					{
    						a[2]++;
							totalCost = totalCost+550;
    					}
    					printf("Your Cost in Cart is %d\n",totalCost);
    					break;
    				}
    				
    				default:
					{
    					printf("Exit from Computer Accesories\n");
    					break;
    				}
				}
				break;
			}
			
			case 2:
			{
				int shoesChoice;
				printf("Enter\n1 - Adidas - Rs.3550\n2 - Nike - Rs.5000\n3 - Leecooper - Rs.2800\nAny other number to exit\n");
				scanf("%d",&shoesChoice);
				cost[3] = 3550;
				cost[4] = 5000;
    			cost[5] = 2800;
    			
    			switch(shoesChoice)
    			{
    				case 1:
    				{
    					int num;
    					printf("You chose Adidas Shoes for Rs.3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
    					scanf("%d",&num);
    					if(num==1)
    					{
    						a[3]++;
    						totalCost = totalCost+3550;
    					}
      					printf("Your Cost in Cart is %d\n",totalCost);
    					break;
    				}
    				
    				case 2:
    				{
    					int num;
    					printf("You chose Nike Shoes for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
    					scanf("%d",&num);
    					if(num==1)
    					{
    						a[4]++;
							totalCost = totalCost+5000;
    					}
    					printf("Your Cost in Cart is %d\n",totalCost);
    					break;
    				}
    				
    				case 3:
    				{
    					int num;
    					printf("You chose Leecooper Shoes for Rs.2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
    					scanf("%d",&num);
    					if(num==1)
    					{
    						a[5]++;
    						totalCost = totalCost+2800;
    					}
    					printf("Your Cost in Cart is %d\n",totalCost);
    					break;
    				}
    				
    				default:
					{
    					printf("Exit from Shoes Category\n");
    					break;
    				}
    			}
				break;
			}
			
			case 3:
			{
				int mobileChoice;
				printf("Enter\n1 - Lenovo Vibe K5 - Rs.11000\n2 - Gionee S6 - Rs.9866\n3 - Samsung J7 - Rs.12800\nAny other number to exit\n");
				scanf("%d",&mobileChoice);
				cost[6] = 11000;
				cost[7] = 9866;
				cost[8] = 12800;
				
				switch(mobileChoice)
				{
    				case 1:
    				{
    					int num;
    					printf("You chose to buy Lenovo Vibe K5 for Rs.11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
    					scanf("%d",&num);
    					if(num==1)
    					{
    						a[6]++;
    						totalCost = totalCost+11000;
    					}
    					printf("Your Cost in Cart is %d\n",totalCost);
    					break;
    				}
    				
    				case 2:
    				{
    					int num;
    					printf("You chose to buy Gionee S6 for Rs.9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
    					scanf("%d",&num);
    					if(num==1)
    					{
    						a[7]++;
    						totalCost = totalCost+9866;
    					}
    					printf("Your Cost in Cart is %d\n",totalCost);
    					break;
    				}
    				
    				case 3:
    				{
						int num;
						printf("You chose to buy Samsung J7 for Rs.12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
						scanf("%d",&num);
						if(num==1)
						{
							a[8]++;
							totalCost = totalCost+12800;
						}
						printf("Your Cost in Cart is %d\n",totalCost);
						break;
					}
					
					default:
					{
						printf("Exit from Mobile Category\n");
						break;
					}
				}
				break;
   			}
   			
			default:
			{
				printf("Enter Valid Categories Choice\n");
				break;
			}
		}
		
		printf("%s's cart\n",str);
		printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
		for(i=0 ; i<9 ; i++)
		{
			if(a[i]!=0)
			{
				printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
			}
		}
		printf("Total Cost\t\t\t\t\t%d\n",totalCost);
		printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
		scanf("%d",&c);
	}
	if(c==2)
	{
	   int id;
	   printf("Enter id to delete item\n");
	   scanf("%d",&id);
	   if(id<9 && id>0)
	   {
			totalCost = totalCost-(cost[id]*a[id]);
			a[id]=0;
	   }
	   
	   else
	   {
			printf("Enter Valid id\n");
	   }
		printf("Revised Items \n");
	    printf("Id\tItems\t\t\tQuantity\t\tCost\n");
	    for(i=0 ; i<9 ; i++)
	    {
	    	if(a[i]!=0)
	    	{
				printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
	    	}
	    }
	    printf("Total Cost\t\t\t\t\t%d\n",totalCost);
	    printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
	    scanf("%d",&c);
	} 
  }
	
	while(c==1 || c==2);
		printf("Your Final Cost is %d\n",totalCost);
		printf("Thanks %s for Choosing Us and Visit us again.\n",str);
	return 0;
}
