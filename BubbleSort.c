#include <stdio.h>

int main()

{

int n; 
scanf("%d",&n);

int arr[n];
int i;


for(i=0;i<n;i++)
{

scanf("%d",&arr[i]);

}


int j,k,count=0; 

for(j=0;j<n-1;j++)
{

for(k=0;k<i-j-1;k++)
{

if(arr[k]>arr[k+1])
{

int temp,a;

temp=arr[k];

arr[k]=arr[k+1];

arr[k+1]=temp;

count++;

}

}

}

printf("%d\n",count);


return 0;

}