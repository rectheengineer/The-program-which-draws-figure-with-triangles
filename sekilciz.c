#include <stdio.h>
#include <conio.h>

//Bu program "Recep Oğuzhan Şenoğlu" tarafından yazılmıştır. || This program is written by  "Recep Oguzhan Senoglu".
//            mail: userlitte1@gmail.com

int main()
{
	printf("by    rec.the.engineer\n\n\n");
	
	
	//Kelebek çizdir
	
	int i=0,
		j=0;
		
	while(j<9)
	{
		i=0;
		while(i<9)
		{
			if(i==0 || i==8 || ((i<=j || i>=8-j) && j<5) || ((i>=j || i<=8-j) && j>4))
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}	
	printf("\n\n\n");
	
	//içi boş kelebek çizdir
	
	//int 
		i=0,
		j=0;
		
	while(j<9)
	{
		i=0;
		while(i<9)
		{
			if(i==0 || i==8 || i==j || i==8-j)
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
		printf("\n\n\n");
	
	//kumsaati çizdir
	
	//int 
		i=0,
		j=0;
		
	while(j<15)
	{
		i=0;
		while(i<15)
		{
			if(j==0 || j==14 || (i>=j && i<=14-j && j<8) || (j>7 && i>13-j && i<=j))
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}	
		printf("\n\n\n");
	
	//içiboş kumsaati çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<15)
	{
		i=0;
		while(i<15)
		{
			if((j<11 && (j==0 || i==j || i==14-j)) || (j>10 && (j==14 || i == j || i==14-j)))
			{
				printf("o ");
				i++;
			}			
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
		printf("\n\n\n");
		
	//baklava çizdir
	
	//int 
	 	j=0,
		i=0;
	
	while(j<15)
	{
		i=0;
		while(i<15)
		{
			if((j<8 && (i<=7-j || i>=7+j)) || (j>7 && (i<=j-7 || i>=21-j)))
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		j++;
		printf("\n");
	}
		printf("\n\n\n");
		
	//ters üçgen çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<4)
	{
		i=0;
		while(i+j<=6)
		{
			if(i>=j)
			{
				printf("0 ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
			printf("\n");
			j++;
	}
		printf("\n\n\n");
	
	//içiboş ters üçgen çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<5)
	{
		i=0;
		while(i<9)
		{
			if(i==j || i==8-j || j==0) 
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//diküçgen çizdir
	
	//int 
		i=0,
		j=0;
		
	while(i<=5)
	{
		j=0;
		while(j<=i)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n\n\n");
		
	//içiboş diküçgen çizdir
	
	//int 
		i=0,
		j=0;
		
	while(j<9)
	{
		i=0;
		while(i<=j)
		{
			if(i==0 || i==j || j==8) 
			{	
			printf("0 ");
			i++;
			}			
			else
			{
				printf("  ");
				i++;
			}		
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//ters dik üçgen çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<=5)
	{
		i=0;
		while(i+j<=5)
		{
			printf("* ");
			i++;
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//içiboş ters dik üçgen çizdir
	
	//int 
		i=0,
		j=0;
		
	while(j<9)
	{
		i=0;
		while(i+j<9)
		{
			if(i==0 || j==0 || i+j==8) 
			{	
			printf("* ");
			i++;
			}			
			else
			{
				printf("  ");
				i++;
			}		
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//üçgen çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<7)
	{
		i=0;
		while(i<13)
		{
			if(i>=6-j && i<=6+j)
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//içiboş üçgen çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<7)
	{
		i=0;
		while(i<13)
		{
			if(i==6-j || i==6+j || j==6)
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//yan üçgen çizdir
	
	//int 
		i=0,
		j=0;
		
	while(j<10)
	{
		i=0;
		while((i<=j && j<=4) || (i+j<=8 && j>4))
		{
			printf("0 ");
			i++;

		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//içiboş yan üçgen çizdir
	
	//int 
		i=0,
		j=0;
		
	while(j<9)
	{
		i=0;
		while((j<5 && i<=j) || (j>4 && i+j<9))
		{
			if(((i==0 || i==j) && j<5) || ((i==0 || i+j==8) && j>4))
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//yanyana ters dik üçgen çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<7)
	{
		i=0;
		while(i<13)
		{
			if(i==0 || i==12 || i<=6-j || i>= 6+j)
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//içiboş yanyana ters dik üçgen çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<7)
	{
		i=0;
		while(i<13)
		{
			if(j==0 || i==0 || i==12 || i==6-j || i==6+j)
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//yanyana dik üçgen çizdir
	
	//int 
		i=0,
		j=0;
	
	while(j<7)
	{
		i=0;
		while(i<13)
		{
			if(i==0 || i==12 || i<=j || i>=12-j)
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
	printf("\n\n\n");
		
	//içiboş yanyana dik üçgen çizdir
	
	//int 
		i=0,
		j=0;
		
	while(j<7)
	{
		i=0;
		while(i<13)
		{
			if(i==0 || j==6 || i==j || i==12-j || i==12)
			{
				printf("o ");
				i++;
			}
			else
			{
				printf("  ");
				i++;
			}
		}
		printf("\n");
		j++;
	}
	
	//not thanks to SÜ	
	
	getch();
	return 0;
}
