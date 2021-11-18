#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    
    int isize=0;
    int*ptr;
	printf("enter size of array:");
    scanf("%d",&isize);
    ptr=(int*)malloc(isize*sizeof(int));

	 if(ptr==NULL)
	 {printf("memory not allocated\n");
	  exit(0);
	 }
	 else{
	 printf("memory successfully allocated using malloc\n");
	 
	 printf("enter elements in the array\n");

   for(i=0;i<isize;++i)
   {
       scanf("\n%d\n",&ptr[i]);
   }
   for(i=0;i<isize;++i)
   {
       printf("\nptr[i]%d:",ptr[i]);
   }
  }
   

   return 0;
}
    

