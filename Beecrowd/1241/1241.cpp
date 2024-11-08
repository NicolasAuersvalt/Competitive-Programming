#include<iostream>
#include<string.h>
using namespace std;

int main(){

	int tam, i, yup=0;
	cin >> tam;

	for(i=0; i<tam; i++){
		string a, b;
		cin >> a >> b;
		cin.ignore();

		if(b.length() > a.length()){
			cout << "ue" << endl;
			cout << "nao encaixa" << endl;
		}
		else{
			int j, k;
			yup=0;
			for(j=0, k=0;j<a.length();j++){
				cout << k << " " << b.length() << endl;
				if(k<b.length()){
					
					if(a[j]!=b[k]){
			
						k=0;
						yup = 0;
					}

					else{
						yup = 1;
						k++;	
					}
				}
				else{
					yup = 0;
					k=0;						
				}
			}
			if(yup && (k==b.length())){
				cout << "encaixa" << endl;
			}
			else{
				cout << "nao encaixa" << endl;	
			}
		}
	}

	return 0;
}