//Ilke D. 04/11/2022

#include <stdio.h>
int main()
{
	float count=0; //count as ticket count or number of people 
	char weekend;  //to ask if it is weekend or not
	
	printf("How many tickets do you want?(1-100)\n");
	scanf("%f",&count);

	
	if (count<6 && count>0)
		{
		 scanf("%c",&weekend);
		 printf("Will you buy a ticket for the Weekend? (y,Y for YES - n,N for NO)\n");
		 scanf("%c",&weekend);
			 switch (weekend) 
			 {
			 	case 'y':
		 		case 'Y':
		 			 printf("Discount:0 percent\nFee Per Ticket:30 TL\nTotal Fee:%.2f TL",count*30);
		 			 break;
			        case 'n':
				case 'N':
				     	printf("Discount:0 percent\nFee Per Ticket:20 TL\nTotal Fee:%.2f TL",count*20);
				     	break;
		 		default:
		 			printf("Wrong Input!!!");
		 	}
	 	}

	
	
	else if (count>5 && count<20)
		 {
		 scanf("%c",&weekend);
            	 printf("Will you buy a ticket for the Weekend? (y,Y for YES - n,N for NO)\n");
		 scanf("%c",&weekend);
            		 switch (weekend) 
			 {
             		 	case 'Y' :
				case 'y' :
             				printf("Discount:%.2f\nFee Per Ticket:%.2f TL\nTotal Fee:%.2f TL", (count*0.2) , 30-(30*count*0.2/100) , count*30-(30*count*0.2/100) );
             				break;
   			        case 'N' :
				case 'n' :
					printf("Discount:%.2f\nFee Per Ticket:%.2f TL\nTotal Fee:%.2f TL", (count*0.3) , 20-(20*count*0.3/100) , count*20-(20*count*0.3/100) );
					break;	
			        default:
			        	printf("Wrong Input!!!");
			   }
		 }
   	 
	
	
	else if (count>20)

    	 	{
    	 	scanf("%c",&weekend);
		printf("Will you buy a ticket for the Weekend? (y,Y for YES - n,N for NO)\n");
    	 	scanf("%c",&weekend);
    	 	 	switch (weekend) 
			 {
    	 	        	case 'y':
   	 	        	case 'Y':
   	 	        		printf("Discount:%.2f\nFee Per Ticket:%.2f TL\nTotal Fee:%.2f" , (count*0.4) , 30-(30*count*0.4/100) , count*30-(30*count*0.4/100) );
   	 	        		break;
   	 	        	case 'n':
      		        	case 'N':
      		        		printf("Discount:%.2f\nFee Per Ticket:%.2f TL\nTotal Fee:%.2f" , (count*0.5) , 20-(20*count*0.5/100) , count*20-(20*count*0.5/100) );
      		        		break;
      		        	default:
      		        		printf("Wrong Input!!!");
      		 	 }
	}
	
	
	else
		printf("Wrong Input!!!");
return 0;
}


