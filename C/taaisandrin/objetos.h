// ----- ARQUIVO OBJETOS -----

enum IDS {JOGADOR, PROJETIL, INIMIGOS, ESTRELA};

struct NaveEspacial
{
	int ID;
	int x;
	int y;
	int vidas;
	int velocidade;
	int borda_x;
	int borda_y;
	int pontos;
};

struct Projeteis
{
	int ID;
	int x;
	int y;
	int velocidade;
	bool ativo;
};

struct Cometas
{
	int ID;
	int x;
	int y;
	int velocidade;
	int borda_x;
	int borda_y;
	bool ativo;
};

struct Estrelas
{
	int ID;
	int x;
	int y;
	int velocidade;
};
