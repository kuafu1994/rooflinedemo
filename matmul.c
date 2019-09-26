#include<stdio.h>
#include<stdlib.h>
int main(){
	int M = 1024;
	int K = 512;
	int N = 1024;
	
	float* A = (float*) malloc(M * K * sizeof(float));
	float* B = (float*) malloc(K * N * sizeof(float));
	float* C = (float*) malloc(M * N * sizeof(float));
	
	for(int i = 0; i < M * K; i++)
		A[i] =(float)rand() / RAND_MAX;

	for(int i = 0; i < K * N; i++)
		B[i] =(float)rand() / RAND_MAX;

	for(int i = 0; i < M * N; i++)
		C[i] = 0.0;
	
	printf("Start matrix multiplication...\n");
	for(int m = 0; m < M; m++)
		for(int n = 0; n < N; n++)
			for(int k = 0; k < K; k++){
				C[m * N + n] += A[m * K + k] * B[k * N + n];
			}	
	printf("End matrix multiplication...\n");

	return 0;
}

