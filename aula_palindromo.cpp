#include <stdio.h>
#include <string.h>

int main() { 
	char string[101], invertido[101], strJoin[101]; 
	int posicao = 0, j=0; 
	printf("Forneca uma string com espacos em branco: "); 
	scanf("%[^\n]", string);
	int stringLength = strlen(string); //comprimento string
	//printf("%s\n", string); 
	for (int i = 0; i < stringLength; i++) { 
		if (string[i] == ' '){
			continue;
		} else {
			strJoin[posicao] = string[i]; 
			posicao++; 
		} 
	} 
	
	stringLength = strlen(strJoin);
	printf("String sem espacos em branco: %s\n", strJoin); 
	
	for(int i=stringLength-1; i>=0; i--){
	    invertido[j] = strJoin[i];
	    j++;
	}
		printf("String invertida: %s\n", invertido); 
		
    for(int i=0;i<stringLength;i++){
        if(invertido[i] != strJoin[i]){
            return printf("Nao e palindromo");
        }
    }
    return printf("E palindromo");
fflush(stdin);
getchar();
} 