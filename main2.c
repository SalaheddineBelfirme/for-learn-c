#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int t[100],i,n;
    int Nn=0,Pn;
    printf("tape size of table \n ");
    scanf("%d",&n);
    for (i=0;i<n;i++){// table filling
        printf("tape number \n");
        scanf("%d",&t[i]);
    }


     for (i=0;i<n;i++){
            if (t[i]<0){//sum of negative numbers
                Nn=Nn+t[i];
            }
            else{//sum of positive numbers
                Pn=Pn+t[i];
            }
    }

       for (i=0;i<n;i++){ //show table
        printf("%d :",t[i]);
    }
    printf("this sum of postive numbers are : %d end this sum of nigativ numbers are  : %d ",Pn,Nn);
     */













 printf("----------------------------------------------------MATRICE----------------------------------------------------------------------------------");
 //creation of a matrix and print it on screen and clone it on another table
 int m[100][100],l,c,i,j,mc[200];
 printf("type the number of columns and lines ");
 scanf("%d %d",&c ,&l);
  //creation of a matrix
 for (i=0;i<l;i++){
    for(j=0;j<c;j++){
        printf("type the number of lines %d and columns %d ",i,j );
        scanf("%d",&m[i][j]);
    }
 }
 // print of a matrix
  for (i=0;i<l;i++){
    for(j=0;j<c;j++){
        printf("%d",m[i][j]);
    }
    printf("\n");
 }
// clone matrix on table
int k=0;
   for (i=0;i<l;i++){
    for(j=0;j<c;j++){
            k++;
       mc[k]=m[i][j];
    }
    printf("\n");
 }
 //print last table
 for(i=1;i<=k;i++)printf("%d",mc[i]);

    return 0;
}
