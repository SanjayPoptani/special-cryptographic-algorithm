 
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <ctype.h>
#include<complex.h>


int main()
{ int n=6;

long long int c2[n];
int s = 5;
int g= 17;
int m;
int p = 27;
int u =2;
int l = 6;
char i;
long long int z[n];
char array1[50] ;
long long int array2[2];
long long int c3[n];
long long int c = pow(g,s);
	
 long long int r[n];
long long int haystack[n];
printf("-------------------For random number-------------- ");

  printf("\n%d is c value = g^s\n", c);
  int d = c % p;
  printf("\n%lld is g^s mod p \n" , d);
  
   for( i = 0 ; i <n ; i++ ) 
   {
      haystack[i] = (rand() % (u-l + 1)) + l;
      printf("%lld\n", haystack[i]);

   }
   for(i=0;i<n;i++)
   {
     r[i] = pow(d,haystack[i]);
	 printf("\n%lld \n", r[i]);
   }

  printf("-------------For Plain Text---------------");
	printf("\n enter your statement\n");
	for (i=0;i<n;i++)
	{
		scanf("%c",&array1[i]);
	//printf("%c\n" , array1[i]);	
    }
    
    
printf("-------------For numeric values to Alphabets----------------");
  for (i=0;i<n;i++)
   {
   			array2[i]= tolower(array1[i]);
			printf("\n%d\n" , array2[i]); 
    }
  for (i=0;i<n;i++)
  {
  	array2[i]= array2[i]-96;
  	printf(" the value for alphabets is %d\t", array2[i]);
  }
   for (i=0;i<n;i++)
   {
	array2[i]=array2[i] + r[i];
	printf("\n %d \n" ,array2[i]);
    }
 printf("-------------For C1---------------");
int c1[n];
for (i=0;i<n;i++)
{
c1[i]= array2[i];
	printf(" \nvalue of c1 = %d", c1[i] );
	if (c1[i]<= 27)
	{ printf("final value of c1= %d\t", c1[i]);
	} else {
	
	c1[i]= c1[i]%p;
	printf("\n final value of new c1 = %lld\t" , c1[i]);
	}
	
}

 for(i=0;i<n;i++)
   {
     z[i] = pow(g,haystack[i]);
	 printf("\n %lld \n", z[i]);
}

printf("-------------For C2---------------");
for(i=0;i<n;i++)
{ c2[i] = z[i];
	printf("\n%lld \n", c2[i]);
}
double h= 27;
long long int c4[n];
for(i=0;i<n;i++)
{
	c3[i]= c2[i];
	c4[i]= fmod(c3[i],h);
	printf("\n c2 is  =%lld\n", c4[i]);
}
 for(i=0;i<n;i++)
   {
   
printf(" final value of new c1 = %d\t" , c1[i]);
	printf("\n c2 is  =%lld\n", c4[i]);
}

long long int c5[n];
for(i=0;i<n;i++)
{
 c5[i]= pow(c4[i],s);
printf("%lld\t",c5[i]);
c5[i]=c5[i]%p;
 printf("\nfinal = %lld\t",c5[i]);
}

long long int c6[n];
for (i=0;i<n;i++)
{
	c6[i]= c1[i]-c5[i];
	printf("%lld\t", c6[i]);
if (c6[i]<0){
	c6[i]=27+c6[i];
	printf("%lld\t", c6[i]);

}

	c6[i]=c6[i]+96;
	c6[i]= toupper(c6[i]);
				printf("final value is = %c\t", c6[i]);
}
printf("-------------For Encrypted C1 and C2---------------");
for(i=0;i<n;i++)

   {
   
printf(" \nfinal value of new c1 = %d\t" , c1[i]);
	printf("\n c2 is  =%lld\t", c4[i]);
	printf("\nfinal value is = %c\t", c6[i]);
}




}
