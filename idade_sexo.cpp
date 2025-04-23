#include<iostream>
#include<locale>
using namespace std;

main(){
	int idade;char sexo; //var de leitura-entrada
	int ttf=0,ttm=0, ttidade=0, ttpessoas=0; //var processamento-somatoria-calcular
	char op;
	
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"Deseja iniciar a pesquisa S/N: ";cin>>op;
	strupr(&op); //converte para maiusculo
	
	while(op=='S'){
		cout<<"Informe a idade: ";cin>>idade;
		do{
			cout<<"Informe o sexo F/M : ";cin>>sexo;
			strupr(&sexo);
		}while(sexo!= 'F' and sexo!= 'M');
		if(sexo== 'F')
			ttf++; //mesmo que ttf=ttf+1
		else
			ttm++;
		ttidade+=idade; //mesmo que ttidade=ttidade+idade
		ttpessoas++;
	cout<<"Deseja continuar a pesquisa S/N: ";cin>>op;
	strupr(&op);
	system("cls");
	}
	cout<<"Quantidade feminino = "<<ttf<<endl;
	cout<<"Quantidade masculino = "<<ttm<<endl;
	cout<<"c: media idade = "<<ttidade/ttpessoas<<endl;
	system("pause");
}