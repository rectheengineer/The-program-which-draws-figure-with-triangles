#include <stdio.h>

//Bu program "Recep Oðuzhan Þenoðlu" tarafýndan yazýlmýþtýr. || This program is written by  "Recep Oðuzhan Þenoðlu".
//            mail: userlitte1@gmail.com

int main()
{
	printf("by    rec.the.engineer\n\n\n");
	
	//j=height  &&  i=width
	
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
	
	//içi boþ kelebek çizdir
	
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
	
	//içiboþ kumsaati çizdir
	
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
	
	//içiboþ ters üçgen çizdir
	
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
		
	//içiboþ diküçgen çizdir
	
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
		
	//içiboþ ters dik üçgen çizdir
	
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
		
	//içiboþ üçgen çizdir
	
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
		
	//içiboþ yan üçgen çizdir
	
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
		
	//içiboþ yanyana ters dik üçgen çizdir
	
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
		
	//içiboþ yanyana dik üçgen çizdir
	
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
	
	return 0;
}
