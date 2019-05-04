#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

////////// begin ADT ////////////

/* Define Vector type */
typedef float* Vector;
/* Define the functions */

Vector adt_createVector(int dim) {
    /* Function body */
    float *a=NULL;
    a=malloc(dim*sizeof(float));

    return a;
}

void adt_loadVector(Vector vec, int dim) {
    int i;
    for(i=0;i<dim;i++)
        scanf("%f",&vec[i]);
}

Vector adt_addVector(Vector vec1, Vector vec2, int dim) {
 int i;float *u=NULL;
    u=malloc(sizeof(dim*sizeof(float)));
    for(i=0;i<dim;i++)
        u[i]=vec1[i]+vec2[i];
    return u;
}

/* Include the other functions as well */

float adt_normVector(Vector v,int d)
{
    int i;float norm=0;
    for(i=0;i<d;i++)
        norm+=v[i]*v[i];
    return sqrt(norm);
}
Vector adt_scaleVector(Vector vec3,float norm2,int dim)
{
    int i=0;//float g=adt_normVector(vec3,dim);
    for(i=0;i<dim;i++)
        {vec3[i]=norm2*vec3[i];}
    return vec3;
}


///////// end of ADT //////////


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* The below code is an incomplete template for reference */
    /* Function names starting with adt_ are from the vector ADT */

    /* Get vector dimension from stdin */
    int dim;
    scanf("%d",&dim);
    float norm2;int i;
    typedef float* Vec;
    /* Create the empty vectors */
    Vec vec1 = adt_createVector(dim);
    Vec vec2 = adt_createVector(dim);
    Vec vec3 = adt_createVector(dim);
    Vec vec4 = adt_createVector(dim);

    /* Populate the vectors from stdin */
    adt_loadVector(vec1,dim);
    adt_loadVector(vec2,dim);
    /*for(i=0;i<dim;i++)
        printf("%.2f\t",vec1[i]);printf("\n");
        for(i=0;i<dim;i++)
            printf("%.2f\t",vec2[i]);printf("\n");*/

    /* perform operations */
    vec3 = adt_addVector(vec1,vec2,dim);
    norm2 = adt_normVector(vec2,dim);
    vec4 = adt_scaleVector(vec3,norm2,dim);

    /* Display the result */

    for(i=0;i<dim-1;i++)
    printf("%.2f \t ",vec4[i]);
    printf("%.2f ",vec4[dim-1]);
    printf("\n");
    return 0;
}
