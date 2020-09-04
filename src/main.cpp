#include <iostream>

void intercambiar(int & pre, int & post){
		int aux = pre;
		pre =post;
		post=aux;
	}


int main(){

	int tamanioVector= 10;
	int vector[tamanioVector];

	for(int i=0; i<10 ;i++){
		int num;
		std::cout<<"message: ";
		std::cin >> num;
		vector[i]= num;
	}


	for(int i=0 ; i<tamanioVector; i++){
		for (int j=1 ; j< tamanioVector -i ;j++){
			if (vector[j-1]>vector[j])
				intercambiar(vector[j-1],vector[j]);
		}
	}

	for(int i=0 ; i<tamanioVector; i++){
		std::cout<< "valor "<<i<<" :"<<vector[i]<<std::endl;
	}


	return 0;
}
