#include <stdio.h>
#include <stdlib.h>

int main()
{

    // exercice arrays & loops
    // first u need to find max and min of table
    int t[]={3,4,5,76,8,4,97,5,76};
    int size=sizeof(t)/sizeof(int);
    int min;
    int max=min=t[0];
/*
   for (int i=0;i<size;i++){
        if (t[i]>max){
            max=t[i];
        }
         if (t[i]<min){
            min=t[i];
         }
    };
     printf("%d %d",max,min);
// now we want to separate the evens from the odds
    int tinp[size];
     int tpi[size];
     int j,z;
     j=z=0;
   for (int i=0;i<size;i++){
        if (t[i]%2==0){
            tpi[j]=t[i];
            j++;
        }
        if (t[i]%2!=0){
            tinp[z]=t[i];
            z++;
        }
//displaying the odd numbers table
    printf("displaying the odd numbers table:")
    for (int i=0 ;i<z;i++){
        printf("%d ",tinp[i]);
        }
//displaying the even numbers table
 printf("displaying the even numbers table:")
  for (int i=0 ;i<j;i++){
        printf("%d ",tpi[i]);

        }
   */
// help me rearrange this table in an ascending order
 int save;
int  j=0;
int i,l;

 while (j<size){

   for ( i=0;i<size;i++){
        if (t[i]>max){
            max=t[i];
            save=i

        }
    }
     ss=t[l]
     t[j]=max;
     t[save]=t[i];
     j++;

}
return 0;
    }
    printf("displaying the odd numbers table:")
    for (int i=0 ;i<z;i++){
        printf("%d ",tinp[i]);

