#include<stdlib.h>
#include<stdio.h>
int flag,b;
void foodval(int);
void fooditem(int[],int,int);

void main()
{
	int mood,api;
	printf("Input the mood and api\n");
	scanf("%d%d",&mood,&api);
	b=mood;
	//(if(api>=75)
	//	mood=1;
	//else if(mood<=50)
	//	mood=3;
	//else
	//	mood=2;)
	for(;;)
	{	switch(api)
		{	
			case 1: printf("Look's Like You Have A Dope Mood Tonight\n");
				flag=1;
				foodval(b);
				
				break;
			case 2: printf("Look's Like You Have A Descent Mood Tonight\n");
				flag=2;
				foodval(b);
				
				break;
			case 3: printf("Look's Like You Have A Bad Mood Tonight \n");
				flag=3;
				foodval(b);
				
				break;
			deafult  : exit(0);
		}
	exit(0);	
	} 

	
	
}	

void foodval()

{		
		int a[13]={0,5,10,15,20,25,30,35,40,45,50,55,60},i=0,sum=0,j=12;
		printf("WE RECOMEND THIS FOOD FOR YOU \n");
		
		while(i<=j)
			{	
				sum=a[i]+a[j];
				if(sum==b)
					{				
					fooditem(a,i,j);
					exit(0);
					}
				else if(sum<b)
					i++;

				else 
					j--;
			}
	
				
}		


void fooditem(int a[],int i,int j)
{


	if(flag==1)
	{
	        for(;;)
	          { switch(a[i])
	                {
	                        case 0: printf("Curdrice & ");
	                                break;
	                        
	                        case 5: printf("momo & ");
	                                break;
	                        
	                        case 10: printf("Pancakes & ");
	                                break;
	                        
	                        case 15: printf("Masala dosa & ");
	                                break;
	                        
	                        case 20: printf("Fried rice & ");
	                                break;
	                        
	                        case 25: printf("Shrimp/Lobster & ");
	                                break;
	                      
	                        case 30: printf("Biryani & ");
	                                break;
	                        
	                        case 35: printf("Dumplings & ");
	                                break;
	                        
	                        case 40: printf("Pizza & ");
	                                break;
	                        
	                        case 45: printf("Bread Kofta & ");
	                                break;
	                        
	                        case 50: printf("Speghetti & ");
	                                break;
	                        
	                        case 55: printf("sushi & ");
	                                break;
	                        
	                        case 60: printf("Panner steak & ");
	                                break;
	                        
	                        case 65: printf("Chili chicnken & ");
	                                break;
	                        
	                        case 70: printf("cheese sandwhich & ");
	                                break;
	                        
	                        case 75: printf("royal white sauce & ");
	                                break;
	                        
	                        case 80: printf("Dragon Roll & ");
	                                break;
	                        
	                        case 85: printf("Allo Parotha & ");
	                                break;
	                       
	                        
	                        
	                }
	           
	       


		 switch(a[j])
	                {
	                      case 0: printf("Curdrice  \t");
	                                break;
	                        
	                        case 5: printf("momo \t");
	                                break;
	                        
	                        case 10: printf("Pancakes \t");
	                                break;
	                        
	                        case 15: printf("Masala dosa \t");
	                                break;
	                        
	                        case 20: printf("Fried rice \t");
	                                break;
	                        
	                        case 25: printf("Shrimp/Lobster \t");
	                                break;
	                      
	                        case 30: printf("Biryani \t");
	                                break;
	                        
	                        case 35: printf("Dumplings \t");
	                                break;
	                        
	                        case 40: printf("Pizza \t");
	                                break;
	                        
	                        case 45: printf("Bread Kofta \t");
	                                break;
	                        
	                        case 50: printf("Speghetti \t");
	                                break;
	                        
	                        case 55: printf("sushi\t");
	                                break;
	                        
	                        case 60: printf("Panner steak\t");
	                                break;
	                        
	                        case 65: printf("Chili chicnken\t");
	                                break;
	                        
	                        case 70: printf("cheese sandwhich\t");
	                                break;
	                        
	                        case 75: printf("royal white sauce\t");
	                                break;
	                        
	                        case 80: printf("Dragon Roll\t");
	                                break;
	                        
	                        case 85: printf("Allo Parotha\t");
	                                break;
	                       
	                        
	                        
	                        
	                }
	           exit(0);
	           }
	}
	else if(flag==2)
	{
	
        
	           switch(a[i])
	                {
	                        case 0: printf("Vada /bajji & ");
	                                break;
	                        
	                        case 5: printf("Wontons & ");
	                                break;
	                        
	                        case 10: printf("Sandwiches & ");
	                                break;
	                        
	                        case 15: printf("sanwhiches & ");
	                                break;
	                        
	                        case 20: printf("Fried rice & ");
	                                break;
	                        
	                        case 25: printf("Shrimp/Lobster & ");
	                                break;
	                      
	                        case 30: printf("Biryani & ");
	                                break;
	                        
	                        case 35: printf("Dumplings & ");
	                                break;
	                        
	                        case 40: printf("Pizza & ");
	                                break;
	                        
	                        case 45: printf("Bread Kofta & ");
	                                break;
	                        
	                        case 50: printf("Speghetti & ");
	                                break;
	                        
	                        case 55: printf("Sushi & ");
	                                break;
	                        
	                        case 60: printf("Butter paneer burger & ");
	                                break;
	                        
	                        case 65: printf("pizza burger & ");
	                                break;
	                        
	                        case 70: printf("Hakka noodles & ");
	                                break;
	                        
	                        case 75: printf("Chick flick & ");
	                                break;
	                        
	                        case 80: printf("Mars caramel cake & ");
	                                break;
	                        
	                        case 85: printf("Chopsee & ");
	                                break;
	                      }		
		

			switch(a[j])
	                {
	                        case 0: printf("Vada /bajji\t");
	                                break;
	                        
	                        case 5: printf("Wontons\t");
	                                break;
	                        
	                        case 10: printf("Sandwiches\t");
	                                break;
	                        
	                        case 15: printf("chole bahture\t");
	                                break;
	                        
	                        case 20: printf(" moose cake\t");
	                                break;
	                        
	                        case 25: printf(" Semifreddo\t");
	                                break;
	                      
	                        case 30: printf("Biryani \t");
	                                break;
	                        
	                        case 35: printf(" Large Choco Shake\t");
	                                break;
	                        
	                        case 40: printf("Pizza \t");
	                                break;
	                        
	                        case 45: printf(" Gazar Halwa\t");
	                                break;
	                        
	                        case 50: printf(" Meat Balls & DBC\t");
	                                break;
	                        
	                        case 55: printf(" Donut\t");
	                                break;
	                        
	                        case 60: printf("Butter paneer burger\t");
	                                break;
	                        
	                        case 65: printf("pizza burger\t");
	                                break;
	                        
	                        case 70: printf("Hakka noodles\t");
	                                break;
	                        
	                        case 75: printf("Chick flick\t");
	                                break;
	                        
	                        case 80: printf("maggi fries\t");
	                                break;
	                        
	                        case 85: printf(" fushion chips\t");
	                                break;
	                      }		
		
	
 
}



	else if(flag==3)
	{
	
	        for(;;)
	          { switch(a[i])
	                {
	                        case 0: printf("omelette & ");
	                                break;
	                        
	                        case 5: printf("Momo & ");
	                                break;
	                        
	                        case 10: printf("Pancake & ");
	                                break;
	                        
	                        case 15: printf("Masala dosa & ");
	                                break;
	                        
	                        case 20: printf("Fried rice & ");
	                                break;
	                        
	                        case 25: printf("Shrimp & ");
	                                break;
	                      
	                        case 30: printf("Biryani & ");
	                                break;
	                        
	                        case 35: printf("Dumplings & ");
	                                break;
	                        
	                        case 40: printf("Pizza & ");
	                                break;
	                        
	                        case 45: printf("bread kofta & ");
	                                break;
	                        
	                        case 50: printf("Spegetti with meat balls & ");
	                                break;
	                        
	                        case 55: printf("Sushi & ");
	                                break;

				case 60: printf("Chinese platter & ");
	                                break;
	                        
	                        case 65: printf("Pasta salad & ");
	                                break;
	                        
	                        case 70: printf("Chocolate pizza & ");
	                                break;
	                        
	                        case 75: printf("Fries with schewan sauce & ");
	                                break;
	                        
	                        case 80: printf("BBQ paneer & ");
	                                break;
	                        
	                        case 85: printf("chocolate truffle & ");
	                                break;
	                      }		
			
				
		 switch(a[j])
	                {
	                        case 0: printf(" rasgulla\t");
	                                break;
	                        
	                        case 5: printf("kulfi\t");
	                                break;
	                        
	                        case 10: printf(" french fries \t");
	                                break;
	                        
	                        case 15: printf(" jalebi\t");
	                                break;
	                        
	                        case 20: printf(" choco  mousse\t");
	                                break;
	                        
	                        case 25: printf("Shrimp \t");
	                                break;
	                      
	                        case 30: printf(" icecream\t");
	                                break;
	                        
	                        case 35: printf(" large choco shake\t");
	                                break;
	                        
	                        case 40: printf("honey cake\t");
	                                break;
	                        
	                        case 45: printf(" gajar ka halwa\t");
	                                break;
	                        
	                        case 50: printf("Spegetti with meat balls \t");
	                                break;
	                        
	                        case 55: printf("Sushi & donut\t");
	                                break;

				case 60: printf(" mudpie\t");
	                                break;
	                        
	                        case 65: printf(" chocolate tart\t");
	                                break;
	                        
	                        case 70: printf("Chocolate pizza\t");
	                                break;
	                        
	                        case 75: printf(" oreo shake\t");
	                                break;
	                        
	                        case 80: printf(" apple pie \t");
	                                break;
	                        
	                        case 85: printf(" margarita \t");
	                                break;
	                      }		
		exit(0);
	}
		
 
}


}


