//programa criado para auxiliar na disciplina de Probabilidade e Estatísca que curso no Instituto Federal de Brasília - campus Taguatinga
//por enquanto ainda é um "trabalho em progresso"

#include <stdio.h>
#include <math.h>

void fgetfarr(float *arr, int length);
float scansumf(int q);
void fsortfarr(float *arr, int length);
float* fcalcfmode(float *arr, int length); 


//MAIN FUNCTION
//MAIN FUNCTION
//MAIN FUNCTION
//MAIN FUNCTION
//MAIN FUNCTION

int main(void){
		
		int op, q;
		float m;
		printf("Insira um valor correspondete a operação desejada:\n");
			printf("\t\e[30;107;1mCalcular Média Aritmédica Simples (0)\n");
			printf("\t\e[38;5;135;48;5;228;1mCalcular Moda (1)\n");
			printf("\t\e[38;5;201;48;5;157;1mCalcular desvio padrão (2)\n");
			printf("\t\e[38;5;196;48;5;117;1mCalcular Desvio Médio (3)\n");
			printf("\t\e[38;5;202;48;5;111;1mCalcular Variância (4)\n");
			printf("\t\e[93;48;5;134;1mLinear Correlation Coefficient(5)\e[0m\n");
			scanf("%d", &op);
		
		if(op == 0){	
			printf("Insira a quantidade de valores: ");
			scanf("%d", &q);
			printf("Insira os valores: ");
			m = scansumf(q);
			m /= q;
			printf("A média é %f\n", m);
			}
		
		else if(op == 1){
				
				int a, b, i;
				printf("Insira a quantidade de valores: ");		
				scanf("%d", &q);
				float arr[q];
				printf("Insira os valores: ");
				fgetfarr(arr, q);
				fsortfarr(arr, q);
				arr = fcalcfmode(arr, q);
				if(arr[0] == 0) printf("O conjunto é amodal");
				else if(arr[0] == 1) printf("A moda é %f", arr[1]);
				else for(i = 1; i <= arr[0]; i++) printf("As modas são %f", arr[i]);
				printf("\n");
					
				
			}
			
		/*else  if(op == 2){
	
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

void fgetfarr(float *arr, int length){
	
	int i;
	
	for(i = 0; i < length; i++){
	
		scanf("%f", &arr[i]);
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
	
	
	
void fsortfarr(float *arr, int length){
	int i, j;
	float temp;
	
	for(i = 0; i < length; i++){
		for(j = i + 1; j < length; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				}
			}
		}
	}
		
	
	
	
float* fcalcfmode(float *arr, int length){
	int a = 0, b = 0, i, j, k = 0;
	float mode[length + 1];
	mode[0] = 0;
	for(i = 0; i < length - 1; i = j){
		for(j = i + 1; (arr[i] == arr[j]) && (j < length); j++) a++;
		if((a >= b) && (a > 0)){
			b = a;
			k++;
			if(a > b) k = 1;
			mode[0] = k;
			mode[k] = arr[i];
			}
		
		}
		return mode;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
