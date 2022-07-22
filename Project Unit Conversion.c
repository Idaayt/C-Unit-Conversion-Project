#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void title()
{
	printf("---*******************************************************************************************************---\n");
	printf("---**********************************||UNIT CONVERSION||**************************************************---\n");
	printf("---*******************************************************************************************************---\n");
	printf("1-Temperature(degree C to degree F & vice versa)\n2-Currency(INR to USD, INR to AED & vice versa)\n3-Number(binary to hexadecimal,binary to decimal & vice versa)\n4-Exit\n ");
}

void temp_title()
{
	printf("---*******************************************************************************************************---\n");
	printf("---******************************||TEMPERATURE CONVERSION||***********************************************---\n");
	printf("---*******************************************************************************************************---\n");
	printf("1-Degree C --> Degree F\n2-Degree F --> Degree C\n3-Back\n ");
}

void curr_title()
{
	printf("---*******************************************************************************************************---\n");
	printf("---********************************||CURRENCY CONVERSION||************************************************---\n");
	printf("---*******************************************************************************************************---\n");
	printf("1-INR --> USD\n2-USD -->INR\n3-INR --> AED\n4-AED --> INR\n5-Back\n ");
}

void num_title()
{
	printf("---*******************************************************************************************************---\n");
	printf("---********************************||NUMBER CONVERSION||**************************************************---\n");
	printf("---*******************************************************************************************************---\n");
	printf("1-Binary --> Hexadecimal\n2-Hexadecimal --> Binary\n3-Binary --> Decimal\n4-Decimal --> Binary\n5-Back\n ");
}

int temp()
{
	int n;
	float tc,tf;
	re1 :
	system("cls");
	temp_title();
	printf("Enter your choice :");
	scanf("%d",&n);
	switch(n)
		{
			case 1 :
				printf("Enter the Temperature in degree C :");
				scanf("%f",&tc);
				tf=(tc*1.8)+32;
				printf("Temperature in degree F = %.2f\n",tf);
				break;
			case 2 :
				printf("Enter the Temperature in degree F :");
				scanf("%f",&tf);
				tc=(tf-32)*5/9;
				printf("Temperature in degree C = %.2f\n",tc);
				break;
			case 3 :
				return 0;
			default :
				printf("Wrong option\n");
		}
	printf("Press Any Key to continue...");
	getch();
	goto re1;
}

int curr()
{
	int n;
	float c1,c2;
	re2 :
	system("cls");
	curr_title();
	printf("Enter your choice :");
	scanf("%d",&n);
	switch(n)
		{
			case 1 :
				printf("Enter the INR amount :");
				scanf("%f",&c1);
				c2=c1*0.013;
				printf("Amount in USD = %.2f\n",c2);
				break;
			case 2 :
				printf("Enter the USD amount :");
				scanf("%f",&c1);
				c2=c1*79.89;
				printf("Amount in INR = %.2f\n",c2);
				break;
			case 3 :
				printf("Enter the INR amount :");
				scanf("%f",&c1);
				c2=c1*0.046;
				printf("Amount in AED = %.2f\n",c2);
				break;
			case 4 :
				printf("Enter the AED amount :");
				scanf("%f",&c1);
				c2=c1*21.75;
				printf("Amount in INR = %.2f\n",c2);
				break;
			case 5 :
				return 0;
			default :
				printf("Wrong option\n");
		}
	printf("Press Any Key to continue...");
	getch();
	goto re2;
}

void hex2bin()
{
	int i=0;
    char hexdec[11];
    printf("Enter Hexadecimal Number: ");
    scanf("%s",hexdec);
    printf("Equivalent Binary Value = ");
    while(hexdec[i])
    {
        switch(hexdec[i])
        {
            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1001");
                break;
            case 'A':
            case 'a':
                printf("1010");
                break;
            case 'B':
            case 'b':
                printf("1011");
                break;
            case 'C':
            case 'c':
                printf("1100");
                break;
            case 'D':
            case 'd':
                printf("1101");
                break;
            case 'E':
            case 'e':
                printf("1110");
                break;
            case 'F':
            case 'f':
                printf("1111");
                break;
            default:
                printf("--Invalid Hex Digit (%c)--", hexdec[i]);
        }
        i++;
    }
    printf("\n");
}

void d2b()
{
	int a[20],i; 
	long int n;     
	printf("Enter the decimal number: ");    
	scanf("%ld",&n);    
	for(i=0;n>0;i++)    
	{	    
		a[i]=n%2;    
		n=n/2;    
	}	    
	printf("Equivalent Binary value: ");    
	for(i=i-1;i>=0;i--)    
	{    
		printf("%d",a[i]);    
	}       
}


long int b2d()
{
	long int bi,x;
	int i=1;
	printf("Enter the binary number: ");
    scanf("%ld", &bi);
    	while (bi!=0)
    	{
			x=x+(bi%10)*i;
			i=i*2;
			bi=bi/10;
    	}
    return x;
}

int num()
{
	int n;
	re3 :
	system("cls");
	num_title();
	printf("Enter your choice :");
	scanf("%d",&n);
	switch(n)
		{
			case 1 :
				printf("Equivalent hexadecimal value: %lX\n", b2d());
				break;
			case 2 :
				hex2bin();
				break;
			case 3 :
				printf("Equivalent decimal value: %ld\n", b2d());
				break;
			case 4 :
				d2b();
				printf("\n"); 
				break;
			case 5 :
				return 0;
			default :
			printf("Wrong option\n");
		}
	printf("Press Any Key to continue...");
	getch();
	goto re3;
}

int main()
{
	int c;
	re :
	system("cls");
	title();
	printf("Enter your choice :");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
			temp();
			break;
		case 2 :
			curr();
			break;
		case 3 :
			num();
			break;
		case 4 :
			return 0;
		default :
			printf("Wrong option\n");
	}
	goto re;
}
