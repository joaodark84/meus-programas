#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <cstdlib>
#include <ctime>
#include "objetos.h"

// ---------- VARIÁVEIS GLOBAIS -----------
const int largura_t = 800;
const int altura_t = 600;
const int FPS = 60;
const int NUM_BALAS = 5;
const int NUM_COMETAS = 10;
const int NUM_ESTRELAS = 100;
const int NUM_PLANOS = 3;

ALLEGRO_SAMPLE *trilha_sonora = NULL;
ALLEGRO_SAMPLE *laser = NULL;
ALLEGRO_SAMPLE *explosao = NULL;
ALLEGRO_SAMPLE *aplausos = NULL;

ALLEGRO_SAMPLE_INSTANCE *inst_trilha_sonora = NULL;
ALLEGRO_SAMPLE_INSTANCE *inst_laser = NULL;
ALLEGRO_SAMPLE_INSTANCE *inst_explosao = NULL;
ALLEGRO_SAMPLE_INSTANCE *inst_aplausos = NULL;

enum TECLAS {CIMA, BAIXO, ESQUERDA, DIREITA, SPACE, ENTER};
int main()
{
	
// --------- VARIÁVEIS DO JOGO ---------
	ALLEGRO_EVENT_QUEUE *fila_eventos = NULL;	
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_FONT *font14 = NULL;

	bool fim = false;
	bool desenha = true;
	bool game_over = false;
	bool tocar_aplausos = false;
	bool teclas[] = {false, false, false, false, false, false};


//______________________________________

// ----- INICIALIZAÇÃO DE OBJETOS ------
	NaveEspacial nave;
	Projeteis balas[NUM_BALAS];
	Cometas cometas[NUM_COMETAS];
	
	Estrelas estrelas_pf[NUM_PLANOS][NUM_ESTRELAS];


//______________________________________
	
// ---- INCIALIZAÇÃO DA ALLEGRO E DO DISPLAY ----
	ALLEGRO_DISPLAY *display = NULL;

	if(!al_init())
	{
		al_show_native_message_box(NULL, "AVISO!", "ERRO!", "ERRO AO INICIALIZAR A ALLEGRO!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
		return -1;
	}

	ALLEGRO_MONITOR_INFO info;

	int res_x_comp, res_y_comp;

	al_get_monitor_info(0, &info);

	res_x_comp = info.x2 - info.x1;
	res_y_comp = info.y2 - info.y1;

	al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
	display = al_create_display(res_x_comp, res_y_comp);

	

	if(!display)
	{
		al_show_native_message_box(NULL, "AVISO!", "ERRO!", "ERRO AO CRIAR O DISPLAY!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
		return -1;
	}

	float red_x = res_x_comp / (float) largura_t;
	float red_y = res_y_comp / (float) altura_t;

	ALLEGRO_TRANSFORM transformar;

	al_identity_transform(&transformar);
	al_scale_transform(&transformar, red_x, red_y);
	al_use_transform(&transformar);

//______________________________________

// ------ INCIALIZAÇÃO DE ADDONS E INSTALAÇÕES -------
	al_init_primitives_addon();
	al_install_keyboard();
	al_init_font_addon();
	al_init_ttf_addon();

	al_install_audio();
	al_init_acodec_addon();

	al_reserve_samples(10);
	
//______________________________________
	
// -------- CRIAÇÃO DA FILA E DEMAIS DISPOSITIVOS ----------
	fila_eventos = al_create_event_queue();
	timer = al_create_timer(1.0 / FPS);
	font14 = al_load_font("arial.ttf", 14, NULL);

	al_hide_mouse_cursor(display);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_text(font14, al_map_rgb(255, 255, 255), largura_t / 2, altura_t / 2, ALLEGRO_ALIGN_CENTRE, "CARREGANDO... POR FAVOR, AGUARDE.");//mostra na tela quando o jogo esta carregando
	al_flip_display();

	trilha_sonora = al_load_sample("trilha_sonora.ogg");
	laser = al_load_sample("laser.wav");
	explosao = al_load_sample("explosao.wav");
	aplausos = al_load_sample("aplausos.wav");

	inst_trilha_sonora = al_create_sample_instance(trilha_sonora);
	inst_laser = al_create_sample_instance(laser);
	inst_explosao = al_create_sample_instance(explosao);
	inst_aplausos = al_create_sample_instance(aplausos);
	//prepara os efeitos sonoros
	al_attach_sample_instance_to_mixer(inst_trilha_sonora, al_get_default_mixer());
	al_attach_sample_instance_to_mixer(inst_laser, al_get_default_mixer());
	al_attach_sample_instance_to_mixer(inst_explosao, al_get_default_mixer());
	al_attach_sample_instance_to_mixer(inst_aplausos, al_get_default_mixer());
	
	al_set_sample_instance_playmode(inst_trilha_sonora, ALLEGRO_PLAYMODE_LOOP);
	al_set_sample_instance_gain(inst_trilha_sonora, 0.8);


//______________________________________

// ------ REGISTRO DE SOURCES  ---------
	al_register_event_source(fila_eventos, al_get_display_event_source(display));
	al_register_event_source(fila_eventos, al_get_keyboard_event_source());
	al_register_event_source(fila_eventos, al_get_timer_event_source(timer));
	
//______________________________________
// ------------- DEFINIÇÃO DE FUNÇÕES E PROCEDIMENTOS ---------------

// ----------- NAVE --------------
void InitNave (NaveEspacial &nave)
{
	nave.x = 20;
	nave.y = altura_t / 2;
	nave.ID = JOGADOR;
	nave.vidas = 5;
	nave.velocidade = 7;
	nave.borda_x = 8;
	nave.borda_y = 8;
	nave.pontos = 0;
}
void DesenhaNave (NaveEspacial &nave)
{
	al_draw_filled_rectangle(nave.x, nave.y - 9, nave.x + 10, nave.y - 7, al_map_rgb(255, 0, 0));
	al_draw_filled_rectangle(nave.x, nave.y + 9, nave.x + 10, nave.y + 7, al_map_rgb(255, 0, 0));
	al_draw_filled_triangle(nave.x - 12, nave.y - 17, nave.x + 12, nave.y, nave.x - 12, nave.y + 17, al_map_rgb(0, 255, 0));
	al_draw_filled_rectangle(nave.x - 12, nave.y - 2, nave.x + 15, nave.y + 2, al_map_rgb(0, 0, 255));
}

void MoveNaveCima (NaveEspacial &nave)
{
	nave.y -= nave.velocidade;

	if(nave.y < 20)
		nave.y = 20;
}
void MoveNaveBaixo (NaveEspacial &nave)
{
	nave.y += nave.velocidade;
	if(nave.y > altura_t - 20)
		nave.y = altura_t - 20;
}
void MoveNaveDireita (NaveEspacial &nave)
{
	nave.x += nave.velocidade;

	if(nave.x > 300)
		nave.x = 300;
}
void MoveNaveEsquerda (NaveEspacial &nave)
{
	nave.x -= nave.velocidade;

	if(nave.x < 12)
		nave.x = 12;

}

//________________________________

// --------------- PROJETÉIS ------------------

void InitBalas (Projeteis balas[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		balas[i].ID = PROJETIL;
		balas[i].velocidade = 10;
		balas[i].ativo = false;
	}
}
void AtiraBalas (Projeteis balas[], int tamanho, NaveEspacial nave)
{
	for (int i = 0; i < tamanho; i++)
	{
		if(!balas[i].ativo)
		{
			al_stop_sample_instance(inst_laser);
			al_play_sample_instance(inst_laser);
			balas[i].x = nave.x + 17;
			balas[i].y = nave.y;
			balas[i].ativo = true;	
			break;
		}
	}
}
void AtualizarBalas (Projeteis balas[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		if(balas[i].ativo)
		{
			balas[i].x += balas[i].velocidade;

			if(balas[i].x > largura_t)
				balas[i].ativo = false;
		}
	}
}
void DesenhaBalas (Projeteis balas[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		if(balas[i].ativo)
		{
			al_draw_filled_circle(balas[i].x, balas[i].y, 2, al_map_rgb(255, 255, 255));
		}
	}

}
void BalaColidida(Projeteis balas[], int b_tamanho, Cometas cometas[], int c_tamanho, NaveEspacial &nave)
{
	for(int i = 0; i < b_tamanho; i ++)
	{
		if(balas[i].ativo)
		{
			for(int j = 0; j < c_tamanho; j++)
			{
				if(cometas[j].ativo)
				{
					if(balas[i].x > (cometas[j].x - cometas[j].borda_x) &&
						balas[i].x < (cometas[j].x + cometas[j].borda_x) &&
						balas[i].y > (cometas[j].y - cometas[j].borda_y) &&
						balas[i].y < (cometas[j].y + cometas[j].borda_y))
					{
						al_stop_sample_instance(inst_explosao);
						al_play_sample_instance(inst_explosao);
						balas[i].ativo = false;
						cometas[j].ativo = false;

						nave.pontos++;
					}
				}
			}
		}
	}
}

// ________________________________________

// ----------------- COMETAS --------------------
void InitCometas (Cometas cometas[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		cometas[i].ID = INIMIGOS;
		cometas[i].velocidade = 5;
		cometas[i].borda_x = 19;
		cometas[i].borda_y = 19;
		cometas[i].ativo = false;

	}
}
void LiberaCometas (Cometas cometas[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		if(!cometas[i].ativo)
		{
			if(rand() % 500 == 0)
			{
				cometas[i].x = largura_t; 
				cometas[i].y = 30 + rand() % (altura_t - 60);
				cometas[i].ativo = true;
				break;
			}
		}
	}
}
void AtualizarCometas (Cometas cometas[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		if(cometas[i].ativo)
		{
			cometas[i].x -= cometas[i].velocidade;
			
			
		}
	}
}
void DesenhaCometas (Cometas cometas[], int tamanho)
{
	for (int i = 0; i < tamanho; i ++)
	{
		if(cometas[i].ativo)
		{
			al_draw_filled_circle(cometas[i].x, cometas[i].y, 20, al_map_rgb(255, 0, 0));	
		}
	}
}

void CometaColidido(Cometas cometas[], int c_tamanho, NaveEspacial &nave)
{

	for(int i = 0; i < c_tamanho; i ++)
	{
		if(cometas[i].ativo)
		{
			if((cometas[i].x - cometas[i].borda_x) < (nave.x + nave.borda_x) && 
				(cometas[i].x + cometas[i].borda_x) > (nave.x - nave.borda_x) &&
				(cometas[i].y - cometas[i].borda_y) < (nave.y + nave.borda_y) &&
				(cometas[i].y + cometas[i].borda_y) > (nave.y - nave.borda_y))
			{
				al_stop_sample_instance(inst_explosao);
				al_play_sample_instance(inst_explosao);
				cometas[i].ativo = false;
				nave.vidas--;  // nave.vidas = nave.vidas - 1;
			}

			else if(cometas[i].x < 0)
			{
				cometas[i].ativo = false;
				nave.vidas--;
			}
		}
	}
}

//____________________________________________

// ------------ PLANOS DE FUNDO -----------------

void InitPlanoFundo(Estrelas estrelas_pf[][NUM_ESTRELAS], int pf_tamanho, int e_tamanho)
{
	for(int i = 0; i < pf_tamanho; i++)
	{
		for(int j = 0; j < e_tamanho; j++)
		{
			if(i == 0)
			{
				estrelas_pf[i][j].ID = ESTRELA;
				estrelas_pf[i][j].x = 5 + rand() % (largura_t - 10);
				estrelas_pf[i][j].y = 5 + rand() % (altura_t - 10);
				estrelas_pf[i][j].velocidade = 8;
			}

			else if(i == 1)
			{
				estrelas_pf[i][j].ID = ESTRELA;
				estrelas_pf[i][j].x = 5 + rand() % (largura_t - 10);
				estrelas_pf[i][j].y = 5 + rand() % (altura_t - 10);
				estrelas_pf[i][j].velocidade = 3;
			}

			else if(i == 2)
			{
				estrelas_pf[i][j].ID = ESTRELA;
				estrelas_pf[i][j].x = 5 + rand() % (largura_t - 10);
				estrelas_pf[i][j].y = 5 + rand() % (altura_t - 10);
				estrelas_pf[i][j].velocidade = 1;
			}
		}
	}
}
void AtualizarPlanoFundo(Estrelas estrelas_pf[][NUM_ESTRELAS], int pf_tamanho, int e_tamanho)
{
	for(int i = 0; i < pf_tamanho; i++)
	{
		for(int j = 0; j < e_tamanho; j++)
		{
			if(i == 0)
			{
				estrelas_pf[i][j].x -= estrelas_pf[i][j].velocidade;

				if(estrelas_pf[i][j].x < 0)
					estrelas_pf[i][j].x = largura_t;
			}

			else if(i == 1)
			{
				estrelas_pf[i][j].x -= estrelas_pf[i][j].velocidade;

				if(estrelas_pf[i][j].x < 0)
					estrelas_pf[i][j].x = largura_t;
			}

			else if(i == 2)
			{
				estrelas_pf[i][j].x -= estrelas_pf[i][j].velocidade;

				if(estrelas_pf[i][j].x < 0)
					estrelas_pf[i][j].x = largura_t;
			}
		}
	}
}
void DesenhaPlanoFundo(Estrelas estrelas_pf[][NUM_ESTRELAS], int pf_tamanho, int e_tamanho)
{
	for(int i = 0; i < pf_tamanho; i++)
	{
		for(int j = 0; j < e_tamanho; j++)
		{
			if(i == 0)
			{
				al_draw_pixel(estrelas_pf[i][j].x, estrelas_pf[i][j].y, al_map_rgb(255, 255, 255));
			}

			else if(i == 1)
			{
				al_draw_pixel(estrelas_pf[i][j].x, estrelas_pf[i][j].y, al_map_rgb(255, 255, 255));
			}

			else if(i == 2)
			{
				al_draw_pixel(estrelas_pf[i][j].x, estrelas_pf[i][j].y, al_map_rgb(255, 255, 255));
			}
		}
	}
// --------- FUNÇÕES INICIAIS ----------
	srand(time(NULL));
	
	InitNave(nave);
	InitBalas(balas, NUM_BALAS);
	InitCometas(cometas, NUM_COMETAS);

	InitPlanoFundo(estrelas_pf, NUM_PLANOS, NUM_ESTRELAS);
	
//______________________________________

// ---------- LOOP PRINCIPAL -----------
	al_start_timer(timer);

	while(!fim)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(fila_eventos, &ev);

		// ----- EVENTOS E LÓGICA DO JOGO  ------
	    if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			fim = true;
		} 

		else if(ev.type == ALLEGRO_EVENT_KEY_DOWN)//quando o direcional para baixxo e apertada
		{
			switch(ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				fim = true;
				break;
			case ALLEGRO_KEY_UP:
				teclas[CIMA] = true;
				break;
			case ALLEGRO_KEY_DOWN:
				teclas[BAIXO] = true;
				break;
			case ALLEGRO_KEY_RIGHT:
				teclas[DIREITA] = true;
				break;
			case ALLEGRO_KEY_LEFT:
				teclas[ESQUERDA] = true;
				break;
			case ALLEGRO_KEY_SPACE:
				teclas[SPACE] = true;
				AtiraBalas(balas, NUM_BALAS, nave);
				break;
			case ALLEGRO_KEY_ENTER:
				teclas[ENTER] = true;
				break;
			}
		}

		else if(ev.type == ALLEGRO_EVENT_KEY_UP)//quando o direcional para cima for apertado
		{
			switch(ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_UP:
				teclas[CIMA] = false;
				break;
			case ALLEGRO_KEY_DOWN:
				teclas[BAIXO] = false;
				break;
			case ALLEGRO_KEY_RIGHT:
				teclas[DIREITA] = false;
				break;
			case ALLEGRO_KEY_LEFT:
				teclas[ESQUERDA] = false;
				break;
			case ALLEGRO_KEY_ENTER:
				teclas[ENTER] = false;
				break;
			
			}
		}

		else if(ev.type == ALLEGRO_EVENT_TIMER)//realiza a organizacao do timer e da continuidade da interatividade com o teclado
		{
			desenha = true;

			if(teclas[CIMA])
				MoveNaveCima(nave);
			if(teclas[BAIXO])
				MoveNaveBaixo(nave);
			if(teclas[DIREITA])
				MoveNaveDireita(nave);
			if(teclas[ESQUERDA])
				MoveNaveEsquerda(nave);
			if(teclas[SPACE])
				AtualizarBalas(balas, NUM_BALAS);

			if(!game_over)//caso nao seja game over o codigo segue por causa desta funcao
			{
				al_play_sample_instance(inst_trilha_sonora);

				AtualizarPlanoFundo(estrelas_pf, NUM_PLANOS, NUM_ESTRELAS);
				LiberaCometas(cometas, NUM_COMETAS);
				AtualizarCometas(cometas, NUM_COMETAS);
				BalaColidida(balas, NUM_BALAS, cometas, NUM_COMETAS, nave);
				CometaColidido(cometas, NUM_COMETAS, nave);

				if(nave.vidas <= 0)
				{
					game_over = true;
					tocar_aplausos = true;

				}
			}

			else//no caso do game over acontece o evento de recomecar ou sair do jogo
			{
				al_stop_sample_instance(inst_trilha_sonora);
				al_stop_sample_instance(inst_explosao);
				al_stop_sample_instance(inst_laser);

				if(tocar_aplausos)
				{
					al_play_sample_instance(inst_aplausos);
					
					tocar_aplausos = false;
				}

				if(teclas[ENTER])
				{
					al_stop_sample_instance(inst_aplausos);

					InitNave(nave);
					InitBalas(balas, NUM_BALAS);
					InitCometas(cometas, NUM_COMETAS);
					InitPlanoFundo(estrelas_pf, NUM_PLANOS, NUM_ESTRELAS);

					game_over = false;
				}
			}

		}

		//______________________________________

		// ------------- DESENHO ---------------
		
		if(desenha && al_is_event_queue_empty(fila_eventos))
		{
			desenha = false;

			if(!game_over)
			{


				DesenhaPlanoFundo(estrelas_pf, NUM_PLANOS, NUM_ESTRELAS);			
				DesenhaBalas(balas, NUM_BALAS);
				DesenhaCometas(cometas, NUM_COMETAS);
				DesenhaNave(nave);

				al_draw_textf(font14, al_map_rgb(255, 255, 255), 0, 0, NULL, "VIDAS: %d   /   PONTOS: %d", nave.vidas, nave.pontos);//mostra na tela seus pontos e suas vidas
			}

			else 
			{
				al_draw_textf(font14, al_map_rgb(255, 255, 255), largura_t / 2, altura_t / 2, ALLEGRO_ALIGN_CENTRE, 
					"Fim de jogo. Seus pontos: %d. Tecle ENTER para jogar novamente ou ESC para sair do jogo.", nave.pontos);//mostra na tela as opcoes de game over


			}

			al_flip_display();
			al_clear_to_color(al_map_rgb(0, 0, 0));

		}
    
		// _____________________________________

	}
	
//______________________________________	
	
// -------- FINALIZAÇÕES DO PROGRAMA -------
	al_destroy_display(display);
	al_destroy_event_queue(fila_eventos);
	al_destroy_timer(timer);
	al_destroy_font(font14);

	al_destroy_sample(trilha_sonora);
	al_destroy_sample(laser);
	al_destroy_sample(explosao);
	al_destroy_sample(aplausos);

	al_destroy_sample_instance(inst_trilha_sonora);
	al_destroy_sample_instance(inst_laser);
	al_destroy_sample_instance(inst_explosao);
	al_destroy_sample_instance(inst_aplausos);
	
//______________________________________
return 0;
}


