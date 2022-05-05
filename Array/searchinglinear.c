#include <stdio.h>

int linear(int a[], int n, int x)

{

for (int i = 0; i < n; i++)

if (a[i] == x)

return i;

return -1;

}

int main(void)

{

int a[] = { 2, 3, 4, 10, 40 };

int x = 10;

int n = sizeof(a) / sizeof(a[0]);

// Function call

int result = linear(a, n, x);

if(result == -1)

{

printf("Element is not present in array");

}

else

{

printf("Element found at index: %d", result);

}

return 0;

}