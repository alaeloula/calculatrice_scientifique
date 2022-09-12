#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

int getInt(){
	char line[100];
	int num;
	while(1){
	
	fgets(line,100,stdin);
		if(sscanf(line,"%d ",&num)!=1)
		{
			puts("error");
		}else break;
	}
	return num;
}
double getDouble(){
	char line[100];
	double num;
	while(1){
	
	fgets(line,100,stdin);
		if(sscanf(line,"%lf ",&num)!=1)
		{
			puts("error");
		}else break;
	}
	return num;
}

void somme(){
	double a,b;
	printf(" enter the first number: ");
	a=getDouble();
	printf("\n enter the second number : ");
	b=getDouble();
	printf("%.2lf",a+b);
}
//--------------------------------------------------------
void substraction(){
	double a,b;
	printf(" enter the first number: ");
	a=getDouble();
	printf("\n enter the second number : ");
	b=getDouble();
	printf("%.2lf",a-b);
}
//--------------------------------------------------------
void multiplication(){
	double a,b;
	printf(" enter the first number: ");
	a=getDouble();
	printf("\n enter the second number : ");
	b=getDouble();
	printf("%.2lf",a*b);
}
//--------------------------------------------------------
void division(){
	double a,b=0;
	printf(" enter the first number: ");
	a=getDouble();
	
	while(b==0){
		printf("\n enter the second number : ");
     	b=getDouble();
		}
	printf("%.2lf",a/b);
}
//--------------------------------------------------------
void nbparfait(){
	int s=0, n, i;
 printf("\n Entrez un nombre: ");
  n=getInt();
  
  for(i = 1; i <= n/2; i++){
    if(n%i == 0){
      s+=i; 
    }
  }
  if(s == n){
    printf(" le Nombre est un nombre parfait");
  }  
  else{
    printf(" le Nombre n'est pas un Nombre parfait");
  }
}


//--------------------------------------------------------

void calculersin(){
	double a;
	printf(" enter the  number: ");
	scanf("%lf",&a);
	printf("%.2lf",sin(a));
}
//--------------------------------------------------------
void calculercos(){
	double a;
	printf(" enter the  number: ");
	a=getDouble();
	printf("%.2lf",cos(a));
}

//--------------------------------------------------------
void calculertan(){
	double a;
	printf(" enter the  number: ");
	scanf("%lf",&a);
	printf("%.2lf",tan(a));
}

//--------------------------------------------------------
void calculerlog(){
	double a;
	printf(" enter the  number: ");
	a=getDouble();
	printf("%.2lf",log(a));
}

//--------------------------------------------------------
void calculerexp(){
	double a;
	printf(" enter the  number: ");
	a=getDouble();
	printf("%.2lf",exp(a));
}
//--------------------------------------------------------
void valeurabs(){
	int a;
	printf(" enter the  number: ");
	a=getInt();
	printf("%d",abs(a));
}
//--------------------------------------------------------
void cpower(){
	double a,b;
	printf(" enter the  number: ");
	a=getDouble();
	printf(" enter the  power: ");
	b=getDouble();
	printf("%.2f",pow(a,b));
}
 int menu(){
 	
 	int s;
 	while(1){
 		
	 	printf("Pour la somme choisir 1 \n");
		printf("Pour la substraction choisir 2\n");
		printf("Pour la multiplication choisir 3 \n");
		printf("Pour la division choisir 4\n");
		printf("Pour les  nbparfait choisir 5\n");
		printf("Pour le sin choisir 6\n");
		printf("Pour le cos choisir 7\n");
		printf("Pour le tan choisir 8\n");
		printf("Pour le log choisir 9\n");
		printf("Pour l' exp choisir 10\n");
		printf("Pour la valeur absolute choisir 11 \n");
		printf("Pour la puissance choisir 12\n");
		s=getInt();
		if((s<1 || s>12))
		{
			puts("out range");
       	     sleep(2);
       	     system("cls");
		}else{
		
			
			
			break;
	 }
	 }
 	return s;
 }

int main(){
	start :;
	int s=menu();
		switch (s)
	{
			case 1:
				somme();
				break;
				
			case 2:
				substraction();
				break;
				
			case 3:
				multiplication();
				break;	
				
			case 4:
				division();
				break;	
				
			case 5:
				nbparfait();
				break;	
				
			case 6:
				calculersin();
				break;	
				
			case 7:
				calculercos();
				break;
			
			case 8:
				calculertan();
				break;
				
			case 9:
				calculerlog();
				break;	
			
			case 10:
				calculerexp();
				break;
			
			case 11:
				valeurabs();
				break;
			
			case 12:
				cpower();
				break;				
	}
sleep(2);system("cls");
goto start;
	return 0;
}
