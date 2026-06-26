//Name- Shrushti Sandip Parte 
//PRN-2503033111378UD011
#include <stdio.h>
int main(){
int width,height,area,perimeter;
printf("Enter the width of Rectangle:\t");
scanf("%d",& width);
printf("Enter the height of Rectangle:\t");
scanf("%d",& height);
area= width*height;
printf("The area of rectangle:\t %d",area);
perimeter=2*(width+height);
printf("\nThe perimeter of rectangle:\t %d",perimeter);
return 0;
}
