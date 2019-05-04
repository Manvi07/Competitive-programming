#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* Define Matrix type */
typedef float** Matrix;
/* Suggestion: use struct having 2D array and two dimensions as int */

Matrix adt_createMatrix(int r, int c) {
Matrix m;
  m=(float**)malloc(r*sizeof(float*));
  int i;
  for(i=0;i<r;i++)
  m[i]=(float*)malloc(c*sizeof(float));
  return m;
}

void adt_loadMatrix(Matrix m,int r,int c) {
// load values from stdin
int i,j;for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%f",&m[i][j]);
}

Matrix adt_addMatrix(Matrix m1, Matrix m2,int r,int c) {

  Matrix m;
    m=(float**)malloc(r*sizeof(float*));
    int i;
    for(i=0;i<r;i++)
    m[i]=(float*)malloc(c*sizeof(float));
    int j;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    m[i][j]=m1[i][j]+m2[i][j];
    return m;
}

// add other functions
void print(Matrix m , int r, int c)
{
  int i,j;
  for(i=0;i<r;i++){
  for(j=0;j<c;j++)
  printf("%d ",(int)m[i][j]);printf("\n");}
}
void adt_equalityCheck(Matrix m1, Matrix m2,int r,int c) {

  int i,j;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    if(m1[i][j]!=m2[i][j])
        {printf("Matrices are not equal\n");return;}
    printf("Matrices are equal\n");
}
void adt_transpose(Matrix d,int r,int c)
{
     int i,j;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++)
            printf("%d ",(int)d[j][i]);printf("\n");}
}
float adt_trace(Matrix m,int r,int c)
{
    float s=0;int i;
        for(i=0;i<r;i++)
            s+=m[i][i];
          return (s);
}
void adt_multiply(Matrix m1,int r1,int c1,Matrix m2,int r2,int c2)
{
    if(c1!=r2)
    {
        printf("Dimensions incompatible: cannot multiply\n");
    }
    else
    {
        Matrix m;
      m=(float**)malloc(r1*sizeof(float*));
      int i;
      for(i=0;i<r1;i++)
      m[i]=(float*)malloc(c2*sizeof(float));
        int j;int k,l;
        float p=1;
        for(i=0;i<r1;i++)
            for(j=0;j<c2;j++)
         {m[i][j]=0;for(k=0;k<c1;k++)
             m[i][j]+=m1[j][k]*m2[k][i];
       } for(i=0;i<r1;i++)
        {for(j=0;j<c2;j++)
        printf("%d ", (int)m[i][j]);
        printf("\n");}
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int r;int c;
    scanf("%d%d",&r,&c);
    Matrix m1=adt_createMatrix(r,c);adt_loadMatrix(m1,r,c);
    int r1;int c1;int i,j;
    scanf("%d%d",&r1,&c1);
    Matrix m2=adt_createMatrix(r1,c1);adt_loadMatrix(m2,r1,c1) ;
    char a[20];
    scanf("%s",a);//Matrix f;
    // f=(float**)malloc()
    if(strcmp(a,"Add")==0)
    {
        if(r1==r && c1==c)
        print(adt_addMatrix(m1, m2,r,c),r,c);
        //     for(i=0;i<r;i++)
        //     {for(j=0;j<c;j++)
        // printf("%d ",(int)f[i][j]);printf("\n");}}
        else printf("Dimensions incompatible: cannot add\n");
    }
    else if(strcmp(a,"Transpose")==0)
    adt_transpose(m1,r,c);
    else if(strcmp(a,"Equality")==0)
    {
        if(r1!=r || c1!=c)
           printf("Matrices are not equal");
        else
        adt_equalityCheck(m1,m2,r,c);
    }
    // printf("\nproduct: \n");
    else if(strcmp(a,"Trace")==0)
    {
        if(r!=c)printf("Non-square matrix: trace does not exist\n");
        else
        printf("%d\n",(int)adt_trace(m1, r, c));
    }
    else if(strcmp(a,"Multiply")==0)
    adt_multiply( m1,r,c,m2,r1,c1);
    free(m1);free(m2);
  // read two matrices and operator from input
  // perform operation
    return 0;
}
