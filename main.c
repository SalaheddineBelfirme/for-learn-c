#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tp arrys & loops
    // first u need to fiand max and min of table
    int t[]={3,4,5,76,8,4,97,5,76};
    int size=sizeof(t)/sizeof(int);
    int min;
    int max=min=t[0];

   for (int i=0;i<size;i++){
        if (t[i]>max){
            max=t[i];
        }
         if (t[i]<min){
            min=t[i];
         }


    };
     printf("%d %d",max,min);

// now we want to seperate the evens from the odds
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
    for (int i=0 ;i<size;i++){
        printf("%d ",tinp[i]);
        }

// help me rearrange this table in an ascending order



    }




 //
    return 0;
}
