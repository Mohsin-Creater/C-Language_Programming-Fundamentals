#include <iostream>
int main()
{
	char grade;
	printf ("Enter your grade to check the remarks \n");
	scanf ("%c" , &grade);
	switch(grade)
	{
		case'a' :
		case'A' :
			printf("Excellent \n");
			break;
			case'b' :
			case'B' :
				printf("well done \n");
				break;
				case'c' :
				case'C' :
					printf("Average \n");
					break;
					case'd' :
					case'D' :
						printf("you passed \n");
						break;
						case'f' :
						case'F' :
							printf("Failed \n");
							break;
							default :
							printf("Enter correct grade according to the policy \n");
		
	}
		return 0;
	
}
