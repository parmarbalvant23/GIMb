#include<stdio.h>

main()
{
	int lenguagechoice,survicechoice;
	
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujrati\n");
	printf("enter your choice");
	scanf("%d",&lenguagechoice);

   
   switch(lenguagechoice)
{

    case 1:
	        printf(" press 1 for internet recharge\n");
		    printf("press 2 for top up recharge\n");	
	        printf("press 3 for special recharge\n");	
            printf("enter your choice =");
            scanf("%d",&survicechoice);
            switch(survicechoice)

		
		{
		
		
            	case 1 :
            		
            		    printf("your internetrecharge is successful");
            		    break;
            		    
            	case 2:
            		   
            		   printf("your top up is successful");
            		   break;
            		   
                case 3: 
                      
                        printf("your special recharge is successful");
                        break;
                 
                default: 
				
				        printf("pls enter valid choice");
               
			   switch(lenguagechoice)
			   
             {
			   	case 2 :
			   		    
			   		      printf("internet recharge ke liye v1 dabaye");
			   		      printf("top up recharge ke liya 2 dabaye");
			   		      printf("special recharge ke liye 3 dabaye");
			   		      printf("enter your choice");
		   		          scanf("%d",&survicechoice);
			   		      switch(lenguagechoice)
			   		      
 {
	case 1:  
			
			printf("aapaka internet recharge safal ta purvak ho gaya he");
			break;
			  
	
	case 2 :
		     printf("aapka top up recharge safal ta purvak ho gaya he");
		     break;
		     
    case 3 :
    	   
    	printf("aapka special recharge safal ta purvak ho gaya he");
    	break;
			   		      		
}
			   		    
			   	
			   	
	} 
      }
        
 }
      
}
       
