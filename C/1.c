/*
 * sparceMatrix.c
 *
 * This is function definitions for ADT of Sparse Matrix.
 * Author: Abhigyan Khaund (B16082).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COL 130
#include "SM_partial.h"
#define getInt(x,y) fscanf(x,"%d",&y)
#define getFloat(x,y) fscanf(x,"%f",&y)
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
            elems--;
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
           return;
        }
    }
}



/* Function to get value of row, column from Sparse matrix*/
float getValue(SMatrix *Sm,int row,int col)
{
    float value=0;
    int i;
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

int main(int argc, char* argv[])
{
    char str[50]="spectrograms/";
    //strcat(str,argv[1]);
    printf("%s\n", argv[1]);
    FILE *inf = fopen(argv[1],"r");
    if(inf==NULL)
    {
        printf("Could not open file.\n");
        return -1;
    }
    int rows = 0; float temp;
    while(!feof(inf))
    {
        for(int i=0; i<129; ++i)
            getFloat(inf,temp);
        ++rows;
    }
    fseek(inf,0,0);
    // printf("Number of rows: %d\n", rows);
    SMatrix *Sm = Create(rows+1, 129+1);
    for(int i=1; i<=rows; ++i)
        for(int j=1; j<=129; ++j)
        {
            getFloat(inf,temp);
            insertSM(Sm,i,j, temp);
        }
    fclose(inf);
    strcpy(str, "histograms/");
    strcat(str,argv[1]);
    FILE *of = fopen("out.txt", "w");
    if(of==NULL)
    {
        printf("Output File could not be loaded.\n");
        return -1;
    }
    int count;
    for(int j=1; j<=129; ++j)
    {
    	count=0;
        for(int i=1; i<=rows; ++i)
        {
            temp=getValue(Sm,i,j);
            if(temp)
            	count;
        }
        // printf("%d\n",j);
        fprintf(of,"%d\n",count);
    }
    free(Sm);
    fclose(of);
    return 0;
}

