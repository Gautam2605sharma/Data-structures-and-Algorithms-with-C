#include<stdio.h>

#include<conio.h>

int main()

{

int array[10], i, values;

printf("Enter 5 Array Elements: ");

for(i=0; i<5; i++)

     scanf("%d", &array[i]);

printf("\nEnter Element to Insert: ");

scanf("%d", &values);

array[i] = values;

printf("\nThe New Array is:\n");

for(i=0; i<6; i++)

     printf("%d ", array[i]);

getch();

return 0;

}


