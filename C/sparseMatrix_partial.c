/*
 * sparceMatrix.c
 *
 * This is function definitions for ADT of Sparse Matrix.
 * Author: Abhigyan Khaund (B16082).
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_COL 130
#include "SM_partial.h"

int elems = 0;              // Variable to count number of elements in sparse matrix //


/* Function to return number of elements in Sparse matrix*/
int getNumberOfElements(SMatrix *S1)
{
    return elems;
}

/* Function to create Sparse matrix*/
SMatrix* Create(int MaxRow,int MaxCol)
{
    SMatrix *SM;
    int i;
    int MaxElems;
    MaxElems=MaxCol*MaxRow;
    SM = (SMatrix*)malloc(sizeof(SMatrix)*(MaxElems));
    SM[0].row = MaxRow;
    SM[0].col = MaxCol;
    SM[0].value = MaxElems;

    for( i = 1 ; i <= SM[0].value ; i++)
        SM[i].value = 0;

    return SM;
}

/* Function to delete from Sparse matrix*/
void deleteSM(SMatrix *S1,int r_index,int c_index)
{
    int i;
	for ( i=1 ; i <= S1[0].value ; i++ )
	{
		if(S1[i].row==r_index && S1[i].col==c_index)
		{
			S1[i].value=0;
			printf("Entry deleted,kindly enter a new element");
		}
	}
}

/* Function to insert into Sparse matrix*/
void insertSM(SMatrix *S1,int r_index,int c_index,float value)
{
    int i,count=0;
    for (i=1;i<=S1[0].value;i++){
        if(S1[i].value==0 && count<1 )
        {
            count++;
            if(r_index<S1[0].row && c_index<S1[0].col){
                S1[i].row=r_index;
                S1[i].col=c_index;
                S1[i].value=value;
                elems++;
                return;
            }
            else
            {
                printf("Invalid row or column number");
                exit(1);
            }
        }
        else if (S1[i].value!=0 && S1[i].row==r_index && S1[i].col==c_index)
        {
	       S1[i].value=value;
        }
    }
}



/* Function to get value of row, column from Sparse matrix*/
float getvalue(SMatrix *Sm,int row,int col)
{
    float value=0;
    int i,j;
    int limit=(int)Sm[0].value;

    for(i=1;i<=limit;i++)
    {
        if(Sm[i].row==row && Sm[i].col==col)
        {
            value=Sm[i].value;
        }
    }
    if(value!=0)
        return value;
    else
        return 0;
}
int main()
{
  FILE *f=fopen("cuckoo_1.txt","r");
  int rows=0;
  if(f==NULL){printf("Could not open the file\n" );return -1;}
  else{
    int i,j;char c;
    for (c = getc(f); c != EOF; c = getc(f))
            if (c == '\n') // Increment count if this character is newline
                rows+= 1;
                fseek(f,0,0);
                SMatrix *p=Create(rows+1,129+1);
              //  FILE *f=fopen("bunting_2.txt","r");
float l;printf("Inserting data in the sparse matrix after reading from the input file...\n");

  for(i=0;i<rows;i++)
    for(j=0;j<129;j++)
    {
      fscanf(f, "%f ",&l);
      if(l>0){insertSM(p,i,j,l);}
    }
    int count;
   FILE * g=fopen("cuckoo1.txt","w");
   if(g==NULL){printf("Output file could not open.\n");return -1;}
   printf("Writing to the output file...\n");
  for(j=0;j<129;j++)
  {
    count=0;
    for(i=0;i<rows;i++)
    if(getvalue(p,i,j))
    count++;
  fprintf(g,"%d\n",count);
}  free(p);
  fclose(g);fclose(f);printf("Done.\n" );
  }return 0;
}
