///·Å«×Âà´«

#include <stdio.h>

int main( void )
{
    int t,f,c;
    printf( "Temperature Conversion: \n" );
    printf( "Enter 0 to convert C to F\n" );
    printf( "Enter 1 to convert F to C\n" );
    printf( "Enter 0 or 1: " );
    scanf( "%d", &t );

	if (t==0)
   	 {
   	 printf("Enter Celsius: ");
   	 scanf("%d",&c);
   	 printf("Fahrenheit: %d\n",9*c/5+32);
   	}

    else
    {
    printf("Enter Fahrenheit : ");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf(" Celsius : %d\n",c);
	}

    return 0;
}

