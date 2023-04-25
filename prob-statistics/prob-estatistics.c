//programa criado para auxiliar no curso de Probabilidade e Estatísca que curso no Instituto Federal de Brasília - campus Taguatinga
//Por enquanto ainda é um "trabalho em progresso

#include <stdio.h>
#include <math.h>

void fgetfarr(float *arr, int lenght);
float scansumf(int q);

//MAIN FUNCTION
//MAIN FUNCTION
//MAIN FUNCTION
//MAIN FUNCTION
//MAIN FUNCTION

int main(void){
		
		int i, op, q;
		float m;
		printf("Insira um valor correspondete a operação desejada:\n\tCalcular Média Aritmédica Simples(0)\n\tCalcular Média Aritmética Ponderada(!)\n\tCalcular Moda(1)\n\tCalcular desvio padrão(2)\n\tCalcular Desvio Médio(3)\n\tCalcular Variância(4)\n\t...\n");
		scanf("%d", &op);
		
		if(op == 0){	
			printf("Insira a quantidade de valores: ");
			scanf("%d", &q);
			printf("Insira os valores: ");
			m = scansumf(q);
			m /= q;
			printf("A média é %f\n", m);
			}
		
		/*else if(op == 1){
				
				printf("Insira a quantidade de valores: ");		
				scanf("%d", &q);
				float arr[q];
				
				printf("Insira os valores: ");
				fgetfarr(arr, q);
			}
			
		else  if(op == 2){
	
			float m = 0, S;
			
			printf("Insira a quantidade de valores: ");
			scanf("%d", &q);
			
			float arr[q];
			
			printf("Insira os valores: ");
			for(i = 0; i < q; i++){
				scanf("%f", &S);
				arr[i] = S;
				m+=S;
				}
			
			m = m/q;
			
			variance(arr, q);
			
			for(i = 0, S = 0; i < q; i++){
			
				temp += arr[i] * arr[i];
			
				}
			
			S /= q;
			S -= m * m;
			S = sqrt(S);
			
			printf("O desvio padrão é %f\n", S);
			}*/
		
		return 0;
	}

//FUNCTIONS DEFINITIONS
//FUNCTIONS DEFINITIONS
//FUNCTIONS DEFINITIONS
//FUNCTIONS DEFINITIONS
//FUNCTIONS DEFINITIONS

void fgetfarr(float	 *arr, int length){
	
	int i;
	
	for(i = 0; i < length; i++){
	
		scanf("%f", arr[i]);
		}
	}
	
	
	
float scansumf(int q){
	int i;
	float temp1, sum = 0;
	
	for(i = 0; i < q; i++){
		
		scanf("%f", &temp1);
		sum += temp1;
		}
		
	return sum;
	}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
