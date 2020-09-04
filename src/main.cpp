void intercambiar(int pre, int post){
		int aux = pre;
		pre =post;
		post=aux;
	}


int main(){


	int tamanioVector= 10;
	int vector[tamanioVector];
	for(int i=0 ; i<tamanioVector; i++){
		for (int j=0 ; j< tamanioVector -(i+1) ;j++){
			if (vector[i]>vector[j])
				intercambiar(vector[i],vector[j]);
		}
	}


	return 0;
}
