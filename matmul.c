#include<stdio.h>
#include<stdlib.h>
int main(){
    int M = 1024;
    int K = 512;
    int N = 1024;
    
    int* A = (int*) malloc(M * K * sizeof(int));
    int* B = (int*) malloc(K * N * sizeof(int));
    int* C = (int*) malloc(M * N * sizeof(int));
    
    for(int i = 0; i < M * K; i++)
        A[i] = 1;

    for(int i = 0; i < K * N; i++)
        B[i] = 1;

    for(int i = 0; i < M * N; i++)
        C[i] = 0;
    
    printf("Start matrix multiplication...\n");
    for(int m = 0; m < M; m++){
        for(int n = 0; n < N; n++){
            for(int k = 0; k < K; k++){
                C[m * N + n] += A[m * K + k] * B[k * N + n]; 
            }
        }
    }   
    printf("End matrix multiplication...\n");
    
    int total = 0;
    for(int i = 0; i < M*N; i ++) 
        total += C[i];

    printf("total=%d\n", total);
    return 0;
}

