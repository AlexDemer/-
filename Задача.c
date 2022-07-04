ц#include <stdio.h>
#define N 7

int main()
{
    float A[N] = {1.2,   -2.2,   4.8 ,   -10.3 ,  7.5,  -4,  6.365};
    float max;
    
    if (A[0] < 0)
        max = -A[0];
    else
        max = A[0];
        
    for(int i = 1; i < N; i++)
    {
        float dop;
        if (A[i] < 0)
            dop = -A[i];
        else
            dop = A[i];
            
        if(dop > max)
            max = dop;
    }
    
    printf("Равномерная норма вектора = %f",max);
    
    return 0;
}
