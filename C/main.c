int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int r;int c;
    scanf("%d%d",&r,&c);
    Matrix m1=adt_createMatrix(r,c);adt_loadMatrix(m1,r,c);
    int r1;int c1;int i,j;
    scanf("%d%d",&r1,&c1);
    Matrix m2=adt_createMatrix(r1,c1);adt_loadMatrix(m2,r1,c1) ;
    char a[20];
    scanf("%s",a);Matrix f;
    // f=(float**)malloc()
    if(strcmp(a,"Add")==0)
    {
        if(r1==r && c1==c)
        {
        f=adt_addMatrix(m1, m2,r,c);
            for(i=0;i<r;i++)
            {for(j=0;j<c;j++)
        printf("%d ",(int)f[i][j]);printf("\n");}}
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

  // read two matrices and operator from input
  // perform operation
    return 0;
}
