#include<stdio.h>
#include<stdlib.h>

#define M 256
#define K 512
#define N 256
int main(){
    
    float A[M][K];
    float B[K][N];
    float C[M][N];
    
    for(int i = 0; i < M; i++)
        for(int j = 0; j < K; j++)
            A[i][j] = rand() / RAND_MAX;

    for(int i = 0; i < K; i++)
        for(int j = 0; j < N; j++)
            B[i][j] = rand() / RAND_MAX;

    for(int i = 0; i < M; i++)
        for(int j = 0; j < N; j++)
            C[i][j] = 0.0;
    
    printf("Start matrix multiplication...\n");
    for(int m = 0; m < M; m++){
        for(int n = 0; n < N; n++){
            for(int k = 0; k < K; k++){
                C[m][n] += A[m][k] * B[k][n];
            }
        }
    }   
    printf("End matrix multiplication...\n");

    return 0;
}

