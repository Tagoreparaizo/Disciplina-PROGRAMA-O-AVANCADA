/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
    } ponto;
    

int main()
{
    ponto P,Q;
    float dist;
    
    printf("Informe Px e Py:\n");
    scanf("%f %f",&P.x,&P.y);
    printf("Informe Qx e Qy:\n");
    scanf("%f %f",&Q.x,&Q.y);
    
    dist = sqrt(pow((P.x-Q.x),2)+pow((P.y-Q.y),2));
    printf("Distância: %.3f",dist);
    
}