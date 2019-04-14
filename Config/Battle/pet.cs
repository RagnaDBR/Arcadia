/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
+----------------------------------------------------------------------+
| - Arquivo de configura��o de bixinhos de estima��o.                  |
\*--------------------------------------------------------------------*/

pet_config: {
	// Taxa para capturar bichos de estima��o.    
	pet_catch_rate: 100

	// Um jogador pode renomear seu pet mais de uma vez?    
	pet_rename: false

	// A taxa em que o pet vai ganhando lealdade atrav�s da comida.    
	pet_friendly_rate: 100

	// A taxa em que o pet vai ficando com fome.    
	pet_hungry_delay_rate: 100

	// Se o pet ficar com fome, o quanto da lealdade ser� reduzida
	//dele. (O padr�o � 5)
	// Nota: A lealdade vai de 0-1000, em 0 o bicho de estima��o foge.
	pet_hungry_friendly_decrease: 5

	// Um pet precisa estar com equipamento antes de utilizar
	//sua habilidade?    
	pet_equip_required: true

	// Quando o dono ataca um monstro, o pet deve atacar
	//tamb�m?    
	pet_attack_support: false

	// Quanto o dono recebe dano, o pet deve revidar?    
	pet_damage_support: false

	// Lealdade m�nima para o pet dar suporte ao seu dono.
	//O padr�o � 900.
	// Nesta quantidade, a taxa de suporte � de 50% do valor normal.
	// No m�ximo (1000) a taxa de suporte � de 150%.
	pet_support_min_friendly: 900

	// O mesmo de cima, por�m para usar o campo pet_script
	//com as habilidades oficiais.
	pet_equip_min_friendly: 900

	// Os pets ir�o utilizar habilidades.    
	// Nota: Habilidades ofensivas precisam pelo menos do
	//pet_attack_support ou pet_damage_support para funcionar
	//(elas s�o ativadas quando o pet est� atacando).
	pet_status_support: false

	// Taxa onde o pet ir� dar suporte ao seu dono durante uma luta.    
	// Afeta pet_attack_support e pet_damage_support.
	pet_support_rate: 100

	// O dono do pet receber� exp pelos ataques dele?
	pet_attack_exp_to_master: false

	// A taxa de experi�ncia ganha com pets.
	pet_attack_exp_rate: 100

	// Sistema de n�vel em pets.
	//Use 0 para desabilitar (padr�o).
	// Quando habilitado, o n�vel do pet � uma % fixada
	//do seu dono.    
	// Caso esteja 200%, o pet ter� o n�vel do dobro do seu dono,
	//com 50% ter� a metade, etc.
	pet_lv_rate: 0

	// Quando o sistema de n�vel em pets � habilitado,
	//qual o m�ximo de stats?
	pet_max_stats: 99

	// Quando o sistema de n�vel em pets � ativado, estes s�o
	//os limites impostos
	// no min/m�x dano.
	//Note que somente limita o atk1 e atk2, se voc�
	// habilitar o pet_str, o dano m�ximo ser� base_atk + pet_max_atk2
	pet_max_atk1: 500
	pet_max_atk2: 1000

	// Os pets est�o desabilitados durante GvGs?
	// Defina para yes, e os pets retornar�o automaticamente
	//para seus ovos quando seu dono entrar num mapa GvG
	// e chocar o ovo tamb�m � proibido.
	pet_disable_in_gvg: true

	// Auto alimentar bichinhos de estima��o?
	enable_pet_autofeed: true
}