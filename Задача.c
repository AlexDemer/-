#include <stdio.h>
float maxmod(float* vector, int size){
    float max, check;
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
    int i, size;
    printf("ввод размерности вектора = ");
    scanf("%d",&size);
    float A[size];
    printf("Ввод Вектора В = ");
    for(i = 0 ; i < size; i++){
        scanf("%f",&A[i]);
    }

    printf("вектор В = ");
    for (i = 0; i < size ; i ++){
        printf(" %f",A[i]);
    }
    printf("\nравномерная норма вектора В = %f", maxmod(A, size));
    return 0;
}
