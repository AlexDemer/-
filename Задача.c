#include <stdio.h>
float maxmod(float* vector, float max,float check,int size){
    if (*(vector) < 0)
        max = -1 * *(vector);
    else
        max = *(vector);
    for(int i = 1 ; i < size ; i++){
        if(*(vector+i) < 0 )
            check = -1 * *(vector+i);
        else
            check = *(vector+i);   
        if (check > max)
            max = check;
    }
    return max;
}

float main(){
    int i,size;
    printf("ввод размерности вектора = ");
    scanf("%d",&size);
    float A[size];
    printf("Ввод Вектора В = ");
    for(i = 0 ; i < size; i++){
        scanf("%f",&A[i]);
    }
    float max,check,z;
    z = maxmod(A,max,check,size);
    printf("вектор В = ");
    for (i = 0; i < size ; i ++){
        printf(" %f",A[i]);
    }
    printf("\nравномерная норма вектора В = %f",z);
    return 0;
}
