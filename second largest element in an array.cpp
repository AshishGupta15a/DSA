#include<stdio.h> 
int main() 
{ 
    int arr[10],lar_el=0,Second_lar_el=0,small,Second_small,x; 
    int size,i;     
	printf("Enter the size of array:");     
	scanf("%d",&size);     
	printf("Enter the array elements:\n");     
	for(i=0;i<size;i++) 
    { 
    	scanf("%d",&arr[i]); 
    }
	for(i=0;i<size;i++) 
	{    
		if(lar_el<arr[i]) 
		{ 
			Second_lar_el=lar_el;     
			lar_el=arr[i]; 
		} 
		else if(Second_lar_el<arr[i]) 
		{ 
			Second_lar_el=arr[i]; 
		} 
	} 
	printf("The largest element is:%d\nSecond Largest element is:%d\n",lar_el,Second_lar_el); 
	small=Second_small=arr[0];
	for(i=1;i<size;i++)
	{
		if(small>arr[i])
		{
		    Second_small=small;
		    small=arr[i];
		}
		else if(Second_small>arr[i] && arr[i]!=small)
		{
		    Second_small=arr[i];
		}
	}
	printf("the smallest: %d \n the second smallest element is:%d",small,Second_small);
	return 0;	    
} 

