#include <iostream>
using namespace std;
int Primo (int);

int main (){
	int n,i,j;
	cout << "Ingrese n: "; cin >> n; cout << endl;
	
	if (n < 100){
		int suma = 4;
		
			for (i = 0; i < n; i++){
				for (j = 0; j < n; j++){
					int primoi = Primo (i);
					int primoj = Primo(j);
					if (primoi == 1 && primoj == 1){
						if (i+j == suma){
							cout << i << " + " << j << " = " << suma << endl;
							suma += 2;
						}
					}
					if (suma > n){
						break;
					}
				}
				
			}
		
	} else {
		cout << "El numero deber ser menor que 100";
	}
	
	return 0;
}

int Primo (int num){
	int divisor = 1, divisores = 0;
	do{
		if(num % divisor == 0){
			divisores++;
		}
		divisor++;
	}while(divisor <= num);
	
	if(divisores == 2){
		return 1;
	}else{
		return 0;
	}


}
