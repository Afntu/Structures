#include <stdio.h>
struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;	    						
    personPtr = &person1;  			//the address of person1 is stored in the personPtr pointer using personPtr = &person1;.  
    printf("Enter age: \n");
    scanf("%d", &personPtr->age);      
//Here as personPtr = &person1 ,and  personPtr-> age is equivalent to (*personPtr).age is equivalent to (*(&person1)).age = (*&person1).age = person1.age  so scanf("%d", &personPtr->age); and scanf("%d", &person1.age); both are same
    printf("Enter weight: \n");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f\n", personPtr->weight);

    return 0;
}
