#include <stdio.h> main()
{
int n, t, i, j, k, a[20], p=0;
printf("Enter total numbers of elements: ");
scanf("%d", &n);
printf("Enter %d elements: ", n);
for(i=0; i<n; i++)
scanf("%d", &a[i]);
for(i=n-1; i>=0; i--)
{
for(j=0; j<i; j++)
{
if(a[j] > a[j+1])
{
t = a[j];
a[j] = a[j+1];a[j+1]
= t;
}
} p++;
printf("\n After Pass %d : ", p);
for(k=0; k<n; k++)
printf("%d ", a[k]);
}

printf("\n Sorted List : ");
for(i=0; i<n; i++) printf("%d ",
a[i]);
}