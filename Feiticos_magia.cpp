#include <iostream>

using namespace std;

// Definindo a estrutura de feitico:
struct Feitico{
	string nome;
	int dificuldade;
	int dano_base;
	float custo_mano_final;
};

int main() {

	// Atribuindo valores pedidos:
	Feitico magia1;
	
	magia1.nome = "Relampago em cadeia";
	magia1.dificuldade = 4;
	magia1.dano_base = 45;
	
	// Logica if para custo de mana
	if (magia1.dificuldade == 1 || magia1.dificuldade == 2){
		magia1.custo_mano_final = magia1.dano_base * 1;
	}
	else if (magia1.dificuldade == 3 || magia1.dificuldade == 4){
		magia1.custo_mano_final = magia1.dano_base * 1.5;
	}
	else if (magia1.dificuldade >= 5){
		magia1.custo_mano_final = magia1.dano_base * 2;
	}

	cout << "Magia de: " << magia1.nome << endl << "Dificuldade: " << magia1.dificuldade << endl << "Dano base: " << magia1.dano_base << endl << "Custo de mana: " << magia1.custo_mano_final << endl;
	cout << endl;
	
	
	// Outros Exemplos
	
	// Exemplo 1:
	
	Feitico magia2;
	
	magia2.nome = "Bola de fogo";
	magia2.dificuldade = 2;
	magia2.dano_base = 25;
	
	if (magia2.dificuldade == 1 || magia2.dificuldade == 2){
		magia2.custo_mano_final = magia2.dano_base * 1;
	}
	else if (magia2.dificuldade == 3 || magia2.dificuldade == 4){
		magia2.custo_mano_final = magia2.dano_base * 1.5;
	}
	else if (magia2.dificuldade >= 5){
		magia2.custo_mano_final = magia2.dano_base * 2;
	}

	cout << "Magia de: " << magia2.nome << endl << "Dificuldade: " << magia2.dificuldade << endl << "Dano base: " << magia2.dano_base << endl << "Custo de mana: " << magia2.custo_mano_final << endl;
	cout << endl;
	
	// Exemplo 2:
	
	Feitico magia3;
	
	magia3.nome = "Buraco Negro";
	magia3.dificuldade = 7;
	magia3.dano_base = 75;
	
	if (magia3.dificuldade == 1 || magia3.dificuldade == 2){
		magia3.custo_mano_final = magia3.dano_base * 1;
	}
	else if (magia3.dificuldade == 3 || magia3.dificuldade == 4){
		magia3.custo_mano_final = magia3.dano_base * 1.5;
	}
	else if (magia3.dificuldade >= 5){
		magia3.custo_mano_final = magia3.dano_base * 2;
	}
	
	cout << "Magia de: " << magia3.nome << endl << "Dificuldade: " << magia3.dificuldade << endl << "Dano base: " << magia3.dano_base << endl << "Custo de mana: " << magia3.custo_mano_final << endl;
	
	return 0;
}

