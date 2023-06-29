#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVectorA(int N){
	vector<int> A;
	int random;
	
	srand(time(NULL));
	for(int i=0; i<N; i++){
		random = rand()%32000;
		A.push_back(random);
	}
	return A;
}

//punto 1
float PromedioVectorA(vector<int> A){
	float Promedio=0;
	
	for(int i=0; i<A.size(); i++){
		Promedio += A[i];
	}
	Promedio /= A.size();
	return Promedio;
}

//punto 2
vector<int> GenerarVectorB(vector<int> A, float Promedio){
	vector<int> B;
	for(int i=0; i<A.size(); i++){
		if(A[i] > Promedio){
			B.push_back(A[i]);
		}
	}
	return B;
}

//punto 3
int Multiplos2y3VectorA(vector<int> A){
	int cont=0;
	
	for(int i=0; i<A.size(); i++){
		if(A[i]%2 == 0 && A[i]%3 == 0){
			cont++;
		}
	}
	return cont;
}

//punto 4
vector<int> GenerarVectorC(vector<int> A){
	vector<int> C;
	for(int i=0; i<A.size(); i++){
		C.push_back(A[i]*2);
	}
	return C;
}

//punto 5
int SumaVectorA(vector<int> A, int N){
	float Suma=0;
	
	for(int i=0; i<N; i++){
		Suma += A[i];
	}
	
	return Suma;
}

//punto 6
void MostrarVectorA(vector<int> A){
	for(int i=0; i<A.size(); i++){
		cout<<A[i]<<"/";
	}
}

void MostrarVectorB(vector<int> B){
	for(int i=0; i<B.size(); i++){
		cout<<B[i]<<"/";
	}
}

void MostrarVectorC(vector<int> C){
	for(int i=0; i<C.size(); i++){
		cout<<C[i]<<"/";
	}
	
}

int main(){
	
	int N;
	cout<<"ingrese cantidad de numeros : ";
	cin>>N;
	
	cout<<endl<<endl;
	vector<int> A = GenerarVectorA(N);
	cout<<"Vector A : ";
	MostrarVectorA(A);
	
	cout<<endl<<endl;
	float Promedio = PromedioVectorA(A);
	cout<<"Promedio del Vector A : "<<Promedio;
	
	cout<<endl<<endl;
	vector<int> B = GenerarVectorB(A,Promedio);
	cout<<"Vector B : ";
	MostrarVectorB(B);
	
	cout<<endl<<endl;
	int Multiplos =  Multiplos2y3VectorA(A);
	cout<<"Cantidad de multiplos de 2 y 3 del Vector A : "<<Multiplos;
	
	cout<<endl<<endl;
	int Suma = SumaVectorA(A,N);
	cout<<"Suma del Vector A : "<<Suma;
	
	cout<<endl<<endl;
	vector<int> C = GenerarVectorC(A);
	cout<<"Vector C : ";
	MostrarVectorC(C);
	
	return 0;
}
