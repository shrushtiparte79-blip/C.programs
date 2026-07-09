//Name- Shrushta Sandip Parte
//PRN-2503033111378UD011
#include <stdio.h>
 int main()
{
int i, j, n;
printf("Enter number of rows:\n");
scanf("%d", &n);
for(i=1; i <= n; i++)
{
for(j=1;j<= i; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
