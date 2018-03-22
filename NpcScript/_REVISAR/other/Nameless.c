
// * Acesso ao Monast�rio. (Camelo, Nameless, Monast�rio)            |
// * Diamante Quebrado.                                              |
// * Gangue Z.                                                       |
// * J�ias Amaldi�oadas.                                             |
// * Investiga��o da Guilda dos Arruaceiros.                         |


/***
PRIMEIRO ADICIONAR A QUEST DE ACESSO AO TEMPLO DE RACHEL
***/



// ------------------------------------------------------------------
airplane_01,90,63,0	script	Event Switch#pc	FAKE_NPC,3,3,{
	end;
	OnTouch:
	if ((prt_curse == 36 || prt_curse == 45 || prt_curse == 56 || prt_curse == 61) && (aru_monas < 1)) {
		hideoffnpc("Agente#pc1");
		mes "[????]";
		mes "Voc� � "+strcharinfo(PC_NAME)+"?";
		mes "Eu estava esperando voc�.";
		mes "O \"^6B8E23Sacerdote Bamph^000000\" aguarda sua chegada na ^6B8E23Catedral de Prontera^000000.";
		mes "V� v�-lo o mais r�pido que puder.";
		aru_monas = 1;
		setquest(17000);
		close2;
		hideonnpc("Agente#pc1");
	}
	end;
}
airplane_01,95,61,3	script	Agente#pc1	4_M_HUMAN_02,{
	end;
	OnInit:
	hideonnpc("Agente#pc1");
	end;
}

// ------------------------------------------------------------------
cmd_in02,174,89,7	script	Homem ordin�rio#pc1	4W_M_01,{
	if (aru_monas < 2) {
		mes "[Larjes]";
		mes "Droga, perdi de novo!";
		mes "Este jogo � uma arma��o!";
		mes "Por mais que eu tente, n�o consigo vencer!";
		close;
	} else if (aru_monas == 2) {
		mes "[Larjes]";
		mes "Argh, perdi neste jogo tantas vezes que j� perdi a conta, tamb�m!";
		mes "Uma hora tenho que vencer...";
		next;
		select("Desculpe-me.");
		mes "[Larjes]";
		mes "Oh! Ahn... Hum.";
		mes "Em que posso ajudar?";
		next;
		select ("O ^6B8E23Sacerdote Bamph^000000 me mandou.");
		mes "[Larjes]";
		mes "Oh, entendo.";
		mes "Desculpe se meus gritos incomodaram voc�.";
		mes "S� estou aqui matando o tempo...";
		mes "Agora entendo que jogar � algo prejudicial!";
		next;
		mes "[Larjes]";
		mes "Certo, poderia vir por aqui?";
		mes "N�o quero que ningu�m escute nossa conversa.";
		close2;
		aru_monas = 3;
		warp("cmd_in02",110,53);
		end;
	} else {
		mes "[Larjes]";
		mes "O qu�?!";
		mes "Eu perdi denovo?";
		mes "Como funciona...";
		mes "Como funciona esse jogo?!";
		close;
	}
}

// ------------------------------------------------------------------
cmd_in02,111,52,3	script	Homem ordin�rio#pc2	4W_M_01,{
	if (aru_monas < 3) {
		mes "[Larjes]";
		mes "^666666*Ai, ai...*^00000";
		mes "Isso n�o � nada bom.";
		mes "N�o sei o que fazer...";
		close;
	} else if (aru_monas == 3) {
		mes "[Larjes]";
		mes "�timo, ningu�m deve nos ouvir aqui.";
		mes "Depois que enviei uma mensagem para o lugar.";
		mes "Descobri informa��es novas que devem ajudar em minha investiga��o.";
		next;
		mes "[Larjes]";
		mes "Descobri dois detalhes sobre a noite em que o alto oficial desapareceu.";
		mes "Primeiro, ele se afastou dos guardas para encontrar uma mulher.";
		mes "� sempre uma mulher, n�?";
		next;
		mes "[Larjes]";
		mes "Segundo, depois que ele saiu para ver essa mulher, outras pessoas entraram.";
		mes "Ent�o carregaram uma enorme bagagem com elas quando partiram para o oeste.";
		next;
		mes "[Larjes]";
		mes "A bagagem era t�o grande que levantou suspeita.";
		mes "Parece que alguma organiza��o o seq�estrou, e quer lev�-lo para o oeste por alguma raz�o.";
		next;
		select("Por que para o oeste?");
		mes "[Larjes]";
		mes "� s� um palpite, mas acho que quem o seq�estrou � de ^2F4F2FArunafeltz^000000.";
		mes "N�o estou autorizado a entrar em Arunafeltz, ent�o n�o pude investigar mais por l�.";
		aru_monas = 4;
		changequest(17001,17002);
		close;
	} else {
		mes "[Larjes]";
		mes "Hmm, j� que estou em Comodo, acho que vou dar um belo mergulho no mar?!";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,308,59,1	script	Gar�om#pc	4_M_RACHMAN2,{
	if (aru_monas < 7) {
		mes "[Gar�om]";
		mes "Bem-vindo ao Palato de Rachel, um dos mais refinados restaurantes de Rachel.";
		if (aru_monas < 6) {
			close;
		} else if (aru_monas == 6) {
			next;
			mes "[Gar�om]";
			mes "O que gostaria de pedir?";
			mes "Ou... Ser� que me engano, ou voc� est� aqui por outro motivo?";
			next;
			if (select("Quero pedir algo","Sim, Por outro motivo") == 1) {
				mes "[Gar�om]";
				mes "Claro, ser� um prazer.";
				mes "Veio sozinho?";
				next;
				select("Sim.");
				mes "[Gar�om]";
				mes "Por aqui.";
				close2;
				aru_monas = 7;
				switch(rand(1,4)) {
					case 1: warp("ra_in01",303,43); end;
					case 2: warp("ra_in01",304,43); end;
					case 3: warp("ra_in01",304,39); end;
					case 4: warp("ra_in01",303,39); end;
				}
			}
			mes "[Gar�om]";
			mes "Hum, certo.";
			mes "Bem, o que quer que seja, espero que aproveite seu tempo no Palato de Rachel.";
			close;
		}
	} else {
		mes "[Gar�om]";
		mes "A comida neste restaurante � a melhor de Rachel.";
		mes "N�o, � a melhor de todas em Arunafeltz!";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,301,43,0	script	MealConversation Trigger	FAKE_NPC,3,3,{
	end;
	OnTouch:
	if (aru_monas == 7) {
		if (!checkweight(Vit_Dish02,4)) {
			mes "^3355FFEspere um pouco!";
			mes "Agora mesmo, voc� est� carregando itens demais com voc�.";
			mes "Por favor, volte depois de usar o Armaz�m Kafra para guardar alguns dos seus itens.^000000";
			close;
		}
		mes "[Gar�om]";
		mes "O que voc� gostaria de pedir?";
		mes "Nosso prato do dia � o Esgana-Gata Listrado de Veins.";
		mes "Recebemos um lote de alt�ssima qualidade de Veins hoje de mamh�.";
		next;
		select("...Sim, parece ser bom.");
		mes "[Gar�om]";
		mes "Excelente escolha.";
		mes "S� para lhe informar, esse prato custa ^9932CD3.000 zenys^000000.";
		mes "Volto j�.";
		next;
		mes "^3355FFO gar�om anotou seu pedido e saiu para a cozinha.";
		mes "Voc� decide escutar a conversa do pessoal da mesa ao lado enquanto espera.^000000";
		next;
		mes "[Voz Grave]";
		mes "...............................";
		mes "Eu vi mesmo, era o maior peixe do mundo!";
		mes "Da �ltima vez que fui a Veins, pude ver o Esgana-Gata Listrado Dourado de Veins!";
		mes "� verdade!";
		next;
		mes "[Voz Desanimada]";
		mes "Ent�o, voc� conseguiu provar o molho do Esgana-Gata Listrado Dourado de Veins?";
		next;
		mes "[Voz Confiante]";
		mes "Ah, cara, se fosse comigo, seria uma experi�ncia �nica na vida!";
		mes "S� conseguem pescar esses Esgana-Gatas Listrados Dourados uma vez a cada dez anos!";
		next;
		mes "[Voz Grave]";
		mes "Ah, sim, seu molho � incr�vel.";
		mes "Minha voz at� mudou depois que eu bebi!";
		mes "Foi t�o... Profundo.";
		next;
		mes "[Voz Confiante]";
		mes "Oh! Ent�o � por isso que sua voz est� diferente.";
		next;
		mes "[Voz Desanimada]";
		mes "Como voc� conseguiu beber um suco t�o raro?";
		mes "Quero dizer, deve ter um monte de gente fazendo fila, com reservas, s� esperando para beber!";
		next;
		mes "[Voz Grave]";
		mes "Tirei a sorte grande, fui a uma taverna em Veins, e ouvi dizer que..";
		mes "^DB7093Um grupo de contrabandistas havia sido preso pelos guardas na praia ao sudeste^000000.";
		next;
		mes "[Voz Grave]";
		mes "Ent�o pensei, talvez eles estivessem pescando.";
		mes "Ent�o fui � praia ver se achava o barco de pesca deles.";
		next;
		mes "[Voz Confiante]";
		mes "Cara, voc� � obcecado por comida.";
		mes "Digo, quem mais ia pensar que os contrabandistas estariam pescando ilegalmente?";
		next;
		mes "[Voz Grave]";
		mes "�, acho que voc� tem raz�o!";
		mes "Enfim, havia apenas um barco de pesca, e os guardas estavam inspecionando.";
		mes "Estava prestes a dar meia-volta, desapontado mas ent�o... avistei um pescador!";
		next;
		mes "[Voz Grave]";
		mes "Pelo canto dos olhos, vi que ele trazia a pescaria do dia:";
		mes "O Esgana-Gata Listrado Dourado de Veins!";
		mes "Comprei todos os peixes dele na hora.";
		next;
		mes "[Voz Desanimada]";
		mes "Cara, voc� teve sorte.";
		mes "E voc� nem hesita em esbanjar quando o assunto � comida, n�o �? He he!";
		next;
		mes "[Voz Grave]";
		mes "Ah, isso n�o foi esbanjar.";
		mes "Sei que voc�s teriam feito o mesmo no meu lugar.";
		mes "Sou grato por poder saborear um peixe t�o raro.";
		next;
		mes "^3355FF...............................";
		mes "Ent�o, os homens come�aram a brindar entre si.^000000";
		next;
		mes "[Gar�om]";
		mes "Ah, aqui est� o seu Esgana-Gata Listrado de Veins.";
		mes "Bom apetite.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "^ff0000Veins^000000, n�o �?";
		mes "� melhor eu dar uma olhada l� um dia desses, talvez encontre mais desses peixes.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Uau, esse peixe tem gosto de...";
		mes "Nunca saboreei nada igual!";
		mes "� quase como uma sobremesa. Hummm, que bom!";
		aru_monas = 8;
		changequest(17003,17004);
		if (Zeny >= 3000) {
			Zeny -= 3000;
			getitem(Vit_Dish02,4);
		}
		close;
	}
	end;
}

// ------------------------------------------------------------------
ve_in,78,314,5	script	Magistrado#Aru	4_M_DST_GRAND,{
	if (aru_monas < 8) {
		mes "[Al Hamad]";
		mes "Argh! Como isso foi acontecer comigo, logo quando estava para me aposentar!";
		mes "A-ai! Minha �lcera...";
		mes "T�o de repente...!";
		close;
	} else if (aru_monas == 8) {
		mes "[Al Hamad]";
		mes "Puxa, esse deve ser o pior caso da minha carreira.";
		mes "Por que isso tinha que acontecer agora?";
		mes "A aposentadoria estava t�o perto...";
		next;
		select("Est� com problemas?");
		mes "[Al Hamad]";
		mes "H�? N�o parece que voc� seja aqui destas bandas.";
		mes "Olhe, agrade�o sua preocupa��o.";
		mes "Mas n�o me sinto � vontade para falar com estranhos sobre meus problemas...";
		aru_monas = 9;
		changequest(17004,17005);
		close;
	} else if (aru_monas == 9) {
		mes "[Al Hamad]";
		mes "A menos que voc� tenha algum assunto importante, n�o tem permiss�o para entrar aqui.";
		mes "Estamos aqui para Homemter a ordem p�blica, e deixar qualquer um entrar vai causar problemas.";
		close;
	} else if (aru_monas == 10) {
		mes "[Al Hamad]";
		mes "Pensei ter dito que voc� n�o tem permiss�o para entrar aqui.";
		mes "Por que voc� voltou?";
		next;
		if (select("Desculpe","Quero saber sobre os contrabandistas.") == 1) {
			mes "[Al Hamad]";
			mes "Tudo bem.";
			mes "Apenas saia, e n�o volte a menos que tenha um motivo muito bom.";
			close;
		}
		mes "[Al Hamad]";
		mes "Ei, como voc� soube dos contrabandistas?";
		mes "A not�cia j� se espalhou?";
		mes "Bem, desculpe, mas n�o posso revelar nenhum detalhe sobre uma investiga��o em curso.";
		next;
		mes "[Al Hamad]";
		mes "^9370DBSe quiser mesmo saber mais, ent�o deve me trazer uma ordem por escrito de um oficial superior.^000000.";
		mes "Ah, e pro�bo voc� de perguntar a mais algu�m, ent�o comporte-se.";
		aru_monas = 11;
		changequest(17006,17007);
		close;
	} else if (aru_monas < 13) {
		mes "[Al Hamad]";
		mes "N�o culpo voc� por ser curioso, mas envolver-se com o que n�o deve s� pode lhe trazer problemas.";
		mes "Tenha cuidado, certo?";
		close;
	} else if (aru_monas == 13) {
		mes "[Al Hamad]";
		mes "Hum, que estranho.";
		mes "Voc� nem mesmo � cidad�o de Arunafeltz, mas de alguma forma conhece um homem de posi��o t�o alta.";
		mes "Certo, acho que posso lhe contar mais sobre nossa investiga��o.";
		next;
		mes "[Al Hamad]";
		mes "Voc� precisa saber que o que eu te disser pode n�o valer tanto a pena.";
		mes "Estas informa��es n�o devem ser t�o valiosas quanto voc� pensa.";
		next;
		mes "[Al Hamad]";
		mes "Os contrabandistas que pegamos s�o do pior tipo:";
		mes "Eles lidam com o tr�fico de pessoas, mas n�s os pegamos por terem invadido nossas �guas.";
		mes "A ficha criminal deles � t�pica.";
		next;
		mes "[Al Hamad]";
		mes "Vejamos...";
		mes "Eles seq�estraram um homem em Comodo.";
		mes "Isso fica na regi�o sudoeste de Rune-Midgard.";
		mes "Enfim, os contrabandistas pensaram que ele era rico, ent�o armaram uma cilada.";
		next;
		mes "[Al Hamad]";
		mes "Eles o afastaram dos seus guardas enviando uma mulher.";
		mes "Mas quando o capturaram descobriram que ele n�o s� � rico.";
		mes "Como tamb�m � um oficial de alta patente em Rune-Midgard.";
		next;
		mes "[Al Hamad]";
		mes "Foi a� que eles se descuidaram:";
		mes "Ficaram com tanto medo das tropas do reino os perseguirem que invadiram nossas fronteiras mar�timas.";
		mes "Ent�o n�s os pegamos.";
		next;
		mes "[Al Hamad]";
		mes "O que n�o entendo � por que ficaram t�o assustados.";
		mes "Afinal, o maior neg�cio deles � o tr�fico de pessoas, ent�o...";
		mes "Seq�estrar um oficial n�o � uma diferen�a t�o grande, �?";
		next;
		mes "[Al Hamad]";
		mes "Entramos em contato com o templo, falamos sobre os contrabandistas.";
		mes "Nossa investiga��o e o oficial de alta patente do Reino de Rune-Midgard.";
		next;
		mes "[Al Hamad]";
		mes "Depois disso, um grupo do templo interrompeu nossa investiga��o.";
		mes "Levou os contrabandistas embora antes que termin�ssemos o interrogat�rio, e nunca mais os vimos.";
		next;
		mes "[Al Hamad]";
		mes "Perguntei a um conhecido que trabalha no templo, mas nem ele sabe o que est� acontecendo aqui.";
		mes "O ^32CD32oficial de Rune-Midgard^000000 tamb�m sumiu.";
		mes "Tudo isso � frustrante demais...!";
		next;
		mes "[Al Hamad]";
		mes "Isso � tudo o que eu sei.";
		mes "Isso significa que temos de capturar os contrabandistas de novo?";
		mes "N�o sei o que est� acontecendo...";
		aru_monas = 14;
		changequest(17009,17010);
		next;
		mes "[Al Hamad]";
		mes "Mesmo que pudesse avan�ar com a investiga��o, recebi ordens superiores para arquiv�-la.";
		mes "Ser� que este caso n�o vale a pena para eles?";
		next;
		mes "[Al Hamad]";
		mes "N�o quero mais me envolver nisso.";
		mes "Eu j� devia ter me aposentado!";
		mes "Se voc� quiser saber mais, sua �nica op��o seria descobrir por conta pr�pria.";
		mes "Sem chance, n�o �?";
		close;
	} else {
		mes "[Al Hamad]";
		mes "J� sofri o bastante!";
		mes "Por que n�o consigo arquivar este caso?!";
		close;
	}
}

// ------------------------------------------------------------------
ve_in,81,296,3	script	Soldado#Aru	4_M_DST_MASTER,{
	if (aru_monas < 9) {
		mes "[Himus]";
		mes "Hum.";
		mes "O magistrado parece ainda estar nervoso com o caso que aconteceu h� uns meses...";
		close;
	} else if (aru_monas == 9) {
		mes "[Himus]";
		mes "Hum? Oh, o magistrado te deu um fora?";
		mes "Bem, ele n�o � mais o mesmo desde que prendemos aqueles ^32CD32contrabandistas do sul^000000 h� alguns meses.";
		next;
		mes "[Himus]";
		mes "Quando informamos sobre a pris�o ao templo, os soldados da papisa vieram e levaram os contrabandistas.";
		mes "N�o temos id�ia do que aconteceu com eles nem de onde eles est�o agora.";
		next;
		mes "[Himus]";
		mes "Pode n�o parecer grande coisa para voc�.";
		mes "Mas o magistrado � muito meticuloso, e odeia quando gente de fora interfere no trabalho dele, sabe?";
		next;
		select("Quem s�o os contrabandistas?");
		mes "[Himus]";
		mes "Bem, eu n�o sei.";
		mes "Talvez o magistrado soubesse se tivesse a chance de terminar de interrogar os contrabandistas.";
		mes "N�o sei se ele conseguiu antes dos contrabandistas serem levados.";
		aru_monas = 10;
		changequest(17005,17006);
		close;
	} else if (aru_monas == 10) {
		mes "[Himus]";
		mes "O magistrado est� prestes a se aposentar, ent�o espero que ele finalmente possa ir para casa e esquecer disso tudo.";
		mes "Ele n�o faz nada al�m de se estressar!";
		close;
	} else {
		mes "[Himus]";
		mes "Belo dia, n�o?";
		close;
	}
}

// ------------------------------------------------------------------
ve_in,239,115,0	script	B�bedo#Aru	4_M_DESERT,{
	if (aru_monas < 14) {
		mes "[B�bado]";
		mes "Cara, que legal! Ha ha!";
		mes "Ei, me d� mais um refresco!";
		close;
	} else if (aru_monas == 14) {
		if (rachel_camel == 25) {
			mes "[B�bado]";
			mes "Ent�o... o que eu... eu 'tava dizendo, sabe aquele cara que ^32CD32saiu de fininho para navegar com um barco^000000?";
			mes "Voc� sabe por que ele voltou t�o cedo?";
			mes "Voc� n�o vai acreditar!";
			next;
			mes "[B�bado]";
			mes "Ha ha!";
			mes "Ele achou ter visto um ^DBDB70fantasma^000000!";
			mes "Hua ha ha ha! Uuuug... Ei...";
			aru_monas = 15;
			changequest(17010,17011);
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Isso mesmo!";
			mes "Talvez eu deva falar com o ^32CD32pai de Karyn, j� que ele � um pescador^000000.";
			close;
		} else {
			mes "[Drunkard]";
			mes "Zzzz...";
			mes "Umm... Zzz...";
			close;
		}
	} else {
		mes "[B�bado]";
		mes "Por qu�?!";
		mes "Por que n�o posso sair com o barco para o mar?";
		mes "Preciso pescar para ganhar a vida!";
		mes "Eles 't�o querendo que eu morra de fome ou algo assim?!";
		mes "Hein?!";
		close;
	}
}

// ------------------------------------------------------------------
ve_fild07,125,128,0	script	Barco#Aru	HIDDEN_NPC,{
	if (aru_monas < 16) {
		mes "^3355FFEste barco parece estar em boas condi��es.";
		mes "De quem ele ser�?^000000";
		close;
	} else if (aru_monas == 16) {
		mes "^3355FFEste deve ser o barco de que Karyn me contou.";
		mes "Ele parece estar em bom estado.";
		mes "Bem, o monast�rio deve estar a sudoeste daqui...^000000";
		next;
		hideoffnpc("Agente Secreto#Aru");
		next;
		mes "[Larjes]";
		mes "A quanto tempo, "+strcharinfo(PC_NAME)+".";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Larjes!";
		next;
		mes "[Larjes]";
		mes "Foi dif�cil ficar seguindo voc�, sabia?";
		mes "Na verdade, quase que eu perco seu rastro.";
		mes "Voc� deve estar se perguntado por que estou aqui.";
		mes "Se puder me ouvir, vou explicar tudo.";
		next;
		mes "[Larjes]";
		mes "De acordo com nossa investiga��o, Arunafeltz est� definitivamente envolvida neste caso.";
		mes "Vigiamos voc� por sua rela��o com aquele alto oficial de Arunafeltz.";
		mes "Pe�o desculpas por isso.";
		next;
		mes "[Larjes]";
		mes "Este � um incidente";
		mes "internacional, ent�o para evitar que qualquer coisa vazasse para Arunafeltz.";
		mes "Tivemos que ser muito r�gidos para proteger todas as informa��es sobre esse caso.";
		next;
		mes "[Larjes]";
		mes "Enfim, decidi me revelar para voc�, j� que sou o �nico que pode ajudar voc� agora.";
		mes "Est� pensando em usar o barco, n�o est�?";
		next;
		mes "[Larjes]";
		mes "Se voc� n�o tiver a habilidade, conhecimento e prepara��o para navegar por essas �guas, provavelmente vai afundar com o barco.";
		mes "Conseguiria com sorte, mas... seria sorte demais.";
		next;
		mes "[Larjes]";
		mes "Vou ajudar voc� a navegar para chegar aonde voc� deve ir.";
		mes "Mas se falhar, talvez tenha que navegar com este barco sem mim.";
		mes "Ent�o, est� pronto para ir?";
		next;
		switch(select("Sim, estou pronto","D�-me mais um tempo.")) {
			case 1:
			mes "[Larjes]";
			mes "Certo, vamos l�, � melhor se segurar:";
			mes "Esta vai ser uma viagem dif�cil...";
			aru_monas = 17;
			changequest(17012,17013);
			close2;
			hideonnpc("Agente Secreto#Aru");
			warp("nameless_i",257,217);
			end;
			case 2:
			mes "[Larjes]";
			mes "Tudo bem.";
			mes "Venha falar comigo quando estiver pronto.";
			close;
		}
	} else if (aru_monas < 20) {
		mes "^3355FFEste � o barco que pode levar voc� ao monast�rio.^000000";
		next;
		switch(select("Ir para o Monast�rio","Cancelar")) {
			case 1:
			mes "^3355FFVoc� zarpa em dire��o ao monast�rio...^000000";
			close2;
			warp("nameless_i",257,217);
			end;
			case 2:
			mes "^3355FFVoc� decide ficar em terra firme.^000000";
			close;
		}
	} else {
		mes "^3355FFEste � o barco que pode levar voc� ao monast�rio.^000000";
		next;
		switch(select("Ir para o Monast�rio","Cancelar")) {
			case 1:
			mes "^3355FFVoc� zarpa em dire��o ao monast�rio...^000000";
			close2;
			warp("nameless_n",257,217);
			end;
			case 2:
			mes "^3355FFVoc� decide ficar em terra firme.^000000";
			close;
		}
	}
}

// ------------------------------------------------------------------
ve_fild07,128,130,1	script	Agente Secreto#Aru	4W_M_01,{
	if (aru_monas == 16) {
		mes "[Larjes]";
		mes "Est� pronto para embarcar?";
		mes "Vou ajudar voc� a navegar at� o monast�rio.";
		mes "Mas se falhar enquanto estiver l�, posso n�o estar aqui quando voc� voltar...";
		next;
		switch(select("Sim, estou pronto","D�-me mais um tempo.")) {
			case 1:
			mes "[Larjes]";
			mes "Certo, vamos l�.";
			mes "� melhor se segurar esta vai ser uma viagem dif�cil...";
			aru_monas = 17;
			changequest(17012,17013);
			close2;
			hideonnpc("Agente Secreto#Aru");
			warp("nameless_i",257,217);
			end;
			case 2:
			mes "[Larjes]";
			mes "Tudo bem.";
			mes "Venha falar comigo quando estiver pronto.";
			close;
		}
	}
	end;

	OnInit:
	hideonnpc("Agente Secreto#Aru");
	end;
}

// ------------------------------------------------------------------
nameless_i,212,184,0	script	Outside Island#Aru	FAKE_NPC,2,3,{
	end;
	OnTouch:
	if (aru_monas == 17) {
		mes "^3355FFA vila est� em total sil�ncio, como se toda a vida a tivesse abandonado.";
		mes "Voc� olha ao redor e percebe que algo estava aqui h� horas atr�s, mas foi embora.^000000";
		next;
		mes "^3355FFO que quer que fosse, definitivamente n�o era humano.";
		mes "Que tipo de criatura poderia ser?^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
nameless_in,21,176,0	script	Inside Island#Aru	FAKE_NPC,2,2,{
	end;
	OnTouch:
	if (aru_monas == 17) {
		mes "^3355FFH� tra�os de humanos por aqui.";
		mes "Juntamente com algum tipo de uma criatura que voc� n�o consegue identificar.^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
nameless_i,129,218,0	script	Grass Behind#Aru	FAKE_NPC,4,3,{
	end;
	OnTouch:
	if (aru_monas == 17) {
		mes "^3355FFA strange scent strikes you as you enter this field of grass.";
		mes "A few ^32CD32animal corpses^3355FF are strewn around the ground.^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
nameless_i,127,207,0	script	Corvo Morto#Aru	HIDDEN_NPC,{
	if (aru_monas < 17) {
		mes "^3355FF� apenas um corvo morto.^000000";
		close;
	} else if (aru_monas == 17) {
		mes "^3355FFA vis�o desse ^32CD32corvo morto^3355FF incomoda voc� por algum motivo.^000000";
		next;
		if (select("Ignorar","Investigar") == 1) {
			mes "^3355FFVoc� decide n�o tocar na carca�a do animal.^000000";
			close;
		}
		mes "^3355FFVoc� nota um pouco de seiva de grama no bico do corvo, ent�o ele devia estar mastigando a grama.";
		mes "Algumas penas e t�o faltando, revelando uma pele escamosa como a de uma cobra.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espere...";
		mes "Essa grama...?";
		next;
		mes "^3355FFEssa grama deve ser o ingrediente principal do veneno usado para matar os pr�ncipes da fam�lia Gaebolg.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Parece que tirei a sorte grande.";
		mes "H�? Tem algu�m atr�s...";
		next;
		mes "^3355FFUma dor forte e aguda atinge sua nuca, enquanto voc� cai inconsciente...^000000";
		aru_monas = 18;
		close2;
		warp("nameless_in",15,60);
		end;
	}
	end;
}

// ------------------------------------------------------------------
nameless_in,15,61,0	script	Pass Out#Aru	FAKE_NPC,2,3,{
	end;
	OnTouch:
	if (aru_monas == 18) {
		disablenpc("Out_from_Monastery");
		sc_start(SC_BLIND,600000,0,10000);
		mes "^3355FFA press�o no seu est�mago e o sangue correndo para sua cabe�a indicam que algu�m est� carregando voc� sobre os ombros.";
		mes "Ele para e voc� ouve uma voz fraca.^000000";
		next;
		mes "^3355FFA voz fraca vai ficando mais forte e mais distinta...";
		mes "Algu�m est� chamando seu nome.";
		mes "Voc� sente a �gua fria correr por seus l�bios, e ent�o voc� recupera os sentidos.^000000";
		next;
		sc_end(SC_BLIND);
		hideoffnpc("Larjes#Monastery");
		next;
		mes "Essa foi por pouco...";
		mes "Por um instante,";
		mes "Pensei ter perdido voc�.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Larjes...? O que...";
		mes "O que aconteceu?";
		mes "Ai, minha cabe�a...";
		next;
		mes "[Larjes]";
		mes "Tente n�o se mexer por enquanto.";
		mes "Tive uma sensa��o ruim enquanto esperava por voc� no barco.";
		mes "Foi sorte sua.";
		mes "Quando encontrei voc�, aquelas criaturas estranhas estavam atacando voc�!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� me salvou?";
		mes "Obrigado.";
		mes "Voc� por acaso sabe que criaturas eram aquelas?";
		next;
		mes "[Larjes]";
		mes "N�o tenho id�ia. Pareciam Homens, mas...";
		mes "N�o eram, definitivamente.";
		mes "Quando as matei, elas viraram areia.";
		next;
		hideoffnpc("Creature#Monas");
		emotion(e_omg,1);
		emotion(e_omg,0,"Larjes#Monastery");
		mes "[Larjes]";
		mes "?!?!?!!!!!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "!!!!?!?!!!!!!";
		mes "Elas... N�o s�o...?";
		next;
		mes "[Larjes]";
		mes "Elas se parecem com as criaturas que levaram voc�, mas...";
		mes "Por que ser� que n�o nos atacaram?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Acho que teremos de ir at� l� perguntar.";
		aru_monas = 19;
		close;
	}
}

// ------------------------------------------------------------------
nameless_in,13,58,6	script	Larjes#Monastery	4W_M_01,{
	mes "[Larjes]";
	mes "Tenha cuidado.";
	mes "Esse cara parece bem perigoso.";
	close;
	OnInit:
	hideonnpc("Larjes#Monastery");
	end;
}

// ------------------------------------------------------------------
nameless_in,13,53,1	script	Creature#Monas	ZOMBIE_SLAUGHTER,3,1,{
	end;
	OnInit:
	hideonnpc("Creature#Monas");
	end;
	OnTouch:
	if (aru_monas == 19 && mobcount("nameless_in","Creature#Monas::OnMyMobDead") < 1 && !@aru_monas_kill) {
		mes "[???????]";
		mes "Grrr!!!";
		close2;
		monster "nameless_in",13,53,"Massacre",ZOMBIE_SLAUGHTER,1,"Creature#Monas::OnMyMobDead";
		hideonnpc("Creature#Monas");
	}
	end;

	OnMyMobDead:
	@aru_monas_kill = 1;
	enablenpc("Out_from_Monastery");
	end;
}

// ------------------------------------------------------------------
nameless_in,12,37,0	script	Out_from_Monastery	WARPNPC,1,1,{
	end;
	OnTouch:
	if (aru_monas == 19) {
		aru_monas = 20;
		warp("nameless_n",168,252);
		end;
	}
	OnInit:
	disablenpc("Out_from_Monastery");
	end;
}

// ------------------------------------------------------------------
nameless_i,168,257,0	script	outtoin_01#mo	WARPNPC,1,1,{
	end;
	OnTouch:
	if (aru_monas == 18 || aru_monas == 19) {
		warp("nameless_in",12,41);
		end;
	}
	mes "^3355FFEssa porta n�o abre, voc� n�o pode passar por ela.^000000";
	close;
}

// ------------------------------------------------------------------
nameless_n,169,254,0	script	Night#Aru2	FAKE_NPC,3,3,{
	end;

	OnTouch:
	if(aru_monas == 20) {
		hideoffnpc("Larjes#Monastery2");
		mes "[" +strcharinfo(PC_NAME)+ "]";
		mes "Mas que diabos...?!";
		next;
		mes "[Larjes]";
		mes "Ent�o...";
		mes "Essa � a verdadeira natureza da ilha.";
		next;
		mes "[Larjes]";
		mes "Algu�m como eu n�o sobrevive em um lugar como este.";
		mes "Vou esperar por voc� no barco.";
		mes "Descubra o que tiver que descobrir, e volte a salvo, "+strcharinfo(PC_NAME)+".";
		aru_monas = 21;
		changequest(17013,17014);
		close2;
		hideonnpc("Larjes#Monastery2");
	}
	end;
}
nameless_n,166,254,0	script	Larjes#Monastery2	4W_M_01,{
	end;

	OnInit:
	hideonnpc("Larjes#Monastery2");
	end;
}

// ------------------------------------------------------------------
nameless_i,259,218,3	script	Larjes#Aru	4W_M_01,{
	if (aru_monas < 18) {
		mes "[Larjes]";
		mes "N�o gosto deste lugar...";
		mes "� melhor voc� tomar cuidado com essas criaturas estranhas andando por a�.";
		close;
	} else if (aru_monas < 24) {
		mes "[Larjes]";
		mes "Que bom, voc� voltou.";
		mes "Sei que ainda h� coisas nesta ilha que voc� quer investigar.";
		mes "Mas quer deixar este lugar por algum tempo?";
		next;
		if(select("Sim","N�o") == 1) {
			mes "[Larjes]";
			mes "Certo, vamos l�.";
			close2;
			warp("ve_fild07",130,130);
			end;
		}
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram voc� uma vez.";
		close;
	} else {
		mes "[Larjes]";
		mes "Voc� ainda quer investigar a ilha?";
		next;
		if (select("N�o","Sim") == 1) {
			mes "[Larjes]";
			mes "Certo, vamos l�.";
			close2;
			warp("ve_fild07",130,130);
			end;
		}
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram voc� uma vez.";
		close;
	}
}

// ------------------------------------------------------------------
nameless_n,259,218,3	script	Larjes#Boat1	4W_M_01,{
	if (aru_monas == 24) {
		if (countitem(Token_Of_King) < 1) {
			mes "[Larjes]";
			mes "Que bom, voc� voltou.";
			mes "Sei que ainda h� coisas nesta ilha que voc� quer investigar.";
			mes "Mas quer deixar este lugar por algum tempo?";
			next;
			switch(select("Sim", "N�o")) {
				case 1:
				mes "[Larjes]";
				mes "Certo, vamos l�.";
				close2;
				warp("ve_fild07",130,130);
				end;
				case 2:
				mes "[Larjes]";
				mes "Certo, mas tenha cuidado.";
				mes "As criatura quase pegaram voc� uma vez.";
				close;
			}
		} else {
			mes "[Larjes]";
			mes "Eu n�o acredito...";
			mes "Aquele cara era Tristan III?!";
			mes "Isso explica muita coisa, ent�o.";
			mes "Vou relatar isso, junto com os autos.";
			mes "Ent�o Arunafeltz estava por tr�s da grama venenosa tamb�m...";
			next;
			mes "[Larjes]";
			mes "Estou chocado com tudo isso.";
			mes "Tenho certeza que a fam�lia real de Rune-Midgard vai ficar louca com tudo isso.";
			mes "E pensar que nos envolvemos em algo t�o grande...";
			next;
			mes "[Larjes]";
			mes "Enfim, � melhor eu ir";
			mes "andando... Isso � enorme!";
			delitem(Token_Of_King, 1);
			aru_monas = 25;
			changequest(17016,17017);
			getexp(1000000,0);
			close;
		}
	}
	mes "[Larjes]";
	mes "Voc� ainda quer investigar a ilha?";
	next;
	switch(select("N�o","Sim")) {
		case 1:
		mes "[Larjes]";
		mes "Certo, vamos l�.";
		close2;
		warp("ve_fild07",130,130);
		end;
		case 2:
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram voc� uma vez.";
		close;
	}
}

// ------------------------------------------------------------------
abbey02,224,70,0	script	Livros#Mona1	HIDDEN_NPC,{
	if (!checkweight(Research_Note,1)) {
		mes "^3355FFEspere um pouco!";
		mes "No momento, voc� est� carregando muitas coisas com voc�.";
		mes "Volte depois de usar os Servi�os Kafra para armazenar alguns dos seus itens.^000000";
		close;
	} else if (aru_monas < 21) {
		mes "^3355FF� apenas uma pilha de livros velhos e mofados.^000000";
		close;
	} else if (aru_monas == 21) {
		mes "^3355FFH� um livro manchado com sangue entre tudos estes livros velhos, mofados.^000000";
		next;
		if(select("Examinar o Livro","Ignorar")==1) {
			aru_monas = 22;
			changequest(17014,17015);
			getitem(Research_Note,1);
			readbook(Research_Note,1);
			close;
		}
		mes "^3355FFAquele livro devia ser in�til mesmo.^000000";
		close;
	} else {
		mes "^3355FFH� v�rios livros velhos espalhados por aqui.^000000";
		close;
	}
}

// ------------------------------------------------------------------
abbey03,232,233,4	script	Homem#King	4_M_TRISTAN,{
	if (aru_monas < 22) {
		mes "^3355FFVoc� encontra um homem deitado no ch�o, vestindo roupas rotas, mas luxuosas.";
		mes "Ele parece n�o estar respirando...^000000";
		next;
		mes "^3355FFEle est� morto.^000000";
		close;
	} else if (aru_monas == 22 || aru_monas == 23) {
		mes "^3355FFVoc� encontra um homem deitado no ch�o, vestindo roupas rotas, mas luxuosas.";
		mes "Ele parece n�o estar respirando...^000000";
		next;
		mes "^3355FFVoc� leva o ouvido mais perto da boca dele:";
		mes "Parece que ele ainda respira, mas est� quase morto.^000000";
		next;
		if (select("Toque-o","Ignore-o") == 1) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Este homem...";
			mes "Ele parece familiar, por algum motivo.";
			next;
			mes "^3355FFQuando voc� toca nele, o homem se levanta de repente, com um gemido alucinado.^000000";
			aru_monas = 23;
			monster "abbey03",232,232,"Tristan III",TRISTAN_3RD,1,"Homem#King::OnMyMobDead";
			initnpctimer;
			hideonnpc "Homem#King";
			close;
		}
		mes "^3355FFVoc� n�o se sente � vontade para tocar neste homem.^000000";
		close;
	} else {
		mes "^3355FFEle est� morto... Agora.^000000";
		close;
	}

	OnMyMobDead:
	stopnpctimer;
	donpcevent("Homem Morto#King::OnEnable");
	end;

	OnTimer300000:
	stopnpctimer;
	hideonnpc("Homem Morto#King");
	hideoffnpc("Homem#King");
	end;
}

// ------------------------------------------------------------------
abbey03,232,232,4	script	Homem Morto#King	4_M_TRISTAN,{
	if (!checkweight(Token_Of_King)) {
		mes "^3355FFEspere um pouco!";
		mes "No momento, voc� est� carregando muitas coisas com voc�.";
		mes "Volte depois de usar os Servi�os Kafra para armazenar alguns dos seus itens.^000000";
		close;
	} else if (aru_monas == 23) {
		mes "^3355FFVoc� n�o faz id�ia por que esse homem morto est� andando por a�, ent�o decide examin�-lo.";
		mes "Em sua casaca voc� encontra uma medalha brilhante...^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Essa medalha...";
		mes "Isso significa que este homem �...!";
		aru_monas = 24;
		getitem(Token_Of_King,1);
		changequest(17015,17016);
		hideonnpc("Homem Morto#King");
		hideoffnpc("Homem#King");
		stopnpctimer;
		close;
	}
	end;

	OnEnable:
	initnpctimer;
	hideoffnpc("Homem Morto#King");
	end;

	OnInit:
	hideonnpc("Homem Morto#King");
	end;

	OnTimer150000:
	hideonnpc("Homem Morto#King");
	hideoffnpc("Homem#King");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
nameless_n,145,162,0	script	AideAmi#Aru	HIDDEN_WARP_NPC,2,2,{
	end;
	OnTouch:
	if (aru_monas == 26) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "H� uma parede baixa aqui contra a outra parede, se eu escalo isto, eu poderia chegar ao lugar de descanso do Tristan III...";
		next;
		switch(select("Fique aqui","Escale a parede")) {
			case 1:
			warp("nameless_n",158,169);
			end;
			case 2:
			warp("abbey01",51,15);
			end;
		}
	} else {
		warp("nameless_n",158,169);
		end;
	}
}

// ------------------------------------------------------------------
// - Integra��o com a quest de acesso ao Templo de Rachel
ra_temple,165,57,5	script	Niren#ss	4_F_MADAME,{
	if (checkweight(907,200) == 0) {
		mes "^3355FFEspere um pouco!";
		mes "No momento, voc� est� carregando muitas coisas com voc�.";
		mes "Volte depois de usar os Servi�os Kafra para armazenar alguns dos seus itens.^000000";
		close;
	}
	cutin("ra_gwoman",2);
	mes "[Suma-Sacerdotisa Niren]";
	mes "Ent�o, voc� quer falar comigo?";
	mes "Estou muito cansada agora, mas posso conceder um minutinho.";
	mes "O que gostaria de saber?";
	next;
	switch(select("Falaar sobre Contrabandistas","Perguntar sobre Zhed")) {
		case 1:
		if (aru_monas == 12) {
			mes "[Niren]";
			mes "Contrabandistas de Veins...";
			mes "Pode me explicar exatamente o que quer dizer com contrabandistas de Veins?";
			next;
			mes "[Niren]";
			mes "Ah, eles. Sim, eu sei alguma coisa sobre eles.";
			mes "Temo que eu n�o possa revelar certas informa��es sobre eles, pois este � um caso confidencial...";
			next;
			mes "[Niren]";
			mes "Sinto n�o poder dar muitas informa��es sobre eles, pois h� muita coisa em jogo.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Na verdade, queria saber sobre quem foi seq�estrado.";
			next;
			mes "[Niren]";
			mes "Ah, bem, acho que posso contar mais sobre o ref�m.";
			mes "Mas antes gostaria de lhe pedir um favor.";
			next;
			select("Aceitar","N�o Recusar");
			mes "[Niren]";
			mes "Quando percebemos quem era o ref�m que estava nas m�os deles, n�s n�o sab�amos o que fazer com ele.";
			mes "T�nhamos muitos problemas internos para resolver...";
			next;
			mes "[Niren]";
			mes "Mesmo assim, achamos que pod�amos us�-lo em nosso plano.";
			mes "Ent�o o escondemos em um lugar secreto, cuja posi��o s� � conhecida por poucos.";
			mes "Mas ent�o... Perdemos todo o contato.";
			next;
			mes "[Niren]";
			mes "Enviamos investigadores, mas ainda n�o temos id�ia do que aconteceu.";
			mes "Tudo o que encontraram foi uma mensagem deixada por um sobrevivente:";
			mes "S�o todos dem�nios.";
			mes "O ref�m deve estar morto.";
			next;
			mes "[Niren]";
			mes "Ele podia ser um oficial de alto escal�o, mas est�vamos preocupados com outros assuntos.";
			mes "Na verdade n�o tive a chance de pensar no que fazer com ele...";
			next;
			mes "[Niren]";
			mes "Quero pedir que voc� v� at� esse lugar para descobrir o que aconteceu ali.";
			mes "E se o oficial de alto escal�o de Rune-Midgard ainda est� vivo.";
			mes "Duvido, mas...";
			next;
			mes "[Niren]";
			mes "Os investigadores que temos em nosso templo n�o s�o t�o bons quanto voc�s, aventureiros estrangeiros.";
			mes "Ent�o tenho f� de que voc� consiga.";
			mes "Mesmo assim ser� muito perigoso.";
			next;
			mes "[Niren]";
			mes "Se puder fazer isso, vou lhe dizer a localiza��o do lugar: n�s o chamamos de \"monast�rio\".";
			mes "Antes era um monast�rio de verdade, mas agora o usamos como cativeiro.";
			next;
			mes "[Niren]";
			mes "Desculpe, mas n�o posso contar mais nada sobre esse lugar.";
			mes "Ele est� a sudoeste de Veins, navegando pelo mar.";
			mes "Voc� deve conseguir encontrar um barco na Praia Sul de Veins.";
			next;
			mes "[Niren]";
			mes "No entanto...";
			mes "N�o importa.";
			mes "Gostaria de ajudar voc� mais, mas estaria comprometendo minha posi��o.";
			mes "Desculpe.";
			mes "Por favor, volte e me diga se descobrir alguma coisa l�.";
			aru_monas = 13;
			changequest(17008,17009);
			next;
			mes "[Niren]";
			mes "Vou Homemdar uma mensagem ao magistrado de Veins.";
			mes "Se voc� falar com ele, ele dar� algumas informa��es �teis para sua jornada.";
			mes "Boa sorte.";
			close2;
		} else if (aru_monas < 18) {
			mes "[Niren]";
			mes "Ir at� o monast�rio n�o � o problema:";
			mes "Voltar vivo deve ser o verdadeiro desafio.";
			next;
			mes "[Niren]";
			mes "N�o podemos enviar tropas at� entendermos o que estamos enfrentando por l�.";
			mes "� por isso que preciso que voc� investigue a �rea.";
			close2;
		} else if (aru_monas < 25) {
			mes "[Niren]";
			mes "Ainda est� investigando o monast�rio?";
			mes "Talvez voc� possa encontrar algum registro deixado por um dos residentes de l�...";
			close2;
		} else if (aru_monas == 25) {
			if (!countitem(Research_Note)) {
				mes "[Niren]";
				mes "Ainda est� investigando o monast�rio?";
				mes "Talvez voc� possa encontrar algum registro deixado por um dos residentes de l�...";
				close2;
			} else {
				mes "[Niren]";
				mes "Voc� encontrou este di�rio no monast�rio?";
				mes "Perfeito.";
				mes "Deixe-me ler, e ver";
				mes "o que podemos descobrir...";
				next;
				mes "[Niren]";
				mes "Hum, isso parece muito ruim.";
				mes "� tr�gico, ainda mais por termos Homemtido tanta gente importante ali.";
				mes "Vou solicitar o envio de tropas para l� agora mesmo.";
				mes "Algo precisa ser feito.";
				next;
				mes "[Niren]";
				mes "H� muitos problemas que precisamos enfrentar agora.";
				mes "Mas a quest�o do monast�rio ter� prioridade.";
				mes "N�o poderemos dar conta se outra amea�a vier daquele lugar.";
				delitem(Research_Note, 1);
				aru_monas = 26;
				completequest(17017);
				getexp(500000,0);
				close2;
			}
		} else {
			mes "[Niren]";
			mes "Parece que Arunafeltz e Rune-Midgard estar�o muito ocupadas com suas quest�es internas para entrar em guerra.";
			mes "O Sumo-Sacerdote Zhed ficar� feliz em saber disso.";
			close2;
		}
		break;
		case 2:
		if (aru_em < 10) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Desculpe-me...";
			mes "Eu n�o quero mesmo pensar no Zhed agora. Ele...";
			close2;
		} else if (aru_em == 10) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Voc� quer me perguntar sobre";
			mes "Beken... o Sumo-Sacerdote Zhed?";
			mes "N�o posso fazer nada por ele.";
			mes "Ele cavou sua pr�pria cova ao permitir que voc� entrasse na Terra Sagrada, n�o foi?";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Pensei ter avisado voc� para n�o arrumar problemas.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "N�o estou aqui para discutir isso.";
			mes "Acontece que ouvi dizer que voc� � a �nica pessoa que pode ajud�-lo agora.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "� verdade que Zhed e eu trabalh�vamos juntos, mas n�o temos mais o mesmo sonho.";
			mes "Melhor falar com outra pessoa.";
			mes "Ao contr�rio dele, eu quero uma guerra.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Voc�s n�o eram amigos?";
			mes "Al�m disso, voc� n�o parece t�o agressiva quanto os outros sacerdotes linhas-duras.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Agressiva?";
			mes "Se voc� examinar bem os tais moderados, vai ver que eles se op�em � guerra, mas tamb�m s�o corruptos.";
			mes "Na verdade, cometeram atrocidades piores!";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Os moderados realizaram testes em criaturas vivas, at� mesmo em humanos!";
			mes "E Zhed e eu...";
			mes "N�o pod�amos fazer nada al�m de orar para Freya.";
			mes "S� a guerra pode acabar com esse caos!";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Precisamos come�ar tudo de novo.";
			mes "N�o posso ajudar Zhed.";
			mes "Por favor, saia...";
			next;
			mes "^3355FFParece que voc� n�o vai poder fazer a Sacerdotisa Niren mudar de id�ia.";
			mes "Por enquanto, � melhor voc� falar com o Sumo-Sacerdote Zhed.^000000";
			aru_em = 11;
			changequest(2132,2133);
			close2;
		} else if ((aru_em == 11) || (aru_em == 12)) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Eu j� lhe contei";
			mes "o que penso em rela��o a Zhed.";
			mes "Est�vamos errados o tempo todo...";
			mes "Desta vez, a guerra � a resposta.";
			close2;
		} else if (aru_em == 13) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Eu j� lhe contei o que penso em rela��o a Zhed.";
			mes "Est�vamos errados o tempo todo...";
			mes "Desta vez, a guerra � a resposta.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Est� bem.";
			mes "Se voc� tem tanta certeza assim, n�o vai se importar em ler esta carta do Sumo-Sacerdote Zhed.";
			next;
			mes "^3355FFNiren agarrou com raiva a carta, rasgou o envelope para abri-lo, e come�ou a ler sua mensagem.";
			mes "Seu rosto austero lentamente se abrandou enquanto ela lia o que Zhed tinha a dizer a ela.^000000";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes ".................";
			mes ".................";
			mes ".................";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Esse Zhed...";
			mes "Ele sempre teve jeito com as palavras.";
			mes "Acho que o velho ditado � verdadeiro:";
			mes "A pena � mesmo mais forte que a espada.";
			mes "*Suspiro...*";
			next;
			mes "[Sippie]";
			mes "Suma-Sacerdotisa";
			mes "Niren? Voc� est� bem?";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Oh, estou bem obrigada.";
			mes "Acho que s� estou um pouco cansada.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "...............................";
			mes "Tenho que admitir, h� verdade no que Zhed est� dizendo.";
			mes "N�s temos o dever de proteger nosso povo, a papisa, nossa Terra Sagrada.";
			mes "Mas preciso pensar...";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Poderia me deixar algum tempo sozinha?";
			mes "Falarei com voc� quanto tiver tomado uma decis�o.";
			aru_em = 14;
			close2;
		} else if (aru_em == 14) {
			if (rand(1,10) == 1) {
				mes "[Suma-Sacerdotisa Niren]";
				mes "...................";
				mes "...................";
				mes "...................";
				emotion(e_dots);
				next;
				mes "[Sippie]";
				mes "Suma-Sacerdotisa Niren,";
				mes "voc� deve estar muito cansada.";
				mes "Voc� at� est� p�lida.";
				emotion(e_swt2);
				next;
				mes "[Suma-Sacerdotisa Niren Niren]";
				mes "Estou mesmo um tanto exausta.";
				mes "N�o sei por que fiquei me prendendo a esse �dio por tanto tempo.";
				mes "Acho que finalmente posso lan��-lo ao vento...";
				next;
				mes "[Suma-Sacerdotisa Niren Niren]";
				mes "Aventureiro...";
				mes "Qual � mesmo seu nome?";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Meu nome � "+strcharinfo(PC_NAME)+".";
				next;
				mes "[Suma-Sacerdotisa Niren Niren]";
				mes "Aventureiro...";
				mes "Voc� teve a chance de falar com nossa papisa uma vez.";
				mes "Mas duvido que voc� possa fazer isso de novo ^3311FFem particular^000000.";
				mes "Voc� vai mesmo precisar de nossa ajuda para isso.";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Isso significa que voc� resolveu trabalhar com Zhed de novo?";
				next;
				mes "^3355FFNiren assentiu em sil�ncio, e ent�o continuou a falar.^000000";
				next;
				mes "[Suma-Sacerdotisa Niren Niren]";
				mes "Ainda n�o sei se posso me juntar a ele a longo prazo.";
				mes "Digo, falar com a papisa pode n�o resolver nada, na verdade.";
				mes "Mas ainda vale a pena tentar.";
				next;
				mes "[Suma-Sacerdotisa Niren Niren]";
				mes "Entretanto, nunca duvidei da dedica��o de Zhed a Arunafeltz.";
				mes "Ele merece outra chance minha.";
				next;
				mes "[Suma-Sacerdotisa Niren Niren]";
				mes "Nossa papisa est� sempre cercada por sacerdotes e seguidores enviados pelo Sumo-Sacerdote Vildt.";
				mes "Ele sempre consegue ficar de olho nela.";
				mes "Precisamos afastar esses espi�es...";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "O que posso fazer com eles, ent�o?";
				next;
				mes "[Suma-Sacerdotisa Niren Niren]";
				mes "Por ora, apenas aborde a papisa como se fosse apenas conversar.";
				mes "Enquanto faz isso, tente colher informa��es dos sacerdotes em volta dela.";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Com certeza.";
				mes "Voc� pode contar comigo!";
				emotion e_no1,1;
				aru_em = 15;
				changequest(2134,2135);
				close2;
			} else {
				mes "[Suma-Sacerdotisa Niren]";
				mes "Ai, isso est� me dando dor de cabe�a.";
				mes "H� muito que considerar...";
				mes "H� muita coisa em jogo...";
				close2;
			}
		} else if (aru_em == 15) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Apenas se aproxime da papisa para conversar.";
			mes "Veja o que consegue descobrir com os outros sacerdotes.";
			close2;
		} else if (aru_em == 16) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Como est� a papisa?";
			mes "N�o tive a chance de falar com ela esses dias, ent�o...";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Bem, ela n�o parece muito bem, assim como da �ltima vez que a vi.";
			mes "Eu n�o descobri nada com os sacerdotes.";
			mes "Apenas que eles t�m trabalhado no templo sem parar.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Sim, eles t�m estado ao lado dela 24 horas por dia.";
			mes "Tem sido assim por anos.";
			next;
			emotion(e_wah);
			mes "[Sippie]";
			mes "Ah, Suma-Sacerdotisa Niren, adoro trabalhar para voc�.";
			mes "Mas �s vezes queria poder sair para ver minha fam�lia.";
			mes "Mesmo s� uma vez por ano seria bom.";
			next;
			emotion(e_ic);
			mes "[Suma-Sacerdotisa Niren]";
			mes "...............................";
			mes "Voc� tem toda raz�o.";
			mes "Isso me deu uma id�ia.";
			next;
			emotion(e_ho);
			mes "[Sippie]";
			mes "H�? O que �?";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Voc�s todos precisam de uma folga.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes strcharinfo(PC_NAME)+".";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Sim?";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Preciso recompensar a todos no Jardim Celeste por sua colabora��o.";
			mes "Entretanto eles foram contratados por Vildt, ent�o n�o posso dar a eles uma permiss�o de folga diretamente. Hum...";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Sippie...";
			mes "Vou precisar de uma caneta e papel.";
			next;
			mes "[Sippie]";
			mes "Sim, senhora.";
			mes "Pronto!";
			cutin("ra_gwoman",255);
			next;
			mes "^3355FF*Escreve, Escreve*^000000";
			mes "^3355FF*Escreve, Escreve*^000000";
			mes "^3355FF*Escreve, Escreve*^000000";
			mes "^3355FF*Escreve, Escreve*^000000";
			next;
			cutin("ra_gwoman",2);
			mes "[Suma-Sacerdotisa Niren]";
			mes "Uma vez dei uma b�n��o a uma crian�a de uma fam�lia nativa.";
			mes "Eles ficaram muito gratos, pois a maioria dos sacerdotes desprezam os nativos.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Acontece que essa crian�a tem o dom de falsificar caligrafias.";
			mes "Ela n�o gosta de ficar muito perto de outras pessoas, mas isso n�o importa.";
			mes "Aqui, pegue esta carta.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Ah, e leve este arquivo que cont�m uma amostra da caligrafia de Vildt.";
			mes "Leve isso para uma garota chamada Ishmael em uma vila ao Norte de Rachel.";
			mes "Espero que ela nos ajude...";
			aru_em = 17;
			getitem(File02,1);
			changequest(2136,2137);
			close2;
		} else if (aru_em == 17) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Por favor, entregue minha carta e o arquivo para Ishmael no";
			mes "Norte de Rachel.";
			mes "Com sorte, ela poder� usar seu dom para nos ajudar.";
			close2;
		} else if (aru_em == 19) {
			if (countitem(File02)) {
				mes "[Suma-Sacerdotisa Niren]";
				mes "Voc� se encontrou com Ishmael?";
				next;
				mes "^3355FFVoc� entregou a Niren o arquivo forjado por Ishmael.^000000";
				next;
				emotion(e_bzz);
				mes "[Suma-Sacerdotisa Niren]";
				mes "Perfeito!";
				mes "Esta falsifica��o � t�o bem feita que sei que nem mesmo Vildt saberia se ele a escreveu ou n�o.";
				next;
				mes "[Suma-Sacerdotisa Niren]";
				mes ""+strcharinfo(PC_NAME)+"...";
				mes "Vou usar isto para deixar os sacerdotes e seguidores de folga.";
				mes "Ent�o, Zhed e eu poderemos falar com a papisa sem nenhuma interrup��o.";
				next;
				mes "[Suma-Sacerdotisa Niren]";
				mes "Realmente n�o queria afligir nossa papisa com o que Zhed e eu temos a dizer...";
				mes "Mas isso � muito melhor do que n�o fazer nada e testemunhar a queda de nossa amada Arunafeltz.";
				next;
				mes "[Suma-Sacerdotisa Niren]";
				mes "Sippie, por favor leve esta aprova��o de folga aos sacerdotes e seguidores no Jardim Celeste.";
				next;
				mes "[Sippie]";
				mes "Sim, senhora!";
				next;
				mes "[Suma-Sacerdotisa Niren]";
				mes strcharinfo(PC_NAME)+", por favor, volte at� Zhed, e diga a ele que est� tudo pronto.";
				mes "Depois, quero que voc� nos encontre no ^3131FFJardim Celeste^000000.";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Sim!";
				next;
				mes "[Suma-Sacerdotisa Niren]";
				mes "Temos que nos apressar e fazer isso antes que o Sumo-Sacerdote Vildt perceba o que estamos fazendo.";
				delitem(File02,1);
				aru_em = 20;
				changequest(2139,2140);
				close2;
			} else {
				mes "^3355FFParece que voc� perdeu o arquivo de Ishmael.^000000";
				close2;
			}
		} else if ((aru_em == 20) || (aru_em == 21)) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Por favor, v� logo falar com o Sumo-Sacerdote Zhed.";
			close2;
		} else if (aru_em == 22) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Estou t�o orgulhosa da papisa!";
			mes "Voc� ouviu seu maravilhoso discurso?";
			mes "Bem, eu devia dizer que s�o as palavras de Freya mas...";
			mes "Bem, voc� sabe.";
			mes "Hohoho!";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Nossos sacerdotes podem ter agido de forma ego�sta, mas ainda est�o comprometidos com o bem-estar do pa�s.";
			mes "As coisas devem mudar para melhor agora.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Sinto vergonha por ter me desviado do caminho da paz e ter posto o pa�s em risco.";
			mes "Que bom que Zhed me chamou � raz�o.";
			mes "De agora em diante, vou me redimir de meus pecados com Zhed.";
			next;
			mes "[Suma-Sacerdotisa Niren]";
			mes "Espero que a Deusa possa me perdoar.";
			mes "Ah, e voc� deve saber que Zhed est� lhe aguardando.";
			mes "Por que n�o vai v�-lo agora?";
			next;
			mes "^3355FFNiren sorri de leve para voc�, e voc� percebe que � a primeira vez que voc� v� essa express�o em seu rosto.^000000";
			aru_em = 23;
			getexp(1000000,0);
			changequest(2141,2142);
			close2;
		} else if (aru_em > 21) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Gra�as a voc� e a Bekento, acho que finalmente encontrei meu caminho.";
			close2;
		} else {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Desculpe-me...";
			mes "Eu n�o quero mesmo pensar no Zhed agora...";
			close2;
		}
	}
	cutin("",255);
	end;
}

// ------------------------------------------------------------------
ra_temple,168,54,3	script	Sippie#ss	4_F_MASK,{
	mes "[Sippie]";
	mes "Agora finalmente tenho um tempo para descansar.";
	mes "Tantos seguidores cercando a Suma-Sacerdotisa Niren, e eles me d�o tanto trabalho!";
	if (aru_em < 11) {
		close;
	} else if (aru_em == 11) {
		next;
		mes "[Sippie]";
		mes "Desculpe-me, mas voc� � amigo de nossa papisa?";
		mes "Acho que vi voc� falar com ela h� algum tempo...";
		next;
		mes "[Sippie]";
		mes "N�o entendo por que a Suma-Sacerdotisa Niren quer entrar em guerra.";
		mes "Na verdade, acho que l� no fundo, ela n�o quer isso.";
		mes "Ela � muito doce e gentil quando voc� a conhece bem.";
		next;
		mes "[Sippie]";
		mes "Ela adora crian�as...";
		mes "Ela � como uma m�e para todas as crian�as em Arunafeltz.";
		mes "Ela at� trouxe nossa papisa para Rachel quando ela era beb�, e a criou como se fosse sua filha.";
		next;
		mes "[Sippie]";
		mes "Se n�o soubesse que ela � a papisa, seria f�cil pensar que ela � mesmo filha da Suma-Sacerdotisa Niren.";
		close;
	} else {
		close;
	}
}

// ------------------------------------------------------------------
moc_ruins,77,167,4	script	Comerciante estrangeiro#aru1	4_M_MASKMAN,5,5,{
	if (aru_vol == 27) {
		if (aru_em == 0) {
			emotion(e_dots);
			mes "[Comerciante estrangeiro]";
			mes "Nunca pensei que o deserto seria t�o quente!";
			mes "E constru�ram uma cidade aqui!";
			mes "Como podem chamar este lugar de habit�vel!";
			mes "E pior, a multid�o deixa tudo muito mais quente!";
			next;
			emotion(e_dots);
			mes "[Comerciante estrangeiro]";
			mes "Ouvi dizer que podia ficar rico de uma vez s� em Morroc, e por isso transferi meus neg�cios para c�.";
			mes "Mas parece que esse tempo vai � me deixar morto de uma vez s�!";
			next;
			select("Como voc� ouviu falar de Morroc?");
			emotion(e_dots);
			mes "[Comerciante estrangeiro]";
			mes "Eu... � como eu disse.";
			mes "Ouvi dizer que Morroc � cheia de clientes dispostos a pagar caro por bons artigos.";
			mes "Ugh, mas a cidade est� em ru�nas!";
			next;
			emotion(e_swt);
			mes "[Comerciante estrangeiro]";
			mes "Nem ligo mais se n�o ganhar dinheiro!";
			mes "S� queria ficar em algum lugar fresco, bebendo algo gostoso e gelado!";
			mes "Sabe, posso muito bem ir embora amanh�.";
			mes "Chega deste deserto!";
			next;
			emotion(e_sob);
			emotion(e_swt,1);
			mes "[Comerciante estrangeiro]";
			mes "Ei, � isso!";
			mes "N�o vendem uma bebida docinha e gelada por aqui?";
			mes "Sabe, perto do o�sis nos arredores de Morroc?";
			mes "Antes de ir embora quero provar essa bebida...";
			aru_em = 1;
			setquest 2129;
			close;
		} else if ((aru_em > 0) && (aru_em < 7)) {
			mes "[Comerciante estrangeiro]";
			mes "Diz a�, n�o tem um vendedor ambulante perto do lago no centro de Morroc?";
			mes "Oh, eu faria tudo para provar a tal bebida deliciosa dele...";
			next;
			mes "[Comerciante estrangeiro]";
			mes "Ah, o calor est� acabando comigo...";
			mes "E j� estou ficando sem suor para suar...";
			mes "Acho que vou desmaiar!";
			mes "Preciso de uma bebida!";
			close;
		} else if (aru_em == 7) {
			mes "[Comerciante estrangeiro]";
			mes "*Ofegante*";
			mes "*Suando*";
			next;
			switch(select("Dar Vinho de Frutas","Assistir em Sil�ncio")) {
				case 1:
				mes "[Comerciante estrangeiro]";
				mes "Ah, obrigado!";
				mes "Isto tem um cheiro t�o bom...";
				mes "Essa � a tal bebida de que tanto falam?";
				next;
				mes "^3355FF*Gulp Gulp Gulp Gulp*^000000";
				mes "^3355FF*Gulp Gulp Gulp Gulp*^000000";
				mes "^3355FF*Gulp Gulp Gulp Gulp*^000000";
				mes "^3355FF*Gulp Gulp Gulp Gulp*^000000";
				mes "^3355FF*Gulp Gulp Gulp Gulp*^000000";
				next;
				emotion(e_lv);
				mes "[Comerciante estrangeiro]";
				mes "Ahhh! Estava deliciosa!";
				mes "� t�o refrescante e t�o ex�tica, como... como...";
				mes "Aquelas odaliscas em Comodo! Ahhhh!";
				mes "Muito obrigado, amigo!";
				next;
				mes "[Comerciante estrangeiro]";
				mes "Deve haver algum jeito de recompensar voc�.";
				mes "Ah, aqui est�. Tome.";
				mes "Seu nome � "+strcharinfo(PC_NAME)+", n�o �?";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "O qu�...?";
				mes "Como voc� sabia disso?";
				next;
				mes "^3355FFO mercador ri, e tira um bilhete da manga para voc�.";
				mes "Voc� abre o bilhete e l� a mensagem.^000000";
				next;
				mes "^666666"+strcharinfo(PC_NAME)+".";
				mes " ";
				mes "Chegou a hora de agirmos de novo.";
				mes "Por favor, venha me ver quando puder.";
				mes " ";
				mes "- Bekento^000000";
				next;
				emotion(e_omg,1);
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Ent�o... Quer dizer que...";
				mes "Voc� n�o � mesmo um mercador, �?";
				next;
				emotion e_meh;
				mes "^3355FFO mercador, em sil�ncio, olha para voc� com um sorriso travesso.^000000";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Ent�o, voc� pediu para trazer a bebida s� como desculpa para falar comigo?!";
				emotion(e_sob,1);
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Ah, bem, obrigado por trazer o bilhete.";
				mes "Mas n�o compro mais bebida nenhuma, ouviu?";
				next;
				mes "[Comerciante estrangeiro]";
				mes "He, entendi.";
				mes "Agora, por que n�o vai falar com ele?";
				mes "Boa sorte!";
				aru_em = 8;
				changequest(2130,2131);
				close;
				case 2:
				mes "[Comerciante estrangeiro]";
				mes "Mas o que... voc� est� gostando de me ver secar at� a morte?";
				close;
			}
		} else {
			mes "[Comerciante estrangeiro]";
			mes "Bem, j� que estou aqui...";
			mes "Acho que posso aproveitar e passear por Morroc.";
			mes "*Ofegante*";
			mes "Mas est� t�o quente!";
			close;
		}
	} else {
		mes "[Comerciante estrangeiro]";
		mes "Nunca pensei que o deserto seria t�o quente!";
		mes "E constru�ram uma cidade aqui!";
		mes "Como podem chamar este lugar de habit�vel!";
		mes "E pior, a multid�o deixa tudo muito mais quente!";
		close;
	}

	OnTouch:
	if (aru_vol == 27) {
		if (aru_em == 0) {
			mes "[Comerciante estrangeiro]";
			mes "*Gargarejo*";
			mes "Cara, eu acho que vou morrer com todo esse calor!";
			close;
		}
	}
	end;
}

// ------------------------------------------------------------------
moc_ruins,86,149,0	script	#ForeignMerchant1	FAKE_NPC,3,3,{
	OnTouch:
	if (aru_em == 4) {
		aru_em = 5;
	}
	end;
}

// ------------------------------------------------------------------
moc_ruins,88,136,0	script	#ForeignMerchant2	FAKE_NPC,3,3,{
	OnTouch:
	if (aru_em == 1) {
		aru_em = 2;
	}
	else if (aru_em == 5) {
		.@nawara = rand(1,10);
		if (.@nawara < 5) {
			hideoffnpc("Comerciante estrangeiro#aru2");
		} else {
			aru_em = 2;
		}
	}
	end;
}

// ------------------------------------------------------------------
moc_ruins,106,133,0	script	#ForeignMerchant3	FAKE_NPC,3,3,{
	OnTouch:
	if (aru_em == 2) {
		aru_em = 3;
	}
	end;
}

// ------------------------------------------------------------------
moc_ruins,115,147,0	script	#ForeignMerchant4	FAKE_NPC,3,3,{
	OnTouch:
	if (aru_em == 3) {
		aru_em = 4;
	}
	end;
}

// ------------------------------------------------------------------
moc_ruins,101,133,7	script	Comerciante estrangeiro#aru2	4_M_MIDDLE,{
	if ((aru_em > 1) && (aru_em < 7)) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a, mas me disseram que eu poderia comprar uma boa bebida por aqui.";
		mes "Por acaso � voc� quem a vende?";
		next;
		mes "[Comerciante estrangeiro]";
		mes "Ah, est� falando do meu vinho de frutas?";
		mes "Devo dizer que n�o � t�o bom quanto o pessoal diz por a�.";
		mes "� s� uma bebidinha que eu preparo em casa e compartilho com os amigos depois do jantar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, encontrei um";
		mes "mercador que quer muito provar esse seu vinho.";
		mes "Voc� poderia me vender um pouco?";
		next;
		mes "[Comerciante estrangeiro]";
		mes "Ah, desculpe, mas meu estoque acabou por hoje.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, n�o!...";
		emotion(e_otl,1);
		next;
		mes "[Comerciante estrangeiro]";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		emotion(e_swt2);
		next;
		emotion(e_omg,1);
		mes "[Comerciante estrangeiro]";
		mes "Sabe, eu guardei uma garrafinha para mim, mas acho que posso d�-la a voc�.";
		mes "Posso fazer mais depois, e estou lisonjeado por seu amigo se interessar tanto por meu vinho.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes " � mesmo? Obrigado!";
		mes "Sei que ele vai apreciar sua generosidade.";
		next;
		mes "[Comerciante estrangeiro]";
		mes "Ah, n�o � nada.";
		mes "Bem, preciso ir para casa agora.";
		mes "Vou me lembrar de guardar uma garrafa extra, caso voc� queira mais da pr�xima vez.";
		mes "Cuide-se, e at� depois!";
		emotion(e_korea);
		next;
		mes "^3355FFVoc� recebeu uma garrafa do famoso vinho de frutas do velho vendedor.";
		mes "Esse cara � muito legal!^000000";
		aru_em = 7;
		hideonnpc("Comerciante estrangeiro#aru2");
		changequest(2129,2130);
		close;
	} else {
		mes "[Comerciante estrangeiro]";
		mes "Desculpe, mas vendi todo o meu vinho hoje.";
		mes "Espero que n�o seja um inconveniente.";
		close;
	}

	OnInit:
	hideonnpc "Comerciante estrangeiro#aru2";
	end;
}

// ------------------------------------------------------------------
ra_temin,103,151,7	script	Seguidora#em	4_F_MASK,{
	if (aru_em < 9) {
		mes "[Sappie]";
		mes "Trabalho duro para deixar este quarto limpo e confort�vel para que a Suma-Sacerdotisa possa descansar e dormir com conforto.";
		mes "Respire fundo, est� sentido esse aroma relaxante?";
		close;
	} else if (aru_em == 9) {
		mes "[Sappie]";
		mes "Trabalho duro para deixar este quarto limpo e confort�vel para que a Suma-Sacerdotisa possa descansar e dormir com conforto.";
		mes "Respire fundo est� sentido esse aroma relaxante?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ah, tem raz�o, � um cheiro muito bom!";
		mes "Ent�o a Sacerdotisa Niren est� fora do escrit�rio hoje?";
		next;
		mes "[Sappie]";
		mes "Ah, sim, ela saiu porque h� muitos seguidores que querem v�-la, mesmo sendo de manh� cedo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sabe onde posso encontr�-la?";
		next;
		mes "[Sappie]";
		mes "Hmm... Sippie falou alguma coisa...";
		mes "Ah, � mesmo.";
		mes "Sippie disse que a Suma-Sacerdotisa Niren decidiu ir ao Jardim de Cheshrumnir.";
		mes "O jardim � muito grande, e bem bonito.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A Suma-Sacerdotisa deve ser muito ocupada.";
		next;
		mes "[Sappie]";
		mes "Ah, voc� nem imagina!";
		mes "Ela transmite sua sabedoria �s pessoas desde que era crian�a.";
		mes "As multid�es de pessoas ainda clamam por seus ensinamentos.";
		next;
		mes "[Sappie]";
		mes "Se quer mesmo falar com ela, � melhor encontr�-la antes que ela fique cercada pelos seguidores de Freya.";
		aru_em = 10;
		close;
	} else if (aru_em == 10) {
		mes "[Sappie]";
		mes "A Suma-Sacerdotisa Niren deve estar no Jardim de Cheshrumnir.";
		mes "Voc� deve tentar falar com ela antes que a multid�o apare�a.";
		close;
	} else if (aru_em > 21) {
		mes "[Sappie]";
		mes "Dizem que a Deusa Freya falou com nossa papisa, e deu a ela uma mensagem importante.";
		mes "Agora todos querem ouvir o que Freya disse a ela...";
		close;
	} else {
		mes "[Sappie]";
		mes "Trabalho duro para deixar este quarto limpo e confort�vel para que a Suma-Sacerdotisa possa descansar e dormir com conforto.";
		mes "Respire fundo, est� sentido esse aroma relaxante?";
		close;
	}
}

// ------------------------------------------------------------------
ra_fild03,139,355,5	script	Ishmael#em	4_F_CHILD,{
	if (aru_em < 17) {
		mes "[Ishmael]";
		mes "E-eu n�o conhe�o voc�, conhe�o?";
		mes "Desculpe, mas poderia, hum, se afastar?";
		mes "Espere, voc� voc� veio me pedir alguma coisa, certo?";
		emotion(e_swt2);
		close;
	} else if (aru_em == 17) {
		mes "[Ishmael]";
		mes "E-eu n�o conhe�o voc�, conhe�o?";
		mes "Desculpe, mas poderia, hum, se afastar?";
		mes "Espere, voc� voc� veio me pedir alguma coisa, certo?";
		emotion(e_swt2);
		next;
		switch(select("Entregar o Arquivo","Deix�-la em Paz")) {
			case 1:
			if (countitem(File02) > 0) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Voc� conhece a Suma-Sacerdotisa";
				mes "Niren, certo? Isto � dela.";
				next;
				mes "[Ishmael]";
				mes "Oh, � mesmo?";
				mes "Certo, ent�o...";
				mes "� s� jogar o arquivo para mim.";
				mes "N-n�o quero que voc� chegue mais perto.";
				emotion(e_swt2);
				next;
				mes "[Ishmael]";
				mes "Terei prazer em ajudar a sacerdotisa.";
				mes "Mesmo sendo nativos, ela nunca nos discriminou.";
				mes "Hum...";
				mes "O que ela quer?";
				next;
				mes "[Ishmael]";
				mes "Vejamos...";
				mes "Ela quer que eu forje uma c�pia deste arquivo?";
				mes "Moleza, eu sou especialista em copiar caligrafia!";
				mes "S� me d� um instante e...";
				next;
				emotion(e_omg);
				mes "[Ishmael]";
				mes "Esqueci completamente!";
				mes "Algu�m roubou minha caneta ontem!";
				mes "Agora, como vou fazer isso...?";
				next;
				emotion(e_sob);
				mes "[Ishmael]";
				mes "Minha caneta era feita de uma j�ia muito rara chamada ^FF0000sard�nix^000000.";
				mes "*Solu�o*";
				mes "Acho que ningu�m vende sard�nix em Arunafeltz.";
				mes "S� d� para consegui-la nos pa�ses vizinhos...";
				next;
				mes "[Ishmael]";
				mes "Eu quero mesmo ajudar a Suma-Sacerdotisa Niren...";
				mes "N�o posso deix�-la na m�o depois dela ter sido t�o boa com a gente...";
				aru_em = 18;
				delitem(File02,1);
				changequest(2137,2138);
				close;
			} else {
				mes "^3355FFParece que voc� perdeu o arquivo de Niren...^000000";
				close;
			}
			case 2:
			mes "[Ishmael]";
			mes "Eu... N�o vejo voc� se afastando.";
			mes "Para tr�s e n�o ouse tocar em mim!";
			close;
		}
	} else if (aru_em == 18) {
		if (countitem(Red_Jewel)) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Voc� pode forjar uma c�pia do arquivo da Sacerdotisa Niren com esta gema?";
			next;
			mes "[Ishmael]";
			mes "Ah, voc� encontrou uma sard�nix para mim?";
			mes "� perfeita!";
			next;
			mes "[Ishmael]";
			mes "Er, mas, hum...";
			mes "Poderia, por favor, n�o chegar mais perto?";
			mes "Eu ainda... Ahn...";
			mes "N�o quero ser rude...";
			mes "� s� que...";
			mes "N�o sou boa com...";
			emotion(e_swt2);
			next;
			mes "[Ishmael]";
			mes "Se voc� jogar a sard�nix para c�, vou poder forjar a sua c�pia agora mesmo.";
			next;
			switch(select("N�o Dar para Ela","Dar para Ela")) {
				case 1:
				mes "[Ishmael]";
				mes "H�? Pensei que voc� precisasse da minha ajuda.";
				mes "N�o posso fazer nada se voc� n�o me der essa gema.";
				close;
				case 2:
				if (!checkweight(File02,1)) {
					mes "[Ishmael]";
					mes "^3355FFEspere um pouco!";
					mes "No momento, voc� est� carregando muitas coisas com voc�.";
					mes "Volte depois de usar os Servi�os Kafra para armazenar alguns dos seus itens.^000000";
					close;
				}
				mes "[Ishmael]";
				mes "Ah, muito obrigada mesmo!";
				mes "Agora posso trabalhar...";
				next;
				mes "^3355FF*Escreve*";
				mes "*Escreve*^000000";
				specialeffect(EF_COMBOATTACK2);
				next;
				mes "^3355FF*Escreve*";
				mes "*Escreve*^000000";
				specialeffect(EF_COMBOATTACK4);
				next;
				mes "^3355FF*Escreve*";
				mes "*Escreve*^000000";
				mes "^3355FF*Escreve*";
				mes "*Escreve*^000000";
				specialeffect(EF_COMBOATTACK4);
				specialeffect(EF_STEAL);
				emotion(e_ic);
				next;
				mes "[Ishmael]";
				mes "Pronto!";
				mes "Fiz a melhor c�pia poss�vel, j� que foi a Suma-Sacerdotisa Niren que pediu.";
				mes "Pode levar at� ela, com meus cumprimentos? He he!";
				next;
				mes "^3355FFVoc� recebeu um arquivo contendo uma c�pia de uma aprova��o de folga forjada por Ishmael.^000000";
				delitem(Red_Jewel,1);
				aru_em = 19;
				getitem(File02,1);
				changequest(2138,2139);
				close;
			}
		} else {
			emotion(e_sob);
			mes "[Ishmael]";
			mes "Ah, se eu tivesse inha preciosa caneta feita de sard�nix!";
			mes "Bu���!";
			close;
		}
	} else {
		mes "[Ishmael]";
		mes "A Suma-Sacerdotisa Niren � uma mo�a t�o boa.";
		mes "Quero ajud�-la sempre que puder.";
		mes "Er, se importa em ir um pouquinho para tr�s? Eu n�o...";
		mes "N�o gosto de gente por perto!";
		close;
	}
}

// ------------------------------------------------------------------
que_temsky,101,93,1	script	Niren#em_sky	4_F_MADAME,{ end; }
que_temsky,98,93,7	script	Zhed#em_sky	4_M_RACHOLD1,{ end; }
que_temsky,99,100,6	script	Pope#rachel2	4_F_ARUNA_POP,{ end; }

// ------------------------------------------------------------------
que_temsky,100,93,0	script	#em_sky_s	FAKE_NPC,5,2,{
	OnTouch:
	if (aru_em == 21) {
		mes "^3355FFO Sumo-Sacerdote Zhed e a Suma-Sacerdotisa Niren j� chegaram.";
		mes "E est�o olhando para a papisa, cautelosos.";
		mes "Eles parecem preocupados com o que vai acontecer...^000000";
		next;
		cutin("ra_gman",0);
		mes "[Zhed]";
		mes "Como tem passado, Vossa Emin�ncia?";
		mes "Desculpe-me por n�o visit�-la antes, mas estive envergonhado com minha compet�ncia como sumo-sacerdote.";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "Sumo-Sacerdote Zhed...";
		mes "Voc� veio... Obrigada...";
		next;
		mes "^3355FFA papisa sorriu ligeiramente para o Sumo-Sacerdote Zhed, feliz por finalmente v�-lo de novo.^000000";
		next;
		cutin("ra_gwoman",0);
		mes "[Niren]";
		mes "Vossa Emin�ncia...";
		mes "Espero que entenda que tentei meu melhor para mostrar somente o que h� de belo neste mundo...";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "...............................";
		mes "Suma-Sacerdotisa Niren...";
		next;
		cutin("ra_gwoman",0);
		mes "[Niren]";
		mes "No entanto, hoje preciso revelar a voc� o que o mundo tem de feio.";
		mes "Desculpe-me...";
		mes "Deixei os encarregados do Jardim Celeste de folga hoje, para que pud�ssemos contar tudo em particular.";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "Niren... O que �?";
		next;
		cutin("ra_gman2",0);
		mes "[Zhed]";
		mes "� melhor se preparar, Vossa Emin�ncia, para o que viemos lhe contar.";
		mes "Voc� pode ficar muito chocada...";
		next;
		mes "^3355FFO Sumo-Sacerdote Zhed explicou todos os segredos de Arunafeltz em detalhes.";
		mes "Ele revelou aos moderados e dos linhas-duras entre os sacerdotes, a corrup��o...^000000";
		next;
		mes "^3355FFEle tamb�m explicou o papel dos sacerdotes nos testes desumanos realizados pela Corpora��o Rekenber.";
		mes "E a demonstra��o de for�a dos linhas-duras no Vulc�o de Thor.^000000";
		next;
		mes "^3355FFA papisa olhou para o Sumo-Sacerdote Zhed, chocada, enquanto ele falava.^000000";
		next;
		mes "[Zhed]";
		mes "Todos n�s sabemos que voc� j� est� sobrecarregada com seus deveres de papisa, mas achamos que voc� precisa agir logo.";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		next;
		cutin("ra_gwoman",2);
		mes "[Niren]";
		mes "N�o queremos for��-la, Vossa Emin�ncia, mas n�o temos muito tempo.";
		mes "Estamos encarando a possibilidade de uma guerra, e precisamos det�-la para salvar Arunafeltz.";
		next;
		mes "[Papisa]";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		mes ".......................Finalmente.";
		next;
		cutin("ra_gman2",0);
		mes "[Zhed, Niren]";
		mes "Licensa?";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "Niren, Zhed...";
		mes "Que bom que voc�s finalmente vieram a mim buscar uma solu��o para isso.";
		mes "Sou jovem, mas me lembro do que vi na Terra Sagrada.";
		next;
		mes "[Papisa]";
		mes "Voc� n�o se lembra, Niren?";
		mes "Voc� me encontrou na Terra Sagrada, e me levou em seguran�a para fora.";
		mes "Mas enquanto estive l�, vi o ^3131FFCora��o de Ymir^000000.";
		next;
		mes "[Zhed]";
		mes "Como... Como sabia que era o Cora��o de Ymir?";
		next;
		mes "[Papisa]";
		mes "Os sacerdotes no Jardim Celeste n�o se incomodam em falar � vontade em minha presen�a.";
		mes "Acho que eles me v�em mais como uma crian�a do que como uma papisa.";
		next;
		mes "[Papisa]";
		mes "J� estava ciente de que o grupo moderado realizava testes cru�is, e que os linhas-duras estavam desenvolvendo poder militar.";
		mes "Entretanto, n�o podia fazer nada.";
		next;
		mes "[Papisa]";
		mes "A maioria n�o leva minha posi��o a s�rio, por causa da minha idade.";
		mes "Ningu�m acredita que eu possa mudar a situa��o.";
		mes "Tamb�m soube de tudo o que voc� fez, Zhed.";
		next;
		mes "[Papisa]";
		mes "Sinto muito por voc� ter sido punido pelos outros sacerdotes por permitir que um estrangeiro entrasse na Terra Sagrada.";
		mes "Mas entendo suas raz�es, n�o � ele, o aventureiro?";
		next;
		mes "[Papisa]";
		mes ""+strcharinfo(PC_NAME)+"...";
		mes "Estou feliz por ver voc� de novo.";
		mes "Voc� n�o s� compartilhou coisas do mundo exterior comigo, como tamb�m tem protegido nossa paz.";
		next;
		cutin("ra_gwoman",0);
		mes "[Niren]";
		mes "Eu n�o sabia...";
		mes "Como voc� se sentiria com isso, ou o quanto voc� realmente sabia.";
		mes "Sinto muito, Vossa Emin�ncia.";
		mes "Fico envergonhada por ter subestimado voc�.";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "Por favor, n�o se desculpe, Niren.";
		mes "N�o fosse por voc�, eu ficaria presa � total estupidez das pessoas ego�stas deste templo.";
		mes "Niren voc� � como uma m�e para mim.";
		next;
		cutin("ra_gwoman",0);
		mes "[Niren]";
		mes "Vossa Emin�ncia...";
		mes "Obrigada.";
		mes "Eu sinto a mesma coisa...";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "Zhed...?";
		mes "Preciso que voc� fa�a uma coisa por mim.";
		next;
		cutin("ra_gman",0);
		mes "[Zhed]";
		mes "� claro,";
		mes "Vossa Emin�ncia.";
		next;
		mes "[Papisa]";
		mes "Escreva um relat�rio sobre os testes realizados pelos moderados em Arunafeltz.";
		mes "E na Rep�blica de Schwartzvald, e sua rela��o com a Corpora��o Rekenber.";
		next;
		mes "[Zhed]";
		mes "Prepararei isso imediatamente, Vossa Emin�ncia.";
		mes "Obrigado.";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "Niren.";
		next;
		cutin("ra_gwoman",0);
		mes "[Niren]";
		mes "Sim, Vossa Emin�ncia?";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes "Por favor, re�na as provas de que os linhas-duras est�o se preparando para a guerra.";
		next;
		mes "[Niren]";
		mes "Sim, Vossa Emin�ncia.";
		next;
		mes "[Papisa]";
		mes "Vou convocar todos os Sacerdotes e Sacerdotisas em breve.";
		mes "Quero que voc�s dois estejam do meu lado.";
		mes "N�o vou deixar ningu�m manchar nossa Terra Sagrada com sangue.";
		next;
		cutin("ra_gman",0);
		mes "[Zhed]";
		mes "�s suas ordens, Vossa Emin�ncia.";
		next;
		cutin("ra_bishop",2);
		mes "[Papisa]";
		mes ""+strcharinfo(PC_NAME)+"...";
		mes "Agrade�o todo o seu trabalho feito em nome de Arunafeltz.";
		mes "Minha influ�ncia ainda pode ser fraca, mas farei o meu melhor com o apoio de Zhed e Niren.";
		next;
		mes "[Papisa]";
		mes "Seria demais se eu pedisse que voc� ficasse ao meu lado.";
		mes "Mas gostaria de agradecer por tudo que voc� fez.";
		mes "Se for a vontade de Freya, nos encontraremos de novo...";
		next;
		mes "[Papisa]";
		mes "Que Freya aben�oe voc�...";
		next;
		specialeffect(EF_ENCHANTPOISON,AREA,playerattached());
		mes "^3355FFA papisa orou do fundo do cora��o por voc�, e voc� sentiu uma forte aura de calor e gentileza permear todo o seu ser.^000000";
		aru_em = 22;
		changequest(2140,2141);
		close2;
		warp("rachel",142,136);
	}
	end;
}

// ------------------------------------------------------------------
rachel,142,136,0	script	#em_end	FAKE_NPC,5,5,{
	end;

	OnInit:
	stopnpctimer;
	end;

	OnTouch:
	if (aru_em == 22) {
		initnpctimer;
		disablenpc("#em_end");
	}
	end;

	OnTimer4000:
	mapannounce("rachel","Papisa: Cidad�os de Arunafeltz. Sacerdotes e Sacerdotisas.",bc_map,"0xFFCE00");
	end;

	OnTimer7000:
	mapannounce("rachel","Papisa: Agrade�o a todos por terem vindo ao Jardim Celeste a meu pedido.",bc_map,"0xFFCE00");
	end;

	OnTimer10000:
	mapannounce("rachel","Papisa: Como a eleita pela Deusa Freya, anuncio agora as palavras que recebi dela ontem.",bc_map,"0xFFCE00");
	end;

	OnTimer15000:
	mapannounce("rachel","Papisa: Tenho observado tudo o que est� acontecendo em Arunafeltz.",bc_map,"0x66CCCC");
	end;

	OnTimer19000:
	mapannounce("rachel","Papisa: Sei da divis�o entre os Sumos-Sacerdotes, sua luta ego�sta, sua falha em manter a solidariedade.",bc_map,"0x66CCCC");
	end;

	OnTimer23000:
	mapannounce("rachel","Papisa: No entanto, n�o intervim pelo bem daqueles que ainda rezam pela paz em Arunafeltz.",bc_map,"0x66CCCC");
	end;

	OnTimer30000:
	mapannounce("rachel","Papisa: Sumo-Sacerdote Zhed e Suma-Sacerdotisa Niren, ambos devem fazer o seu melhor para auxiliar minha eleita at� o dia da minha chegada.",bc_map,"0x66CCCC");
	end;

	OnTimer35000:
	mapannounce("rachel","Papisa: Quanto aos outros sumos-sacerdotes, voc�s esqueceram seu dever de me servir, de iluminar meus seguidores com meus ensinamentos. Por terem seguido seus desejos mesquinhos, voc�s todos dever�o seguir o comando de Zhed e Niren.",bc_map,"0x66CCCC");
	end;

	OnTimer43000:
	mapannounce("rachel","Papisa: Meus seguidores de Arunafeltz, mantenham sua f� em mim, e mantenham seu pa�s forte.",bc_map,"0x66CCCC");
	end;

	OnTimer47000:
	mapannounce("rachel","Papisa: Ent�o, o para�so certamente ser� de voc�s.",bc_map,"0x66CCCC");
	end;

	OnTimer53000:
	mapannounce("rachel","Cidad�os: Salve Freya! Salve a Papisa!",bc_map,"0x99CC00");
	stopnpctimer;
	enablenpc("#em_end");
	end;
}

// ------------------------------------------------------------------
comodo,224,187,3	script	Muff	4_M_04,{
	if (!diamond_edq) {
		mes "[Muff]";
		mes "O que diab...?";
		mes "Nossa, n�o precisava me assustar assim!";
		mes "O que � que voc� quer?";
		next;
		switch(select("Voc� parece preocupado","Nada. Cuide-se!")) {
			case 1:
			if (BaseLevel < 61) {
				mes "[Muff]";
				mes "Ah. Isso � muito gentil de sua parte.";
				mes "Eu estava pensando em pedir sua ajuda, mas voc� n�o parece estar em situa��o para me ajudar.";
				mes "Desculpe.";
				diamond_edq = 3;
				close;
			} else {
				mes "[Muff]";
				mes "Bem, na verdade estou com um enorme problema.";
				mes "Peguei dinheiro emprestado com um agiota chamado ^0000FFBelder^000000 em Alberta.";
				mes "N�o foi uma boa id�ia!";
				next;
				mes "[Muff]";
				mes "Meus neg�cios n�o estavam bem, ent�o achei que n�o tinha outra escolha.";
				mes "Consegui dinheiro suficiente para pagar, mas perdi meu recibo.";
				next;
				mes "[Muff]";
				mes "Quando perguntei a Belder se poderia pagar a ele sem o recibo.";
				mes "Ele inventou que n�o se lembrava de ter me emprestado dinheiro.";
				mes "Aposto que ele s� quer ficar com minha garantia!";
				next;
				mes "[Muff]";
				mes "Sabia que esse cara era safado!";
				mes "Pode me ajudar a encontrar meu recibo de empr�stimo?";
				mes "Sabe, a garantia que deixei com ele � muito valiosa para mim.";
				next;
				switch(select("Voc� sabe onde perdeu?", "� uma pena ouvir isso!")) {
					case 1:
					mes "[Muff]";
					mes "Se eu soubesse onde, ent�o j� teria encontrado n�o � mesmo?";
					mes "Bem, me lembro de ter ido a uma reuni�o do sindicato, e ter bebido um pouco.";
					mes "OK, OK, bebi muito.";
					next;
					mes "[Muff]";
					mes "No caminho para casa, passei por um campo perto de Comodo...";
					mes "Eu me lembro de ver �gua...";
					mes "Deve ser a� que perdi minha carteira com o recibo do empr�stimo.";
					next;
					mes "[Muff]";
					mes "Se voc� conseguir encontrar minha carteira, com certeza vou te pagar.";
					mes "Por favor, me ajude se puder!";
					setquest(3100);
					diamond_edq = 1;
					close;
					case 2:
					mes "[Muff]";
					mes "E-ei! Aonde voc� est� indo?!";
					mes "Voc� n�o pode me deixar aqui!";
					mes "Preciso de ajuda!";
					close;
				}
			}
			case 2:
			mes "[Muff]";
			mes "Ei, est� tentando me deixar bravo de prop�sito?";
			mes "J� entendi.";
			mes "Voc� trabalha pro Belder!";
			mes "Vou recuperar meu tesouro desse maldito, n�o importa o que aconte�a!";
			next;
			switch(select("N�o estou entendendo","S� estava brincando...")) {
				case 1:
				mes "[Muff]";
				mes "Acha que pode me enganar?!";
				mes "Suma daqui!";
				mes "N�o vou lhe contar nada, seu capanga!";
				close;
				case 2:
				mes "[Muff]";
				mes "Ent�o, n�o est� espionando para o Belder?";
				mes "Bem, ent�o por que est� me amolando?";
				close;
			}
		}
	} else if ((diamond_edq == 3) && (BaseLevel < 61)) {
		mes "[Muff]";
		mes "Espere um pouco...";
		mes "Voc� n�o est� t�o forte como da outra vez.";
		mes "� melhor treinar primeiro e s� depois me ajudar.";
		close;
	} else if ((diamond_edq == 3) && (BaseLevel > 60)) {
		mes "[Muff]";
		mes "Bem, na verdade estou com um enorme problema.";
		mes "Peguei dinheiro emprestado com um agiota chamado ^0000FFBelder^000000 em Alberta.";
		mes "N�o foi uma boa id�ia!";
		next;
		mes "[Muff]";
		mes "Meus neg�cios n�o estavam bem, ent�o achei que n�o tinha outra escolha.";
		mes "Consegui dinheiro suficiente para pagar, mas perdi meu recibo.";
		next;
		mes "[Muff]";
		mes "Quando perguntei a Belder se poderia pagar a ele sem o recibo.";
		mes "Ele inventou que n�o se lembrava de ter me emprestado dinheiro.";
		mes "Aposto que ele s� quer ficar com minha garantia!";
		next;
		mes "[Muff]";
		mes "Sabia que esse cara era safado!";
		mes "Pode me ajudar a encontrar meu recibo de empr�stimo?";
		mes "Sabe, a garantia que deixei com ele � muito valiosa para mim.";
		next;
		switch(select("Voc� sabe onde perdeu?","Qual era a garantia?","Tchau!")) {
			case 1:
			mes "[Muff]";
			mes "Se eu soubesse onde, ent�o j� teria encontrado n�o � mesmo?";
			mes "Bem,";
			mes "me lembro de ter ido a uma reuni�o do sindicato, e ter bebido um pouco.";
			mes "OK, OK, bebi muito.";
			next;
			mes "[Muff]";
			mes "Peguei uma trilha na Floresta Papuchicha para voltar para casa, e devo ter desmaiado perto de um rio.";
			mes "Depois disso, minha carteira, com o recibo do empr�stimo, sumiu.";
			next;
			mes "[Muff]";
			mes "N�o me importo com as outras coisas na carteira.";
			mes "Mas preciso mesmo do recibo para pegar de volta a garantia com o Belder.";
			setquest(3100);
			diamond_edq = 1;
			close;
			case 2:
			mes "[Muff]";
			mes "Bem, a garantia � uma j�ia enorme e bel�ssima.";
			mes "� muito preciosa para mim.";
			mes "Bem, n�o quero te contar mais do que isso.";
			next;
			mes "[Muff]";
			mes "Entendo se n�o quiser me ajudar depois de ouvir isso.";
			mes "Mas se mudar de id�ia, por favor volte a falar comigo.";
			close;
			case 3:
			mes "[Muff]";
			mes "E-ei! Aonde voc� est� indo?!";
			mes "Voc� n�o pode me deixar aqui!";
			mes "Preciso de ajuda!";
			close;
		}
	} else if ((diamond_edq == 1) || (diamond_edq == 2)) {
		mes "[Muff]";
		mes "Voc� ainda n�o saiu para procurar minha carteira?";
		mes "Acho que est� em algum lugar na Floresta Papuchicha.";
		mes "Por favor, encontre o recibo o mais r�pido que puder.";
		close;
	} else if (diamond_edq == 4) {
		mes "[" +strcharinfo(PC_NAME)+ "]";
		mes "Este peda�o de papel molhado e esfarrapado � o recibo que voc� quer?";
		next;
		mes "[Muff]";
		mes "Sim, � isso!";
		mes "Argh, mas olhe s� pra ele...";
		mes "Est� arruinado!";
		mes "N�o d� nem pra ler o que est� escrito nele!";
		mes "Preciso...  Preciso consertar isso de algum jeito!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� tem alguma id�ia?";
		mes "Se a gente secar o papel, talvez ainda d� para ler, n�o?";
		next;
		mes "[Muff]";
		mes "J� sei!";
		mes "H� um inventor famoso chamado ^FF0000Dorian^000000 em Izlude.";
		mes "Ouvi dizer que ele inventou alguma coisa chamada Secador M�gico.";
		mes "Sim, isso funcionaria perfeitamente!";
		next;
		mes "[Muff]";
		mes "N�o sei exatamente como funciona, mas ele deve restaurar meu recibo.";
		mes "Quero dizer... � m�gico, n�o �?";
		mes "Voc� pode pedir a Dorian para me ajudar?";
		next;
		switch(select("Aceitar Pedido:Recusar Pedido")) {
			case 1:
			mes "[Muff]";
			mes "Muito obrigado!";
			mes "Por favor, fale com o Inventor Dorian em Izlude, e pe�a a ele para restaurar meu recibo.";
			mes "Vou ficar esperando por voc� aqui, est� bem?";
			changequest(3102,3103);
			diamond_edq = 6;
			close;
			case 2:
			mes "[Muff]";
			mes "� mesmo? Eu esperava que voc� fosse me ajudar, mas...";
			mes "Tudo bem, voc� deve ter outros problemas.";
			mes "Se voc� mudar de id�ia, � s� voltar.";
			diamond_edq = 5;
			close;
		}
	} else if (diamond_edq == 5) {
		mes "[Muff]";
		mes "�timo, eu sabia que voc� voltaria para me ajudar com meu recibo!";
		mes "Voc� parecia ser legal demais para me deixar na m�o.";
		next;
		switch(select("Aceitar Pedido","Recusar Pedido")) {
			case 1:
			mes "[Muff]";
			mes "Muito obrigado!";
			mes "Por favor fale com o Inventor Dorian em Izlude.";
			mes "Pe�a a ele para restaurar meu recibo.";
			mes "Vou ficar esperando por voc� aqui, est� bem?";
			changequest(3102,3103);
			diamond_edq = 6;
			close;
			case 2:
			mes "[Muff]";
			mes "� mesmo? Eu esperava que voc� fosse me ajudar, mas...";
			mes "Tudo bem, voc� deve ter outros problemas.";
			mes "Se voc� mudar de id�ia, � s� voltar.";
			close;
		}
	} else if ((diamond_edq > 5) && (diamond_edq < 13)) {
		mes "[Muff]";
		mes "Poderia, por favor, visitar o ^FF0000Inventor Dorian^000000 em Izlude,";
		mes "E pedir para usar seu Secador M�gico para restaurar meu recibo?";
		close;
	} else if ((diamond_edq == 13) && (countitem(Debt_Note) > 0)) {
		setarray(.@items[0],603,608);
		setarray(.@quant[0],1,  1);
		if (!checkweight(.@items,.@quant)) {
			mes "[Muff]";
			mes "Voc� est� carregando muita coisa no momento.";
			mes "Volte depois de colocar suas coisas em um Armaz�m Kafra.";
			close;
		}
		mes "[Muff]";
		mes "Voc� voltou!";
		mes "Ent�o, como foi?";
		mes "Estou muito ansioso...";
		mes "O Secador M�gico do Dorian funcionou?";
		next;
		delitem(Debt_Note,1);
		mes "[Muff]";
		mes "Oh! Funcionou muito melhor do que eu esperava!";
		mes "Belder n�o vai poder reclamar agora! Ha ha ha!";
		mes "Voc� foi muito bem, amigo.";
		mes "Por favor, aceite isto como uma humilde recompensa por sua ajuda.";
		completequest(3109);
		diamond_edq = 14;
		getitem(Old_Blue_Box,1);
		getitem(Seed_Of_Yggdrasil,4);
		next;
		mes "[Muff]";
		mes "Agora que tenho meu recibo, � melhor eu ir pegar minha j�ia de volta com Belder.";
		mes "Ele n�o vai ter mais nenhuma desculpa para ficar com meu tesouro!";
		close;
	} else if ((diamond_edq == 13) && (countitem(Debt_Note) < 1)) {
		mes "[Muff]";
		mes "E-ei! Onde est� o meu recibo?!";
		mes "N�o me diga que perdeu!";
		mes "� melhor voc� voltar e falar com Dorian...";
		mes "Espero que voc� tenha deixado com ele!";
		diamond_edq = 10;
		close;
	} else if (diamond_edq > 13) {
		mes "[Muff]";
		mes "Sim! Finalmente, estou livre da d�vida!";
		mes "Estou com minha j�ia de volta, os neg�cios est�o indo bem...";
		mes "A vida est� boa agora. Ha ha ha!";
		close;
	} else {
		mes "[Muff]";
		mes "Ou�a o que eu digo: nunca pegue empr�stimo se n�o precisar.";
		mes "E se precisar, pegue com algu�m mais confi�vel do que...";
		mes "Bem, voc� conhece minha hist�ria.";
		mes "*Suspiro*";
		close;
	}
}

// ------------------------------------------------------------------
cmd_fild01,55,160,0	script	Monte de Terra	CLEAR_NPC,{
	if (diamond_edq == 1) {
		mes "^3355FFParece que algu�m cavou um buraco no ch�o e o cobriu de novo.^000000";
		next;
		switch(select("Cavar o Buraco","Cancelar")) {
			case 1:
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Deve ter alguma coisa escondida no ch�o.";
			mes "� melhor eu cavar e verificar...";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Ahhh! Ugh!";
			mes "Isso seria muito mais f�cil com uma p�!";
			mes "S� mais um pouco...";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Hum? Tem alguma coisa aqui?";
			mes "Est� t�o molhado e...";
			mes "Ugh! Que coisa nojenta.";
			mes "E agora?";
			mes "Deixei cair!";
			mes "Vou ter que tentar cavar de novo...";
			changequest(3100,3101);
			diamond_edq = 2;
			close;
			case 2:
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Isso aqui n�o est� muito higi�nico, n�o...";
			mes "Por enquanto, n�o vou conseguir fazer isso.";
			close;
		}
	} else if (diamond_edq == 2) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Aqui est�... �...";
		mes "Uma carteira encharcada?";
		mes "Esta deve ser a que Muff perdeu.";
		mes "Oh, e o recibo est� aqui dentro... Hum...";
		mes "Ugh, est� mesmo encharcado...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, fiz tudo o que pude por enquanto.";
		mes "Eu devo devolver isso ao Muff.";
		changequest(3101,3102);
		diamond_edq = 4;
		close;
	} else if (diamond_edq > 3) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Este � o mesmo lugar que escavei da outra vez.";
		mes "� in�til pra mim agora";
		close;
	}
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Hum. Tem um morrinho esquisito no ch�o.";
	mes "Bem, n�o posso sair mexendo com tudo que seja s� um pouco fora do normal.";
	mes "N�o sou t�o esquisito assim.";
	close;
}

// ------------------------------------------------------------------
izlude_in,110,64,3	script	Dorian	4_M_OILMAN,2,2,{
	OnTouch:
	if (diamond_edq < 9) {
		mes "[Dorian]";
		mes "O q-que voc� est� fazendo?";
		mes "N�o estrague minhas obras primas com suas m�os t�o brutas!";
		close;
	} else if (diamong_edq == 9) {
		mes "[Dorian]";
		mes "N�o v� que a m�quina n�o funciona sem os materiais?";
		mes "At� uma simples crian�a entende isso!";
		close;
	}
	end;
}
izlude_in,113,66,0	script	M�quina Estranha	HIDDEN_NPC,{
	if (!checkweight(Resin,200)) {
		mes "[Dorian]";
		mes "Ugh, tinha que ser gentalha mesmo carregando todos os seus itens como um burro de carga!";
		mes "Fa�a um favor a n�s dois e realoque seus bens para um Armaz�m Kafra, por favor.";
		close;
	} else if (diamong_edq == 10) {
		.@bolt_rand = rand(2,5);
		mes "^3355FFEste deve ser o Aquecedor Mystique de Elegance.";
		mes "O que quer fazer?^000000";
		next;
		while(true) {
			.@switch_sound = rand(1,4);
			switch(select("Verificar a M�quina:Trocar o Motor:Apertar o Parafuso:Apertar um Bot�o")) {
				case 1:
				if (.@hit_status == 0) {
					mes "^3355FFEsta enorme m�quina n�o est� ativada.^000000";
					next;
				}
				break;
				case 2:
				if (.@engine == 0) {
					mes "^3355FF^Voc� troca o rubi que j� est� no motor por um rubi bruto novo.";
					mes "Ele se encaixa em seu lugar no n�cleo do motor.^000000";
					next;
					++.@engine;
				} else if (engine > 0) {
					mes "^3355FFO rubi deste motor j� foi trocado.^000000";
					next;
				}
				break;
				case 3:
				if (.@engine <  1) {
					mes "^3355FFTalvez voc� deva trocar o rubi do motor primeiro.^000000";
					next;
				} else if ((.@engine == 1) && (.@bolt < .@bolt_rand)) {
					mes "^3355FF*Krrrr-Krrrrr*^000000";
					mes "^3355FF*Krrrr-Krrrrr*^000000";
					next;
					++.@bolt;
				} else if ((.@engine == 1) && (.@bolt == .@bolt_rand)) {
					mes "^3355FF*Krrrr-Krrrrr*^000000";
					mes "^0000FF*Click*^000000";
					next;
					++.@bolt;
					++.@bolt_suc;
				} else if ((.@engine == 1) && (.@bolt > .@bolt_rand)) {
					mes "^3355FF*Krrrr-Krrrrr*^000000";
					mes "^3355FF*KrrICK-ICK-ICK-KOOM*^000000";
					next;
					mes "^3355FFVoc� apertou o parafuso forte demais!";
					mes "A junta se quebrou...";
					mes "Voc� deve pedir ajuda a Dorian.^000000";
					changequest(3105,3106);
					diamond_edq = 11;
					close;
				} else {
					mes "^3355FFAlguma coisa deve ter dado errado.";
					mes "Talvez seja melhor come�ar do in�cio...^000000";
					close;
				}
				break;
				case 4:
				if ((.@engine <  1) && (.@bolt_suc < 1)) {
					mes "^3355FFVoc� precisa trocar o rubi do motor e apertar o parafuso principal antes de mexer com esses bot�es.^000000";
					next;
				} else if ((.@engine == 1) && (.@bolt_suc < 1)) {
					mes "^3355FFVoc� precisa apertar o parafuso antes de dar a partida no motor.";
					next;
				} else if ((.@red >= 1) && (.@blue >= 1) && (.@yellow >= 1) && (.@green >= 1)) {
					mes "^3355FFO Aquecedor Mystique de Elegance d� a partida com um zumbido forte, que se reduz � medida que a m�quina se estabiliza.";
					mes "Parece que voc� a consertou!^000000";
					next;
					mes "^3355FFVoc� deve falar com Dorian primeiro para poder usar esta m�quina...^000000";
					changequest 3105,3107;
					diamond_edq = 12;
					close;
				} else if ((.@engine == 1) && (.@bolt_suc == 1)) {
					if (.@switch_sound == 1) {
						mes "^3355FF*zumbido*^000000";
						mes "^3355FF*zumbido*^000000";
						mes "^3355FFA m�quina est� vibrando levemente.";
						mes "Qual bot�o voc� quer apertar?^000000";
						next;
						switch(select("Bot�o Vermelho","Bot�o Azul","Bot�o Amarelo","Bot�o Verde")) {
							default:
							mes "^3355FF*chiado*^000000";
							mes "^3355FF*chiado*^000000";
							next;
							mes "^3355FFA m�quina faz sons mais violentos e err�ticos, vibrando fortemente antes de fazer uma parada s�bita.";
							mes "N�o era para apertar esse bot�o.";
							mes "Melhor perguntar a Dorian...^000000";
							changequest(3105,3106);
							diamond_edq = 11;
							close;
							case 1:
							if (.@red  >= 0) {
								mes "^3355FF*Buzzz Buzzz*^000000";
								mes "^3355FF*Clang...!*^000000";
								next;
								mes "^3355FFAs vibra��es da maquina ficaram mais fortes.";
								mes "Parece que voc� escolheu o bot�o certo.^000000";
								next;
								++.@red;
							} else {
								mes "^3355FF*Whiz Whiz*^000000";
								mes "^3355FF*Whiz Whiz*^000000";
								next;
								mes "^3355FFA m�quina faz sons mais violentos e err�ticos, vibrando fortemente antes de fazer uma parada s�bita.";
								mes "N�o era para apertar esse bot�o.";
								mes "Melhor perguntar a Dorian...^000000";
								changequest(3105,3106);
								diamond_edq = 11;
								close;
							}
							break;
						}
					} else if (.@switch_sound == 2) {
						mes "^3355FF*Purr Purr*^000000";
						mes "^3355FF*Purr Purr*^000000";
						mes "^3355FFA m�quina est� vibrando um pouquinho mais forte.";
						mes "Qual bot�o voc� vai apertar agora?^000000";
						next;
						switch(select("Bot�o Vermelho","Bot�o Azul","Bot�o Amarelo","Bot�o Verde")) {
							default:
							mes "^3355FF*Whiz Whiz*^000000";
							mes "^3355FF*Whiz Whiz*^000000";
							next;
							mes "^3355FFA m�quina faz sons mais violentos e err�ticos, vibrando fortemente antes de fazer uma parada s�bita.";
							mes "N�o era para apertar esse bot�o.";
							mes "Melhor perguntar a Dorian...^000000";
							changequest(3105,3106);
							diamond_edq = 11;
							close;
							case 2:
							if (.@blue >= 0) {
								mes "^3355FF*Purrr Purr*^000000";
								mes "^3355FF*Clang...!*^000000";
								next;
								mes "^3355FFAs vibra��es da maquina ficaram mais fortes.";
								mes "Parece que voc� escolheu o bot�o certo.^000000";
								next;
								++.@blue;
							} else {
								mes "^3355FF*Whiz Whiz*^000000";
								mes "^3355FF*Whiz Whiz*^000000";
								next;
								mes "^3355FFA m�quina faz sons mais violentos e err�ticos, vibrando fortemente antes de fazer uma parada s�bita.";
								mes "N�o era para apertar esse bot�o.";
								mes "Melhor perguntar a Dorian...^000000";
								changequest(3105,3106);
								diamond_edq = 11;
								close;
							}
							break;
						}
					} else if (.@switch_sound == 3) {
						mes "^3355FF*Bzzz Bzzz*";
						mes "*Bzzz Bzzz*";
						mes "As vibra��es da m�quina est�o um pouco mais est�veis agora.";
						mes "Qual bot�o voc� vai apertar?^000000";
						next;
						switch(select("Red Switch:Blue Switch:Yellow Switch:Green Switch")) {
							default:
							mes "^3355FF*Whiz Whiz*^000000";
							mes "^3355FF*Whiz Whiz*^000000";
							next;
							mes "^3355FFA m�quina faz sons mais violentos e err�ticos, vibrando fortemente antes de fazer uma parada s�bita.";
							mes "N�o era para apertar esse bot�o.";
							mes "Melhor perguntar a Dorian...^000000";
							changequest(3105,3106);
							diamond_edq = 11;
							close;
							case 3:
							if (.@yellow >= 0) {
								mes "^3355FF*Bzzzz Bzzzz*^000000";
								mes "^3355FF*Clang...!*^000000";
								next;
								mes "^3355FFAs vibra��es da maquina ficaram mais fortes.";
								mes "Parece que voc� escolheu o bot�o certo.^000000";
								next;
								++.@yellow;
							} else {
								mes "^3355FF*Whiz Whiz*^000000";
								mes "^3355FF*Whiz Whiz*^000000";
								next;
								mes "^3355FFA m�quina faz sons mais violentos e err�ticos, vibrando fortemente antes de fazer uma parada s�bita.";
								mes "N�o era para apertar esse bot�o.";
								mes "Melhor perguntar a Dorian...^000000";
								changequest(3105,3106);
								diamond_edq = 11;
								close;
							}
							break;
						}
					} else if (.@switch_sound == 4) {
						next;
						mes "^3355FF*Pzzzz Pzzz*";
						mes "*Pzzzz Pzzz*";
						mes "A m�quina est� vibrando bem forte agora.";
						mes "Qual bot�o voc� vai apertar?^000000";
						next;
						switch(select("Bot�o Vermelho:Bot�o Azul:Bot�o Amarelo:Bot�o Verde")) {
							default:
							mes "^3355FF*Whiz Whiz*^000000";
							mes "^3355FF*Whiz Whiz*^000000";
							next;
							mes "^3355FFA m�quina faz sons mais violentos e err�ticos, vibrando fortemente antes de fazer uma parada s�bita.";
							mes "N�o era para apertar esse bot�o.";
							mes "Melhor perguntar a Dorian...";
							changequest(3105,3106);
							diamond_edq = 11;
							close;
							case 4:
							if (.@green >= 0) {
								mes "^3355FFPzzzzz Pzzzz*^000000";
								mes "^3355FF*Clang...!*^000000";
								next;
								mes "^3355FFAs vibra��es da maquina ficaram mais fortes.";
								mes "Parece que voc� escolheu o bot�o certo.^000000";
								next;
								++.@green;
							} else {
								mes "^3355FF*Whiz Whiz*^000000";
								mes "^3355FF*Whiz Whiz*^000000";
								next;
								mes "^3355FFA m�quina faz sons mais violentos e err�ticos, vibrando fortemente antes de fazer uma parada s�bita.";
								mes "N�o era para apertar esse bot�o.";
								mes "Melhor perguntar a Dorian... ";
								changequest(3105,3106);
								diamond_edq = 11;
								close;
							}
							break;
						}
					}
				}
			}
		}
	} else if (diamond_edq == 12) {
		mes "[Dorian]";
		mes "Parece que voc� conseguiu consertar meu Aquecedor Mystique de Elegance.";
		mes "Por que n�o volta aqui para eu explicar como us�-lo?";
		close;
	} else if ((diamond_edq == 13) && (countitem(Debt_Note) < 1)) {
		mes "^3355FFVoc� puxa a alavanca principal de opera��o, o que acende uma luz e abre uma ranhura de entrada.";
		mes "Voc� coloca o recibo molhado.^000000";
		next;
		mes "^3355FFOs pist�es e cilindros do motor se mexem ruidosamente, e quando a m�quina p�ra a ranhura se reabre.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o esse � o recibo de empr�stimo que Muff perdeu?";
		mes "Est�... Perfeito!";
		changequest(3108,3109);
		getitem(Debt_Note,1);
		close;
	} else if ((diamond_edq == 13) && (countitem(Debt_Note) > 0)) {
		mes "Voc� j� usou esta m�quina para restaurar o recibo de empr�stimo.";
		mes "N�o precisa mais ficar mexendo nela.";
		close;
	}
	mes "[Dorian]";
	mes "Quem � voc�?";
	mes "N�o ouse p�r suas m�os nas minhas preciosas inven��es!";
	close;
}

// ------------------------------------------------------------------
moc_ruins,152,147,5	script	Ibrahim	4_M_JOB_HUNTER,3,3,{
	if (diamond_edq < 14) {
		mes "[Ibrahim]";
		mes "Voc� j� ouviu falar das Quatro J�ias Malditas?";
		mes "Ouvi dizer que uma delas, o Diamante da Destrui��o, apareceu recentemente.";
		mes "Ah, o que eu faria para encontr�-lo...";
		close;
	} else if ((diamond_edq == 14) && (BaseLevel > 65)) {
		mes "[Ibrahim]";
		mes ""+strcharinfo(PC_NAME)+", certo?";
		mes "N�o fique t�o surpreso.";
		mes "J� ouvi falar de voc� por a�. Hehe!";
		next;
		switch(select("Em que posso ajudar?","O que voc� ouviu?:Tchau!")) {
			case 1:
			mes "[Ibrahim]";
			mes "Quero perguntar sobre as Quatro J�ias Malditas.";
			mes "Todos os mercadores daqui est�o falando nelas.";
			mes "Enfim, consegui obter o Diamante da Destrui��o!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "(^666666Hum... Talvez ele esteja falando daquela j�ia que Muff deu para Belder como garantia de empr�stimo.^000000)";
			next;
			mes "[Ibrahim]";
			mes "Paguei uma boa quantia por ele, mas acabaram levando-o alguns dias depois.";
			mes "Eu o deixei sob grande seguran�a, mas isso n�o deteve o ladr�o...";
			next;
			mes "[Ibrahim]";
			mes "� um trabalho arriscado, mas quero contratar voc� para descobrir onde foi parar meu diamante.";
			mes "Seria melhor se voc� o recuperasse, mas vou entender se n�o conseguir.";
			mes "Ent�o, voc� topa?";
			next;
			switch(select("Claro, eu ajudo voc�","N�o, desculpe.")) {
				case 1:
				mes "[Ibrahim]";
				mes "�timo! Sabia que era uma boa id�ia falar com voc�.";
				mes "O ladr�o n�o deixou nenhuma pista, mas com certeza vai ter problemas para vender a j�ia.";
				mes "Ela � �nica, sabe?";
				next;
				mes "[Ibrahim]";
				mes "Visitar as grandes joalherias no Reino de Rune-Midgard seria um bom come�o.";
				mes "Os mercadores delas sabem mais sobre essas j�ias.";
				next;
				mes "[Ibrahim]";
				mes "O ladr�o tamb�m teria de vender a loja a um joalheiro que pudesse pagar um pre�o muito alto.";
				mes "H� tr�s grandes locais que voc� deve verificar.";
				next;
				mes "[Ibrahim]";
				mes "Encontre ^0000FFJhonnita^000000 em Alberta, ^0000FFKimeunbang^000000 em Payon e ^0000FFLeblo^000000 em Geffen.";
				mes "Eles tamb�m queriam muito o diamante, ent�o devem se lembrar se tiverem alguma pista dele.";
				next;
				mes "[Ibrahim]";
				mes "Por favor, n�o os deixe saber que contratei voc� para investigar o diamante.";
				mes "Eles n�o v�o falar se perceberem que fui eu que mandei voc�.";
				next;
				mes "[Ibrahim]";
				mes "Bem, estarei bem aqui.";
				mes "Espero que voc� volte com boas not�cias.";
				setquest(3110);
				diamond_edq = 15;
				close;
				case 2:
				mes "[Ibrahim]";
				mes "� mesmo?";
				mes "Eu fiz tudo o que podia para encontrar voc�, mas... entendo.";
				mes "Se por acaso voc� mudar de id�ia, estarei disposto a contratar voc� por sua experi�ncia.";
				close;
			}
			case 2:
			if ((BaseJob == Job_Novice) || (BaseJob == Job_SuperNovice)) {
				mes "[Ibrahim]";
				mes "Ent�o, � verdade...";
				mes "O pessoal diz que mesmo sendo um Aprendiz, voc� os ajuda com seus problemas.";
				close;
			} else if (BaseClass == Job_Swordman) {
				mes "[Ibrahim]";
				mes "Tenho alguns amigos na Associa��o dos Espadachins.";
				mes "Eles mencionaram seu nome quando eu disse que procurava algu�m esperto e forte.";
				close;
			} else if (BaseClass == Job_Crusader) {
				mes "[Ibrahim]";
				mes "Hum, ent�o voc� � mesmo um dos cavaleiros sagrados.";
				mes "Estou feliz em encontrar voc�.";
				close;
			} else if (BaseClass == Job_Acolyte) {
				mes "[Ibrahim]";
				mes "N�o achei que um membro do clero pudesse ser t�o forte, mas como sabe, sua reputa��o � alta.";
				close;
			} else if (BaseClass == Job_Merchant) {
				mes "[Ibrahim]";
				mes "Ei, se eu n�o soubesse seu nome, como poderia me considerar um Mercador?";
				mes "Voc� � um exemplo para todos n�s!";
				close;
			} else if (BaseClass == Job_Blacksmith) {
				mes "[Ibrahim]";
				mes "Temos um amigo em comum, sabia?";
				mes "Aragham fala muito bem de voc�.";
				close;
			} else if (BaseClass == Job_Alchemist) {
				mes "[Ibrahim]";
				mes "Conhe�o um cara que tem um amigo na Guilda dos Alquimistas.";
				mes "Pelo que dizem por l�, parece que voc� est� por cima.";
				close;
			} else if (BaseClass == Job_Magician) {
				mes "[Ibrahim]";
				mes "A magia est� muito al�m do meu entendimento.";
				mes "Mas se d� para fazer o trabalho, n�o � nada ruim.";
				mes "Ouvi dizer que voc� � muito bom nisso.";
				close;
			} else if (BaseClass == Job_Thief) {
				mes "[Ibrahim]";
				mes "Hehe, parece que quase todo mundo que tem algum renome em Morroc sabe quem � voc�.";
				mes "� um prazer conhecer voc�!";
				close;
			} else if (BaseClass == Job_Archer) {
				mes "[Ibrahim]";
				mes "Qualquer um que use um arco menciona seu nome quando o assunto � pontaria e hero�smo.";
				mes "Mal posso acreditar que estou falando com voc�!";
				close;
			} else if (BaseClass == Job_Bard) {
				mes "[Ibrahim]";
				mes "� verdade mesmo?";
				mes "Soube que voc� canta como um anjo...";
				close;
			} else if (BaseClass == Job_Dancer) {
				mes "[Ibrahim]";
				mes "� verdade mesmo?";
				mes "Soube que voc� dan�a bem como o diabo...";
				close;
			} else if ((Class == Job_Star_Gladiator) || (Class == Job_Star_Gladiator2)) {
				mes "[Ibrahim]";
				mes "Eu e seu velho mestre, Phoenix, nos conhecemos h� muito tempo.";
				mes "Ele � todo orgulho quando fala de voc�.";
				close;
			} else if (Class == Job_Soul_Linker) {
				mes "[Ibrahim]";
				mes "Ouvi seu nome em uma mensagem espiritual que ouvi em um sonho.";
				mes "Isso n�o parece loucura para voc�, parece?";
				close;
			}
			case 3:
			mes "[Ibrahim]";
			mes "Voc� n�o est� nem um pouco curioso sobre como sei sobre voc�?";
			mes "Espere, volte!";
			mes "N�o sou t�o suspeito assim!";
			close;
		}
	} else if (diamond_edq == 15) {
		mes "[Ibrahim]";
		mes "Encontre ^0000FFJhonnita^000000 em Alberta, ^0000FFKimeunbang^000000 em Payon e ^0000FFLeblo^000000 em Geffen.";
		mes "Eles tamb�m queriam muito o diamante, ent�o devem se lembrar se tiverem alguma pista dele.";
		next;
		mes "[Ibrahim]";
		mes "Por favor, n�o os deixe saber que contratei voc� para investigar o diamante.";
		mes "Eles n�o v�o falar se perceberem que fui eu que mandei voc�.";
		close;
	} else if ((diamond_edq > 15) && (diamond_edq < 25)) {
		mes "[Ibrahim]";
		mes "Voc� ainda est� investigando o paradeiro do diamante?";
		mes "Bem, espero que voc� me traga boas not�cias logo.";
		close;
	} else if (diamond_edq == 25) {
		if (!checkweight(Resin,200)) {
			mes "[Ibrahim]";
			mes "Voc� est� carregando coisas demais com voc�.";
			mes "Deixe-as no Armaz�m Kafra, venda-as, largue-as ou sei l� mais o qu�, antes de vir falar comigo, certo?";
			close;
		}
		mes "[Ibrahim]";
		mes "Ah, voc� voltou.";
		mes "Fez algum avan�o em suas investiga��es sobre o Diamante da Destrui��o?";
		next;
		select("Explicar o que voc� descobriu");
		mes "[Ibrahim]";
		mes "O qu�?! A Gangue Z roubou meu diamante?";
		mes "S� podia ser!";
		mes "Aposto que queriam usar sua maldi��o para algo maligno.";
		mes "E quanto � j�ia?";
		mes "Voc� a recuperou?";
		next;
		select("Dar o Diamante da Destrui��o");
		mes "[Ibrahim]";
		mes "Oh! �timo!";
		mes "Ent�o estava no esconderijo da Gangue Z?";
		mes "Uau, mesmo depois de ouvir tanto sobre voc�, ainda assim voc� superou minhas expectativas!";
		next;
		delitem(Diamond_Of_Ruin, 1);
		mes "[Ibrahim]";
		mes "Que bom, finalmente o tenho de volta!";
		mes "Ah, e quanto ao seu pagamento...";
		mes "Bem, n�o sei se � o bastante pelo que voc� fez, mas espero que goste.";
		completequest(3118);
		diamond_edq = 26;
		getitem(Crystal_Jewel__, 2);
		getitem(Old_Blue_Box, 1);
		next;
		mes "[Ibrahim]";
		mes "Agora que tenho o Diamante da Destrui��o de volta, posso pesquisar mais sobre suas estranhas propriedades.";
		mes "Entrarei em contato de novo se precisar de sua ajuda.";
		close;
	} else if (diamond_edq == 26) {
		if (jewel_nd == 0) {
			if ((treasure_nd > 10) && (BaseLevel > 65)) {
				mes "[Ibrahim]";
				mes "Ah, soube por um amigo em Morroc que voc� acabou obtendo a Esmeralda do Azar.";
				mes "Tenho certeza de que ela � uma das J�ias Malditas.";
				mes "Poderia me deixar dar uma olhada?";
				next;
				switch(select("N�o!","Claro, por que n�o?")) {
					case 1:
					mes "[Ibrahim]";
					mes "N�o? Bem, voc� deve ter suas raz�es.";
					mes "Mesmo assim, talvez eu possa aprender algo que seja bom para n�s dois se eu a examinar.";
					close;
					case 2:
					mes "[Ibrahim]";
					mes "Obrigado, eu agrade�o!";
					mes "Agora, vamos ver...";
					next;
					if (countitem(Unlucky_Emerald)) {
						mes "[Ibrahim]";
						mes "Sim, a julgar por sua forma caracter�stica, esta � mesmo a Esmeralda do Azar.";
						mes "Assim como eu, agora voc� possui uma das Quatro J�ias Malditas.";
						next;
					} else {
						mes "[Ibrahim]";
						mes "Hum? Voc� por acaso perdeu sua esmeralda?";
						mes "Ela n�o est� com voc�...";
						close;
					}
				}
				mes "[Ibrahim]";
				mes "Me diga o que voc� est� pensando em fazer com a Esmeralda do Azar?";
				next;
				switch(select("Vou vend�-la","Vou estud�-la")) {
					case 1:
					mes "[Ibrahim]";
					mes "Oh, n�o vai ficar com ela?";
					mes "Queria poder compr�-la de voc�...";
					mes "Mas j� passei por um grande aperto comprando o Diamante da Destrui��o.";
					next;
					mes "[Ibrahim]";
					mes "Voc� j� conheceu alguns joalheiros de renome enquanto procurava pelo diamante.";
					mes "Por que n�o pergunta a eles se querem comprar sua Esmeralda do Azar?";
					jewel_nd = 1;
					close;
					case 2:
					mes "[Ibrahim]";
					mes "Ah, aplaudo sua sede de conhecimento, sua busca pela verdade.";
					mes "Se quiser que um especialista veja a esmeralda, fale com um Professor conhecido meu em Comodo.";
					next;
					mes "[Ibrahim]";
					mes "Esse homem � um �timo avaliador, um especialista em artefatos e tesouros antigos.";
					mes "Recomendo que voc� se consulte com ele, que foi fundamental para minha pr�pria pesquisa.";
					jewel_nd = 10;
					close;
				}
			} else if ((treasure_nd > 10) && (BaseLevel < 66)) {
				mes "[Ibrahim]";
				mes "Soube que voc� conseguiu a Esmeralda do Azar por um amigo em Morroc.";
				mes "Devo avisar que talvez voc� n�o seja forte o bastante para lidar com o poder dela.";
				mes "Tenha cuidado.";
				next;
				mes "[Ibrahim]";
				mes "Se n�o tiver cautela, sua maldi��o pode destruir voc�.";
				mes "Entendeu?";
				close;
			} else {
				mes "[Ibrahim]";
				mes "Obrigado por tudo que voc� fez por mim.";
				mes "Vou continuar minha pesquisa sobre os poderes das J�ias Malditas, e entrarei em contato se precisar de sua ajuda de novo.";
				mes "Cuide-se.";
				close;
			}
		} else if (jewel_nd == 1) {
			mes "[Ibrahim]";
			mes "N�o tenho dinheiro para comprar sua esmeralda a um pre�o justo.";
			mes "Mas por que n�o pergunta aos outros joalheiros?";
			mes "Eles podem se interessar em comprar sua j�ia.";
			close;
		} else if (jewel_nd == 2) {
			mes "[Ibrahim]";
			mes "Ah, voc� voltou!";
			mes "Ent�o, voc� conseguiu vender a Esmeralda do Azar?";
			next;
			select("Todos ficaram com medo!");
			mes "[Ibrahim]";
			mes "Ah, entendo.";
			mes "Eles devem estar com muito medo da maldi��o dessa j�ia. Hum... estranho.";
			next;
			mes "[Ibrahim]";
			mes "Acho que o Diamante da Destrui��o � considerado seguro, por j� ter circulado por algum tempo sem nenhum incidente estranho.";
			next;
			mes "[Ibrahim]";
			mes "Voc� simplesmente escavou a esmeralda?";
			mes "Acho que � muito cedo para vend�-la.";
			mes "N�o s�o muitas as pessoas que v�o se arriscar com essa j�ia, se pensarmos bem.";
			next;
			mes "[Ibrahim]";
			mes "Ah, tive uma id�ia.";
			mes "Por que n�o pede que meu amigo Professor em Comodo a examine?";
			mes "Talvez voc� descubra algo mais sobre a suposta maldi��o da esmeralda.";
			next;
			mes "[Ibrahim]";
			mes "Vou me adiantar e mandar uma mensagem para ele, para que ele saiba de sua chegada, est� bem?";
			jewel_nd = 9;
			close;
		} else if ((jewel_nd == 9) || (jewel_nd == 10)) {
			mes "[Ibrahim]";
			mes "Por que n�o visita meu amigo Professor em Comodo, e pede a ele que examine sua Esmeralda do Azar?";
			mes "Quanto mais voc� descobrir sobre a suposta maldi��o, melhor. Boa sorte!";
			close;
		} else {
			mes "[Ibrahim]";
			mes "Oh, ent�o, o que voc� descobriu sobre a Esmeralda do Azar at� agora? Hmmm.";
			mes "Sim, muito intrigante.";
			mes "Boa sorte com sua pesquisa...";
			close;
		}
	}
	mes "[Ibrahim]";
	mes "Voc� j� ouviu falar das Quatro J�ias Malditas?";
	mes "Queria recuperar meu Diamante da Destrui��o, mas quem quer que esteja com ele o escondeu muito bem...";
	close;

	OnTouch:
	if ((diamond_edq == 14) && (BaseLevel > 65)) {
		mes "[Ibrahim]";
		mes "Psiu, aventureiro!";
		mes "Voc� � "+strcharinfo(PC_NAME)+", certo?";
		mes "Tem uma coisa que quero discutir com voc� em particular!";
		close;
	}
	end;
}

// ------------------------------------------------------------------
alberta,102,80,3	script	Jhonnita	4_M_04,{
	if ((diamond_edq == 15) || (diamond_edq == 16)) {
		mes "[Jhonnita]";
		mes "Ah, � sempre bom ver gente nova...";
		mes "Ent�o, est� interessado em vender ou comprar uma j�ia?";
		mes "S� trabalhamos com as melhores.";
		mes "Hahahaha!";
		next;
		switch(select("Qual � a j�ia mais popular?","Voc� conhece o Diamante da Destrui��o?")) {
			case 1:
			mes "[Jhonnita]";
			mes "Ah, d� uma olhada neste brilhante rubi.";
			mes "N�o � de tirar o f�lego?";
			mes "Ele pode ser seu pelo pre�o especial com desconto de hoje, apenas 1.000.000 zenys!";
			next;
			mes "[Jhonnita]";
			mes "Espere, aonde voc� vai?...";
			mes "Droga, n�o devia ter posto um pre�o t�o alto.";
			mes "Um erro est�pido, de amador!";
			mes "E eu sou profissional!";
			close;
			case 2:
			mes "[Jhonnita]";
			mes "Diamante da Destrui��o?";
			mes "Hehehehe!";
			mes "Um amador como voc� n�o apreciaria seu verdadeiro valor.";
			mes "Eu o queria tanto, mas o tal Ibrahim teve muito mais sorte que eu...";
			next;
			mes "[Jhonnita]";
			mes "Fico t�o furioso quando penso em como perdi para ele.";
			mes "Todos os grandes joalheiros est�o tentando conseguir as Quatro J�ias Malditas...";
			mes "Mas s� uma delas apareceu at� agora.";
			close;
		}
	} else if (diamond_edq == 26) {
		if (jewel_nd == 0) {
			mes "[Jhonnita]";
			mes "Ei. Voc� me parece familiar.";
			mes "N�o � um dos meus fregueses, �?";
			mes "N�o, n�o pode ser.";
			mes "Voc� nem est� t�o bem vestido assim. Sem querer ofender...";
			close;
		} else if (jewel_nd == 1) {
			mes "[Jhonnita]";
			mes "Ent�o, veio vender alguma Garleta, ou veio gastar as economias de toda uma vida nas minhas j�ias?";
			next;
			switch(select("Mostre-me algumas j�ias...","Tenho uma esmeralda rara para vender...")) {
				case 1:
				mes "[Jhonnita]";
				mes "N�o me faria mal mostrar minha mercadoria, mas...";
				mes "Duvido que voc� possa compr�-las.";
				mes "Elas n�o s�o baratas, sabe?";
				next;
				if (Sex == SEX_MALE) {
					mes "[Jhonnita]";
					mes "Ah, agora entendi.";
					mes "Voc� quer dar uma delas de presente para uma mulher.";
					mes "Mas que coisa batida!";
					mes "N�o consegue pensar em algo mais criativo para conquistar o amor de uma mulher? Hein?";
					close;
				} else {
					mes "[Jhonnita]";
					mes "Desculpe, querida, mas tenho uma pol�tica r�gida que n�o permite \"namorar vitrines\".";
					close;
				}
				case 2:
				if (countitem(Unlucky_Emerald)) {
					mes "[Jhonnita]";
					mes "Uma esmeralda rara, hein?";
					mes "Melhor n�o ser nada como uma Garleta ou um Zarg�nio!";
					mes "�s vezes voc�s aventureiros cometem erros assim.";
					mes "Certo, vamos ver...";
					next;
					mes "[Jhonnita]";
					mes "......";
					mes "Humm...";
					next;
					mes "[Jhonnita]";
					mes "..........................Hum.";
					mes "� mesmo uma esmeralda muito boa, mas n�o posso tirar isso das suas m�os. H�...";
					mes "Se importaria em ir embora?";
					next;
					mes "["+strcharinfo(PC_NAME)+";]";
					mes "Hein? Mas por qu�?";
					next;
					mes "[Jhonnita]";
					mes "S-saia logo da minha loja!";
					mes "V� at� Payon e fale com Kimeunbang!";
					mes "�-�, e n�o volte nunca mais!";
					jewel_nd = 2;
					close;
				} else {
					mes "[Jhonnita]";
					mes "O que foi que eu te disse?";
					mes "N�o quero ver voc� aqui na minha loja nunca mais!";
					close;
				}
			}
		} else if (jewel_nd == 2) {
			mes "[Jhonnita]";
			mes "Olhe, vou ser honesto com voc�.";
			mes "Os boatos se espalham r�pido entre n�s, joalheiros.";
			mes "Ningu�m vai chegar perto de voc� se souber dessa j�ia.";
			mes "Entendeu agora?";
			mes "Por favor... Fique longe...";
			close;
		} else {
			mes "[Jhonnita]";
			mes "Eu n�o quero ter nada a ver com voc� nem com sua maldita esmeralda.";
			mes "Por que voc� n�o sai logo?";
			mes "V� embora!";
			close;
		}
	} else {
		mes "[Jhonnita]";
		mes "Est� aqui para comprar ou vender j�ias?";
		mes "Eu sempre compro caro e vendo barato.";
		mes "Venha me ver se tiver qualquer neg�cio para fazer com j�ias!";
		close;
	}
}

// ------------------------------------------------------------------
payon,69,65,5	script	Kimeunbang	4_M_ORIENT02,{
	if (diamond_edq == 15) {
		mes "[Kimeunbang]";
		mes "Zzzz... Hein?";
		mes "Por que me acordou?";
		mes "Era um sonho t�o bom...";
		mes "V� para outra joalheria, n�o estou a fim de abrir.";
		next;
		switch(select("O que foi?","Diamante da Destrui��o?")) {
			case 1:
			if (!checkweight(Scarlet_Jewel,1)) {
				mes "[Kimeunbang]";
				mes "Espere um pouco, no momento voc� esta carregando muito peso.";
				mes "Livre-se de um pouco depois venha falar comigo";
				close;
			}
			mes "[Kimeunbang]";
			mes "S� estou desapontado.";
			mes "Estava t�o perto de conseguir o Diamante da Destrui��o.";
			mes "T�o perto!";
			mes "Belder, meu s�cio havia conseguido peg�-lo de um coitado qualquer.";
			next;
			mes "[Kimeunbang]";
			mes "Por algum motivo, Belder acabou devolvendo a j�ia.";
			mes "Eu ia comprar a j�ia do dono original, mas ent�o um joalheiro veio do nada e o pegou antes de mim. Droga!";
			next;
			mes "[Kimeunbang]";
			mes "Isso foi um tremendo fracasso.";
			mes "Eu n�o consigo mais dormir, nem tenho vontade de trabalhar.";
			mes "Argh. Bem, obrigado por me deixar desabafar tudo isso.";
			mes "J� me sinto melhor.";
			next;
			mes "[Kimeunbang]";
			mes "Aqui est�, leve isto como presente.";
			mes "Nem todos os joalheiros s�o t�o avarentos quanto voc� pensa...";
			getitem(Scarlet_Jewel,1);
			diamond_edq = 16;
			close;
			case 2:
			mes "[Kimeunbang]";
			mes "Oh! Esse diamante � a pr�pria causa da minha afli��o!";
			mes "Estava t�o perto de consegu�-lo...";
			mes "Mas ent�o algu�m pegou o diamante antes de mim. Argh!";
			close;
		}
	} else if (diamond_edq == 26) {
		if (jewel_nd == 0) {
			mes "[Kimeunbang]";
			mes "N�o estou a fim de abrir milha loja t�o cedo, mas voc� pode voltar depois.";
			close;
		} else if (jewel_nd == 1) {
			mes "[Kimeunbang]";
			mes "Oh, ol�. Parece que voltei ao trabalho...";
			next;
			switch(select("Tenho uma j�ia para vender.:Como vai?")) {
				case 1:
				mes "[Kimeunbang]";
				mes "� mesmo?";
				mes "Certo, s�  me d� um instante para avaliar sua j�ia.";
				next;
				if (countitem(Unlucky_Emerald)) {
					mes "[Kimeunbang]";
					mes "...........";
					mes "...........";
					next;
					mes "[Kimeunbang]";
					mes "Desculpe, mas eu simplesmente n�o posso comprar essa esmeralda.";
					mes "� um risco muito grande.";
					mes "Os boatos que andei ouvindo... s�o terr�veis.";
					jewel_nd = 2;
					close;
				} else {
					mes "[Kimeunbang]";
					mes "Hum? Cad� essa tal j�ia de que voc� estava falando?";
					mes "Voc� esqueceu de traz�-la?";
					close;
				}
				case 2:
				mes "[Kimeunbang]";
				mes "Nem estou a fim de falar sobre meus neg�cios.";
				mes "Estive pensando em fechar minha loja de vez, para ser franco.";
				close;
			}
		} else if (jewel_nd == 2) {
			mes "[Kimeunbang]";
			mes "Nenhum joalheiro vai comprar essa esmeralda maldita.";
			mes "Realmente sinto muito.";
			mes "Voc� pode tentar falar com Ibrahim, ent�o.";
			mes "Foi ele que conseguiu o Diamante da Destrui��o.";
			close;
		} else {
			mes "[Kimeunbang]";
			mes "Ugh... O estresse do ramo joalheiro finalmente me derrubou.";
			mes "Oh, bem, eu tive uma boa carreira...";
			close;
		}
	} else {
		mes "[Kimeunbang]";
		mes "N�o estou a fim de abrir milha loja t�o cedo, mas voc� pode voltar depois.";
		close;
	}
}

// ------------------------------------------------------------------
geffen,128,153,3	script	Leblo	4_M_ALCHE_D,{
	if ((diamond_edq == 15) || (diamond_edq == 16)) {
		mes "[Leblo]";
		mes "Ah, j� ouvi falar de voc�.";
		mes "� voc� que anda fazendo perguntas sobre o Diamante da Destrui��o.";
		next;
		emotion(e_omg,1);
		mes "[Leblo]";
		mes "N�o fique t�o surpreso as not�cias voam no ramo joalheiro.";
		mes "Bem, se voc� quiser saber mais, ter� que fazer uma coisa para mim antes.";
		mes "Voc� aceita?";
		next;
		switch(select("Aceito","N�o, obrigado.")) {
			case 1:
			mes "[Leblo]";
			mes "Tenho sofrido de dores nas costas, e nenhum rem�dio est� resolvendo.";
			mes "Fui me consultar com uma m�dica famosa em Payon, mas estraguei tudo.";
			next;
			mes "[Leblo]";
			mes "Ela foi muito chata, e eu disse uma coisa... desagrad�vel a ela.";
			mes "Agora ela se recusa a me tratar!";
			mes "Mas se voc� for no meu lugar, talvez consiga algum rem�dio para mim.";
			next;
			mes "[Leblo]";
			mes "Ela sabe dos meus sintomas, ent�o se voc� a convenc�-la, ela lhe dar� meu rem�dio...";
			mes "Eu espero.";
			mes "Enfim, o nome dela � ^0000FFWola^000000, e ela est� em Payon.";
			changequest(3110,3111);
			diamond_edq = 17;
			close;
			case 2:
			mes "[Leblo]";
			mes "Ah, verdade mesmo?";
			mes "Bem, para mim tudo bem.";
			mes "N�o tenho nada a perder.";
			close;
		}
	} else if (diamond_edq == 17) {
		mes "[Leblo]";
		mes "Por favor, procure por uma m�dica chamada ^0000FFWola^000000 em Payon.";
		mes "Fa�a o que puder para pegar o rem�dio com ela...";
		mes "Ah, e tente ser gentil... ";
		close;
	} else if (diamond_edq == 21) {
		mes "[Leblo]";
		mes "Oh?? Esse �...";
		mes "Esse � meu rem�dio?";
		mes "Gra�as aos c�us!";
		mes "Ah, ent�o eu a entendi mal.";
		mes "Pensei que ela era muito arrogante, mas ela s� estava preocupada com minha sa�de.";
		next;
		mes "[Leblo]";
		mes "Melhor dar um jeito de me desculpar como se deve da pr�xima vez que a vir.";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		next;
		mes "[Leblo]";
		mes "Certo, vou contar o que sei sobre o Diamante da Destrui��o.";
		mes "Ou�a com aten��o.";
		mes "H� algum tempo, um casal jovem tentou me vender essa mesma j�ia.";
		mes "Suspeito, n�o?";
		next;
		mes "[Leblo]";
		mes "N�o tinha interesse em compr�-la, ent�o acabei oferecendo um pre�o muito mais baixo do que esperava.";
		mes "Agora, pensando bem...";
		next;
		mes "[Leblo]";
		mes "Aquele casal se parecia com membros daquela infame Gangue Z. He!";
		mes "Eu devia ter denunciado mas... voc� sabe.";
		mes "Dores nas costas e tudo o mais.";
		next;
		mes "[Leblo]";
		mes "Soube que a Guilda dos Arruaceiros est� investigando secretamente a Gangue Z, ent�o esse casal deve ter muitos inimigos.";
		mes "Ent�o...";
		mes "� isso, a Gangue Z est� com o Diamante da Destrui��o.";
		next;
		mes "[Leblo]";
		mes "Voc� deve falar com um dos investigadores da Guilda dos Arruaceiros se quiser saber mais sobre a Gangue Z.";
		mes "Minha dica foi �til, n�o foi?";
		mes "Cuide-se, amigo.";
		changequest(3114,3115);
		diamond_edq = 22;
		close;
	} else if (diamond_edq == 22) {
		mes "[Leblo]";
		mes "Voc� deve falar com um dos investigadores da Guilda dos Arruaceiros se quiser saber mais sobre a Gangue Z.";
		mes "Minha dica foi �til, n�o foi?";
		mes "Cuide-se, amigo.";
		close;
	} else if (diamond_edq == 26) {
		if (jewel_nd == 0) {
			mes "[Leblo]";
			mes "Hum? Desculpe, mas estou muito ocupado com meus outros clientes.";
			mes "Al�m disso, voc� n�o parece ser um comprador ou vendedor de j�ias.";
			mes "Por favor, desculpe-me...";
			close;
		} else if (jewel_nd == 1) {
			mes "[Leblo]";
			mes "Ah, ol�. Voc� tem algo a tratar comigo hoje?";
			next;
			switch(select("Tenho uma j�ia para vender","N�o, na verdade n�o")) {
				case 1:
				mes "[Leblo]";
				mes "Ah, � mesmo?";
				mes "Bem, ent�o, agora fiquei curioso.";
				mes "Voc� se importa se eu der uma olhada?";
				next;
				if (countitem(Unlucky_Emerald)) {
					mes "[Leblo]";
					mes "Bem, o que temos aq...";
					mes "Oh. Desculpe, mas eu simplesmente n�o posso comprar isto.";
					mes "Odeio ter de dizer isso, mas ouvi dizer que essa coisa tem uma maldi��o terr�vel.";
					mes "Vire-se com isso a�!";
					jewel_nd = 2;
					close;
				} else {
					mes "[Leblo]";
					mes "Hum. A j�ia de que voc� estava falando...";
					mes "Voc� lembrou de traz�-la?";
					close;
				}
				case 2:
				mes "[Leblo]";
				mes "Ah, � mesmo?";
				mes "Bem, para mim tudo bem.";
				mes "Nada de se meter no que n�o � da sua conta, � o que sempre digo.";
				close;
			}
		} else if (jewel_nd == 2) {
			mes "[Leblo]";
			mes "Oh. Desculpe, mas eu simplesmente n�o posso comprar isto.";
			mes "Odeio ter de dizer isso, mas ouvi dizer que essa coisa tem uma maldi��o terr�vel.";
			mes "Vire-se com isso a�!";
			close;
		} else {
			mes "[Leblo]";
			mes "Sinto muito voc� ser quem est� no momento com essa j�ia.";
			mes "Espero que a maldi��o seja s� boato...";
			mes "Mas, bem, n�o cheguei a esta idade me arriscando...";
			close;
		}
	}
	mes "[Leblo]";
	mes "Ol�, est� interessado em comprar ou vender alguma j�ia preciosa?";
	close;
}

// ------------------------------------------------------------------
payon_in03,167,149,3	script	Wola	1_F_ORIENT_01,{
	if (diamond_edq == 17) {
		mes "[Wola]";
		mes "Oh, como isso pode estar acontecendo?";
		mes "O que eu fa�o?";
		diamond_edq = 18;
		close;
	} else if (diamond_edq == 18) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ol�? Estou aqui para ver a Doutora Wola.";
		next;
		mes "[Wola]";
		mes "Oh... Ah... Hm...";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Com licen�a, mas voc� sabe onde posso encontr�-la?";
		next;
		mes "[Wola]";
		mes "Eu, um...";
		mes "Oh, n�o! U���������!";
		mes "Veja o que voc� fez!";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Eu... Eu n�o sei do que voc� est� falando.";
		mes "Eu s� queria falar com a Doutora Wola.";
		next;
		mes "[Wola]";
		mes "Eu sou a Doutora Wola!";
		mes "E veja!";
		mes "Voc� me fez derrubar o rem�dio de ervas que estava preparando!";
		mes "A panela est� quebrada...";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Hein? Oh, eu...";
		mes "Realmente sinto muito.";
		next;
		mes "[Wola]";
		mes "Est�... Est� tudo bem.";
		mes "� minha culpa, na verdade.";
		mes "Bu��h! Minha panela!";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Desculpe-me, n�o sei o que est� acontecendo.";
		mes "A panela era cara?";
		next;
		mes "[Wola]";
		mes "Ah, estou agindo como est�pida de novo!";
		mes "N�o tenho tempo para chorar pela panela quebrada!";
		mes "Preciso ver se minhas m�os n�o t�m cortes!";
		mes "Se estiverem feridas, n�o vou poder curar ningu�m!";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Isso, ahn, isso parece bem s�rio.";
		mes "Ent�o, como est�o suas m�os?";
		mes "Elas n�o doem, n�o �?";
		next;
		mes "[Wola]";
		mes "Aaah, esque�a isso!";
		mes "Est�o bem, gra�as aos c�us.";
		mes "O importante agora � que voc� me ajude a consertar minha panela.";
		mes "Voc� � parcialmente respons�vel, sabe?";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Tudo bem. S� me diga o que devo fazer.";
		mes "Espere, vim aqui para pedir que voc� me d� um rem�dio.";
		mes "Sabe...";
		next;
		mes "[Wola]";
		mes "Perfeito!";
		mes "Isso � mais um motivo para voc� me ajudar com a panela!";
		mes "N�o posso fazer nenhum rem�dio sem ela, n�o �?";
		mes "Vamos ver...";
		mes "Preciso de cola, cola...";
		next;
		mes "[Wola]";
		mes "Depressa, traga";
		mes "^0000FF20 Areias Finas^000000,";
		mes "^0000FF5 Garrafas Vazias^000000,";
		mes "^0000FF10 Brigans^000000 e";
		mes "^0000FF10 unidades de Grama^000000.";
		mes "N�o temos tempo a perder!";
		next;
		mes "["+ strcharinfo(PC_NAME) +"]";
		mes "Est�... Est� bem.";
		changequest(3111,3112);
		diamond_edq = 19;
		close;
	} if (diamond_edq == 19) {
		mes "[Wola]";
		mes "Que bom, voc� voltou.";
		mes "Ent�o, trouxe tudo de que preciso para colar os peda�os da minha panela?";
		next;
		if ((countitem(Fine_Sand) > 19) && (countitem(Brigan) > 9) && (countitem(Soft_Leaf) > 9) && (countitem(Empty_Bottle) > 4)) {
			mes "[Wola]";
			mes "�timo. D� tudo para mim.";
			mes "Preciso moer isto, misturar com...";
			mes "Espera, era isso mesmo?";
			mes "Isto aqui serve para qu�?";
			mes "Argh, estou dando mancada de novo!";
			mes "Voc� se importa de n�o olhar?";
			delitem(Fine_Sand,20);
			delitem(Brigan,10);
			delitem(Soft_Leaf,10);
			delitem(Empty_Bottle,5);
			next;
			mes "[Wola]";
			mes "S�... S� sente naquele canto, n�o diga nada, e espere at� eu disser que terminei, OK?!";
			next;
			mes "[Wola]";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			next;
			mes "[Wola]";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			next;
			mes "[Wola]";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			next;
			mes "[Wola]";
			mes "Pronto. Est� consertada.";
			mes "Ah, espere, voc� disse algo sobre precisar de um rem�dio?";
			mes "J� me esqueci completamente do que era.";
			mes "O que voc� disse mesmo?";
			changequest(3112,3113);
			diamond_edq = 20;
			next;
			switch(select("Quer dar uma volta comigo?:Rem�dio para o Leblo?")) {
				case 1:
				if (Sex == SEX_MALE) {
					mes "[Wola]";
					mes "^666666*Ruborizada*^000000";
					mes "Mas � t�o cedo para a gente sair em um encontro.";
					mes "Desculpe, � que...";
					mes "J� gosto de algu�m.";
					mes "Mas fico lisonjeada de voc� me ver assim.";
					close;
				} else {
					mes "[Wola]";
					mes "Uau, n�o acredito que vou te dar o fora...";
					mes "Fico at� surpresa, na verdade.";
					mes "Mas o caso � que j� gosto de algu�m.";
					mes "E n�o � voc�. Desculpe.";
					close;
				}
				case 2:
				mes "[Wola]";
				mes "Leblo... Ah, aquele homem de Geffen?";
				mes "Finalmente...";
				mes "Ele teve o bom senso de mandar algu�m buscar seu rem�dio.";
				mes "Eu j� o preparei.";
				mes "Onde foi que eu coloquei?";
				next;
				mes "[Wola]";
				mes "Quero verificar bem o rem�dio primeiro.";
				mes "Ent�o por favor diga a ele que vou envi�-lo para ele logo.";
				mes "S� vai demorar um pouco.";
				next;
				mes "["+strcharinfo(PC_NAME)+";]";
				mes "Uh, voc� n�o est� brava nem nada assim? Tinha entendido que voc� n�o gostava muito dele...";
				next;
				mes "[Wola]";
				mes "O que est� dizendo?";
				mes "Sou uma m�dica, tenho o dever de curar quem quer que seja!";
				mes "Isso n�o quer dizer que alguns pacientes n�o tenham que passar por um tratamento mais longo e doloroso...";
				next;
				mes "["+strcharinfo(PC_NAME)+";]";
				mes "(^666666Ela odeia ele!";
				mes "Mas acho que a vida de Leblo vai estar a salvo nas m�os dela.^000000)";
				next;
				mes "[Wola]";
				mes "Est� bem, s� diga a Leblo que continuo tratando dele, e que ele vai ficar bem em minhas m�os.";
				mes "Preciso voltar ao trabalho, por favor, cuide-se!";
				changequest(3113,3114);
				diamond_edq = 21;
				close;
			}
		} else {
			mes "[Wola]";
			mes "Depressa, traga";
			mes "^0000FF20 Areias Finas^000000,";
			mes "^0000FF5 Garrafas Vazias^000000,";
			mes "^0000FF10 Brigans^000000 e";
			mes "^0000FF10 unidades de Grama^000000.";
			mes "N�o temos tempo a perder!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Est�... Est� bem.";
			close;
		}
	} else if (diamond_edq == 20) {
		mes "[Wola]";
		mes "Desculpe, esqueci o que voc� me disse antes.";
		mes "Era algo sobre um rem�dio, ou o qu�?";
		next;
		switch(select("Quer dar uma volta comigo?:Rem�dio para o Leblo.")) {
			case 1:
			if (Sex == SEX_MALE) {
				mes "^666666*Ruborizada*^000000";
				mes "Mas � t�o cedo para a gente sair em um encontro.";
				mes "Desculpe, � que...";
				mes "J� gosto de algu�m.";
				mes "Mas fico lisonjeada de voc� me ver assim.";
				close;
			} else {
				mes "[Wola]";
				mes "Uau, n�o acredito que vou te dar o fora...";
				mes "Fico at� surpresa, na verdade.";
				mes "Mas o caso � que j� gosto de algu�m.";
				mes "E n�o � voc�.";
				mes "Desculpe.";
				close;
			}
			case 2:
			mes "[Wola]";
			mes "Leblo... Ah, aquele homem de Geffen?";
			mes "Finalmente...";
			mes "Ele teve o bom senso de mandar algu�m buscar seu rem�dio.";
			mes "Eu j� o preparei.";
			mes "Onde foi que eu coloquei?";
			next;
			mes "[Wola]";
			mes "Quero verificar bem o rem�dio primeiro, ent�o por favor diga a ele que vou envi�-lo para ele logo.";
			mes "S� vai demorar um pouco.";
			next;
			mes "["+strcharinfo(PC_NAME)+";]";
			mes "Uh, voc� n�o est� brava nem nada assim?";
			mes "Tinha entendido que voc� n�o gostava muito dele...";
			next;
			mes "[Wola]";
			mes "O que est� dizendo?";
			mes "Sou uma m�dica: tenho o dever de curar quem quer que seja!";
			mes "Isso n�o quer dizer que alguns pacientes n�o tenham que passar por um tratamento mais longo e doloroso...";
			next;
			mes "["+strcharinfo(PC_NAME)+";]";
			mes "(^666666Ela odeia ele!";
			mes "Mas acho que a vida de Leblo vai estar a salvo nas m�os dela.^000000)";
			next;
			mes "[Wola]";
			mes "Est� bem, s� diga a Leblo que continuo tratando dele, e que ele vai ficar bem em minhas m�os.";
			mes "Preciso voltar ao trabalho; por favor, cuide-se!";
			changequest(3113,3114);
			diamond_edq = 21;
			close;
		}
	}
	mes "[Wola]";
	mes "A comida tem um efeito dr�stico em seu corpo trate-a como um rem�dio, e cuidado com o que come.";
	mes "Ah, e fa�a sua pesquisa!";
	next;
	mes "[Wola]";
	mes "Sabe, seu estilo de vida e seus h�bitos determinam sua sa�de no futuro.";
	mes "Cuide-se!";
	close;
}

// ------------------------------------------------------------------
in_rogue,366,46,3	script	Investigador#rogue1	4_M_ROGUE,{
	if ((diamond_edq == 22) && (BaseJob == Job_Rogue)) {
		mes "[Investigador]";
		mes "Ah, lembra-se de mim?";
		mes "Faz muito tempo ent�o n�o culpo voc�:";
		mes "Eu estava l� quando voc� entrou para nossa guilda!";
		mes "O que traz voc� aqui?";
		next;
		select("Perguntar sobre a Gangue Z");
		mes "[Investigador]";
		mes "Ah, a Gangue Z, voc� disse?";
		next;
		mes "[Investigador]";
		mes "Ah, sim, estamos investigando esses caras.";
		mes "Na verdade encontramos seu esconderijo, mas eles fugiram antes que pud�ssemos peg�-los. Malditos...";
		mes "Acho que algu�m deu a dica para eles!";
		next;
		mes "[Investigador]";
		mes "Alguns de nossos agentes est�o investigando o esconderijo, mas duvido que eles encontrem algo �til l�.";
		next;
		select("Onde � o esconderijo?");
		mes "[Investigador]";
		mes "Bem, � um grande dep�sito em Comodo.";
		mes "Fique � vontade para olhar o lugar, se � isso o que quer.";
		mes "Mas s�o poucas as chances de voc� encontrar qualquer coisa.";
		close;
	} else if ((diamond_edq == 22) && (BaseClass == Job_Thief)) {
		mes "[Investigador]";
		mes "Ei, como esta indo?";
		mes "J� pensou em se juntar aos";
		mes "Arruaceiros?";
		mes "Seria muito divertido.";
		mes "Fique � vontade para dar uma olhada, e para me fazer qualquer pergunta.";
		next;
		select("Perguntar sobre a Gangue Z");
		mes "[Investigador]";
		mes "Ah, sim, estamos investigando esses caras.";
		mes "Na verdade encontramos seu esconderijo, mas eles";
		mes "fugiram antes que pud�ssemos peg�-los.";
		mes "Malditos...";
		mes "Acho que algu�m deu a dica para eles!";
		next;
		mes "[Investigador]";
		mes "Alguns de nossos agentes est�o investigando o esconderijo, mas duvido que eles encontrem algo �til l�.";
		next;
		select("Onde � o esconderijo?");
		mes "[Investigador]";
		mes "Bem, n�o sei se posso mesmo lhe dar esse tipo de informa��o.";
		mes "Quero dizer, voc� n�o � membro de nossa guilda... ainda.";
		mes "O que posso fazer?";
		next;
		mes "[Investigador]";
		mes "J� sei.";
		mes "Vou dizer ao meu chefe que voc� me subornou com 10.000 zenys.";
		mes "N�o � muito, �?";
		mes "N�s Arruaceiros somos maus...";
		mes "Mas nem tanto.";
		next;
		switch(select("Fechado!","Procuro por conta pr�pria...")) {
			case 1:
			if (Zeny > 9999) {
				Zeny -= 10000;
				mes "[Investigador]";
				mes "Obrigado pela grana!";
				mes "� claro que se voc� se tornasse um Arruaceiro, essa quantia n�o seria nada comparada ao que voc� poderia ganhar.";
				mes "^666666*Aham*^000000";
				next;
				mes "[Investigador]";
				mes "O velho esconderijo da Gangue Z � um grande armaz�m em Comodo.";
				mes "Duvido que voc� v� encontrar algo l�, mas pode ir dar uma olhada. ";
				changequest(3115,3116);
				diamond_edq = 23;
				close;
			} else {
				mes "[Investigador]";
				mes "Ah, o que vou fazer se meu chefe pedir para ver o dinheiro?";
				mes "Este suborno tem que ser aut�ntico!";
				close;
			}
			case 2:
			mes "[Investigador]";
			mes "Fique � vontade, talvez seja um bom aprendizado.";
			mes "Mas volte quando pensar em mudar de classe, certo?";
			mes "Torne-se um Arruaceiro!";
			close;
		}
	} else if (diamond_edq == 22) {
		mes "[Investigador]";
		mes "Ei, o que voc� est� fazendo aqui?";
		mes "N�o tenho nenhuma bronca com voc�, mas alguns outros Arruaceiros, sabe, t�m muitas.";
		mes "Ahn, o que voc� quer?";
		mes "N�o uma briga, espero.";
		next;
		select("Perguntar sobre a Gangue Z");
		mes "[Investigador]";
		mes "Esses caras s�o uma pedra no sapato de todo mundo!";
		mes "Acho que podemos dizer que estamos juntos nessa.";
		next;
		mes "[Investigador]";
		mes "Ah, sim, estamos investigando esses caras.";
		mes "Na verdade encontramos seu esconderijo, mas eles fugiram antes que pud�ssemos peg�-los. Malditos...";
		mes "Acho que algu�m deu a dica para eles!";
		next;
		mes "[Investigador]";
		mes "Alguns de nossos agentes est�o investigando o esconderijo, mas duvido que eles encontrem algo �til l�.";
		next;
		select("Onde � o esconderijo?");
		mes "[Investigador]";
		mes "Ahn, n�o posso simplesmente dar essa informa��o se voc� n�o � membro da nossa guilda.";
		mes "Mas j� que estamos juntos nisso, s� vou pedir 10.000 zenys.";
		next;
		switch(select("�rtimo!","Esque�a...")) {
			case 1:
			if (Zeny > 9999) {
				Zeny -= 10000;
				mes "[Investigador]";
				mes "Legal, legal...";
				mes "Certo, n�o cobrei muito, porque o esconderijo � um grande armaz�m em";
				mes "Comodo, e duvido que voc� v� encontrar alguma coisa.";
				mes "Mas quem sabe?";
				changequest(3115,3116);
				diamond_edq = 23;
				close;
			} else {
				mes "[Investigador]";
				mes "Ei, preciso de mais dinheiro.";
				mes "Pensei que o pessoal da sua classe ganhasse mais zenys do que isso em um dia!";
				close;
			}
			case 2:
			mes "[Investigador]";
			mes "Certo, mas acho que voc� vai precisar de uma ajudinha para encontrar esse lugar.";
			mes "Afinal, os Arruaceiros s�o especialistas em espionagem, e at� mesmo a gente est� com problemas!";
			close;
		}
	}
	mes "[Investigador]";
	mes "Cara, estou com muito sono...";
	mes "Todos sa�ram para miss�es, e estou preso aqui, ficando de guarda.";
	mes "Quando vou ter um pouco de a��o?";
	mes "Ugh! Arruaceiros odeiam ficar parados!";
	close;
}

// ------------------------------------------------------------------
cmd_in02,69,188,1	script	Caixa forte pequena	CLEAR_NPC,{
	if ((diamond_edq == 22) || (diamond_edq == 23)) {
		mes "^3355FFH� um pequeno cofre escondido sob as sombras destas caixas.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Parece que a Gangue Z esqueceu de levar isto com eles na pressa de fugir.";
		mes "Humm... Como eu abro isto?";
		mes "Ser� que h� uma chave, um bot�o, algo que eu possa usar?";
		hideoffnpc("Interruptor estranho#Switch1");
		close;
	} else if (diamond_edq == 24) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, o cofre se abriu!";
		mes "Aquele bot�o deve ter resolvido. Agora...";
		mes "Vamos ver o que tem dentro.";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Incr�vel!";
		mes "� um enorme diamante vermelho!";
		mes "Ser� esse o Diamante da Destrui��o do Ibrahim?";
		next;
		getitem(Diamond_Of_Ruin,1);
		mes "[Investigador]";
		mes "Zzz... Zzz...";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Que sorte, esse cara est� dormindo.";
		mes "� melhor eu dar o fora daqui, e devolver este diamante para o Ibrahim o mais r�pido que puder.";
		changequest(3117,3118);
		diamond_edq = 25;
		close;
	} else if ((diamond_edq < 22) && (diamond_edq > 24)) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Tinha alguma coisa aqui fixa no ch�o, mas agora parece que algo a arrancou da� � for�a.";
		mes "Que estranho.";
		close;
	}
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "O que � isso?";
	mes "Ah, bem, acho que n�o � nada importante.";
	close;
}

// ------------------------------------------------------------------
cmd_in02,69,196,0	script	Interruptor estranho#Switch1	CLEAR_NPC,{
	if ((diamond_edq == 22) || (diamond_edq == 23)) {
		mes "^3355FFH� um pequeno bot�o no ch�o, pr�ximo aos barris de u�sque.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Isso estava aqui antes?";
		mes "O que acontece se eu apertar este bot�ozinho?";
		next;
		hideoffnpc "Interruptor estranho#Switch2";
		mes "^3355FF*Click Click*^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Esse som...!";
		mes "Alguma coisa aconteceu, mas o que ser� que �?";
		hideonnpc "Interruptor estranho#Switch1";
		close;
	}
	end;

	OnInit:
	hideonnpc("Interruptor estranho#Switch1");
	end;
}

// ------------------------------------------------------------------
cmd_in02,80,189,0	script	Interruptor estranho#Switch2	CLEAR_NPC,{
	if ((diamond_edq == 22) || (diamond_edq == 23)) {
		mes "^3355FFH� um pequeno bot�o no ch�o, sob as sombras das caixas.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Isso estava aqui antes?";
		mes "O que acontece se eu apertar este pequeno bot�o?";
		next;
		mes "^3355FF*Click Click*^000000";
		next;
		changequest(3116,3117);
		diamond_edq = 24;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Esse som...!";
		mes "Alguma coisa aconteceu, mas o que ser� que �?";
		close2;
		hideonnpc("Interruptor estranho#Switch1");
		hideonnpc("Interruptor estranho#Switch2");
	}
	end;

	OnInit:
	hideonnpc("Interruptor estranho#Switch2");
	end;
}

// ------------------------------------------------------------------
prontera,150,326,0	script	Notifica��o#edq	HIDDEN_NPC,{
	if (!zdan_edq) {
		mes "==========Procurados==========";
		mes "Por favor, relate quaisquer informa��es sobre estes criminosos ao Reino de Rune-Midgard e sua";
		mes "Ag�ncia de Seguran�a P�blica.";
		next;
		mes "==========Procurados==========";
		mes "^0000ffLouis Von Silokens^000000 - Humano";
		mes "^0000ffMartha Hertizan^000000 - Humana";
		mes "^0000ffCatfoii^000000 � Gato de Estima��o";
		next;
		mes "==========Procurados==========";
		mes "Estes infames membros da Gangue Z s�o suspeitos de furto de tesouro nacional.";
		mes "Fraude, falsifica��o.";
		mes "Promo��o e apologia.";
		mes "Deprava��o e � imoralidade.";
		next;
		mes "==========Procurados==========";
		mes "Qualquer um que capturar os criminosos procurados ser�  recompensado com o Livro dos Mist�rios Proibidos, um dos tesouros do reino.";
		setquest(3119);
		zdan_edq = 1;
		close;
	} else if (zdan_edq > 18) {
		mes "[Chefe da Pol�cia]";
		mes "Desde que voc� capturou a Gangue Z, o crime atingiu um recorde de baixa.";
		mes "Obrigado por nos ajudar!";
		next;
		mes "[Chefe da Pol�cia]";
		mes "A paz nunca dura muito tempo...";
		mes "Outros bandidos logo entrar�o no lugar da Gangue Z.";
		mes "Quando isso acontecer, espero que possamos contar com voc� de novo.";
		close;
	} else {
		mes "==========Procurados==========";
		mes "Por favor, relate quaisquer informa��es sobre estes criminosos ao Reino de Rune-Midgard e sua";
		mes "Ag�ncia de Seguran�a P�blica.";
		next;
		mes "==========Procurados==========";
		mes "^0000ffLouis Von Silokens^000000 - Humano";
		mes "^0000ffMartha Hertizan^000000 - Humana";
		mes "^0000ffCatfoii^000000 � Gato de Estima��o";
		next;
		mes "==========Procurados==========";
		mes "Estes infames membros da Gangue Z s�o suspeitos de furto de tesouro nacional.";
		mes "Fraude, falsifica��o.";
		mes "Promo��o e apologia.";
		mes "Deprava��o e � imoralidade.";
		next;
		mes "==========Procurados==========";
		mes "Qualquer um que capturar os criminosos procurados ser�  recompensado com o Livro dos Mist�rios Proibidos, um dos tesouros do reino.";
		close;
	}
}

// ------------------------------------------------------------------
prontera,148,326,3	script	Oficial principal#edq	4_M_JOB_KNIGHT2,{
	if ((zdan_edq == 0) && (BaseLevel > 70)) {
		mes "[Chefe da Pol�cia]";
		mes "Aventureiros, esta � sua chance de proteger e servir ao seu pa�s!";
		mes "Por favor, leiam o cartaz de";
		mes "Procurados para saberem mais detalhes.";
		close;
	} else if ((zdan_edq == 1) && (BaseLevel > 70)) {
		mes "[Chefe da Pol�cia]";
		mes "Aten��o, aten��o.";
		mes "A Ag�ncia de Seguran�a P�blica do Reino de Rune-Midgard busca qualquer informa��o sobre a Gangue Z.";
		next;
		mes "[Chefe da Pol�cia]";
		mes "S�o tr�s membros:";
		mes "Louis Von Silokens, conhecido como Louis, Martha Hertizan, conhecida como Martha, e Catfoii, conhecido como Catfoii, devem ser capturados!";
		changequest(3119,3120);
		zdan_edq = 2;
		close;
	} else if ((zdan_edq == 1) && (BaseLevel < 70)) {
		mes "[Chefe da Pol�cia]";
		mes "Oh, est� interessado em ca�ar os criminosos do cartaz de Procurados?";
		mes "Sinto muito, mas voc� n�o est� pronto para esse tipo de tarefa...";
		mes "Mas incentivo voc� a treinar!";
		mes "Obrigado.";
		close;
	} else if (zdan_edq == 2) {
		mes "[Chefe da Pol�cia]";
		mes "Ol�, cidad�o de Rune-Midgard.";
		mes "O que traz voc� aqui?";
		next;
		switch(select("Cartaz de Procurados","Gangue Z","Quais crimes a Gangue Z cometeu?")) {
			case 1:
			mes "[Chefe da Pol�cia]";
			mes "Oh, est� interessado em ca�ar a Gangue Z?";
			mes "Por favor, leia com aten��o o cartaz de procurados que est� bem aqui do meu lado.";
			mes "Precisamos captur�-los imediatamente.";
			next;
			mes "[Chefe da Pol�cia]";
			mes "Se voc� quiser saber mais sobre a Gangue Z, sugiro que fale com um cavaleiro chamado Valdes.";
			mes "Ele sabe bem de todas as suas inf�mias.";
			next;
			mes "[Chefe da Pol�cia]";
			mes "Infelizmente, temo que ele esteja envergonhado por sua falha na captura deles.";
			mes "Mas tenho certeza de que ele ser� �til em sua busca por justi�a.";
			close;
			case 2:
			mes "[Chefe da Pol�cia]";
			mes "Voc� quer saber mais sobre os membros da Gangue Z?";
			mes "N�o sei muita coisa sobre eles, mas posso divulgar esse pouco que sei.";
			next;
			switch(select("Louis","Martha","Catfoii","Livro dos Mist�rios Proibidos?")) {
				case 1:
				mes "[Chefe da Pol�cia]";
				mes "Louis Von Silokens � o terceiro filho da nobre fam�lia Silokens, que se arruinou h� muitos anos.";
				mes "De acordo com os registros, ele foi reprovado 3 vezes na Academia de Magia.";
				next;
				mes "[Chefe da Pol�cia]";
				mes "Acredita-se que ele tenha formado a Gangue Z por causa dos seus fracassos pessoais.";
				mes "Ele tamb�m roubou o Livro dos Mist�rios Proibidos da Biblioteca Real.";
				next;
				mes "[Chefe da Pol�cia]";
				mes "Devemos captur�-lo e recuperar o livro antes que ele possa abusar de seu poder.";
				mes "Precisamos da ajuda do povo para encontrar Louis e lev�-lo � justi�a!";
				close;
				case 2:
				mes "[Chefe da Pol�cia]";
				mes "Martha Hertizan � a segunda filha da fam�lia Hertizan de Alberta.";
				mes "Ningu�m sabe por que ela fugiu de casa aos vinte anos.";
				next;
				mes "[Chefe da Pol�cia]";
				mes "Marta cuida das finan�as da Gangue Z.";
				mes "� uma pena que uma mercadora t�o talentosa tenha se voltado para o crime.";
				close;
				case 3:
				mes "[Chefe da Pol�cia]";
				mes "A princ�pio acredit�vamos que Catfoii fosse apenas o gato de Louis e Martha...";
				mes "Mas na verdade ele �  um g�nio do crime.";
				mes "Tome todo o cuidado ao abord�-lo!";
				next;
				mes "[Chefe da Pol�cia]";
				mes "Isso � tudo o que sei sobre esse animal.";
				mes "A verdadeira natureza de Catfoii est� envolta em mist�rio.";
				close;
				case 4:
				mes "[Chefe da Pol�cia]";
				mes "De todos os seus crimes, o roubo do Livro dos Mist�rios";
				mes "Proibidos � o que representa o maior perigo para o reino.";
				mes "Se eles fizerem mau uso do livro, podem causar um grande desastre.";
				close;
			}
			case 3:
			mes "[Chefe da Pol�cia]";
			mes "Aquela maldita Gangue Z est� envolvida em todos os crime que acontecem em Rune-Midgard.";
			mes "Eles causaram um tumulto em Geffen, espalhando rumores sobre fantasmas...";
			next;
			mes "[Chefe da Pol�cia]";
			mes "Eles envenenaram a �gua pot�vel nos po�os de Payon, in�meros bens beneficiados pelo comercio ilegal...";
			mes "A lista � imensa...";
			next;
			mes "[Chefe da Pol�cia]";
			mes "Al�m de todos esses crimes, o roubo do Livro Proibido de Mist�rios representa o maior perigo poss�vel para o reino.";
			mes "Se utilizarem esse livro, poder�o causar desastres graves.";
			close;
		}
	} else if (zdan_edq == 18) {
		mes "[Chefe da Pol�cia]";
		mes "Ah, voc� � o prestativo aventureiro que passou aqui no outro dia.";
		mes "Ent�o, em que posso ajudar?";
		next;
		mes "[Chefe da Pol�cia]";
		mes "O que...?!";
		mes "Voc� realmente encontrou o esconderijo da Gangue Z, capturou-os e recuperou o livro roubado?";
		next;
		delitem(Forbidden_Secret_Art,1);
		mes "[Chefe da Pol�cia]";
		mes "Espl�ndido!";
		mes "Simplesmente espl�ndido!";
		mes "Em nome do rei, deixe-me dar sua bem merecida recompensa.";
		mes "Muito obrigado pelo seu trabalho pelo nosso reino!";
		next;
		mes "[Chefe da Pol�cia]";
		mes "Sua bravura e ardente patriotismo ser� sempre lembrado nos anais da hist�ria de Rune-Midgard.";
		mes "Parab�ns! ";
		completequest(3134);
		zdan_edq = 19;
		getexp(1000000,0);
		close;
	}
	mes "[Chefe da Pol�cia]";
	mes "Todos os que se op�em � paz e � seguran�a do nosso reino n�o ser�o poupados da f�ria de nossas espadas!";
	close;
}

// ------------------------------------------------------------------
prt_in,168,18,1	script	Valdes	1_M_YOUNGKNIGHT,2,2,{
	if (zdan_edq == 2) {
		mes "[Valdes]";
		mes "^666666*Urp*^000000";
		mes "Voc� veio para... condoer-se do meu fracasso tamb�m?";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Voc� � Valdes?";
		mes "Vim aqui pedir a sua ajuda...";
		next;
		mes "[Valdes]";
		mes "^666666*Hic*^000000";
		mes "Por qu�?";
		mes "Eu n�o sirvo pra mais nada!";
		next;
		switch(select("Perguntar sobre a Gangue Z","Algu�m est� o preocupado","Adeus!")) {
			case 1:
			mes "[Valdes]";
			mes "Essa Gangue Z...";
			mes "Arruinou minha vida!";
			mes "Minha carreira, minha pens�o...";
			mes "Tudo se foi por causa desses malditos criminosos!";
			next;
			mes "[Valdes]";
			mes "Voc�? Captur�-los?";
			mes "Boa sorte!";
			mes "S�... S� tente n�o acabar como eu.";
			mes "Oh, voc� quer info-informa��es?";
			mes "^666666*Hic*^000000";
			mes "Ei, uma m�o lava a outra, � como dizem.";
			next;
			mes "[Valdes]";
			mes "He... fiquei sem vinho!";
			mes "Traga, hum, ^0000FFVinho de Frutas de Morroc^000000!";
			mes "5 garrafas!";
			mes "Ent�o... Talvez...";
			mes "Eu lhe conte o que voc� quer saber. He he...";
			mes "^666666*Hic!*^000000";
			changequest(3120,3121);
			zdan_edq = 3;
			close;
			case 2:
			mes "[Valdes]";
			mes "M-mesmo?";
			mes "Bem...";
			mes "N�o me importo!";
			mes "S� me deixe beber em paz!";
			close;
			case 3:
			mes "[Valdes]";
			mes "O q-qu�? Com quem voc� acha que est� brincando.";
			mes "^666666*Hic!*^000000";
			mes "Vindo aqui s� pra dizer \"tchau\"?!";
			mes "Eu j� fui um cavaleiro, sabia?";
			mes "Eu podia chutar seu...";
			mes "^666666*Urp!*^000000";
			close;
		}
	} else if (zdan_edq == 3) {
		mes "[Valdes]";
		mes "Eeeiii, voc���!";
		mes "Trouxe meu vinho?";
		next;
		if (countitem(Int_Dish04) > 4) {
			delitem(Int_Dish04,5);
			mes "[Valdes]";
			mes "^666666*Snif*^000000";
			mes "Puxa, est� com um cheiro bom.";
			mes "� esse mesmo.";
			mes "Ah, sim... a honra do cavaleiro.";
			mes "Primeiro eu falo, depois eu bebo...";
			next;
			mes "[Valdes]";
			mes "Bem, talvez...";
			mes "S� uma provadinha...";
			mes "^666666*Glup glup glup*^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+";]";
			mes "Voc�...";
			mes "Tomou tr�s garrafas!";
			next;
			mes "[Valdes]";
			mes "Ah, delicioso!";
			mes "Certo, amigo, agora me sinto melhor e posso conversar.";
			next;
			mes "["+strcharinfo(PC_NAME)+";]";
			mes "(^666666Qu����?^000000)";
			next;
			mes "[Valdes]";
			mes "Voc� j� deve conhecer as informa��es b�sicas sobre a Gangue Z, seus membros, etc.";
			mes "N�o sei por que causaram uma onda de crimes t�o repentinamente.";
			next;
			mes "[Valdes]";
			mes "O sucesso deles � sem precedentes:";
			mes "Eles at� conseguiram enganar a Guilda dos Arruaceiros v�rias vezes.";
			mes "Eu os investiguei h� seis meses, mas acabei sendo dispensado por meu fracasso.";
			next;
			mes "[Valdes]";
			mes "Sei que a Gangue Z tem muitos informantes a seu servi�o.";
			mes "E que a Guilda dos Arruaceiros ainda est� investigando por conta pr�pria.";
			next;
			mes "[Valdes]";
			mes "Sugiro que voc� encontre uma agente Arruaceira, Marybell, na Guilda dos Arruaceiros.";
			mes "A senha que voc� deve dar a ela � \"^0000FFO alvorecer est� por vir^000000\".";
			next;
			mes "[Valdes]";
			mes "� s� isso que posso lhe dizer.";
			mes "Por favor mande lembran�as a Marybell por mim, e pegue esses bastardos da Gangue Z.";
			mes "^666666*suspiro*^000000";
			mes "Acho que vou descansar um pouco agora.";
			mes "Boa sorte!";
			changequest(3121,3122);
			zdan_edq = 4;
			close;
		} else {
			mes "[Valdes]";
			mes "Ah, mentiroso!";
			mes "Cad� meu vinho?!";
			mes "Minhas ^0000FF5 garrafas de";
			mes "Vinho de Frutas de Morroc^000000?!";
			mes "N�o vou falar nada sem elas!";
			close;
		}
	} else if (zdan_edq == 4) {
		mes "[Valdes]";
		mes "Sugiro que se encontre com Marybell na Guilda dos Arruaceiros, e d� a ela a senha \"^0000FFO alvorecer est� por vir^000000\".";
		close;
	}
	mes "[Valdes]";
	mes "^666666*suspiro*^000000";
	mes "Meu maior desejo � que o cavaleiro mestre me aceite de volta nas tropas.";
	mes "Mas duvido que ele tenha perdoado minha falha.";
	mes "^666666*Solu�o*^000000";
	mes "Minha vida acabou...";
	close;

	OnTouch:
	if (zdan_edq == 2) {
		mes "[Valdes]";
		mes "^666666*suspiro*^000000";
		mes "Malditos ladr�es.";
		mes "Por que eu me importo com eles?!";
		mes "N�o s�o mais meu problema...";
		mes "^666666*Hic*^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
in_rogue,359,116,3	script	Marybell	4_F_ROGUE,{
	if (zdan_edq == 4) {
		mes "[Marybell]";
		mes "Ei. O que voc� quer?";
		next;
		select("A Senha");
		mes "[Marybell]";
		mes "N�o consigo te ouvir.";
		mes "Chegue mais perto e fale ao meu ouvido.";
		next;
		input(.@input$);
		if (.@input$ == "O alvorecer est� por vir") {
			mes "[Marybell]";
			mes "Valdes mandou voc�?!";
			mes "Estou surpresa que ele finalmente tenha falado com algu�m!";
			mes "Certo, se voc� � amigo dele, ent�o vou fazer o que puder para ajudar.";
			mes "O que voc� quer?";
			next;
			switch(select("Perguntar sobre a Gangue Z","Valdes mandou lembran�as")) {
				case 1:
				mes "[Marybell]";
				mes "A Gangue Z de novo?";
				mes "Acho que ele ainda est� bravo por n�o t�-la capturado.";
				mes "N�o � grande coisa para mim contar o que sei, mas ser� que posso confiar em voc�?";
				next;
				mes "[Marybell]";
				mes "Vou testar voc�.";
				mes "V� at� Payon e encontre um velho chamado Moonho Ahn.";
				mes "Ele � um lend�rio apostador, mais conhecido como Meteoro Branco.";
				mes "Se ele confiar em voc�, eu tamb�m confio.";
				next;
				mes "[Marybell]";
				mes "Hehe, mas ele s� vai confiar em voc� se puder derrot�-lo no jogo.";
				mes "Quer voc� volte ou n�o, vou continuar a investigar a Gangue Z pela Guilda dos Arruaceiros e por Valdes.";
				changequest(3122,3123);
				zdan_edq = 5;
				break;
				case 2:
				mes "[Marybell]";
				mes "Estranho.";
				mes "N�o � feitio dele mandar lembran�as assim.";
				mes "Ele n�o est� doente nem nada est�?";
				mes "Se ainda estiver bebendo quando o encontrar, vou fazer picadinho dele!";
				next;
				mes "[Marybell]";
				mes "C�us. Ele n�o lembra que eu me candidatei para esse trabalho por causa dele?";
				mes "Oh, bem, � bom mesmo saber que ele pensa em mim.";
				mes "Que foi?";
				mes "Arruaceiros tamb�m t�m amigos!";
				close;
			}
		} else {
			mes "[Marybell]";
			mes "N�o entendi bem o que voc� disse.";
			next;
			if (Sex == SEX_MALE) {
				mes "[Marybell]";
				mes "Se isso for alguma cantada esquisita, � melhor voc� ter algo melhor a dizer do que isso!";
				close;
			} else {
				mes "[Marybell]";
				mes "O qu�, est� dando em cima de mim?";
				mes "N�o me importo com isso, mas... voc� tem certeza?";
				mes "Hahahahahahahahaha!";
				close;
			}
		}
	} else if ((zdan_edq > 4) && (zdan_edq < 7)) {
		mes "[Marybell]";
		mes "Vou testar voc�.";
		mes "V� at� Payon e encontre um velho chamado Moonho Ahn.";
		mes "Ele � um lend�rio apostador, mais conhecido como Meteoro Branco.";
		mes "Se ele confiar em voc�, eu tamb�m confio.";
		close;
	} else if (zdan_edq == 7) {
		mes "[Marybell]";
		mes "Qu�, voc� voltou?";
		mes "Aaaah, nossa!";
		mes "Essa assinatura em seu bra�o...";
		mes "Voc� realmente o derrotou?";
		mes "Mas como?";
		next;
		zdan_edq = 8;
		mes "[Marybell]";
		mes "Espere, deixe-me ver para ter certeza.";
		mes "� essa mesmo.";
		mes "Essa � a assinatura que ele usava quando era o Meteoro Branco.";
		next;
		mes "[Marybell]";
		mes "Como voc� o derrotou?";
		mes "Da �ltima vez, ele tirou todo o meu dinheiro!";
		mes "Voc� deve ser mesmo um g�nio para derrotar esse cara.";
		mes "Acho que subestimei voc�.";
		next;
		mes "[Marybell]";
		mes "Espere, antes de qualquer coisa, preciso contar pra todo mundo que algu�m derrotou o Meteoro Branco.";
		mes "Eles n�o v�o acreditar!";
		close;
	} else if (zdan_edq == 8) {
		mes "[Marybell]";
		mes "Bem, prometi contar a voc� o que sei sobre a Gangue Z, e vou cumprir.";
		mes "O que quer me perguntar?";
		next;
		while(true) {
			switch(select("Objetivo da Gangue Z","Movimentos Recentes da Gangue Z","Fortaleza da Gangue Z","Obrigado pela dica!")) {
				case 1:
				mes "[Marybell]";
				mes "Na verdade, n�o sei o que planejam fazer, mas obviamente n�o deve ser nada muito bom.";
				mes "Pessoalmente, acho que eles s� querem perturbar o povo o m�ximo poss�vel.";
				next;
				mes "[Marybell]";
				mes "Algu�m poderia conquistar o mundo, acho, com o tal Livro dos Mist�rios Proibidos mas n�o acho que eles sejam t�o... engenhosos.";
				next;
				++.@a;
				break;
				case 2:
				mes "[Marybell]";
				mes "Bem, a Gangue Z � respons�vel por uma s�rie de roubos recentes.";
				mes "Eles t�m roubado apenas j�ias como diamantes, rubis e esmeraldas.";
				mes "N�o sei bem o porqu�...";
				next;
				++.@b;
				break;
				case 3:
				mes "[Marybell]";
				mes "Bem, n�o sabemos onde est�o se escondendo.";
				mes "N�o fosse esse o caso, a Gangue Z j� teria sido pega!";
				mes "Eles at� conseguiram escapar de n�s, Arruaceiros.";
				mes "Que loucura, n�?";
				next;
				mes "[Marybell]";
				mes "A Guilda dos Arruaceiros tem a melhor rede de intelig�ncia, ent�o...";
				mes "A Gangue Z deve ter informantes em todo lugar, em todas as cidades.";
				mes "� a �nica maneira deles escaparem da gente.";
				next;
				mes "[Marybell]";
				mes "Ei, podemos aproveitar isso...";
				mes "Se pudermos pegar um dos seus informantes, ele pode acabar confessando onde a Gangue Z est� se escondendo.";
				mes "Vale a pena tentar, n�o �?";
				next;
				++.@c;
				break;
				case 4:
				if ((.@a) && (.@b) && (.@c)) {
					mes "[Marybell]";
					mes "Ah, e mais uma coisa...";
					mes "Soube que eles est�o tentando recrutar em segredo mais membros para a gangue em Morroc.";
					mes "A ousadia desses caras...!";
					next;
					mes "[Marybell]";
					mes "Pode ser uma boa id�ia voc� ir at� Morroc e dar uma olhada.";
					mes "Boa sorte para achar a Gangue Z, ent�o.";
					mes "E se cuide!";
					changequest(3125,3126);
					zdan_edq = 9;
					close;
				} else {
					mes "[Marybell]";
					mes "Ei, estou disposta a dizer a voc� tudo o que eu sei.";
					mes "Depois de todos os apuros que voc� passou, sei que voc� deve ter um monte de perguntas!";
					next;
				}
				break;
			}
		}
	} else if ((zdan_edq > 8) && (zdan_edq < 11)) {
		mes "[Marybell]";
		mes "Ah, e mais uma coisa...";
		mes "Soube que eles est�o tentando recrutar em segredo mais membros para a gangue em Morroc.";
		mes "A ousadia desses caras...! ";
		next;
		mes "[Marybell]";
		mes "N�o soube de mais nada, mas voc� poderia me contar se achar alguma pista?";
		mes "A Guilda dos Arruaceiros quer muito p�r as m�os nessa gangue!";
		close;
	} else if (zdan_edq == 11) {
		mes "[Marybell]";
		mes "Ei, estava procurando voc�!";
		mes "Um dos Arruaceiros enviados para Comodo encontrou este envelope com um informante da Gangue Z.";
		mes "Pode ser uma pista!";
		next;
		mes "[Marybell]";
		mes "O estranho � que o informante lutou tanto para proteger um peda�o de papel em branco...";
		mes "Mas n�s sabemos que n�o � esse o caso, n�o � mesmo?";
		next;
		mes "[Marybell]";
		mes "Eles devem ter usado algum tipo de tinta invis�vel secreta.";
		mes "Enfim, dei o papel para um decifrador profissional, e a essa hora ele j� deve ter terminado.";
		mes "De qualquer forma...";
		next;
		mes "[Marybell]";
		mes "Pensei que talvez voc� quisesse falar com ele e ver se ele j� terminou.";
		mes "Ele se chama Gooho Ahn, est� em Payon e � um dos melhores decifradores do reino.";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Gooho Ahn?";
		mes "Por que acho que conhe�o esse nome?";
		mes "� t�o familiar...";
		next;
		mes "[Marybell]";
		mes "Acho que � porque Gooho � o irm�o mais novo de Moonho, o apostador lend�rio que por acaso voc� derrotou.";
		next;
		mes "[Marybell]";
		mes "Bem, mas isso n�o importa agora.";
		mes "Voc� pode falar com Gooho";
		mes "Ahn e ver o que ele descobriu?";
		changequest(3128,3129);
		zdan_edq = 12;
		close;
	} else if ((zdan_edq > 11) && (zdan_edq < 14)) {
		mes "[Marybell]";
		mes "Ei, por que n�o fala com Gooho Ahn em Payon, e pergunta se ele terminou de decifrar a carta secreta?";
		close;
	} else if (zdan_edq == 14) {
		mes "[Marybell]";
		mes "Ah, Gooho decifrou tudo?";
		mes "Vejamos...";
		mes "Era algo sobre o Livro dos Mist�rios Proibidos...";
		mes "Ah. A� est�! O local do esconderijo da Gangue Z!";
		mes "Hehehehe! Pegamos!";
		next;
		mes "[Marybell]";
		mes "Um dos Arruaceiros seguiu o informante que levava esta carta, mas ele simplesmente sumiu durante a ca�ada...";
		mes "Assim, como se por m�gica, acho.";
		mes "Ent�o n�o sabemos o local exato do esconderijo.";
		next;
		mes "[Marybell]";
		mes "Mesmo assim, temos absoluta certeza de que fica perto do caminho secreto para o subsolo ao sul de Morroc.";
		mes "Hum, mas n�o podemos deixar voc� vir com a Guilda de Arruaceiros.";
		next;
		mes "[Marybell]";
		mes "Desculpe, eu sei, assuntos oficiais e tudo o mais.";
		mes "Ah, j� sei.";
		mes "N�s vamos ca��-los em separado, e quem os encontrar primeiro pode dar uma boa surra neles!";
		changequest 3131,3132;
		zdan_edq = 15;
		close;
	} else if ((zdan_edq > 14) && (zdan_edq < 18)) {
		mes "[Marybell]";
		mes "Temos certeza absoluta de que o esconderijo da Gangue Z est� perto do caminho secreto para o subsolo ao sul de Morroc.";
		mes "Voc� sabe onde fica?";
		next;
		mes "[Marybell]";
		mes "Ah, j� sei.";
		mes "N�s vamos ca��-los em separado, e quem os encontrar primeiro pode dar uma boa surra neles!";
		close;
	} else if (zdan_edq > 18) {
		mes "[Marybell]";
		mes "�timo trabalho!";
		mes "Voc� capturou a Gangue Z!";
		mes "O reino deve ter lhe dado uma boa recompensa, n�?";
		next;
		mes "[Marybell]";
		mes "Valdes queria muito captur�-los sozinho, mas sei que ele vai gostar de ouvir as novidades.";
		mes "Talvez ele e eu celebremos bebendo, mais tarde.";
		next;
		mes "[Marybell]";
		mes "Ei, foi muito bom trabalhar com voc�, muito bom mesmo.";
		mes "Talvez a gente possa trabalhar juntos de novo uma outra hora, por que n�o?";
		close;
	} else if (BaseJob == Job_Thief) {
		mes "[Marybell]";
		mes "Essa Gangue Z est� engasgada na garganta da Guilda dos Arruaceiros.";
		mes "Ningu�m foge da gente! Ningu�m!";
		mes "Mas...";
		mes "Mesmo assim eles conseguem.";
		next;
		mes "[Marybell]";
		mes "N�o h� muita coisa aqui que possa interessar a voc�, mas fique � vontade para olhar.";
		close;
	}
}

// ------------------------------------------------------------------
payon,244,62,3	script	Moonho Ahn	4_M_HUGRANFA,{
	if (zdan_edq == 5) {
		mes "[Moonho Ahn]";
		mes "Hahaha, o que traz um jovem como voc� at� mim?";
		mes "Voc� n�o veio fazer o que estou pensando... ou veio?";
		next;
		switch(select("Voc� � o Meteoro Branco?","Vim desafiar voc�.")) {
			case 1:
			mes "[Moonho Ahn]";
			mes "J� faz tanto tempo que n�o ou�o esse nome...";
			mes "Estou aposentado, e parece que ningu�m quer mais me desafiar.";
			next;
			mes "[Moonho Ahn]";
			mes "Que �poca foi";
			mes "aquela... Naquele tempo, somente Dalho Kwak conseguia me desafiar de verdade.";
			mes "O que ser� que ele anda fazendo?";
			close;
			case 2:
			mes "[Moonho Ahn]";
			mes "Ah, eu tinha raz�o...!";
			mes "Voc� veio desafiar a mim!";
			mes "J� faz muito tempo...";
			mes "Tudo bem. Eu aceito.";
			mes "Entretanto eu vou definir as regras.";
			next;
			mes "[Moonho Ahn]";
			mes "Estou velho demais para jogar os jogos complicados que adorava no passado.";
			mes "Vamos apenas jogar algo simples que chamo de Moedas na M�o.";
			next;
			mes "[Moonho Ahn]";
			mes "Ele � basicamente um jogo de adivinha��o jogado em melhor de 3.";
			mes "Um de n�s vai ser o \"sacudidor\", e o outro vai ser o adivinhador.";
			next;
			mes "[Moonho Ahn]";
			mes "O sacudidor come�a a rodada agitando uma quantidade aleat�ria de moedas em suas m�os fechadas.";
			mes "Depois parando, mantendo as moedas escondidas.";
			next;
			mes "[Moonho Ahn]";
			mes "A outra pessoa, o adivinhador, ent�o vai tentar adivinhar se o valor total das moedas � ^0000FF�mpar^000000 ou ^0000FFPar^000000.";
			mes "Depois disso, o sacudidor revela as moedas...";
			next;
			mes "[Moonho Ahn]";
			mes "Se o adivinhador acertar ganha a rodada.";
			mes "No entanto, se ele errar, ent�o a vit�ria � do sacudidor. ";
			next;
			mes "[Moohno Ahn]";
			mes "N�s nos alternamos nos pap�is.";
			mes "Quando for sua vez de adivinhar, lembre-se de dizer ^0000FFPar^000000 ou ^0000FF�mpar^000000.";
			next;
			mes "[Moonho Ahn]";
			mes "Por �ltimo, eu sou a banca ent�o vou cobrar uma taxa de participa��o.";
			mes "N�o � muito, apenas 500 zenys.";
			mes "S� vamos jogar por divers�o, e n�o para quebrar a banca.";
			next;
			mes "[Moonho Ahn]";
			mes "Por que n�o me d� algum tempo para preparar o jogo?";
			mes "Quando voc� voltar.";
			changequest(3123,3124);
			zdan_edq = 6;
			close;
		}
	} else if (zdan_edq == 6) {
		mes "[Moonho Ahn]";
		mes "Voc� est� pronto para jogar Moedas na M�o?";
		next;
		switch(select("Sim, vamos jogar!","Como esse jogo funciona?")) {
			case 1:
			if (Zeny > 500) {
				Zeny -= 500;
				mes "[Moonho Ahn]";
				mes "�timo, vamos come�ar!";
				mes "Vou deixar voc� ir primeiro.";
				next;
				mes "*sacode sacode*";
				mes "Adivinhe!";
				mes "� Par ou �mpar?";
				next;
				while(true) {
					.@number = rand(1,2);
					input(.@input$);
					if (((.@input$ == "�mpar") && (.@number == 1)) || ((.@input$ == "Par") && (.@number == 2))) {
						++.@number_right;
						mes "[Moonho Ahn]";
						mes "^0000ff"+.@input$+"^000000?";
						mes "OK, voc� acertou.";
						next;
						if ((.@number_right < 2) && (.@number_false < 2)) {
							mes "^3355FF*sacode sacode*";
							mes "Adivinhe!";
							mes "� Par ou �mpar?^000000";
							next;
						}
					} else if (((.@input$ == "�mpar") && (.@number == 2)) || ((.@input$ == "Par") && (.@number == 1))) {
						++.@number_false;
						mes "[Moonho Ahn]";
						mes "Bem, eu ganhei.";
						next;
						if ((number_right < 2) && (number_false <2)) {
							mes "^3355FF*sacode sacode*";
							mes "Adivinhe!";
							mes "� Par ou �mpar?^000000";
							next;
						}
					}
					if (.@number_right == 2) {
						mes "[Moonho Ahn]";
						mes "Ah, voc� venceu esta rodada.";
						mes "Mas o jogo apenas come�ou.";
						mes "A pr�xima rodada vai ser minha!";
						++.@win;
						next;
						break;
					}
					else if (.@number_false == 2) {
						mes "[Moonho Ahn]";
						mes "Parece que eu ganhei esta rodada.";
						mes "Acho que ainda levo jeito para jogar, afinal!";
						++.@lose;
						next;
						break;
					}
					if ((.@input$ != "�mpar") && (.@input$ !="Odd")) {
						mes "[Moonho Ahn]";
						mes "Voc� s� pode dizer";
						mes "^0000FFPar^000000 ou ^0000FF�mpar^000000 na sua aposta.";
						mes "Tente de novo.";
						next;
					}
				}
				mes "[Moonho Ahn]";
				mes "� hora da segunda rodada.";
				mes "Desta vez, eu vou tentar adivinhar, e voc� sacode as moedas.";
				next;
				while(true) {
					mes "["+ strcharinfo(PC_NAME) +"]";
					mes "(^666666O que devo colocar?^000000)";
					next;
					.@amuro = rand(1,2);
					if (select("�mpar","Par") == 1) {
						if (.@amuro == 1) {
							++.@number_false_2;
							mes "[Moonho Ahn]";
							mes "Vejamos...";
							mes "� ^0000FF�mpar^000000, n�o �?";
							next;
							mes "[Moonho Ahn]";
							mes "Parece que venci!";
							mes "Hahahahahahaha!";
							next;
						} else if (.@amuro == 2) {
							++.@number_right_2;
							mes "[Moonho Ahn]";
							mes "Vejamos...";
							mes "� Par, n�o �?";
							next;
							mes "[Moonho Ahn]";
							mes "Eu perdi?";
							mes "Ent�o � ^0000FF�mpar^000000...";
							next;
						}
						if (.@number_right_2 == 2) {
							++.@win;
							mes "[Moonho Ahn]";
							mes "Belo trabalho.";
							mes "Eu n�o esperava que voc� fosse me derrotar...";
							mes "Hahahahahaha!!";
							next;
							break;
						} else if (.@number_false_2 == 2) {
							++.@lose;
							mes "[Moonho Ahn]";
							mes "Hahaha! Desculpe, mas eu ganhei.";
							mes "Eu ainda levo jeito nisso!";
							next;
							break;
						}
					} else {
						if (.@amuro == 1) {
							++.@number_right_2;
							mes "[Moonho Ahn]";
							mes "Vejamos...";
							mes "� �mpar, n�o �?";
							next;
							mes "[Moonho Ahn]";
							mes "Eu perdi, �?";
							mes "Ent�o era ^0000ffPar^000000...";
							next;
						} else if (.@amuro == 2) {
							++.@number_false_2;
							mes "[Moonho Ahn]";
							mes "Vejamos...";
							mes "� ^0000FFPar^000000, n�o �?";
							next;
							mes "[Moonho Ahn]";
							mes "Parece que venci!";
							mes "Hahahahahahaha!";
							next;
						}
						if (.@number_right_2 == 2) {
							++.@win;
							mes "[Moonho Ahn]";
							mes "Belo trabalho.";
							mes "Eu n�o esperava que voc� fosse me derrotar...";
							mes "Hahahahahaha!!";
							next;
							break;
						} else if (.@number_false_2 == 2) {
							++.@lose;
							mes "[Moonho Ahn]";
							mes "Hahaha!";
							mes "Desculpe, mas eu ganhei.";
							mes "Eu ainda levo jeito nisso!";
							next;
							break;
						}
					}
				}
				if (.@win == 2) {
					mes "[Moonho Ahn]";
					mes "Voc� � mesmo incr�vel!";
					mes "� hora do t�tulo de Meteoro Branco ser passado para algu�m de maior valor...";
					mes "Voc� � o novo Meteoro Branco!";
					next;
					mes "["+strcharinfo(PC_NAME)+"]";
					mes "� mesmo? Hm, pode deixar isso por escrito, por favor?";
					mes "Significaria muito para mim!";
					next;
					mes "[Moonho Ahn]";
					mes "Ah, voc� quer uma carta de recomenda��o ou um selo de aprova��o, certo?";
					mes "Hehe, quanto orgulho voc� tem.";
					mes "Fique parado um segundo.";
					next;
					mes "^3355FF*Escreve Escreve*^000000";
					next;
					mes "["+strcharinfo(PC_NAME)+";]";
					mes "O que esse rabisco no meu punho quer dizer?";
					next;
					mes "[Moonho Ahn]";
					mes "Esse � o sinal do Meteoro Branco.";
					mes "Todos que me conhecerem v�o reconhecer sua autenticidade.";
					next;
					mes "["+strcharinfo(PC_NAME)+";]";
					mes "Muito obrigado pelo jogo divertido!";
					mes "Preciso ir agora, mas talvez a gente volte a jogar um dia desses...";
					next;
					mes "[Moonho Ahn]";
					mes "Hahaha!";
					mes "Depois de tanto tempo, � muito bom ter jogado com um oponente de valor.";
					mes "Obrigado.";
					changequest(3124,3125);
					zdan_edq = 7;
					close;
				} else if (.@lose == 2) {
					mes "[Moonho Ahn]";
					mes "Desculpe, mas eu venci o jogo.";
					mes "Eu me diverti muito, e d� para ver que foi muito disputado.";
					mes "J� faz muito tempo que eu n�o me divertia tanto jogando!";
					next;
					mes "[Moonho Ahn]";
					mes "Ah, voc� quer jogar de novo?";
					mes "D� para ver que voc� est� ansioso para me derrotar, ent�o fique � vontade para voltar e jogar.";
					mes "Estarei bem aqui, hahaha!";
					close;
				} else {
					mes "[Moonho Ahn]";
					mes "Ah, que empolgante!";
					mes "Cada um de n�s ganhou uma a pr�xima rodada decide quem vence!";
					next;
					mes "[Moonho Ahn]";
					mes "� minha vez de sacudir as moedas.";
					mes "Vamos ver como voc� se sai desta vez...";
					next;
					mes "^3355FF*sacode sacode*";
					mes "Adivinhe!";
					mes "� Par ou �mpar?^000000";
					next;
					while(true) {
						.@number = rand(1,2);
						input .@input$;
						if (((.@input$ == "�mpar") && (.@number == 1)) || ((.@input$ == "Par") && (.@number == 2))) {
							++.@number_right_3;
							mes "[Moonho Ahn]";
							mes "^0000FF"+.@input+"^000000?";
							mes "OK, voc� acertou.";
							next;
							if ((.@number_right_3 < 2) && (.@number_false_3 < 2)) {
								mes "^3355FF*sacode sacode*";
								mes "Adivinhe!";
								mes "� Par ou �mpar?^000000";
								next;
							}
						} else if (((.@input$ == "�mpar") && (.@number == 2)) || ((.@input$ == "Par") && (.@number == 1))) {
							++.@number_false_3;
							mes "[Moonho Ahn]";
							mes "Bem, � ^0000FF"+.@input+"^000000.";
							mes "Parece que venci.";
							next;
							if ((.@number_right_3 < 2) && (.@number_false_3 <2)) {
								mes "^3355FF*sacode sacode*";
								mes "Adivinhe!";
								mes "� Par ou �mpar?^000000";
								next;
							}
						}
						if (.@number_right_3 == 2) {
							mes "[Moonho Ahn]";
							mes "Oh... Voc� venceu...";
							++.@win;
							next;
							break;
						} else if (.@number_false_3 == 2) {
							mes "[Moonho Ahn]";
							mes "Hahaha! Desculpe, mas eu ganhei.";
							mes "Eu ainda levo jeito nisso!";
							++.@lose;
							next;
							break;
						}
						if ((.@input$ != "Par") && (.@input$ !="�mpar")) {
							mes "[Moonho Ahn]";
							mes "Voc� s� pode dizer ^0000FFPar^000000 ou ^0000FF�mpar^000000 na sua aposta.";
							mes "Tente de novo.";
							next;
						}
					}
					if (.@win >= 2) {
						mes "[Moonho Ahn]";
						mes "Voc� � mesmo incr�vel!";
						mes "� hora do t�tulo de Meteoro Branco ser passado para algu�m de maior valor...";
						mes "Voc� � o novo Meteoro Branco!";
						next;
						mes "["+strcharinfo(PC_NAME)+"]";
						mes "� mesmo? Hm, pode deixar isso por escrito, por favor?";
						mes "Significaria muito para mim!";
						next;
						mes "[Moonho Ahn]";
						mes "Ah, voc� quer uma carta de recomenda��o ou um selo de aprova��o, certo?";
						mes "Hehe, quanto orgulho voc� tem.";
						mes "Fique parado um segundo.";
						next;
						mes "^3355FF*Escreve Escreve*^000000";
						next;
						mes "["+strcharinfo(PC_NAME)+";]";
						mes "O que esse rabisco no meu punho quer dizer?";
						next;
						mes "[Moonho Ahn]";
						mes "Esse � o sinal do Meteoro Branco.";
						mes "Todos que me conhecerem v�o reconhecer sua autenticidade.";
						next;
						mes "["+strcharinfo(PC_NAME)+";]";
						mes "Muito obrigado pelo jogo divertido!";
						mes "Preciso ir agora, mas talvez a gente volte a jogar um dia desses...";
						next;
						mes "[Moonho Ahn]";
						mes "Hahaha!";
						mes "Depois de tanto tempo, � muito bom ter jogado com um oponente de valor.";
						mes "Obrigado.";
						changequest(3124,3125);
						zdan_edq = 7;
						close;
					} else if (.@lose == 2) {
						mes "[Moonho Ahn]";
						mes "Desculpe, mas eu venci o jogo.";
						mes "Eu me diverti muito, e d� para ver que foi muito disputado.";
						mes "J� faz muito tempo que eu n�o me divertia tanto jogando!";
						next;
						mes "[Moonho Ahn]";
						mes "Ah, voc� quer jogar de novo?";
						mes "D� para ver que voc� est� ansioso para me derrotar, ent�o fique � vontade para voltar e jogar.";
						mes "Estarei bem aqui, hahaha!";
						close;
					}
				}
			} else {
				mes "[Moonho Ahn]";
				mes "Hum? Voc� n�o tem nem mesmo 500 zenys para pagar um jogo?";
				mes "Bem, se voc� tiver vontade de jogar Moedas na M�o, � s� dizer.";
				close;
			}
			break;
			case 2:
			mes "[Moonho Ahn]";
			mes "Ele � basicamente um jogo de adivinha��o jogado em melhor de 3.";
			mes "Um de n�s vai ser o \"sacudidor\", e o outro vai ser o adivinhador.";
			next;
			mes "[Moonho Ahn]";
			mes "O sacudidor come�a a rodada agitando uma quantidade aleat�ria de moedas em suas m�os fechadas.";
			mes "Depois parando, mantendo as moedas escondidas.";
			next;
			mes "[Moonho Ahn]";
			mes "A outra pessoa, o adivinhador, ent�o vai tentar adivinhar se o valor total das moedas � ^0000FF�mpar^000000 ou ^0000FFPar^000000.";
			mes "Depois disso, o sacudidor revela as moedas...";
			next;
			mes "[Moonho Ahn]";
			mes "Se o adivinhador acertar, ganha a rodada.";
			mes "No entanto, se ele errar, ent�o a vit�ria � do sacudidor. ";
			next;
			mes "[Moohno Ahn]";
			mes "N�s nos alternamos nos pap�is.";
			mes "Quando for sua vez de adivinhar, lembre-se de dizer ^0000FFPar^000000 ou ^0000FF�mpar^000000.";
			next;
			mes "[Moonho Ahn]";
			mes "Por �ltimo, eu sou a banca, ent�o vou cobrar uma taxa de participa��o.";
			mes "N�o � muito, apenas 500 zenys.";
			mes "S� vamos jogar por divers�o, e n�o para quebrar a banca.";
			close;
		}
	}
	mes "[Moonho Ahn]";
	mes "Ainda me lembro daquela �ltima lend�ria partida com Dalho Kwak.";
	mes "Aquele homem era um oponente de respeito.";
	mes "Ele podia adivinhar as m�os de cartas dos outros mais r�pido do que qualquer um!";
	next;
	mes "[Moonho Ahn]";
	mes "Puxa, sinto falta de competir com ele.";
	mes "O que ser� que ele anda fazendo?...";
	close;
}

// ------------------------------------------------------------------
payon,192,176,3	script	Gooho Ahn	4_M_KHKYEL,{
	if (zdan_edq == 12) {
		mes "[Gooho Ahn]";
		mes "Oh, ol�, aventureiro.";
		mes "Hm, h� alguma coisa que voc� queira de mim?";
		emotion(e_what,1);
		next;
		select("Pedido de Decifra��o da Guilda dos Arruaceiros");
		mes "[Gooho Ahn]";
		mes "Ah, Marybell mandou voc�?";
		mes "Entendo.";
		mes "Estou suando a camisa tentando decifrar esta carta.";
		mes "Quer dar uma olhada?";
		next;
		mes "[Gooho Ahn]";
		mes "Ela parece apenas um peda�o de papel em branco.";
		mes "Mas se voc� usar a quantidade certa de calor e luz, poder� ler seu conte�do.";
		mes "Essa � uma criptografia rara!";
		emotion(e_omg,1);
		next;
		mes "[Gooho Ahn]";
		mes "At� agora, s� decifrei uma parte do conte�do da carta.";
		mes "Infelizmente, fiquei sem os materiais de que preciso para medir quanta luz e calor eu preciso para decifrar a mensagem.";
		next;
		mes "[Gooho Ahn]";
		mes "Estou muito ocupado aqui, mas se voc� est� trabalhando com Marybell, acho que n�o vai se importar em fazer um favor para mim.";
		mes "Voc� pode coletar os materiais de que preciso?";
		next;
		mes "[Gooho Ahn]";
		mes "Preciso de";
		mes "^0000FF20 Lenhas em Brasa^000000,";
		mes "^0000FF1 Palito de F�sforo^000000,";
		mes "^0000FF2 unidades de �lcool^000000 e";
		mes "^0000FF10 Cora��es Incandescentes^000000.";
		next;
		mes "[Gooho Ahn]";
		mes "Quando tiver as coisas de que preciso, poderei decifrar o resto desta carta secreta da Gangue Z.";
		changequest(3129,3130);
		zdan_edq = 13;
		close;
	}
	if (zdan_edq == 13) {
		mes "[Gooho Ahn]";
		mes "Ent�o, voc� trouxe as coisas de que preciso para medir quanta luz e calor preciso para revelar o resto desta carta secreta da Gangue Z?";
		next;
		if ((countitem(Live_Coal) > 19) && (countitem(Alchol) > 1) && (countitem(Matchstick) > 0) && (countitem(Burning_Heart) > 9)) {
			mes "[Gooho Ahn]";
			mes "Oh, �timo.";
			mes "Muito obrigado.";
			mes "Agora vou fazer minha parte, e decifrar o resto desta carta. Hum...";
			mes "S� me d� um segundo para fazer uns ajustes...";
			next;
			delitem(Live_Coal,20);
			delitem(Alchol,2);
			delitem(Matchstick,1);
			delitem(Burning_Heart,10);
			emotion(e_ic);
			mes "[Gooho Ahn]";
			mes "Oh, mas o que...";
			mes "Esta l�ngua � antiga!";
			mes "O Aegye n�o � usado h�... s�culos.";
			mes "Eu vi o Aegye usado no Livro dos Mist�rios Proibidos antes dele ser roubado.";
			next;
			mes "[Gooho Ahn]";
			mes "H� uma lenda sobre uma antiga civiliza��o que serviu de base para nossa sociedade moderna.";
			mes "O Aegye como idioma foi considerado um fen�meno subcultural.";
			next;
			mes "[Gooho Ahn]";
			mes "O Aegye era popular entre crian�as e adolescentes rebeldes, mas era considerado vulgar at� que se tornou predominante.";
			mes "Ent�o, de alguma forma...";
			next;
			mes "[Gooho Ahn] ";
			mes "O Aegye destruiu n�o apenas o idioma deste povo antigo, como tamb�m sua civiliza��o, depois que foi popularizado.";
			mes "� por isso que hoje h� uma forte censura ao Aegye.";
			next;
			mes "[Gooho Ahn] ";
			mes "Na verdade, a exist�ncia do Aegye deveria ser um grande segredo.";
			mes "Esse idioma � respons�vel por um dos maiores desastres de todos os tempos.";
			next;
			mes "["+strcharinfo(PC_NAME)+";]";
			mes "...............................";
			mes "Ent�o, o que diz a carta?";
			next;
			mes "[Gooho Ahn] ";
			mes "Hum...";
			mes "Deixe-me ver...";
			mes "Meu conhecimento sobre o Aegye  � limitado, ent�o...";
			next;
			mes "[Gooho Ahn] ";
			mes "^0000ffSsoom gadrean G anueg Z^000000";
			mes "^0000ffMke tetran nus tered^000000";
			mes "^0000ffyva darsans efui!^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Qu�...?";
			next;
			mes "[Gooho Ahn] ";
			mes "Essa � a natureza do Aegye, ele � ca�tico, e quase ileg�vel!";
			mes "Mesmo assim, esta carta � valios�ssima como material de pesquisa para meus estudos.";
			next;
			mes "[Gooho Ahn] ";
			mes "Bastar� para Marybell se voc� entregar a mensagem a ela como est�.";
			mes "Escute com aten��o, talvez seja melhor at� anotar.";
			next;
			mes "[Gooho Ahn] ";
			mes "^0000ffSsoom gadrean G anueg Z^000000";
			mes "^0000ffMke tetran nus tered^000000";
			mes "^0000ffyva darsans efui!^000000";
			changequest(3130,3131);
			zdan_edq = 14;
			close;
		} else {
			mes "[Gooho Ahn]";
			mes "Depressa, por favor!";
			mes "Tenho certeza de que Marybell est� esperando para descobrir o paradeiro da Gangue Z, e esta carta pode ser uma pista.";
			mes "Ah, e lembre-se...";
			next;
			mes "[Gooho Ahn] ";
			mes "Preciso de";
			mes "^0000FF20 Lenhas em Brasa^000000,";
			mes "^0000FF1 Palito de F�sforo^000000,";
			mes "^0000FF2 unidades de �lcool^000000 e";
			mes "^0000FF10 Cora��es Incandescentes^000000.";
			next;
			mes "[Gooho Ahn]";
			mes "Quando tiver as coisas de que preciso, poderei decifrar o resto desta carta secreta da Gangue Z.";
			close;
		}
	} else if (zdan_edq == 14) {
		mes "[Gooho Ahn] ";
		mes "Por favor, diga a Marybell o conte�do da carta da Gangue Z para que eu possa ficar com o documento original para pesquisa.";
		mes "Talvez seja melhor voc� anotar...";
		next;
		mes "[Gooho Ahn] ";
		mes "^0000ffSsoom gadrean G anueg Z^000000";
		mes "^0000ffMke tetran nus tered^000000";
		mes "^0000ffyva darsans efui!^000000";
		close;
	}
	mes "[Gooho Ahn] ";
	mes "A criptografia � a arte de esconder a verdade em camadas de segredo.";
	mes "Minha especialidade � revelar a verdade e decifrar segredos.";
	close;
}

// ------------------------------------------------------------------
moc_ruins,90,67,3	script	Homem Suspeito#1	4W_M_03,2,2,{
	if ((zdan_edq == 9) && ($@zdan == 0)) {
		$@zdan = 1;
		initnpctimer;
		mes "[????]";
		mes "Eu sei que voc� est� nos perseguindo!";
		mes "Grrrr... MORRA!";
		specialeffect(EF_STEAL);
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Q-quem � voc�?";
		next;
		mes "[????]";
		mes "V-voc� � mais forte do que eu pensava!";
		mes "Vou fugiiir!";
		hideoffnpc("Homem Suspeito#2");
		hideonnpc("Homem Suspeito#1");
		$@zdan = 0;
		stopnpctimer;
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Hein? O homem deve ter largado este bilhete na pressa de fugir daqui.";
		mes "Vamos ver o que ele diz...";
		next;
		mes "";
		mes "";
		mes "^666666Kill "+strcharinfo(PC_NAME)+".";
		mes "Esse samaritano arrogante";
		mes "sabe demais sobre n�s.";
		mes "Falhe em mat�-lo, e a morte ser� boa demais para voc�.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Ent�o, aquele deve ser um informante da Gangue Z.";
		mes "Ele n�o deve ter ido muito longe.";
		mes "Tenho uma chance de peg�-lo!";
		changequest(3126,3127);
		zdan_edq = 10;
		close;
	} else if ((zdan_edq == 9) && ($@zdan > 0)) {
		mes "[Homem Suspeito]";
		mes "...............................";
		mes "...............................";
		mes "............................... ";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Alguma coisa n�o est� certa.";
		mes "Preciso voltar e investigar esta �rea mais tarde, com menos gente vendo...";
		close;
	} else if ((zdan_edq == 10) && ($@zdan > 0)) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Puxa! Eu devia estar fazendo isso em segredo!";
		mes "Melhor tentar investigar esta �rea de novo quando ningu�m estiver por aqui.";
		close;
	} else if ((zdan_edq == 10) && ($@zdan == 0 )) {
		$@zdan = 1;
		initnpctimer;
		mes "[????]";
		mes "Aaii...!";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Ha ha ha! Peguei voc�!";
		mes "Voc� � informante da";
		mes "Gangue Z, n�o �?";
		next;
		mes "[????]";
		mes "Eu... Eu n-n�o";
		mes "sei do que voc� est� falando!";
		mes "N�o fui eu!";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Ent�o est� me dizendo que este bilhete n�o acaba de cair do seu bolso?";
		mes "Que hist�ria � essa de tentar me matar?";
		next;
		mes "[????]";
		mes "I-isso �...";
		mes "Eu n�o�N�o...!";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes " � melhor confessar, ou";
		mes "vou arrastar voc� at� a";
		mes "Cavalaria de Prontera ou a";
		mes "Guilda dos Arruaceiros para que cuidem";
		mes "de voc�. Na verdade, vamos";
		mes "logo para Prontera...";
		next;
		mes "[Informante]";
		mes "N-n�o! Eu conto tudo! Por favor!";
		mes "Minha m�e est� velha!";
		mes "Tenho filhos pra alimentar!";
		mes "Eu... n�o posso ir pra cadeia!";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Tudo bem.";
		mes "Vamos come�ar com voc� me dizendo onde est� a Gangue Z.";
		next;
		mes "[Informante]";
		mes "Eu... Eu realmente n�o sei onde encontr�-los.";
		mes "Estou na base da pir�mide, s� sigo as instru��es que recebo por escrito.";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Quer saber?";
		mes "N�o importa.";
		mes "N�o vou levar voc� para ser preso pelos Cavaleiros de Prontera.";
		mes "Vou deixar voc� com os Arruaceiros.";
		next;
		mes "[Informante]";
		mes "...............................";
		mes "O esconderijo secreto fica no sul de Morroc, e voc� n�o pode entrar no lugar sem a senha secreta.";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Legal. Agora � melhor voc� parar de brincar com a Gangue Z.";
		mes "Caso contr�rio, eu n�o vou ter tanta piedade quando encontrar voc� de novo.";
		next;
		mes "[Informante]";
		mes "O que voc� quiser!";
		mes "S-s� me de-deixa viveeer!";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Preciso voltar para Marybell e ver se ela descobriu alguma informa��o nova.";
		changequest(3127,3128);
		zdan_edq = 11;
		$@zdan = 0;
		stopnpctimer;
		close;
	} else if (zdan_edq < 9) {
		mes "[Homem Suspeito]";
		mes "Que foi? Suma daqui!";
		mes "Ou�a, voc� n�o vai querer mexer comigo.";
		mes "Estou falando s�rio.";
		close;
	} else if ((zdan_edq > 10) && (zdan_edq < 15)) {
		mes "[Informante]";
		mes "Ei, me deixe em paz!";
		mes "S� estou parado aqui na estrada, n�o fiz nada de errado!";
		close;
	} else if (zdan_edq > 14) {
		mes "[Informante]";
		mes "Voc� n�o tem que se preocupar mais comigo.";
		mes "Recomecei a vida, arrumei um trabalho de verdade e tudo o mais.";
		close;
	}
	mes "[Homem Suspeito]";
	mes "Que foi? Suma daqui!";
	mes "Ou�a, voc� n�o vai querer mexer comigo.";
	mes "Estou falando s�rio.";
	close;

	OnTimer30000:
	$@zdan = 0;
	end;

	OnTouch:
	if ((zdan_edq == 9) && ($@zdan == 0)) {
		$@zdan = 1;
		initnpctimer;
		mes "[????]";
		mes "Eu sei que voc� est� nos perseguindo!";
		mes "Grrrr... MORRA!";
		specialeffect(EF_STEAL);
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quem � voc�?";
		next;
		mes "[????]";
		mes "V-voc� � mais forte do que eu pensava!";
		mes "Vou fugiiir!";
		hideoffnpc("Homem Suspeito#2");
		hideonnpc("Homem Suspeito#1");
		$@zdan = 0;
		stopnpctimer;
		next;
		mes "["+strcharinfo(PC_NAME)+"] ";
		mes "Hein? O homem deve ter largado este bilhete na pressa de fugir daqui.";
		mes "Vamos ver o que ele diz...";
		next;
		mes "";
		mes "";
		mes "^666666Mate "+strcharinfo(PC_NAME)+".";
		mes "Esse samaritano arrogante sabe demais sobre n�s.";
		mes "Falhe em mat�-lo, e a morte ser� boa demais para voc�.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+";]";
		mes "Ent�o, aquele deve ser um informante da Gangue Z.";
		mes "Ele n�o deve ter ido muito longe.";
		mes "Tenho uma chance de peg�-lo!";
		changequest(3126,3127);
		zdan_edq = 10;
		close;
	}
	end;
}

// ------------------------------------------------------------------
moc_ruins,78,167,3	script	Homem Suspeito#2	4W_M_03,2,2,{
	if ((zdan_edq == 9) && ($@zdan == 0)) {
		$@zdan = 1;
		initnpctimer;
		mes "[????]";
		mes "Eu sei que voc� est� nos perseguindo!";
		mes "Grrrr... MORRA!";
		specialeffect(EF_STEAL);
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Q-quem � voc�?";
		next;
		mes "[????]";
		mes "V-voc� � mais forte do que eu pensava!";
		mes "Vou fugiiir!";
		hideoffnpc("Homem Suspeito#1");
		hideonnpc("Homem Suspeito#2");
		$@zdan = 0;
		stopnpctimer;
		next;
		mes "["+strcharinfo(PC_NAME)+"] ";
		mes "Em? O homem deve ter largado este bilhete na pressa de fugir daqui.";
		mes "Vamos ver o que ele diz...";
		next;
		mes "";
		mes "";
		mes "^666666Kill "+strcharinfo(PC_NAME)+".";
		mes "Esse samaritano arrogante sabe demais sobre n�s.";
		mes "Falhe em mat�-lo, e a morte ser� boa demais para voc�.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o, aquele deve ser um informante da Gangue Z.";
		mes "Ele n�o deve ter ido muito longe.";
		mes "Tenho uma chance de peg�-lo!";
		changequest(3126,3127);
		zdan_edq = 10;
		close;
	} else if ((zdan_edq == 10) && ($@zdan == 0)) {
		$@zdan = 1;
		initnpctimer;
		mes "[????]";
		mes "Aaii...!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ha ha ha! Peguei voc�!";
		mes "Voc� � informante da";
		mes "Gangue Z, n�o �?";
		next;
		mes "[????]";
		mes "Eu...";
		mes "Eu n-n�o sei do que voc� est� falando!";
		mes "N�o fui eu!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o est� me dizendo que este bilhete n�o acaba de cair do seu bolso?";
		mes "Que hist�ria � essa de tentar me matar?";
		next;
		mes "[????]";
		mes "I-isso �...";
		mes "Eu n�o�N�o...!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "� melhor confessar.";
		mes "Vou arrastar voc� at� a Cavalaria de Prontera ou a Guilda dos Arruaceiros para que cuidem de voc�.";
		mes "Na verdade, vamos logo para Prontera...";
		next;
		mes "[Informante]";
		mes "N-n�o! Eu conto tudo! Por favor!";
		mes "Minha m�e est� velha!";
		mes "Tenho filhos pra alimentar!";
		mes "Eu... n�o posso ir pra cadeia!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Tudo bem.";
		mes "Vamos come�ar com voc� me dizendo onde est� a Gangue Z.";
		next;
		mes "[Informante]";
		mes "Eu... Eu realmente n�o sei onde encontr�-los.";
		mes "Estou na base da pir�mide, s� sigo as instru��es que recebo por escrito.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quer saber?";
		mes "N�o importa.";
		mes "N�o vou levar voc� para ser preso pelos Cavaleiros de Prontera.";
		mes "Vou deixar voc� com os Arruaceiros.";
		next;
		mes "[Informante]";
		mes "...............................";
		mes "O esconderijo secreto fica no sul de Morroc, e voc� n�o pode entrar no lugar sem a senha secreta.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Legal.";
		mes "Agora � melhor voc� parar de brincar com a Gangue Z.";
		mes "Caso contr�rio, eu n�o vou ter tanta piedade quando encontrar voc� de novo.";
		next;
		mes "[Informante]";
		mes "O que voc� quiser!";
		mes "S-s� me de-deixa viveeer!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Preciso voltar para Marybell e ver se ela descobriu alguma informa��o nova.";
		changequest(3127,3128);
		zdan_edq = 11;
		$@zdan = 0;
		stopnpctimer;
		close;
	} else if ((zdan_edq == 9) && ($@zdan > 0)) {
		mes "[Homem Suspeito]";
		mes "... ...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Alguma coisa n�o est�  certa.";
		mes "Preciso voltar e investigar esta �rea mais tarde, com menos gente vendo...";
		close;
	} else if ((zdan_edq == 10) && ($@zdan > 0)) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Puxa! Eu devia estar fazendo isso em segredo!";
		mes "Melhor tentar investigar esta �rea de novo quando ningu�m estiver por aqui.";
		close;
	} else if (zdan_edq < 9) {
		mes "[Thug]";
		mes "Que foi? Suma daqui!";
		mes "Ou�a, voc� n�o vai querer mexer comigo.";
		mes "T� falando s�rio.";
		close;
	} else if ((zdan_edq > 10) && (zdan_edq < 15)) {
		mes "[Informante]";
		mes "Ei, me deixe em paz!";
		mes "S� estou parado aqui na estrada, n�o fiz nada de errado!";
		close;
	} else if (zdan_edq > 14) {
		mes "[Informante]";
		mes "Voc� n�o tem que se preocupar mais comigo.";
		mes "Recomecei a vida, arrumei um trabalho de verdade e tudo o mais.";
		close;
	}
	mes "[Thug]";
	mes "Que foi? Suma daqui!";
	mes "Ou�a, voc� n�o vai querer mexer comigo.";
	mes "Estou falando s�rio.";
	close;

	OnInit:
	hideonnpc("Homem Suspeito#2");
	end;

	OnTimer30000:
	$@zdan = 0;
	end;

	OnTouch:
	if ((zdan_edq == 9) && ($@zdan == 0)) {
		$@zdan = 1;
		initnpctimer;
		mes "[????]";
		mes "Eu sei que voc� ";
		mes "est� nos perseguindo!";
		mes "Grrrr... MORRA!";
		specialeffect(EF_STEAL);
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Q-quem � voc�?";
		next;
		mes "[????]";
		mes "V-voc� � mais forte do que eu pensava!";
		mes "Vou fugiiir!";
		hideoffnpc("Homem Suspeito#1");
		hideonnpc("Homem Suspeito#2");
		$@zdan = 0;
		stopnpctimer;
		next;
		mes "["+strcharinfo(PC_NAME)+"] ";
		mes "Em? O homem deve ter largado este bilhete na pressa de fugir daqui.";
		mes "Vamos ver o que ele diz...";
		next;
		mes "";
		mes "";
		mes "^666666Mate "+strcharinfo(PC_NAME)+".";
		mes "Esse samaritano arrogante sabe demais sobre n�s.";
		mes "Falhe em mat�-lo, e a morte ser� boa demais para voc�.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o, aquele deve ser um informante da Gangue Z.";
		mes "Ele n�o deve ter ido muito longe.";
		mes "Tenho uma chance de peg�-lo!";
		changequest(3126,3127);
		zdan_edq = 10;
		close;
	}
	end;
}

// ------------------------------------------------------------------
moc_fild17,209,235,0	script	Laje estranha	HIDDEN_NPC,4,4,{
	if (((zdan_edq == 15) || (zdan_edq == 16) || (zdan_edq == 17)) && ($@door2 == 0)) {
		mes "[Laje estranha]";
		mes "[Laje estranha]";
		mes "^FF0000*range range*";
		mes "Idigti a eshan.^000000";
		next;
		emotion(e_omg,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Essa placa est� falando comigo!";
		mes "Eu... acho.";
		mes "Agora, onde eu j� ouvi alguma coisa assim?";
		next;
		mes "[Laje estranha]";
		mes "^FF0000*range range*";
		mes "Idigti a eshan.^000000";
		next;
		emotion(e_ic,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ah, sim! � aquela l�ngua esquisita, Aegye, que Gooho Ahn me falou.";
		mes "Ela continua soando como...";
		mes "Uma porcaria de idioma para mim.";
		next;
		mes "[Laje estranha]";
		mes "^FF0000*range range*";
		mes "Idigti a eshan.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, acho";
		mes "que devo falar com ela. Hm...";
		next;
		input(.@input$);
		if (.@input$ == "Weii arr prowd Z G gna") {
			mes "[Laje estranha]";
			mes "^FF0000*range range*";
			mes "Idigti a a.2 eshan.^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Uau! Est� dizendo algo diferente agora!";
			mes "Devo estar fazendo a coisa certa.";
			mes "Agora, o que eu digo?";
			next;
			input(.@input$);
			if (.@input$ == "Aynoen hwo sspotp uys") {
				mes "[Laje estranha]";
				mes "^FF0000*range range*";
				mes "Idigti a a.3 eshan.^000000";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "He! Estou na trilha certa.";
				mes "Agora, o que eu digo?";
				next;
				input(.@input$);
				if (.@input$ == "wlil eb kckide on htier ssa!") {
					mes "[Laje estranha]";
					mes "*Creak Creak*";
					mes "*Creak Creak*";
					next;
					mes "["+strcharinfo(PC_NAME)+"]";
					mes "Um... Now what...?";
					next;
					if ($@door2 == 0) {
						$@door2 = 1;
						mes "Waaaah! Waaah!";
						next;
						mes "["+strcharinfo(PC_NAME)+"]";
						mes "Mas o qu�...?!";
						mes "O que est� acontecendo?!";
						mes "Estou sendo sugado para algum lugar!";
						changequest(3132,3133);
						zdan_edq = 16;
						close2;
						warp "z_agit",98,40;
						end;
					} else {
						mes "Hum? Eu fiz alguma coisa errada?";
						mes "Ela parou de funcionar de repente.";
						next;
						mes "[Laje estranha]";
						mes "^FF0000Rrsoy, rrsoy.";
						mes "Ai cn'at elt yoo ni ofr nwo.";
						mes "Plzea ecmo ckba tela.^000000";
						next;
						mes "^666666*Pzzzzz*^000000";
						next;
						mes "["+strcharinfo(PC_NAME)+"]";
						mes "Eu acho...";
						mes "Acho que vou ter que tentar de novo.";
						close;
					}
				} else {
					mes "[Laje estranha]";
					mes "^666666*Pzzzzz*^000000";
					next;
					mes "["+strcharinfo(PC_NAME)+"]";
					mes "Hein? Esta placa falante n�o est� mais funcionando.";
					mes "Ol�? O que aconteceu com voc�?";
					mes "Ei! Fale comigo!";
					$@door2 = 0;
					close;
				}
			} else {
				mes "[Laje estranha]";
				mes "^666666*Pzzzzz*^000000";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "H�? Esta t�bua n�o est� mais funcionando no momento.";
				mes "Ol�? O que aconteceu com voc�?";
				mes "Ei! Voc� pode falar comigo?";
				$@door2 = 0;
				close;
			}
		}
		else {
			mes "[Laje estranha]";
			mes "^666666*Pzzzzz*^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Hein? Esta placa falante n�o est� mais funcionando.";
			mes "Ol�? O que aconteceu com voc�?";
			mes "Ei! Fale comigo!";
			$@door2 = 0;
			close;
		}
	} else if (((zdan_edq == 15) || (zdan_edq == 16) || (zdan_edq == 17)) && ($@door2 > 0)) {
		mes "[Laje estranha]";
		mes "*Creak Creak*";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Esta placa parece bem estranha.";
		mes "Ela est� fazendo ru�dos...";
		mes "Hum... Talvez isto seja uma pista para a Gangue Z!";
		mes "Vou voltar mais tarde para investigar isso...";
		close;
	} else if (zdan_edq > 17) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Aqui costumava ser onde a Gangue Z se escondia.";
		mes "Nunca mais!";
		close;
	} else {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Esta � uma placa bem estranha.";
		mes "Parece que...";
		mes "Que s�o esses ru�dos? Hum.";
		mes "Estranho.";
		mes "Parece que est� resmungando alguma coisa.";
		close;
	}
	OnInit:
	$@zdan = 0;
	$@door2 = 0;
	$@mosnter = 0;
	end;

	OnTouch:
	if (zdan_edq == 15) {
		mes "^FF0000*Creak Creak*^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Onde estou...?";
		mes "Alguma coisa saiu muito errado, n�o foi?";
		mes "Deixe-me voltaaar!";
		close;
	}
	end;
}

// ------------------------------------------------------------------
z_agit,98,44,0	script	EntranceCheck#1	FAKE_NPC,10,10,{
	OnTouch:
	if (((zdan_edq == 15) || (zdan_edq == 16)) && ($@monster_zgang == 0)) {
		$@monster_zgang = 1;
		donpcevent("#zdan_broad::OnEnable");
	} else if (((zdan_edq == 15) || (zdan_edq == 16)) && ($@monster_zgang > 0)) {
		end;
	} else if (zdan_edq == 17) {
		donpcevent("#ZGuard::OnDisable");
		hideoffnpc("Louis");
		hideoffnpc("Martha");
		hideoffnpc("Catfoii");
	} else {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Onde eu estou...?";
		mes "Algo deu terrivelmente errado, n�o foi?";
		mes "Deixe-me voltaaaar!";
		close2;
		$@monster_zgang = 0;
		$@door2 = 0;
		warp("moc_fild17",209,235);
	}
	end;
}

// ------------------------------------------------------------------
z_agit,98,92,0	script	EntranceCheck#2	FAKE_NPC,10,10,{
	OnTouch:
	if (((zdan_edq == 15) || (zdan_edq == 16)) && ($@monster_zgang == 0)) {
		$@monster_zgang = 1;
		donpcevent("#zdan_broad::OnEnable");
	} else if (((zdan_edq == 15) || (zdan_edq == 16)) && ($@monster_zgang > 0)) {
		end;
	} else if (zdan_edq == 17) {
		donpcevent("#ZGuard::OnDisable");
		hideoffnpc("Louis");
		hideoffnpc("Martha");
		hideoffnpc("Catfoii");
	} else {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Onde eu estou...?";
		mes "Algo deu terrivelmente errado, n�o foi?";
		mes "Deixe-me voltaaaar!";
		close2;
		$@monster_zgang = 0;
		$@door2 = 0;
		warp("moc_fild17",209,235);
	}
	end;
}

// ------------------------------------------------------------------
z_agit,1,1,0	script	#zdan_broad	HIDDEN_NPC,{
	OnInit:
	disablenpc("#zdan_broad");
	stopnpctimer;
	end;

	OnEnable:
	enablenpc("#zdan_broad");
	initnpctimer;
	hideonnpc("Louis");
	hideonnpc("Martha");
	hideonnpc("Catfoii");
	end;

	OnDisable:
	disablenpc "#zdan_broad";
	stopnpctimer;
	end;

	OnTimer3000:
	killmonster("z_agit","#ZGuard::OnMyMobDead");
	mapannounce "z_agit","Catfoii: Hein? Ouvi alguma coisa! Parece que estamos sob ataque!",bc_map,"0xFFFF00";
	end;

	OnTimer5000:
	mapannounce("z_agit","Louis: Ei, Martha! Foi voc� que acabou de entrar?",bc_map,"0xFFFF00");
	end;

	OnTimer7000:
	mapannounce("z_agit","Martha: Louis, est� cego? Fiquei do seu lado o tempo todo! � melhor nos escondemos primeiro.",bc_map,"0xFFFF00");
	end;

	OnTimer9000:
	mapannounce("z_agit","Louis: Um intruso! Ei, Catfoii, que foi isso? Voc� deixou a entrada aberta?",bc_map,"0xFFFF00");
	end;

	OnTimer11000:
	mapannounce("z_agit","Catfoii: Imposs�vel! Tenho uma mem�ria fotogr�fica!",bc_map,"0xFFFF00");
	end;

	OnTimer13000:
	mapannounce("z_agit","Martha: Calem a boca, voc�s dois! N�o sei quem � voc�, mas deve ter muita coragem pra mexer com a Gangue Z!",bc_map,"0xFFFF00");
	end;

	OnTimer15000:
	mapannounce("z_agit","Louis: Catfoii, chame os soldados! Isso � uma emerg�ncia! Detenham o intruso!",bc_map,"0xFFFF00");
	end;

	OnTimer18000:
	mapannounce("z_agit","Catfoii: N�o sei o quanto eles s�o fortes, mas... OK. Pessoal, � luta!",bc_map,"0xFFFF00");
	end;

	OnTimer21000:
	donpcevent("#ZGuard::OnEnable");
	end;

	OnTimer300000:
	killmonster("z_agit","#ZGuard::OnMyMobDead");
	donpcevent("#zdan_broad::OnDisable");
	$@monster_zgang = 0;
	$@door2 = 0;
	end;

	OnTimer350000:
	mapwarp("z_agit","moc_fild17",209,235);
	hideonnpc("Louis");
	hideonnpc("Martha");
	hideonnpc("Catfoii");
	$@monster_zgang = 0;
	$@door2 = 0;
	end;
}

// ------------------------------------------------------------------
-	script	#ZGuard	FAKE_NPC,{
	OnInit:
	disablenpc("#ZGuard");
	end;

	OnEnable:
	enablenpc("#ZGuard");
	initnpctimer;
	monster("z_agit",97,78,"O Guarda de Catfoii",G_SKEL_PRISONER,1,"#ZGuard::OnMyMobDead");
	monster("z_agit",98,79,"O Guarda de Catfoii",G_SKEL_PRISONER,1,"#ZGuard::OnMyMobDead");
	monster("z_agit",96,81,"O Guarda de Catfoii",G_ANTIQUE_FIRELOCK,1,"#ZGuard::OnMyMobDead");
	end;

	OnDisable:
	killmonster("z_agit","#ZGuard::OnMyMobDead");
	stopnpctimer;
	end;

	OnReset:
	killmonster("z_agit","#ZGuard::OnMyMobDead");
	$@monster_zgang = 0;
	end;

	OnMyMobDead:
	if (mobcount("z_agit","#ZGuard::OnMyMobDead") < 1) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Seus covardes da Gangue Z!";
		mes "Saiam e se rendam!";
		mes "J� derrotei seus monstros soldados!";
		next;
		mes "[Martha]";
		mes "O que devemos fazer?";
		next;
		mes "[Catfoii]";
		mes "Essa � nossa pior crise!";
		mes "N�o sei o que fazer!";
		next;
		mes "[Louis]";
		mes "A Gangue Z n�o vai se render ainda!";
		mes "Venham, meus fi�is servidores das sombras!";
		next;
		mes "[Catfoii]";
		mes "N�o, n�o, n�o!";
		mes "Esse bot�o n�o!";
		mes "[Louis]";
		next;
		mes "Hein? Por qu�...?";
		next;
		zdan_edq = 17;
		donpcevent("#ZGuard::OnDisable");
		hideoffnpc("Louis");
		hideoffnpc("Martha");
		hideoffnpc("Catfoii");
		close;
	}
	end;

	OnTimer300000:
	mapwarp("z_agit","moc_fild17",209,235);
	donpcevent("#zdan_broad::OnDisable");
	killmonster("z_agit","#ZGuard::OnMyMobDead");
	$@monster_zgang = 0;
	$@door2 = 0;
	donpcevent("#ZGuard::OnDisable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
z_agit,97,101,3	script	Louis	4_M_RACHMAN1,{
	if (zdan_edq == 17) {
		if (!checkweight(Forbidden_Secret_Art,1)) {
			mes "[Louis]";
			mes "Se mexer com a Gangue Z, voc�... espera.";
			mes "Vamos ter que fazer isso depois.";
			mes "Sabe, quando voc� estiver carregando menos itens.";
			mes "Ent�o, poderemos brigar em paz.";
			close;
		}
		mes "[Louis]";
		mes "O que aconteceu?";
		mes "Cad� as criaturas que iam sair?!";
		mes "Por que n�o estamos mais invis�veis?";
		mes "O que aconteceu?";
		next;
		mes "[Catfoii]";
		mes "Voc� apertou o bot�o para desligar a invisibilidade!";
		mes "Voc� tinha mesmo que fazer isso?!";
		mes "� tudo culpa sua!";
		next;
		mes "[Martha]";
		mes "Argh! Nunca devia ter confiado nesse tolo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o... Gangue Z...";
		mes "E o gato.";
		mes "� hora de entregar voc�s � lei.";
		next;
		mes "[Louis]";
		mes "Eu... N�o posso aceitar nossa derrota!";
		mes "A Gangue Z n�o vai desistir f�cil assim!";
		mes "Venham, meus dem�nios da perdi��o!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "N�o creio que eles venham.";
		next;
		mes "[Louis]";
		mes "...............................";
		mes "N�s nos rendemos.";
		mes "Argh, mas est�vamos t�o perto de conquistar o mundo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Agora, se voc� puder entregar o Livro dos Mist�rios Proibidos...";
		next;
		mes "[Catfoii]";
		mes "Louis!";
		mes "N�o fa�a isso!";
		next;
		mes "[Martha]";
		mes "Vamos nos render logo, Louis.";
		mes "Parece que a Gangue Z est� acabada.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A Guilda dos Arruaceiros est� a caminho para vir pegar voc�s.";
		mes "Voc�s n�o v�o escapar desta vez.";
		next;
		mes "[Louis]";
		mes "Ahhh, droga!";
		mes "T� bom, leve essa droga de livro.";
		mes "Eu n�o ia conseguir us�-lo direito, mesmo.";
		next;
		mes "[Louis]";
		mes "Catfoii, poderia levar esse aventureiro at� a sa�da?";
		mes "N�o posso ag�entar ver o rosto de quem causou minha tr�gica queda...";
		next;
		mes "[Catfoii]";
		mes "T� bom.";
		mes "Entendi.";
		mes "Mas como n�s perdemos?!";
		close2;
		getitem(Forbidden_Secret_Art,1);
		changequest 3133,3134;
		zdan_edq = 18;
		mapwarp("z_agit","moc_fild17",209,235);
		$@monster_zgang = 0;
		$@door2 = 0;
		hideonnpc("Louis");
		hideonnpc("Martha");
		hideonnpc("Catfoii");
		stopnpctimer;
		close;
	} else {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Onde estou...?";
		mes "Alguma coisa saiu muito errado, n�o foi?";
		mes "Deixe-me voltaaar!";
		zdan_edq = 15;
		$@monster_zgang = 0;
		$@door2 = 0;
		close2;
		warp("moc_fild17",209,235);
		end;
	}

	OnInit:
	hideonnpc("Louis");
	end;
}

// ------------------------------------------------------------------
z_agit,99,101,3	script	Martha	4W_F_01,{
	if (zdan_edq == 17) {
		if (!checkweight(Forbidden_Secret_Art,1)) {
			mes "[Martha]";
			mes "Ei, voc� est� carregando coisas demais.";
			mes "� melhor guardar alguns dos seus itens no Armaz�m Kafra ou algo assim.";
			close;
		}
		mes "[Martha]";
		mes "Argh...! O que voc� fez, Louis?";
		next;
		mes "[Louis]";
		mes "O que aconteceu?";
		mes "Cad� as criaturas que iam sair?!";
		mes "Por que n�o estamos mais invis�veis?";
		mes "O que aconteceu?";
		next;
		mes "[Catfoii]";
		mes "Voc� apertou o bot�o para desligar a invisibilidade!";
		mes "Voc� tinha mesmo que fazer isso?!";
		mes "� tudo culpa sua!";
		next;
		mes "[Martha]";
		mes "Argh! Nunca devia ter confiado nesse tolo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o... Gangue Z...";
		mes "E o gato.";
		mes "� hora de entregar voc�s � lei.";
		next;
		mes "[Louis]";
		mes "Eu... N�o posso aceitar nossa derrota!";
		mes "A Gangue Z n�o vai desistir f�cil assim!";
		mes "Venham, meus dem�nios da perdi��o!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "N�o creio que eles venham.";
		next;
		mes "[Louis]";
		mes "...............................";
		mes "N�s nos rendemos.";
		mes "Argh, mas est�vamos t�o perto de conquistar o mundo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Agora, se voc� puder entregar o Livro dos Mist�rios Proibidos...";
		next;
		mes "[Catfoii]";
		mes "Louis!";
		mes "N�o fa�a isso!";
		next;
		mes "[Martha]";
		mes "Vamos nos render logo, Louis.";
		mes "Parece que a Gangue Z est� acabada.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A Guilda dos Arruaceiros est� a caminho para vir pegar voc�s.";
		mes "Voc�s n�o v�o escapar desta vez.";
		next;
		mes "[Louis]";
		mes "Ahhh, droga!";
		mes "T� bom, leve essa droga de livro.";
		mes "Eu n�o ia conseguir us�-lo direito, mesmo.";
		next;
		mes "[Louis]";
		mes "Catfoii, poderia levar esse aventureiro at� a sa�da?";
		mes "N�o posso ag�entar ver o rosto de quem causou minha tr�gica queda...";
		next;
		mes "[Catfoii]";
		mes "T� bom.";
		mes "Entendi.";
		mes "Mas como n�s perdemos?!";
		close2;
		getitem(Forbidden_Secret_Art,1);
		changequest(3133,3134);
		zdan_edq = 18;
		mapwarp("z_agit","moc_fild17",209,235);
		$@monster_zgang = 0;
		$@door2 = 0;
		hideonnpc("Louis");
		hideonnpc("Martha");
		hideonnpc("Catfoii");
		disablenpc("#zdan_broad");
		stopnpctimer;
		close;
	} else {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Onde estou...?";
		mes "Alguma coisa saiu muito errado, n�o foi?";
		mes "Deixe-me voltaaar!";
		zdan_edq = 15;
		$@monster_zgang = 0;
		$@door2 = 0;
		close2;
		warp("moc_fild17",209,235);
		end;
	}

	OnInit:
	hideonnpc("Martha");
	end;
}

// ------------------------------------------------------------------
z_agit,95,101,3	script	Catfoii	4_CAT,{
	if (zdan_edq == 17) {
		if (!checkweight(Forbidden_Secret_Art,1)) {
			mes "[Catfoii]";
			mes "Voc� est� carregando itens demais, livre-se dos seus itens extras.";
			mes "coloque-os no Armaz�m Kafra, venda-os ou coisa assim, antes de voltar.";
			close;
		}
		mes "[Louis]";
		mes "O que aconteceu?";
		mes "Cad� as criaturas que iam sair?!";
		mes "Por que n�o estamos mais invis�veis?";
		mes "O que aconteceu?";
		next;
		mes "[Catfoii]";
		mes "Voc� apertou o bot�o para desligar a invisibilidade!";
		mes "Voc� tinha mesmo que fazer isso?!";
		mes "� tudo culpa sua!";
		next;
		mes "[Martha]";
		mes "Argh! Nunca devia ter confiado nesse tolo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o... Gangue Z...";
		mes "E o gato.";
		mes "� hora de entregar voc�s � lei.";
		next;
		mes "[Louis]";
		mes "Eu... N�o posso aceitar nossa derrota!";
		mes "A Gangue Z n�o vai desistir f�cil assim!";
		mes "Venham, meus dem�nios da perdi��o!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "N�o creio que eles venham.";
		next;
		mes "[Louis]";
		mes "...............................";
		mes "N�s nos rendemos.";
		mes "Argh, mas est�vamos t�o perto de conquistar o mundo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Agora, se voc� puder entregar o Livro dos Mist�rios Proibidos...";
		next;
		mes "[Catfoii]";
		mes "Louis!";
		mes "N�o fa�a isso!";
		next;
		mes "[Martha]";
		mes "Vamos nos render logo, Louis.";
		mes "Parece que a Gangue Z est� acabada.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A Guilda dos Arruaceiros est� a caminho para vir pegar voc�s.";
		mes "Voc�s n�o v�o escapar desta vez.";
		next;
		mes "[Louis]";
		mes "Ahhh, droga!";
		mes "T� bom, leve essa droga de livro.";
		mes "Eu n�o ia conseguir us�-lo direito, mesmo.";
		next;
		mes "[Louis]";
		mes "Catfoii, poderia levar esse aventureiro at� a sa�da?";
		mes "N�o posso ag�entar ver o rosto de quem causou minha tr�gica queda...";
		next;
		mes "[Catfoii]";
		mes "T� bom, .";
		mes "Entendi.";
		mes "Mas como n�s perdemos?!";
		close2;
		getitem(Forbidden_Secret_Art,1);
		changequest(3133,3134);
		zdan_edq = 18;
		mapwarp("z_agit","moc_fild17",209,235);
		$@monster_zgang = 0;
		$@door2 = 0;
		hideonnpc("Louis");
		hideonnpc("Martha");
		hideonnpc("Catfoii");
		disablenpc("#zdan_broad");
		stopnpctimer;
		close;
	} else {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Onde estou...?";
		mes "Alguma coisa saiu muito errado, n�o foi?";
		mes "Deixe-me voltaaar!";
		zdan_edq = 15;
		$@monster_zgang = 0;
		$@door2 = 0;
		close2;
		warp("moc_fild17",209,235);
		end;
	}

	OnInit:
	hideonnpc("Catfoii");
	end;
}

// ------------------------------------------------------------------
morocc,143,63,3	script	Homem Atormentado#nd	4_M_MIDDLE,{
	if (treasure_nd == 0) {
		mes "[Homem Atormentado]";
		mes "O-ol�? Pode me ajudar?";
		mes "Voc� salvaria a vida deste pobre homem se pudesse fazer esse favor.";
		mes "Por favor...";
		next;
		switch(select("Em que posso ajudar?","Ignor�-lo")) {
			case 1:
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Certo, como eu posso ajudar voc�?";
			next;
			mes "[Homem Atormentado]";
			mes "Oh, muito obrigado mesmo!";
			mes "� t�o bom poder falar com algu�m depois de ser ignorado todo esse tempo!";
			mes "Posso parecer ser um mendigo, mas na verdade sou um ca�ador de tesouros de Prontera.";
			next;
			switch(select("Humm... E ent�o?")) {
				case 1:
				mes "[Homem Atormentado]";
				mes "Tinha tanta certeza que encontraria o tesouro em Morroc quando comecei...";
				mes "Fiz toda a pesquisa e a prepara��o.";
				mes "Mas depois de contratar equipes de outros ca�adores e pesquisadores...";
				next;
				mes "[Homem Atormentado]";
				mes "Gastei toda a minha fortuna, e ainda n�o cheguei nem perto de encontrar o tesouro.";
				mes "Eu... Eu n�o tenho dinheiro sequer pra voltar pra casa!";
				emotion(e_sob);
				next;
				mes "[Homem Atormentado]";
				mes "Voc� n�o pode me dar algum dinheiro, para que finalmente eu possa voltar para Prontera?";
				next;
				switch(select("Por que voc� n�o vai andando?:Posso te dar algum dinheiro.")) {
					case 1:
					mes "[Homem Atormentado]";
					mes "Qu�? Voc� n�o acha que se eu pudesse andar at� Prontera, j� n�o teria feito isso?!";
					mes "Por que eu me incomodaria em pedir dinheiro?";
					mes "T� bom, n�o preciso desse tipo de piedade.";
					next;
					mes "[Homem Atormentado]";
					mes "Sabe, eu tinha uma boa dica que ia dividir com voc�, mas se voc� n�o quer dividir, ent�o nem eu!";
					treasure_nd = 1;
					close;
					case 2:
					mes "[Homem Atormentado]";
					mes "Ah, obrigado!";
					mes "Qualquer coisa que voc� puder dar, eu agrade�o!";
					mes "Deus lhe aben�oe!";
					next;
					if (Zeny < 1200) {
						mes "[Homem Atormentado]";
						mes "Humm... Oh, puxa...";
						mes "Voc� est� t�o mal quanto eu.";
						mes "Agrade�o, mas n�o posso pegar seu dinheiro.";
						next;
						mes "[Homem Atormentado]";
						mes "� uma pena, realmente.";
						mes "Se voc� tivesse me dado 1.200 zenys.";
						mes "Eu teria lhe dado uma dica para algo grande...";
						treasure_nd = 1;
						close;
					} else {
						Zeny -= 1200;
						mes "[Homem Atormentado]";
						mes "Vejamos... Eu s� preciso de 1.200 zenys.";
						mes "Isso basta para eu voltar para casa.";
						mes "Bem, n�o posso deixar voc� me dar dinheiro e ficar de m�os abanando, n�o �?";
						next;
						mes "[Homem Atormentado]";
						mes "Lembra do tesouro escondido que eu estava procurando?";
						mes "Diz um rumor que sua localiza��o finalmente foi confirmada.";
						mes "Por que voc� n�o tenta encontr�-lo por sua conta?";
						next;
						mes "[Homem Atormentado]";
						mes "Prefiro que ele v� parar nas m�os de algu�m como voc� do que com um ca�ador rival.";
						mes "Um ca�ador que est� ao norte da cidade aparentemente confirmou a localiza��o do tesouro.";
						next;
						mes "[Homem Atormentado]";
						mes "Bom, ouvi dizer que esse cara ainda n�o voltou para casa, e ainda n�o encontrou o tesouro.";
						mes "Provavelmente ele teve algum problema s�rio.";
						next;
						mes "[Homem Atormentado]";
						mes "Duvido que ele informe a voc� a localiza��o do tesouro facilmente, mas quem sabe?";
						mes "Talvez ele cometa um lapso, e acabe lhe dando alguma pista.";
						treasure_nd = 2;
						close;
					}
				}
			}
			case 2:
			mes "[Homem Atormentado]";
			mes "Por favor! Por favor, espere!";
			mes "Voc� � um aventureiro, n�o �?";
			mes "Tenho informa��es valiosas para compartilhar se voc� puder me dar algum... Ei!";
			mes "Volte! N�o... Eu n�o...";
			close;
		}
	} else if (treasure_nd == 1) {
		mes "[Homem Atormentado]";
		mes "Ah, eu me lembro de voc�.";
		mes "Voc� quer mesmo esse tesouro agora, n�o quer?";
		mes "S� me d� 1.200 zenys para que eu possa voltar para casa, e contarei tudo o que sei.";
		next;
		switch(select("Dar Dinheiro","N�o Dar Dinheiro")) {
			case 1:
			mes "[Homem Atormentado]";
			mes "Ah, boa escolha!";
			mes "E muito obrigado mesmo.";
			mes "Ser� �timo finalmente voltar para casa em Prontera.";
			next;
			if (Zeny < 1200) {
				mes "[Homem Atormentado]";
				mes "Mas o qu�...?!";
				mes "Esse dinheiro n�o � suficiente para eu voltar pra casa!";
				mes "Bem, volte depois, quando conseguir o dinheiro.";
				mes "Estarei esperando.";
				close;
			} else {
				Zeny -= 1200;
				mes "[Homem Atormentado]";
				mes "Lembra do tesouro escondido que eu estava procurando?";
				mes "Diz um rumor que sua localiza��o finalmente foi confirmada.";
				mes "Por que voc� n�o tenta encontr�-lo por sua conta?";
				next;
				mes "[Homem Atormentado]";
				mes "Prefiro que ele v� parar nas m�os de algu�m como voc� do que nas de um ca�ador rival.";
				mes "Um ca�ador que est� ao norte da cidade aparentemente confirmou a localiza��o do tesouro.";
				next;
				mes "[Homem Atormentado]";
				mes "Bom, ouvi dizer que esse cara ainda n�o voltou para casa, e ainda n�o encontrou o tesouro.";
				mes "Provavelmente ele teve algum problema s�rio.";
				next;
				mes "[Homem Atormentado]";
				mes "Duvido que ele informe a voc� a localiza��o do tesouro facilmente, mas quem sabe?";
				mes "Talvez ele cometa um lapso, e acabe lhe dando alguma pista.";
				treasure_nd = 2;
				close;
			}
			case 2:
			mes "[Homem Atormentado]";
			mes "T� legal, fa�a como quiser.";
			mes "Admito que estou um pouco desapontado com voc�.";
			mes "Voc�s aventureiros n�o deviam ser os her�is das pessoas?";
			close;
		}
	} else if (treasure_nd == 2) {
		mes "[Homem Atormentado]";
		mes "Ah, voc� voltou?";
		mes "Ah, voc� deve estar com problemas para encontrar o cara de que falei.";
		mes "Ele est� na parte norte desta cidade. N�o deve ser t�o dif�cil.";
		close;
	} else if (treasure_nd > 10) {
		mes "[Homem Atormentado]";
		mes "Voc� encontrou o tesouro?!";
		mes "Ele... Ele existe mesmo...";
		mes "Desculpe, � que tem sido meu sonho...";
		mes "Sinto vontade de chorar...";
		mes "Oh, n�o sei que sensa��o � essa...";
		next;
		mes "[Homem Atormentado]";
		mes "Quero dizer...";
		mes "Eu me sinto t�o feliz, mas...";
		mes "Gastei toda a minha fortuna...";
		mes "Arruinei minha vida s� para ver o tesouro...";
		close;
	} else {
		mes "[Homem Atormentado]";
		mes "Ent�o, como est� indo a ca�ada ao tesouro?";
		mes "Espero que voc� tenha mais sorte do que eu.";
		mes "Ainda assim, tenho a sensa��o de que voc� vai encontrar.";
		close;
	}
}

// ------------------------------------------------------------------
morocc,102,298,3	script	Homem#zgang	4W_M_02,{
	if (treasure_nd < 2) {
		mes "[Homem]";
		mes "O que voc� quer?";
		mes "Deixe-me em paz.";
		close;
	} else if (treasure_nd == 2) {
		mes "[Homem]";
		mes "O que voc� quer?";
		mes "Deixe-me em paz.";
		next;
		select("Fale-me sobre o tesouro");
		emotion(e_gasp);
		mes "[Homem]";
		mes "Qu�? Ent�o � sobre voc� que me alertaram!";
		mes "J� estava pensando em quando voc� ia aparecer.";
		mes "Prepare-se para morrer!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Humm... Desculpe, mas...";
		mes "Eu s� ouvi dizer que voc� confirmou o local de um tesouro incr�vel, e s� queria perguntar mais sobre ele.";
		mes "S� isso!";
		next;
		mes "[Homem]";
		mes "Qu�? Se voc� s� est� aqui por isso, ent�o como voc� descobriu sobre mim e o tesouro?";
		mes "N�o � todo mundo que sabe disso.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, eu estava falando com esse outro ca�ador de tesouros que...";
		mes "Bem, ele virou um mendigo agora...";
		next;
		mes "[Homem]";
		mes "Oh. Aquele velho?";
		mes "Bem, n�o sei se o tesouro que ele procurava e o que eu encontrei s�o os mesmos.";
		mes "Mas sim, eu conhe�o o cara.";
		next;
		mes "[Homem]";
		mes "Tudo bem.";
		mes "Ent�o, encontrei um tesouro, mas n�o tenho como escav�-lo.";
		mes "Talvez a gente possa se ajudar.";
		mes "Preciso de dinheiro, e voc� quer saber mais, certo?";
		mes "Vamos fazer um acordo.";
		next;
		switch (select("N�o, obrigado","O que voc� est� pensando?")) {
			case 1:
			mes "[Homem]";
			mes "N�o? Bem...";
			mes "N�o h� motivo para voc� confiar em mim agora, suponho.";
			mes "Mas o que voc� pode ganhar caindo fora?";
			treasure_nd = 3;
			close;
			case 2:
			mes "[Homem]";
			mes "Deixe-me contar o que eu sei.";
			mes "Fui contratado para encontrar um tesouro para algumas pessoas.";
			mes "Disseram que eu podia pegar o que quisesse.";
			mes "Mas que eles queriam um item em especial para eles.";
			next;
			mes "[Homem]";
			mes "Eles me pagariam pela entrega ent�o n�o vi a cor do dinheiro.";
			mes "Bem, meu acordo com eles � condicional.";
			mes "N�o posso escavar o tesouro, ent�o eles v�o entender se eu disser que falhei.";
			next;
			mes "[Homem]";
			mes "Mas se voc� o escavar, pode ficar com tudo.";
			mes "Parece bom, n�o?";
			mes "Tudo o que quero � algo que compense todo o trabalho que tive at� agora.";
			next;
			mes "[Homem]";
			mes "Em outras palavras, se voc� me trouxer";
			mes "^FF000020 Esp�lios^000000,";
			mes "^FF00002 P�rolas^000000 e";
			mes "^FF00002 Zarg�nios^000000,";
			mes "poderemos falar mais. Entendeu?";
			treasure_nd = 4;
			next;
			mes "[Homem]";
			mes "Ei, eu poderia estar perdendo ao dar minha parte desse tesouro.";
			mes "S� que mais vale um p�ssaro na m�o do que dois voando.";
			close;
		}
	} else if (treasure_nd == 3) {
		mes "[Homem]";
		mes "Voc� de novo? Deixe-me adivinhar...";
		mes "Voc� reconsiderou o neg�cio que eu tinha em mente, n�o?";
		next;
		switch (select("N�o, na verdade n�o","Acho que sim.")) {
			case 1:
			mes "[Homem]";
			mes "Tem certeza?";
			mes "Ningu�m sairia perdendo nele, voc� sabe.";
			mes "Bem, com exce��o dos caras que me contrataram para encontrar o tesouro.";
			mes "N�s dois sair�amos ganhando.";
			next;
			mes "[Homem]";
			mes "Na minha opini�o, algu�m tem que pegar esse tesouro.";
			mes "N�o posso escav�-lo, mas talvez algu�m como voc� possa...";
			close;
			case 2:
			mes "[Homem]";
			mes "Deixe-me contar o que eu sei.";
			mes "Fui contratado para encontrar um tesouro para algumas pessoas.";
			mes "Disseram que eu podia pegar o que quisesse.";
			mes "Mas que eles queriam um item em especial para eles.";
			next;
			mes "[Homem]";
			mes "Eles me pagariam pela entrega ent�o n�o vi a cor do dinheiro.";
			mes "Bem, meu acordo com eles � condicional.";
			mes "N�o posso escavar o tesouro, ent�o eles v�o entender se eu disser que falhei.";
			next;
			mes "[Homem]";
			mes "Mas se voc� o escavar, pode ficar com tudo.";
			mes "Parece bom, n�o?";
			mes "Tudo o que quero � algo que compense todo o trabalho que tive at� agora.";
			next;
			mes "[Homem]";
			mes "Em outras palavras, se voc� me trouxer";
			mes "^FF000020 Esp�lios^000000,";
			mes "^FF00002 P�rolas^000000 e";
			mes "^FF00002 Zarg�nios^000000,";
			mes "poderemos falar mais. Entendeu?";
			treasure_nd = 4;
			next;
			mes "[Homem]";
			mes "Ei, posso estar perdendo por desistir da minha parte do tesouro, mas vale mais um p�ssaro na m�o do que dois voando.";
			close;
		}
	} else if (treasure_nd == 4) {
		mes "[Homem]";
		mes "Voltou, hein?";
		mes "Voc� trouxe as coisas que pedi?";
		next;
		if ((countitem(Scarlet_Jewel) > 1) && (countitem(Zargon) > 1) && (countitem(Mementos) > 19)) {
			mes "[Homem]";
			mes "Legal. Voc� fez sua parte.";
			mes "E agora � minha vez de cumprir minha parte do acordo.";
			delitem(Scarlet_Jewel,2);
			delitem(Zargon,2);
			delitem(Mementos,20);
			treasure_nd = 5;
			next;
			mes "[Homem]";
			mes "O tesouro est� enterrado ao sul de Morroc.";
			mes "Use o port�o sul para sair da cidade, e ent�o dirija-se ao primeiro campo ao sul.";
			mes "A partir da�, voc� estar� por sua conta.";
			next;
			mes "[Homem]";
			mes "N�o sei exatamente onde o tesouro est� enterrado, mas voc� deve conseguir encontr�-lo nessa �rea geral.";
			mes "Boa sorte.";
			close;
		} else {
			mes "[Homem]";
			mes "Hum, voc� deve ter esquecido o que eu queria.";
			mes "N�o estou pedindo a voc� nada extremamente valioso, estou?";
			mes "Enfim, preste aten��o.";
			next;
			mes "[Homem]";
			mes "� s� me trazer";
			mes "^FF000020 Esp�lios^000000,";
			mes "^FF00002 P�rolas^000000 e";
			mes "^FF00002 Zarg�nios^000000,";
			mes "para a gente falar mais. Entendeu?";
			close;
		}
	} else if (treasure_nd == 5) {
		mes "[Homem]";
		mes "O que ainda est� fazendo aqui?";
		mes "N�o deveria estar procurando pelo tesouro?";
		close;
	} else if (treasure_nd == 6) {
		mes "[Homem]";
		mes "O que ainda est� fazendo aqui?";
		mes "N�o deveria estar procurando pelo tesouro?";
		next;
		select("Eu j� encontrei, mas...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu j� encontrei, mas ele nem se mexe!";
		mes "Acho que est� protegido por magia.";
		mes "Voc� sabe algo sobre isso?";
		next;
		mes "[Homem]";
		mes "Uau, voc� encontrou mesmo?";
		mes "Hehe, voc� � melhor do que eu pensava. Desculpe-me por isso.";
		mes "N�o expliquei a parte da magia porque...";
		mes "Bem, eu n�o achei que voc� chegaria t�o perto.";
		next;
		mes "[Homem]";
		mes "Enfim, tive problemas com essa magia tamb�m.";
		mes "Um cara devia ter vindo me ajudar com isso, mas n�o veio.";
		mes "Fiquei t�o frustrado!";
		next;
		mes "[Homem]";
		mes "Quero dizer, n�o sei nada de magia, n�o entendo como eu deveria usar uma coisa que meus clientes deram.";
		next;
		while (true) {
			switch(select("Quem ia ajudar voc�?","Seus clientes deram o qu�?")) {
				case 1:
				mes "[Homem]";
				mes "Ah, sim. Os caras que me contrataram disseram que se eu esperasse no local.";
				mes "Algu�m eventualmente viria me ajudar com a parte da m�gica.";
				mes "Mas n�o sei quem ele �.";
				next;
				mes "[Homem]";
				mes "Ah, sim.";
				mes "Eles falaram alguma coisa sobre ele vir do oeste, ou algo assim.";
				mes "Ser� que ele est� na parte Oeste de Morroc?";
				next;
				.@joho1 = 1;
				break;
				case 2:
				if (treasure_nd == 7) {
					mes "[Homem]";
					mes "Ah, sim. Eles me deram este documento estranho intitulado \"^FF0000Abre-te^000000\".";
					mes "N�o sei como us�-lo, no entanto.";
					next;
				} else if (treasure_nd == 8) {
					mes "[Homem]";
					mes "Ah, sim. Eles me deram este documento estranho intitulado \"^FF0000Destrancar^000000\".";
					mes "N�o sei como us�-lo, no entanto.";
					next;
				} else {
					mes "[Homem]";
					mes "Ah, sim. Vamos ver, aqui.";
					mes "Ah, aqui est� o documento que me deram.";
					mes "Mas est� um pouco rasgado.";
					next;
					if (rand(1,2) == 1) {
						mes "^3355FFO documento rasgado se intitula \"^FF0000Abre-te^3355FF\".^000000";
						next;
						treasure_nd = 7;
						.@joho2 = 1;
					} else {
						mes "^3355FFO documento rasgado se intitula \"^FF0000Abre-te^3355FF\".^000000";
						next;
						treasure_nd = 8;
						.@joho2 = 1;
					}
				}
			}
			if ((.@joho1 == 1) && (.@joho2 == 1)) {
				break;
			}
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espere, como voc� n�o sabe como usar isto?";
		mes "N�o teve a chance de falar com seus clientes?";
		next;
		mes "[Homem]";
		mes "Nem sequer os encontrei.";
		mes "S� recebo as instru��es deles por correio.";
		mes "Tudo � feito por intermedi�rios com esses caras.";
		mes "Acho que eles tamb�m est�o de olho em mim, mas que importa?";
		next;
		mes "[Homem]";
		mes "Acho que me contrataram porque querem o tesouro mesmo.";
		mes "Mas n�o querem alertar ningu�m de que est�o procurando por ele, ou que o conseguiram.";
		next;
		mes "[Homem]";
		mes "Enfim, tudo o que sei � que esses documentos devem fazer alguma coisa.";
		mes "Mas acho que n�o sou esperto o bastante para descobrir.";
		mes "Talvez voc� tenha melhor sorte com eles.";
		next;
		mes "[Homem]";
		mes "Sabe, se voc� conseguir encontrar o cara que devia me ajudar mas que nunca apareceu.";
		mes "Talvez ele saiba como usar esses documentos.";
		mes "V� em frente e fique com eles.";
		mes "E boa sorte.";
		close;
	} else if ((treasure_nd == 7) || (treasure_nd == 8)) {
		mes "[Homem]";
		mes "Eu j� lhe contei tudo o que eu sei.";
		mes "� melhor voc� procurar esse cara a oeste de Morroc, ou o resto desses documentos rasgados.";
		close;
	} else if ((treasure_nd == 9) || (treasure_nd == 10)) {
		mes "[Homem]";
		mes "Agora, pensando bem, ser� que o tesouro pode ser retirado por duas pessoas?";
		mes "Quero dizer, eles planejaram que eu fosse com aquele cara.";
		mes "Hum... melhor n�o pensar nisso.";
		close;
	} else {
		mes "[Homem]";
		mes "Hehe! Parece que agora posso ir para casa!";
		close;
	}
}

// ------------------------------------------------------------------
comodo,339,224,3	script	Homem Escondido#nd	4_M_SITDOWN,{
	if (treasure_nd < 7) {
		mes "[Homem Escondido]";
		mes "Ei, n�o chegue t�o perto!";
		close;
	} else if ((treasure_nd == 7) || (treasure_nd == 8)) {
		if (zdan_edq > 12) {
			mes "[Homem Escondido]";
			mes "Ei, n�o chegue t�o perto!";
			next;
			select("Por que est� escondido aqui?");
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Por que est� escondido aqui?";
			mes "A Gangue Z n�o contratou voc�  para escavar um tesouro?";
			next;
			mes "[Homem Escondido]";
			mes "Hein? Gangue Z? Tesouro?";
			next;
			mes "[Homem Escondido]";
			mes "Hein? Espere, me diga a verdade.";
			mes "Voc� encontrou mesmo a Gangue Z?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu n�o s� encontrei a Gangue Z, como tamb�m a capturei.";
			mes "Vim procurar por voc� para descobrir mais sobre o tesouro enterrado.";
			next;
			mes "[Homem Escondido]";
			mes "Agora entendi.";
			mes "Voc� deve ter encontrado o outro cara que contrataram para pegar o tesouro, n�o �?";
			mes "Ele est� com metade do feiti�o para abri-lo e eu estou com a outra.";
			next;
			mes "[Homem Escondido]";
			mes "Bem, pode ficar com isto, o resto do feiti�o.";
			mes "Mas preciso alertar que tem alguma coisa estranha com esse feiti�o, e com o tesouro em si.";
			next;
			if (treasure_nd == 7) {
				mes "^3355FFVoc� recebeu um documento rasgado intitulado \"^FF0000S�samo^000000\".";
				treasure_nd = 10;
				next;
			} else {
				mes "^3355FFVoc� recebeu um documento rasgado intitulado \"^FF0000Tesouro^000000\".";
				treasure_nd = 9;
				next;
			}
			mes "[Homem Escondido]";
			mes "N�o entendo por que eles se deram ao trabalho de dividir o feiti�o em duas partes.";
			mes "Deve haver algum motivo.";
			mes "O que quer que seja, deve ser bem importante.";
			next;
			mes "[Homem Escondido]";
			mes "Ser� que voc� precisa de duas pessoas para abrir o tesouro?";
			mes "Bem, que seja.";
			mes "Boa sorte para encontrar o tesouro.";
			mes "E agora, adeus!";
			close;
		} else {
			mes "[Homem Escondido]";
			mes "Ei, n�o chegue t�o perto!";
			next;
			select("Perguntar sobre o tesouro");
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Estou procurando informa��es sobre o tesouro.";
			next;
			emotion(e_omg);
			mes "[Homem Escondido]";
			mes "Voc�... Voc� est� procurando por mim?!";
			mes "Droga, estou encurralado!";
			mes "N�o vai me levar sem luta!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Qu�? N�o, n�o � nada disso.";
			mes "Encontrei um ca�ador de tesouros em Morroc que disse que podia encontrar voc� por aqui.";
			next;
			mes "[Homem Escondido]";
			mes "Ca�ador de tesouros...?";
			mes "Ah, ent�o voc� j� sabe do tesouro...";
			next;
			mes "[Homem Escondido]";
			mes "Se estiver certo, ent�o voc� precisa da outra metade do feiti�o para abrir o tesouro.";
			mes "Pronto, pode ficar com ela.";
			mes "N�o tenho como us�-la, mesmo.";
			next;
			if (treasure_nd == 7) {
				mes "^3355FFVoc� recebeu um documento rasgado intitulado \"^FF0000S�samo^000000\".";
				treasure_nd = 10;
				next;
			} else {
				mes "^3355FFVoc� recebeu um documento rasgado intitulado \"^FF0000Tesouro^000000\".";
				treasure_nd = 9;
				next;
			}
			mes "[Homem Escondido]";
			mes "Agora, poderia dar o fora daqui?";
			mes "Se ainda n�o percebeu, estou me escondendo de algumas pessoas.";
			mes "Disse a voc� tudo o que sei, ent�o me fa�a um favor.";
			mes "N�o diga a ningu�m que estou aqui!";
			close;
		}
	} else if (treasure_nd == 9) {
		mes "[Homem Escondido]";
		mes "Voc� n�o deveria ir escavar o tesouro?";
		mes "Voc� tem as duas partes do feiti�o de que precisa j� lhe dei a parte do \"^FF0000Tesouro^000000\", n�o dei?";
		next;
		if (zdan_edq > 12) {
			mes "[Homem Escondido]";
			mes "Enfim, agora que a Gangue Z foi capturada, j� deve ser seguro eu voltar para casa.";
			close;
		} else {
			mes "[Homem Escondido]";
			mes "Pode me fazer um favor, e dar o fora daqui antes que algu�m descubra meu esconderijo?";
			close;
		}
	} else if (treasure_nd == 10) {
		mes "[Homem Escondido]";
		mes "Voc� n�o deveria ir escavar o tesouro?";
		mes "Voc� tem as duas partes do feiti�o de que precisa.";
		mes "J� lhe dei a parte do \"^FF0000S�samo^000000\", n�o dei?";
		next;
		if (zdan_edq > 12) {
			mes "[Homem Escondido]";
			mes "Enfim, agora que a Gangue Z foi capturada, j� deve ser seguro eu voltar para casa.";
			close;
		} else {
			mes "[Homem Escondido]";
			mes "Pode me fazer um favor, e dar o fora daqui antes que algu�m descubra meu esconderijo?";
			close;
		}
	} else {
		mes "[Homem Escondido]";
		mes "Hehe! Parece que j� � seguro eu sair do esconderijo e ir para casa!";
		mes "Mas talvez eu deva ficar por aqui mais um pouco, s� para garantir.";
		close;
	}
}

// ------------------------------------------------------------------
moc_fild18,108,116,0	script	#treasure	CLEAR_NPC,{
	if (checkweight(Resin,300) == 0) {
		mes "^3355FFVoc� est� carregando muitos itens.";
		mes "N�o h� como voc� sair carregando a Arca do Tesouro assim.^000000";
		close;
	}
	if (treasure_nd == 5) {
		mes "^3355FFH� alguma coisa aqui, enterrada logo abaixo do solo.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Unngh! I-isso n�o...!";
		next;
		mes "^3355FFN�o importa o quanto voc� tente, n�o pode tirar a arca, nem abri-la.";
		mes "H� uma aura m�gica envolvendo a arca, isso pode estar detendo voc�.^000000";
		treasure_nd = 6;
		close;
	}
	else if (treasure_nd == 6) {
		mes "^3355FFO Ca�ador de Tesouros em Morroc deve saber de algo sobre a prote��o m�gica da arca.";
		mes "Pode ser uma boa id�ia perguntar a ele.^000000";
		close;
	}
	else if ((treasure_nd == 7) || (treasure_nd == 8)) {
		mes "^3355FFVoc� tentou lan�ar o feiti�o do documento que recebeu, mas nada aconteceu.";
		mes "Voc� deveria encontrar o outro homem a oeste de Morroc para ver o que ele sabe.^000000";
		close;
	}
	else if (treasure_nd == 9 || treasure_nd == 10) {
		mes "^3355FFVoc� precisa combinar as duas metades do feiti�o nos documentos que voc� recebeu para remover a prote��o m�gica e chegar ao tesouro.^000000";
		next;
		input(.@input$);
		getpartymember(getcharid(CHAR_ID_CHAR));
		.@partymembercount = $@partymembercount;
		if (.@partymembercount > 1) {
			if (((.@input$ == "Abre-te-S�ssamo") && (treasure_nd == 9)) || ((.@input$ == "Destrancar Tesouro") && (treasure_nd == 10))) {
				mes "^3355FFA Gangue Z deve ter dividido o documento do feiti�o em duas partes.";
				mes "Para que algu�m sozinho n�o pudesse abrir a arca.";
				mes "Que bom que voc� trouxe um amigo.^000000";
				next;
				mes "^3355FFVoc� lan�a o feiti� a arca se abre, e voc� pega tudo o que tem dentro.^000000";
				if (zdan_edq == 0) {
					treasure_nd = 11;
				} else {
					treasure_nd = 12;
				}
				getitem(Unlucky_Emerald,1);
				getitem(Branch_Of_Dead_Tree,1);
				getitem(Two_Hand_Sword,1);
				sc_start(SC_CURSE,10000,0,10000);
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "N-n�o! O que est� acontecendo?";
				mes "Esta Esmeralda... deve estar amaldi�oada por uma magia maligna!";
				close;
			} else {
				mes "^3355FFNada aconteceu.";
				mes "Talvez voc� n�o esteja combinando o feiti�o corretamente.";
				mes "Talvez voc� tenha soletrado errado...^000000";
				close;
			}
		} else {
			mes "^3355FFA arca do tesouro n�o se abre.";
			mes "Pensando bem, talvez esse n�o seja trabalho para uma pessoa s�...^000000";
			close;
		}
	} else if (treasure_nd == 11) {
		if (zdan_edq > 0) {
			mes "^3355FFAlgu�m deve ter mexido no local do tesouro depois que voc� saiu.";
			mes "Quem quer que tenha sido deixou sinais claros de sua presen�a.^000000";
			treasure_nd = 12;
			close;
		}
	}
}

// ------------------------------------------------------------------
comodo,139,184,3	script	Estudante#zgang	2_M_SAGE_B,{
	if (jewel_nd < 9) {
		mes "[Estudante]";
		mes "Sou um avaliador de antiguidades.";
		mes "Voc� pode me achar parecido com avaliadores de j�ias.";
		mes "Mas posso avaliar o valor hist�rico de antiguidades, al�m do seu valor monet�rio e art�stico.";
		close;
	} else if (jewel_nd == 9) {
		mes "[Estudante]";
		mes "Oooh. Voc� deve ser quem Ibrahim mandou, certo?";
		mes "Foi voc� quem encontrou a esmeralda rara, uma das j�ias malditas?";
		next;
		mes "[Estudante]";
		mes "Estou muito interessado nas J�ias Malditas, e estive pesquisando-as.";
		mes "Voc� veio � pessoa certa se quiser aprender mais sobre a esmeralda que encontrou.";
		jewel_nd = 11;
		close;
	} else if (jewel_nd == 10) {
		mes "[Estudante]";
		mes "Ol�, em que posso ajudar voc�?";
		next;
		select("Perguntar sobre J�ia Maldita");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Vim aqui perguntar sobre uma J�ia Maldita.";
		next;
		mes "[Estudante]";
		mes "Vejamos... Ah, voc� veio saber sobre o Diamante da Destrui��o?";
		next;
		select("N�o, sobre a Esmeralda do Azar.");
		mes "[Estudante]";
		mes "Ah, a Esmeralda do Azar?";
		mes "Sim, essa foi a mais recente J�ia Maldita a ser descoberta.";
		mes "Vamos, ver, onde coloquei minhas anota��es?";
		next;
		mes "[Estudante]";
		mes "Ser� que voc� se importa em voltar depois?";
		mes "N�o sei bem onde deixei minhas anota��es...";
		jewel_nd = 11;
		close;
	} else if (jewel_nd == 11) {
		mes "[Estudante]";
		mes "Ah, agora vamos ver.";
		mes "H� um registro aqui chamado \"A Hist�ria da J�ia Maldita\".";
		mes "De acordo com ele, ningu�m sabe onde essa j�ia foi encontrada pela primeira vez.";
		next;
		mes "[Estudante]";
		mes "O primeiro incidente com a j�ia envolveu um morador de Comodo que usou a j�ia para pagar uma d�vida de jogo.";
		mes "Ele cometeu suic�dio depois de pagar sua d�vida, uma pena.";
		next;
		mes "[Estudante]";
		mes "Ele n�o contou a ningu�m onde havia encontrado a j�ia antes de morrer.";
		mes "Ent�o n�o temos como determinar a sua verdadeira origem.";
		next;
		mes "[Estudante]";
		mes "Depois de vendida, a j�ia se tornou propriedade de um homem rico.";
		mes "Mas ele perdeu sua fortuna e ficou totalmente arruinado depois de obt�-la.";
		mes "Da� vem seu nome, a \"Esmeralda do Azar\".";
		next;
		mes "[Estudante]";
		mes "Ent�o, a esmeralda caiu nas m�os de uma dama da nobreza que morreu misteriosamente ainda jovem.";
		mes "A esmeralda teve milhares de donos que simplesmente...";
		mes "Morreram.";
		next;
		mes "[Estudante]";
		mes "O mais perturbador � que a maldi��o da esmeralda parece ficar mais forte a cada vida que tira.";
		mes "Hum, e sua j�ia se encaixa perfeitamente nas descri��es, ent�o, hum...";
		next;
		mes "[Estudante]";
		mes "Voc� � o novo dono da Esmeralda do Azar.";
		mes "Ningu�m vai compr�-la de voc� enquanto estiver amaldi�oada.";
		mes "Pelo bem de sua vida, voc� deve romper a maldi��o.";
		next;
		mes "[Estudante]";
		mes "Bem, feiti�os sagrados n�o v�o funcionar com esse tipo de maldi��o.";
		mes "Voc� precisa falar com um xam�.";
		mes "Acho que ele vive em... Alberta?";
		mes "Ele pode invocar os mortos e agir como m�dium.";
		next;
		mes "[Estudante]";
		mes "A id�ia � que voc� fale com os esp�ritos mortos por essa esmeralda, atrav�s do xam�.";
		mes "E sei que ele vai ficar muito empolgado em ver que voc� est� com a Esmeralda do Azar.";
		jewel_nd = 12;
		close;
	} else if (jewel_nd == 12) {
		mes "[Estudante]";
		mes "Por favor, encontre o xam� em Alberta, e pergunte se ele pode ajudar a quebrar a maldi��o da Esmeralda do Azar.";
		close;
	} else if (jewel_nd > 28) {
		mes "[Estudante]";
		mes "Espere, est� me dizendo que a esmeralda foi amaldi�oada pelo esp�rito vingador de um guerreiro?";
		mes "Interessante...";
		mes "Devo registrar isso em minhas anota��es de pesquisa.";
		mes "Obrigado!";
		close;
	} else {
		mes "[Estudante]";
		mes "Algumas j�ias s�o possu�das por fantasmas ou esp�ritos malignos.";
		mes "Que trazem desgra�a para seus donos os levam � morte ou � loucura, esse tipo de coisa.";
		close;
	}
}

// ------------------------------------------------------------------
alberta_in,70,109,5	script	Xam�	4_M_UMOLDMAN,{
	if (!jewel_nd) {
		mes "[Xam�]";
		mes "O reino espiritual � a fonte da minha magia.";
		mes "N�o subestime o poder dos esp�ritos!";
		close;
	} else if ((jewel_nd > 0) && (jewel_nd < 12)) {
		mes "[Xam�]";
		mes "Oh?? Hehehehe!";
		mes "Voc� est� carregando algo muito valioso, n�o est�?";
		close;
	} else if (jewel_nd == 12) {
		mes "[Xam�]";
		mes "Voc�! Sim... Posso sentir";
		mes "todos eles... Os esp�ritos furiosos dos";
		mes "seus ancestrais! Voc� n�o tem";
		mes "feito nenhuma oferenda a eles,";
		mes "tem? Voc� precisa aplac�-los";
		mes "antes que venham perturb�-lo!";
		next;
		mes "[Xam�]";
		mes "R�pido, agora! � ";
		mes "fundamental que voc� me d� ";
		mes "500.000 zenys imediatamente";
		mes "para que eu possa confortar";
		mes "essas almas antes que";
		mes "arru�nem sua vida!";
		next;
		select("Na verdade, tenho uma J�ia Maldita.");
		mes "[Xam�]";
		mes "J�ia...?";
		mes "Ah, uma J�ia Maldita! Ha ha ha!";
		mes "Ent�o � dela que sai essa aura maligna!";
		mes "Enganei-me!";
		mes "Olhe, se importa se eu der uma olhada?";
		next;
		if (!countitem(Unlucky_Emerald)) {
			emotion(e_dots);
			mes "[Xam�]";
			mes "Ent�o esta � a Esmeralda do Azar?";
			mes "Sim, definitivamente est� amaldi�oada.";
			mes "Se voc� n�o romper a maldi��o logo, ela vai consumir sua alma.";
			mes "Isso n�o � nada bom.";
			next;
			mes "[Xam�]";
			mes "Preciso realizar um ritual para quebrar a maldi��o.";
			mes "Vou cobrar 200.000 zenys pelo servi�o.";
			mes "� caro, mas eu vou salvar sua vida e arriscar a minha.";
			jewel_nd = 13;
			close;
		} else {
			mes "[Xam�]";
			mes "Hum? Voc� esqueceu de trazer a j�ia?";
			mes "R�pido, traga-a para mim.";
			mes "Voc� precisa quebrar a maldi��o antes que a j�ia devore sua alma!";
			close;
		}
	} else if (jewel_nd == 13) {
		mes "[Xam�]";
		mes "Trouxe o dinheiro?";
		mes "Precisamos aplacar os esp�ritos que tomam essa alma.";
		mes "Para fazer isso, terei de executar um ritual que ser� oneroso ao meu corpo e esp�rito.";
		next;
		if (Zeny > 199999) {
			mes "[Xam�]";
			mes "Bom, bom.";
			mes "Vejo que voc� trouxe o dinheiro, agora posso come�ar o ritual.";
			mes "Se tudo sair bem, voc� ficar� livre da maldi��o, e eu poderei comprar um terreno em Prontera.";
			Zeny -= 200000;
			jewel_nd = 14;
			next;
			mes "[Xam�]";
			mes "Por favor, volte daqui a pouco depois que eu concluir os preparativos para o ritual.";
			close;
		} else {
			mes "[Xam�]";
			mes "Voc�... Voc� n�o tem 200.000 zenys?";
			mes "Desculpe, mas n�o posso realizar o ritual de gra�a, mesmo que sua alma esteja em risco.";
			close;
		}
	} else if (jewel_nd == 14) {
		mes "[Xam�]";
		mes "Hum... Sabe o dinheiro que voc� me deu?";
		mes "Aparentemente, n�o foi o bastante.";
		mes "Um dos esp�ritos estava para se incorporar, mas...";
		next;
		mes "[Xam�]";
		mes "Ele foi embora bravo quando soube que eu estava tentando quebrar a maldi��o por apenas 200.000 zenys.";
		mes "Eu acho...";
		mes "Acho que preciso de 100.000 zenys a mais para isso funcionar.";
		jewel_nd = 15;
		close;
	} else if (jewel_nd == 15) {
		mes "[Xam�]";
		mes "�timo, voc� voltou!";
		mes "Voc� trouxe os 100.000 zenys como eu pedi?";
		mes "� uma quantia pequena, considerando que vamos salvar sua alma.";
		next;
		if (Zeny > 99999) {
			mes "[Xam�]";
			mes "Ah, perfeito!";
			mes "Com sorte, os esp�ritos ser�o mais cooperativos desta vez.";
			Zeny -= 100000;
			jewel_nd = 16;
			next;
			mes "[Xam�]";
			mes "Sim, o esp�rito vingativo desta j�ia ficar� impressionado com seus esfor�os sinceros.";
			close;
		} else {
			mes "[Xam�]";
			mes "Voc� n�o...?";
			mes "Voc� sabe como � ter sua alma consumida?";
			mes "Deixe-me dizer, � muito mais doloroso do que ter que gastar 100.000 zenys!";
			close;
		}
	} else if (jewel_nd == 16) {
		mes "[Xam�]";
		mes "Finalmente, os esp�ritos se uniram a mim.";
		mes "Agora o ritual pode come�ar.";
		mes "Ohhhhhhhhhhhmmmmm... ";
		next;
		mes "[Xam�]";
		mes "Hhhkkk... Arrrgh...!";
		emotion(e_omg);
		next;
		mes "[" +strcharinfo(PC_NAME)+"]";
		mes ".....?";
		next;
		mes "[Xam�]";
		mes "E-esta esmeralda!";
		mes "Tantas vidas!";
		mes "Dinheiro n�o vai bastar para quebrar a maldi��o!";
		mes "� hora de agir s�rio e acabar com o poder desta j�ia!";
		next;
		mes "[Xam�]";
		mes "Lembre-se dos itens que vou pedir, e volte com eles o mais r�pido poss�vel!";
		mes "As vidas de n�s dois estar�o em risco at� l�!";
		next;
		mes "[Xam�]";
		mes "Traga-me";
		mes "^FF00001 �gua Benta^000000,";
		mes "^ff00001 Sangue Escarlate^000000,";
		mes "^FF00001 Rosa Eterna^000000,";
		mes "^FF00001 Cristal Azul^000000 e";
		mes "^FF00001 Frescor do Vento^000000.";
		next;
		mes "[Xam�]";
		mes "R�pido! Embora os esp�ritos sejam eternos, eles n�o gostam de ficar esperando!";
		mes "N�o questione essa ironia e busque esses itens agora!";
		jewel_nd = 17;
		close;
	} else if (jewel_nd == 17) {
		mes "[Xam�]";
		mes "Voc� trouxe os itens?!";
		mes "R�pido! Coloque-os em minhas m�os!";
		mes "N�o podemos perder mais tempo!";
		next;
		if (countitem(Boody_Red) > 0) && (countitem(Crystal_Blue) > 0) && (countitem(Wind_Of_Verdure) > 0) && (countitem(Witherless_Rose) > 0) && (countitem(Holy_Water) > 0) {
			mes "[Xam�]";
			mes "Gra�as aos c�us.";
			mes "Agora... Deixe-me come�ar...";
			mes "Uhhkk... Argh! Espere!";
			mes "Eu... Vejo algu�m...";
			mes "Coberto de sangue? Sim...";
			mes "Ele est� vendo alguma coisa.";
			delitem(Boody_Red,1);
			delitem(Crystal_Blue,1);
			delitem(Wind_Of_Verdure,1);
			delitem(Witherless_Rose,1);
			delitem(Holy_Water,1);
			next;
			mes "[Xam�]";
			mes "H� uma espada atr�s dele.";
			mes "Ele... esteve em uma luta?";
			mes "Posso sentir...";
			mes "Sua sede de sangue.";
			mes "N�o tenho certeza se ele amaldi�oou a j�ia ou se � mais uma v�tima...";
			next;
			mes "[Xam�]";
			mes "Droga!";
			mes "N�o est� claro para mim!";
			mes "Precisamos descobrir se o que estou vendo � a fonte da maldi��o...";
			mes "O que podemos fazer para... � isso!";
			next;
			mes "[Xam�]";
			mes "N�o sei se ele vai ser �til, mas h� um arque�logo em Juno que pode saber mais sobre esta j�ia em particular.";
			mes "Espero que ele tenha a resposta.";
			jewel_nd = 18;
			next;
			mes "[Xam�]";
			mes "Por ora, a maldi��o da j�ia est� al�m do meu poder.";
			mes "Mas se voc� conseguir descobrir a fonte da maldi��o, ent�o poderei ajudar voc�.";
			close;
		} else {
			mes "[Xam�]";
			mes "Voc�... esqueceu?!";
			mes "Seu corpo e alma est�o em risco, e voc� esqueceu?!";
			next;
			mes "[Xam�]";
			mes "Traga-me";
			mes "^FF00001 �gua Benta^000000,";
			mes "^ff00001 Sangue Escarlate^000000,";
			mes "^FF00001 Rosa Eterna^000000,";
			mes "^FF00001 Cristal Azul^000000 e";
			mes "^FF00001 Frescor do Vento^000000!";
			close;
		}
	} else if (jewel_nd == 18) {
		mes "[Xam�]";
		mes "Esse avaliador de antiguidades...";
		mes "Ele n�o deve saber mais nada sobre a j�ia.";
		mes "Mas o arque�logo em Juno talvez tenha alguma informa��o nova que seja �til.";
		close;
	} else if (jewel_nd == 19) {
		mes "[Xam�]";
		mes "Ah, voc� voltou.";
		mes "Ent�o, descobriu algo novo sobre a Esmeralda do Azar?";
		next;
		select("O arque�logo disse...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O arque�logo disse...";
		mes "Bem, ele disse que n�o h� maldi��o alguma na j�ia.";
		next;
		mes "[Xam�]";
		mes "Qu�? Como ele ousa refutar";
		mes "o que eu disse?!";
		mes "Ele est� me chamando de mentiroso?";
		mes "Havia a alma de um guerreiro vingador dentro da esmeralda!";
		next;
		mes "[Xam�]";
		mes "Mas, pensando bem, n�o h� por que discutir com algu�m que n�o acredita no plano espiritual.";
		mes "Entretanto, eu n�o menti.";
		mes "Minha honra de xam� est� em jogo!";
		jewel_nd = 20;
		next;
		mes "[Xam�]";
		mes "Na verdade, vou provar isso a voc� lendo a mensagem dentro desta esmeralda.";
		mes "Traga-me a j�ia, e vou invocar o esp�rito guerreiro dentro dela.";
		mes "S� me deixe descansar um pouco.";
		close;
	} else if (jewel_nd == 20) {
		if (!countitem(Unlucky_Emerald)) {
			mes "[Xam�]";
			mes "Tudo bem.";
			mes "Por meu orgulho de xam�, vou prestar este servi�o a voc� de gra�a!";
			mes "N�o posso deixar que algu�m pense que sou um charlat�o...";
			next;
			mes "[Xam�]";
			mes "Hummm...";
			mes "Hummm...";
			mes "Eu... Entendo.";
			next;
			mes "[Xam�]";
			mes "Hum. Bem, voc� quer saber?";
			mes "N�o h� maldi��o.";
			mes "No entanto, n�o � verdade que apenas o filho pr�digo de Comodo foi morto por causa desta j�ia.";
			mes "H� muito mais...";
			next;
			mes "[Xam�]";
			mes "V� at� a cidade de Geffen, v� para o oeste e procure pelo ponto mais alto sobre a ponte.";
			mes "Resumindo...";
			mes "Saia de Geffen pelo port�o oeste e encontre um lugar alto.";
			next;
			mes "[Xam�]";
			mes "Confie em mim.";
			mes "Voc� vai encontrar algo l� que vai reagir ao poder dessa esmeralda que voc� possui.";
			next;
			mes "[Xam�]";
			mes "Humpf! Esse arque�logo arrogante!";
			mes "Ele n�o sabe do que est� falando!";
			jewel_nd = 21;
			close;
		} else {
			mes "[Xam�]";
			mes "Voc� n�o est� com a esmeralda?";
			mes "Espero que n�o tenha perdido em algum lugar.";
			close;
		}
	} else if (jewel_nd == 21) {
		mes "[Xam�]";
		mes "V� at� a cidade de Geffen, v� para o oeste e procure pelo ponto mais alto sobre a ponte.";
		mes "Resumindo...";
		mes "Saia de Geffen pelo port�o oeste e encontre um lugar alto.";
		next;
		mes "[Xam�]";
		mes "Confie em mim.";
		mes "Voc� vai encontrar algo l� que vai reagir ao poder dessa esmeralda que voc� possui.";
		mes "N�o esque�a de levar a esmeralda com voc�!";
		close;
	} else if ((jewel_nd == 22) || (jewel_nd == 23)) {
		mes "[Xam�]";
		mes "O que eu lhe disse?";
		mes "Essa j�ia d� muito azar.";
		mes "Mas eu n�o sei por que o guerreiro dentro dela n�o quis falar comigo.";
		mes "O que h�?";
		close;
	} else {
		mes "[Xam�]";
		mes "H� muito tempo que n�o fazia esses rituais.";
		mes "Eu me sinto totalmente drenado de minha energia espiritual.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in04,38,48,3	script	Arque�logo	1_M_JOBTESTER,{
	if (jewel_nd < 18) {
		mes "[Arque�logo]";
		mes "H� tanta coisa a fazer!";
		mes "Como vou cuidar de toda essa pesquisa?";
		mes "Nada de p�nico, nada de p�nico uma coisa de cada vez!";
		close;
	} else if (jewel_nd == 18) {
		mes "[Arque�logo]";
		mes "Ah, ouvi falar de voc� pelo avaliador de antiguidades em Comodo...";
		mes "Foi voc� que encontrou a Esmeralda do Azar, certo?";
		mes "Ser� que se importa se eu der uma olhada?";
		next;
		if (!countitem(Unlucky_Emerald)) {
			mes "[Arque�logo]";
			mes "Ah, n�o � � toa que tanta gente a quer.";
			mes "Essa esmeralda � t�o grande e... � linda!";
			mes "Ent�o...";
			mes "Voc� queria minha ajuda com alguma coisa?";
			next;
			if (select("Perguntar sobre a maldi��o","Exibir J�ia") == 1) {
				emotion(e_heh);
				mes "[Arque�logo]";
				mes "A maldi��o da j�ia?";
				mes "Ha! Voc� acredita nessa velha supersti��o?";
				mes "Oh, ent�o voc� quer quebrar a maldi��o da j�ia?!";
				mes "Voc� n�o morreu ainda, morreu?";
				next;
				mes "[Arque�logo]";
				mes "Isso tudo � besteira!";
				mes "Somente um homem morreu tendo posse desta j�ia.";
				mes "O tal apostador de Comodo que a usou para pagar suas d�vidas de jogo.";
				next;
				mes "[Arque�logo]";
				mes "Acontece que esta j�ia ficou perdida por muito tempo, e acaba de reaparecer.";
				mes "Somente isso.";
				mes "Muitos mitos e lendas cercam j�ias t�o valiosas como esta.";
				next;
				mes "[Arque�logo]";
				mes "Enfim, n�o h� maldi��o.";
				mes "Acredite no que quiser, mas essa � minha opini�o pessoal, baseada em minha pesquisa.";
				jewel_nd = 19;
				close;
			} else {
				mes "[Arque�logo]";
				mes "Nossa...";
				mes "Essa j�ia � mesmo enorme...";
				close;
			}
		} else {
			mes "[Arque�logo]";
			mes "Voc� perdeu a j�ia?";
			mes "Bem, talvez n�o seja t�o ruim.";
			mes "A Hist�ria mostra que muitas pessoas se arruinaram ao se deparar com grandes fortunas, sabe?";
			close;
		}
	} else if (jewel_nd == 22) {
		mes "[Arque�logo]";
		mes "A alma vingativa de um guerreiro est� vagando por a� no mundo dos vivos?";
		mes "N�o acho que posso acreditar no que voc� diz.";
		next;
		mes "[Arque�logo]";
		mes "Pessoalmente acho que o velho xam� � uma fraude, mas...";
		mes "Voc� tem a liberdade de acreditar no que quiser.";
		mes "Mas n�o deixe isso incomodar voc�.";
		close;
	} else if (jewel_nd == 23) {
		mes "[Arque�logo]";
		mes "Est� falando sobre fantasmas de novo?";
		mes "Est� bem. Pelo bem da discuss�o...";
		mes "Vamos dizer que a j�ia realmente est� possu�da pela alma de um guerreiro ca�do.";
		next;
		mes "[Arque�logo]";
		mes "N�o � imposs�vel que pessoas com grandes d�vidas se matem, ou que guerreiros pere�am ao lutar com Kobolds.";
		mes "Ainda assim... vou ver o que descubro.";
		next;
		mes "[Arque�logo]";
		mes "Isso me lembra...";
		mes "Tenho alguns registros sobre um grupo de aventureiros que morreu no campo a oeste de Geffen sobre o qual voc� falou.";
		mes "Deixe-me ver se consigo encontr�-los.";
		jewel_nd = 24;
		close;
	} else if (jewel_nd == 24) {
		mes "[Arque�logo]";
		mes "Ah, voc� voltou!";
		mes "Encontrei esses registros de que lhe falei.";
		mes "� um testemunho do que aconteceu quando os aventureiros morreram a oeste de Geffen.";
		next;
		mes "[Arque�logo]";
		mes "O interessante � que o guerreiro do qual voc� tanto fala n�o foi morto por Kobolds.";
		mes "De acordo com o que este homem escreveu. Vejamos...";
		mes "Ah, est� aqui.";
		next;
		mes "[Arque�logo]";
		mes "^666666Quando o chefe e seus soldados chegaram, a batalha estava terminada.";
		mes "Havia cad�veres por todos os lados.";
		mes "Mas havia tamb�m um guerreiro banhado de sangue semiconsciente, mas vivo.^000000";
		next;
		mes "[Arque�logo]";
		mes "Estranho, n�o �?";
		mes "Isto saiu de um di�rio escrito por um soldado aposentado que vive em Prontera agora.";
		mes "Pode ser uma boa id�ia ver se pode falar com ele.";
		jewel_nd = 25;
		close;
	} else if (jewel_nd == 25) {
		mes "[Arque�logo]";
		mes "H� um soldado aposentado que testemunhou o que aconteceu no campo a oeste de Geffen.";
		mes "Voc� deve tentar encontr�-lo em Prontera, e ver se descobre alguma coisa.";
		close;
	} else if (jewel_nd > 28) {
		mes "[Arque�logo]";
		mes "Ah, isso... Isso � muito profundo.";
		mes "Aquele guerreiro enlouqueceu quando percebeu que era fraco demais para proteger os companheiros?";
		mes "E perdeu totalmente o controle...";
		next;
		mes "[Arque�logo]";
		mes "Melhor eu falar com esse velho soldado e registrar toda a hist�ria.";
		mes "Ser� uma li��o de Hist�ria muito boa para qualquer Espadachim.";
		mes "Obrigado por me contar.";
		close;
	} else {
		mes "[Arque�logo]";
		mes "Estou muito ocupado!";
		mes "Escute, voc� se importa em voltar depois, quando eu n�o estiver t�o cheio de servi�o?";
		close;
	}
}

// ------------------------------------------------------------------
prontera,140,304,5	script	Velho Soldado	4_M_HUOLDARMY,{
	if (jewel_nd == 25) {
		mes "[Soldado Aposentado]";
		mes "� estranho que tantas pessoas queiram falar comigo por algum motivo, mas admito que isso � bom.";
		next;
		switch(select("Perguntar sobre batalhas passadas","Perguntar sobre guerreiro ca�do")) {
			case 1:
			mes "[Soldado Aposentado]";
			mes "Ah, n�o me deixe empolgado.";
			mes "Quando eu come�o a falar de antigamente, n�o paro at� a noite.";
			mes "Foram tempos muitos dif�ceis para se viver, mas s�o boas lembran�as...";
			close;
			case 2:
			mes "[Soldado Aposentado]";
			mes "O guerreiro ca�do...?";
			mes "S� me lembro de um, e me d� um arrepio na espinha sempre que penso nele.";
			mes "Ele tinha mais ou menos a sua idade quando aconteceu...";
			next;
			mes "[Soldado Aposentado]";
			mes "Recebemos um relat�rio sobre um ataque de Kobolds, ent�o fomos mandados para os campos a oeste de Geffen.";
			mes "Mas a batalha estava terminada quando chegamos.";
			mes "J� era tarde demais.";
			next;
			mes "[Soldado Aposentado]";
			mes "Todos os Kobolds foram mortos, Mas...";
			mes "S� havia um guerreiro de p�, banhado em sangue.";
			mes "Quando";
			mes "ele nos viu, simplesmente come�ou a atacar todo mundo!";
			mes "Ele tinha perdido a cabe�a, completamente.";
			next;
			mes "[Soldado Aposentado]";
			mes "N�o tivemos escolha a n�o ser mat�-lo.";
			mes "Foi leg�tima defesa, mas n�o posso deixar de ter pena dele.";
			mes "Todos os seus companheiros estavam mortos.";
			mes "N�o posso imaginar como ele se sentia.";
			next;
			mes "[Soldado Aposentado]";
			mes "Chegamos tarde demais para ver a batalha, mas tenho certeza de que foi horr�vel.";
			mes "Voc� deve estar bem interessado em saber desse soldado.";
			next;
			mes "[Soldado Aposentado]";
			mes "Bem, estou satisfeito por voc� poder saber mais sobre essa hist�ria.";
			mes "H� muito o que se aprender com as experi�ncias dos outros.";
			jewel_nd = 26;
			close;
		}
	} else if ((jewel_nd > 25) && (jewel_nd < 29)) {
		mes "[Soldado Aposentado]";
		mes "N�o me arrependo de termos matado o guerreiro.";
		mes "Fizemos o que t�nhamos que fazer na �poca.";
		close;
	} else if (jewel_nd == 29) {
		mes "[Soldado Aposentado]";
		mes "Oh, � voc� de novo.";
		mes "Queria me perguntar mais sobre o guerreiro?";
		mes "Temo que j� tenha dito a voc� tudo o que sei.";
		next;
		switch(select("Desculpe...","Encontrei o esp�rito do guerreiro.")) {
			case 1:
			mes "[Soldado Aposentado]";
			mes "Tudo bem.";
			close;
			case 2:
			mes "[Soldado Aposentado]";
			mes "Qu�? Como isso � poss�vel?";
			next;
			mes "^3355FFVoc� explica ao soldado aposentado tudo o que aconteceu at� agora.^000000";
			next;
			mes "[Soldado Aposentado]";
			mes " � uma hist�ria e tanto.";
			mes "Ainda assim, estou surpreso que ele n�o quisesse falar com voc� sobre o que aconteceu.";
			mes "Acho que ele ainda guarda sentimentos ruins sobre aquele dia...";
			next;
			mes "[Soldado Aposentado]";
			mes "Bem, acho que n�o importa mais.";
			mes "Lembre-se bem de tudo isso, e aproveite para aprender.";
			next;
			switch(select("Sinto tanta pena dele","Acredita que seja mesmo amaldi�oada?")) {
				case 1:
				mes "[Soldado Aposentado]";
				mes "Bem...";
				mes "N�o sei o que dizer a voc�.";
				mes "Digo, n�o d� realmente para p�r a culpa em ningu�m.";
				mes "Ele apenas perdeu a cabe�a...";
				close;
				case 2:
				mes "[Soldado Aposentado]";
				mes "N�o sei dizer se a j�ia estava amaldi�oada, se o guerreiro iniciou a maldi��o.";
				mes "Ou se a j�ia n�o � amaldi�oada de forma alguma.";
				mes "Sou apenas um velho e simples soldado.";
				next;
				mes "[Soldado Aposentado]";
				mes "De uma coisa sei...";
				mes "Se havia uma maldi��o, esse soldado devia ter sido capaz de super�-la se sua vontade fosse forte o bastante.";
				mes "� meio rude dizer dessa maneira.";
				next;
				mes "[Soldado Aposentado]";
				mes "Guerreiros de verdade t�m a for�a para resistir, para lutar contra a tenta��o, para manter";
				mes "seu foco.";
				mes "Esse cara...";
				mes "Ele n�o foi feito para lutar.";
				jewel_nd = 30;
				next;
				if (!countitem(Unlucky_Emerald)) {
					if (!checkweight(Yggdrasilberry,2)) {
						mes "[Soldado Aposentado]";
						mes "Por que est� carregando tantas coisas com voc�?";
						mes "N�o tem um Armaz�m Kafra para guardar suas tralhas?";
						close;
					}
					mes "[Soldado Aposentado]";
					mes "Quer saber?";
					mes "Se est� t�o preocupado com a maldi��o por que n�o deixa essa j�ia comigo?";
					mes "N�o se preocupe, vou dar um jeito de compensar voc�.";
					next;
					mes "[Soldado Aposentado]";
					mes "Prefiro ficar com ela, do que arriscar que ela afete outras pessoas.";
					mes "Sei que minha vontade � forte o bastante para resistir � maldi��o, sabe se ela realmente existir.";
					delitem(Unlucky_Emerald,1);
					jewel_nd = 31;
					getitem(Old_Blue_Box,1);
					if (BaseLevel < 66) { getitem(Yggdrasilberry,1); }
					else if ((BaseLevel > 65) && (BaseLevel < 75)) { getexp(5000,0); }
					else if ((BaseLevel > 74) && (BaseLevel < 81)) { getexp(18000,0); }
					else if ((BaseLevel > 80) && (BaseLevel < 86)) { getexp(36000,0); }
					else if ((BaseLevel > 85) && (BaseLevel < 91)) { getexp(50000,0); }
					else if ((BaseLevel > 90) && (BaseLevel < 96)) { getexp(80000,0); }
					else if ((BaseLevel > 95) && (BaseLevel < 160)) { getexp(100000,0); }
					else { getitem(Old_Violet_Box,1); }
					next;
					mes "[Soldado Aposentado]";
					mes "Se houver alguma coisa a aprender disso tudo, � que voc� nunca deve sucumbir ao desespero.";
					mes "A f�ria n�o leva a nada, seu poder � uma ilus�o.";
					close;
				} else {
					mes "[Soldado Aposentado]";
					mes "Quer saber?";
					mes "Se est� t�o preocupado com a maldi��o por que n�o deixa essa j�ia comigo?";
					mes "N�o se preocupe, vou dar um jeito de compensar voc�.";
					next;
					mes "[Soldado Aposentado]";
					mes "Prefiro ficar com ela, do que arriscar que ela afete outras pessoas.";
					mes "Sei que minha vontade � forte o bastante para resistir � maldi��o, sabe se ela realmente existir.";
					close;
				}
			}
		}
	}
	else if (jewel_nd == 30) {
		if (!countitem(Unlucky_Emerald)) {
			if (!checkweight(Yggdrasilberry,2)) {
				mes "[Soldado Aposentado]";
				mes "Por que est� carregando tantas coisas com voc�?";
				mes "N�o tem um Armaz�m Kafra para guardar suas tralhas?";
				close;
			}
			delitem(Unlucky_Emerald,1);
			jewel_nd = 31;
			getitem(Old_Blue_Box,1);
			if (BaseLevel < 66) getitem(Yggdrasilberry,1);
			else if ((BaseLevel > 65) && (BaseLevel < 75))  { getexp(5000,0); }
			else if ((BaseLevel > 74) && (BaseLevel < 81))  { getexp(8000,0); }
			else if ((BaseLevel > 80) && (BaseLevel < 86))  { getexp(15000,0); }
			else if ((BaseLevel > 85) && (BaseLevel < 91))  { getexp(20000,0); }
			else if ((BaseLevel > 90) && (BaseLevel < 96))  { getexp(40000,0); }
			else if ((BaseLevel > 95) && (BaseLevel < 160)) { getexp(50000,0); }
			else { getitem(Old_Violet_Box,1); }
			next;
			mes "[Soldado Aposentado]";
			mes "Se houver alguma coisa a aprender disso tudo, � que voc� nunca deve sucumbir ao desespero.";
			mes "A f�ria n�o leva a nada seu poder � uma ilus�o.";
			close;
		} else {
			mes "[Soldado Aposentado]";
			mes "Quer saber?";
			mes "Se est� t�o preocupado com a maldi��o por que n�o deixa essa j�ia comigo?";
			mes "N�o se preocupe, vou dar um jeito de compensar voc�.";
			next;
			mes "[Soldado Aposentado]";
			mes "Prefiro ficar com ela, do que arriscar que ela afete outras pessoas.";
			mes "Sei que minha vontade � forte o bastante para resistir � maldi��o, sabe, se ela realmente existir.";
			close;
		}
	} else if (jewel_nd == 31) {
		mes "[Soldado Aposentado]";
		mes "Bem, voc� descobriu tudo o que havia para saber sobre a Esmeralda do Azar.";
		mes "� hora de voc� esquecer a maldi��o ou o que quer que seja, e encontrar novas aventuras.";
		mes "Ah, a juventude...";
		close;
	} else {
		mes "[Soldado Aposentado]";
		mes "Ah, como sinto falta de antigamente.";
		mes "Ser aposentado � t�o...";
		mes "T�o tedioso!";
		mes "Acho que � hora de eu arrumar um passatempo.";
		close;
	}
}

// ------------------------------------------------------------------
gef_fild08,182,185,0	script	Andarilho	8_DOPPEL,{
	if (jewel_nd < 21) {
		mes "[Andarilho]";
		mes "Sou apenas um errante vagando por este mundo.";
		mes "Por favor, apenas me deixe em paz.";
		close;
	} else if (jewel_nd == 21) {
		if (!countitem(Unlucky_Emerald)) {
			mes "[Andarilho]";
			mes "Isso... Parece com uma Esmeralda que foi minha. Humm...";
			mes "Voc� veio procurar por mim?";
			next;
			mes "[Andarilho]";
			mes "Livre-se dessa coisa agora.";
			mes "� uma j�ia maligna que causa trag�dia onde estiver.";
			mes "Eu me lembro... Tomei essa j�ia de monstros...";
			next;
			mes "[Andarilho]";
			mes "Eu era um homem simples, que sonhava se tornar o maior guerreiro do mundo.";
			mes "Eu estava com a esmeralda quando encontramos um enorme grupo de Kobolds furiosos.";
			next;
			mes "[Andarilho]";
			mes "N�o importa quantos n�s mat�ssemos, n�o pod�amos acabar com eles...";
			mes "E, ent�o... N�s... N�s...";
			mes "Eu... D�i demais lembrar o que aconteceu...";
			jewel_nd = 22;
			hideonnpc("Andarilho");
			stopnpctimer;
			close;
		} else {
			mes "[Andarilho]";
			mes "Por que me invocou?";
			mes "Sou apenas a alma de um guerreiro ca�do, procurando paz.";
			mes "Por favor, n�o me incomode se puder me fazer o favor.";
			close;
		}
	} else if (jewel_nd == 22) {
		mes "[Andarilho]";
		mes "Voc� de novo? Por que ainda est� com a j�ia?!";
		mes "N�o lhe contei sobre eu e meus camaradas?";
		mes "Todos n�s morremos naquele dia, quando os Kobolds nos dominaram!";
		next;
		mes "[Andarilho]";
		mes "S� me deixe voltar ao sono eterno.";
		jewel_nd = 23;
		close;
	} else if (jewel_nd == 25) {
		mes "[Andarilho]";
		mes "Por que voc� me chamou de novo?";
		mes "O que voc� quer de mim?";
		mes "N�o pode me deixar em paz?";
		next;
		select("Voc� foi mesmo morto por Kobolds?");
		mes "[Andarilho]";
		mes "Argh! O que � que voc�  quer dizer?!";
		mes "Saia daqui!";
		hideonnpc "Andarilho";
		stopnpctimer;
		close;
	} else if (jewel_nd == 26) {
		mes "[Andarilho]";
		mes "Voc� continua me importunando.";
		mes "Infelizmente, o poder da j�ia me compele a voltar a este plano...";
		mes "O que � desta vez?";
		next;
		select("Voc� n�o foi morto pelos Kobolds, n�o �?");
		mes "[Andarilho]";
		mes "Quantas vezes vou ter que dizer?";
		mes "Est� dizendo que menti sobre a morte dos meus companheiros?";
		mes "Os mortos n�o falam � perda de tempo.";
		next;
		mes "[Andarilho]";
		mes "Cuide-se, jovem aventureiro, e n�o mexa mais com as feridas do passado.";
		jewel_nd = 27;
		next;
		while(true) {
			if (select("Voc� matou seus companheiros!","Voc� se lembra dos �ltimos momentos?") == 1) {
				mes "[Andarilho]";
				mes "Eu...? Ha. Hahaha!";
				mes "Desculpe, aventureiro, mas isso est� me parecendo piada mesmo.";
				mes "Hahahahahaha!";
				next;
			} else {
				mes "[Andarilho]";
				mes "N�o lembro direito...";
				mes "Eu... Tentamos matar";
				mes "quantos Kobolds pod�amos... Todos foram...";
				mes "Todos foram mortos.";
				mes "Todos menos eu.";
				next;
				mes "[Andarilho]";
				mes "Eu estava sozinho.";
				mes "Matamos todos os";
				mes "Kobolds, mas eu...";
				mes "Ent�o... O que veio depois...";
				mes "Eu estava coberto de sangue.";
				mes "Depois, o que apareceu?...";
				next;
				mes "[Andarilho]";
				mes "N�o, n�o pode ser.";
				mes "Um soldado humano como eu?";
				jewel_nd = 28;
				next;
				break;
			}
		}
		mes "[Andarilho]";
		mes "Eu fui morto...";
		mes "Hm, espere a�.";
		mes "Eu sobrevivi � batalha com os Kobolds.";
		mes "Ent�o, algum covarde me matou por tr�s, e roubou minha esmeralda.";
		mes "S� pode ser isso!";
		next;
		select("Como seus companheiros morreram?");
		mes "[Andarilho]";
		mes "Os Kobolds os mataram!";
		mes "Fui fraco demais para proteger meus camaradas.";
		mes "Fraco demais...";
		mes "Quando recobrei os sentidos, estavam todos...";
		next;
		emotion(e_dots);
		mes "[Andarilho]";
		mes "N�o sei o que aconteceu.";
		mes "Havia sangue espirrando em meus olhos...";
		mes "Eu me lembro de retalhar, estocar e...";
		mes "E retalhar.";
		next;
		select("Voc� retalhou tudo...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� retalhou tudo...";
		mes "At� mesmo os companheiros que";
		mes "voc� devia proteger.";
		next;
		mes "[Andarilho]";
		mes "Eu... Fiz isso...?";
		mes "Eu... N�o! Cale-se!";
		mes "Pare com isso! Eu n�o ia...";
		mes "Saia daqui agora!";
		mes "Est� tentando me enganar!";
		jewel_nd = 29;
		hideonnpc("Andarilho");
		stopnpctimer;
		close;
	} else if (jewel_nd == 27) {
		mes "[Andarilho]";
		mes "O que �?";
		mes "O que � que voc� pode ter para me dizer desta vez?";
		next;
		while(true) {
			if (select("Voc� matou seus companheiros!", "Voc� lembra dos �ltimos momentos?") == 1) {
				mes "[Andarilho]";
				mes "Eu...? Ha. Hahaha!";
				mes "Desculpe, aventureiro, mas isso est� me parecendo piada mesmo.";
				mes "Hahahahahaha!";
				next;
			} else {
				mes "[Andarilho]";
				mes "N�o lembro direito...";
				mes "Eu... Tentamos matar quantos Kobolds pod�amos...";
				mes "Todos foram...";
				mes "Todos foram mortos.";
				mes "Todos menos eu.";
				next;
				mes "[Andarilho]";
				mes "Eu estava sozinho.";
				mes "Matamos todos os";
				mes "Kobolds, mas eu...";
				mes "Ent�o... O que veio depois...";
				mes "Eu estava coberto de sangue.";
				mes "Depois, o que apareceu?...";
				next;
				mes "[Andarilho]";
				mes "N�o, n�o pode ser.";
				mes "Um soldado humano como eu?";
				jewel_nd = 28;
				next;
				break;
			}
		}
		mes "[Andarilho]";
		mes "Eu fui morto... Hm, espere a�.";
		mes "Eu sobrevivi � batalha com os Kobolds.";
		mes "Ent�o, algum covarde me matou por tr�s, e roubou minha esmeralda.";
		mes "S� pode ser isso!";
		next;
		select("Como seus companheiros morreram?");
		mes "[Andarilho]";
		mes "Os Kobolds os mataram!";
		mes "Fui fraco demais para proteger meus camaradas.";
		mes "Fraco demais...";
		mes "Quando recobrei os sentidos, estavam todos...";
		next;
		emotion(e_dots);
		mes "[Andarilho]";
		mes "N�o sei o que aconteceu.";
		mes "Havia sangue espirrando em meus olhos...";
		mes "Eu me lembro de estocar e...";
		mes "E retalhar.";
		next;
		select("Voc� retalhou tudo...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� retalhou tudo...";
		mes "At� mesmo os companheiros que";
		mes "voc� devia proteger.";
		next;
		mes "[Andarilho]";
		mes "Eu... Fiz isso...?";
		mes "Eu... N�o! Cale-se!";
		mes "Pare com isso! Eu n�o ia...";
		mes "Saia daqui agora!";
		mes "Est� tentando me enganar!";
		jewel_nd = 29;
		hideonnpc("Andarilho");
		stopnpctimer;
		close;
	} else if (jewel_nd == 28) {
		mes "[Andarilho]";
		mes "Por que voc�...";
		next;
		select("Como seus camaradas morreram?");
		mes "[Andarilho]";
		mes "Os Kobolds os mataram!";
		mes "Fui fraco demais para proteger meus camaradas.";
		mes "Fraco demais...";
		mes "Quando recobrei os sentidos, estavam todos...";
		next;
		emotion(e_dots);
		mes "[Andarilho]";
		mes "N�o sei o que aconteceu.";
		mes "Havia sangue espirrando em meus olhos...";
		mes "Eu me lembro de estocar e... E retalhar.";
		next;
		select("Voc� retalhou tudo...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� retalhou tudo...";
		mes "At� mesmo os companheiros que";
		mes "voc� devia proteger.";
		next;
		mes "[Andarilho]";
		mes "Eu... Fiz isso...?";
		mes "Eu... N�o! Cale-se!";
		mes "Pare com isso! Eu n�o ia...";
		mes "Saia daqui agora!";
		mes "Est� tentando me enganar!";
		jewel_nd = 29;
		hideonnpc("Andarilho");
		stopnpctimer;
		close;
	} else if (jewel_nd == 29) {
		mes "[Andarilho]";
		mes "Deixe-me em paz!";
		close;
	} else if (jewel_nd > 29) {
		mes "[Andarilho]";
		mes "Cale-se!";
		mes "Pare de me perturbar agora!";
		mes "Eu n�o posso... Eu n�o...!";
		close;
	} else {
		mes "[Andarilho]";
		mes ".........";
		close;
	}

	OnInit:
	hideonnpc("Andarilho");
	end;

	OnEnable:
	hideoffnpc("Andarilho");
	initnpctimer;
	end;

	OnTimer60000:
	hideonnpc("Andarilho");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
gef_fild08,182,182,0	script	#CallGhost	FAKE_NPC,2,2,{
	end;

	OnTouch:
	if (jewel_nd == 21) {
		if (countitem(Unlucky_Emerald) > 0) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Este deve ser o lugar do qual aquele xam� falou.";
			mes "Agora, vamos ver...";
			donpcevent("Andarilho::OnEnable");
			close;
		}
		else {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Este deve ser o lugar do qual aquele xam� falou.";
			mes "Agora, vamos ver...";
			mes "Espere.";
			mes "Preciso da esmeralda...";
			close;
		}
	} else if ((jewel_nd > 21) && (jewel_nd < 29)) {
		donpcevent("Andarilho::OnEnable");
	}
	end;
}

// ------------------------------------------------------------------
prontera,163,204,3	script	Viajante de Morroc	4W_M_03,{
	if (rumour_nd == 0) {
		mes "[Viajante de Morroc]";
		mes "Ah, � t�o bom e refrescante ficar perto desta fonte.";
		mes "� bem mais fresco aqui do que l� em Morroc.";
		next;
		switch (select("Belo dia hoje, n�o?", "Como anda Morroc?")) {
			case 1:
			mes "[Viajante de Morroc]";
			mes "Ah, sim. � um bel�ssimo dia!";
			mes "Prontera � t�o ensolarada e fresca.";
			mes "N�o � � toa que tanta gente vive por aqui!";
			close;
			case 2:
			mes "[Viajante de Morroc]";
			mes "Voc� � um aventureiro, e n�o tem ouvido os rumores que andam se espalhando pelo Reino de Rune-Midgard?";
			mes "Pensei que voc�s viajassem mais e ouvissem de tudo.";
			next;
		}
		select("Que rumores?");
		mes "[Viajante de Morroc]";
		mes "Ahn... Os agentes Arruaceiros!";
		mes "Eles est�o por toda parte!";
		mes "Por que n�o fala com algum dos agentes Arruaceiros espalhados nas outras cidades?";
		mes "Ent�o voc� vai saber do que estou falando!";
		rumour_nd = 1;
		close;
	} else if (rumour_nd == 1) {
		mes "[Viajante de Morroc]";
		mes "N�o deveria estar procurando por um agente Arruaceiro?";
		mes "Quero dizer, talvez voc� ";
		mes "possa investigar e ajud�-los.";
		close;
	} else if (rumour_nd > 1) {
		if (zdan_edq > 12) {
			mes "[Viajante de Morroc]";
			mes "Ent�o a Gangue Z era a respons�vel pelos rumores, afinal.";
			mes "� bom saber que est�o todos presos.";
			close;
		} else {
			mes "[Viajante de Morroc]";
			mes "Ei, uh...";
			mes "S� estou tentando relaxar na minha folga.";
			close;
		}
	}
}

// ------------------------------------------------------------------
in_rogue,355,28,5	script	Agente Arruaceiro	2_M_THIEFMASTER,{
	if (rumour_nd == 0) {
		if (zdan_edq == 0) {
			if (BaseJob == Job_Rogue) {
				mes "[Membro da Guilda]";
				mes "Cara, me sinto t�o mais seguro ficando em um beco do que em um espa�o lotado de gente.";
				mes "N�s, Arruaceiros...";
				mes "Acho que d� pra dizer que temos um pouco de agorafobia, talvez.";
				close;
			} else {
				mes "[Membro da Guilda]";
				mes "Ei, eu acho que voc� n�o devia estar aqui?";
				mes "� melhor voc� seguir seu caminho.";
				mes "N�o � uma amea�a, � s� um conselho de amigo.";
				close;
			}
		} else if ((zdan_edq > 0) && (zdan_edq < 13)) {
			mes "[Membro da Guilda]";
			mes "Ei, eu acho que n�o posso ajudar voc�.";
			mes "Voc� est� por conta pr�pria nessa.";
			close;
		} else {
			mes "[Membro da Guilda]";
			mes "Hum. Odeio trabalho de limpeza.";
			mes "� bem melhor fazer a besteira do que ter que consertar depois.";
			close;
		}
	} else if (rumour_nd == 1) {
		mes "[Membro da Guilda]";
		mes "�, estamos investigando os crimes estranhos que andam acontecendo no reino.";
		mes "Como � que voc� sabe disso?";
		next;
		switch(select("Eu s� estava...", "Posso ajudar?")) {
			case 1:
			mes "[Membro da Guilda]";
			mes "S� o qu�...?";
			mes "Pode falar, amigo.";
			close;
			case 2:
			if (zdan_edq > 10) {
				mes "[Membro da Guilda]";
				mes "Ent�o, quer nos ajudar?";
				mes "Puxa, acho que vem a calhar, mesmo.";
				mes "Preciso que voc� fa�a uma viagem para mim, ent�o se apronte, t� bom?";
				rumour_nd = 2;
			}
			close;
		}
	} else if (rumour_nd == 2) {
		mes "[Membro da Guilda]";
		mes "Voc� est� pronto e tudo o mais?";
		mes "Agora, preciso que voc�  entregue informa��es para os outros Arruaceiros para mim.";
		mes "Acha que pode fazer isso?";
		next;
		mes "[Membro da Guilda]";
		mes "Primeiro, quero que voc� v� a Al De Baran.";
		mes "Encontre nosso homem l� e ajude-o como puder.";
		mes "N�s Arruaceiros somos dif�ceis de encontrar, mas voc� pode dar um jeito.";
		next;
		mes "[Membro da Guilda]";
		mes "Sei que isso n�o � muita informa��o, mas este � s� o primeiro passo, afinal.";
		mes "Boa sorte.";
		rumour_nd = 3;
		close;
	} else if (rumour_nd == 3) {
		mes "[Membro da Guilda]";
		mes "Ei, voc� tem de ir a Al De Baran.";
		mes "e encontrar um dos Arruaceiros que est�o investigando.";
		mes "Voc� n�o queria ajudar?";
		next;
		mes "[Membro da Guilda]";
		mes "Aqui est� uma dica.";
		mes "N�s, agentes, geralmente tentamos nos esconder na parte sul de cada cidade.";
		mes "� meio que uma tradi��o.";
		close;
	} else if (rumour_nd == 24) {
		mes "[Membro da Guilda]";
		mes "O que � isso, um relat�rio de Al De Baran?";
		mes "Legal, me deixa dar uma lida...";
		next;
		mes "[Membro da Guilda]";
		mes "Hum, tudo bem.";
		mes "Parece que sua pr�xima parada vai ser em Geffen.";
		mes "Procure por nosso agente de Geffen em algum lugar na �rea ao sul, certo?";
		mes "Ah, e leve este bilhete tamb�m.";
		next;
		mes "^3355FFVoc� recebeu outro bilhete dobrado.^000000";
		rumour_nd = 25;
		close;
	} else if (rumour_nd == 25) {
		mes "[Membro da Guilda]";
		mes "Ei, por que voc� n�o foi para Geffen?";
		mes "Nosso agente deve estar na parte sul da cidade.";
		mes "N�o � longe, ent�o n�o fique folgando.";
		close;
	}
	else if (rumour_nd == 21) {
		if (!checkweight(Gift_Box,1)) {
			mes "[Membro da Guilda]";
			mes "Voc� est� carregando muita coisa com voc�.";
			mes "Livre-se de algumas, coloque seus itens extras no Armaz�m Kafra?";
			close;
		} else if (zdan_edq > 12) {
			mes "[Membro da Guilda]";
			mes "Finalmente, a Gangue Z foi presa.";
			mes "Esses caras nos deram muitos problemas.";
			mes "Por que diabos eles causaram tanto caos no reino, afinal?";
			next;
			mes "[Membro da Guilda]";
			mes "Escute, quero agradecer voc� por ter entrado para ajudar.";
			mes "� s� um pequeno presente, mas acho que voc� vai gostar.";
			mes "Se n�o, nem precisa falar.";
			mes "Entendeu?";
			rumour_nd = 22;
			getitem(Gift_Box,1);
			close;
		} else {
			mes "[Membro da Guilda]";
			mes "Escute, quero agradecer voc� por ter entrado para ajudar.";
			mes "� s� um pequeno presente, mas acho que voc� vai gostar.";
			mes "Se n�o, nem precisa falar.";
			mes "Entendeu?";
			rumour_nd = 22;
			getitem(644,1);
			close;
		}
	} else if (rumour_nd == 22) {
		mes "[Membro da Guilda]";
		mes "Ei, voc� foi mesmo de grande ajuda da outra vez.";
		mes "Podemos contar com voc� de novo outra hora?";
		mes "Os Arruaceiros sempre podem precisar de um aliado, sabe?";
		close;
	} else {
		mes "[Membro da Guilda]";
		mes "Eu n�o sei quem voc� est� procurando, mas voc� pegou o cara errado.";
		mes "Escute, tenho trabalho a fazer, ent�o...";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,114,56,5	script	Agente Arruaceiroe#nd0	4_M_ROGUE,{
	if (rumour_nd < 3) {
		mes "[Agente]";
		mes "Escute, estou trabalhando em uma tarefa importante para a Guilda de Arruaceiros.";
		mes "Pode me deixar em paz para eu fazer o que tenho que fazer?";
		close;
	} else if (rumour_nd == 3) {
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "Mandaram voc� vir me ajudar?";
			mes "He, obrigado por vir de t�o longe.";
			mes "Estive reunindo informa��es em Al De Baran.";
			mes "Tenho certeza de que a Gangue Z anda espalhando rumores por aqui.";
			next;
			mes "[Agente]";
			mes "Eles andam dizendo �s pessoas que h� uma guerra por vir, mas...";
			mes "Isso parece um monte de besteira.";
			mes "A Gangue Z foi capturada, ent�o os rumores v�o acabar...";
			next;
			mes "[Agente]";
			mes "Pode me fazer um favor, e levar este relat�rio para o agente em Geffen?";
			mes "Obrigado, eu agrade�o.";
			next;
			mes "^3355FFVoc� recebeu um bilhete bem dobrado.^000000";
			rumour_nd = 4;
			close;
		} else {
			mes "[Agente]";
			mes "Mandaram voc� vir me ajudar?";
			mes "He, obrigado por vir de t�o longe.";
			mes "Estive reunindo informa��es em Al De Baran.";
			next;
			mes "[Agente]";
			mes "Tem um rumor circulando";
			mes "por a� que h� uma guerra por vir mas...";
			mes "N�o vejo nenhum sinal disso.";
			mes "Os trens, teletransportes, aeroplanos, tudo ainda funciona normalmente.";
			next;
			mes "[Agente]";
			mes "N�o sei bem quem �, mas algu�m provavelmente s� est� espalhando este rumor para deixar as pessoas em p�nico.";
			mes "E est� funcionando...";
			next;
			mes "[Agente]";
			mes "Pode me fazer um favor, e levar este relat�rio para o agente em Geffen?";
			mes "Obrigado, eu agrade�o.";
			next;
			mes "^3355FFVoc� recebeu um bilhete bem dobrado.^000000";
			rumour_nd = 24;
			close;
		}
	} else if ((rumour_nd == 4) || (rumour_nd == 24)) {
		mes "[Agent]";
		mes "Eii...";
		if (rumour_nd == 4) {
			mes "Poderia, por favor, levar meu relat�rio para o agente Arruaceiro em Geffen?";
			mes "� melhor se apressar, pois precisamos trabalhar depressa.";
			close;
		} else {
			mes "Poderia, por favor, levar meu relat�rio para a Guilda dos Arruaceiros?";
			mes "Eles precisam dele depressa.";
			mes "Voc� sabe, � para ontem.";
			close;
		}
	} else if (rumour_nd == 16) {
		mes "[Agente]";
		mes "O que � isso, um relat�rio do agente de Payon?";
		mes "Hm, escute, n�o acho que isso seja para mim.";
		mes "Talvez voc� deve levar para outro agente Arruaceiro por a�.";
		rumour_nd = 17;
		close;
	} else if (rumour_nd > 21) {
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "Ei, obrigado por ajudar.";
			mes "Com certeza espero que o reino possa aproveitar um pouco de paz com a Gangue Z fora de cena.";
			close;
		} else {
			mes "[Agente]";
			mes "Bem, localizamos a Gangue Z.";
			mes "Tudo o que temos que fazer agora � peg�-los!";
			close;
		}
	} else {
		mes "[Agente]";
		mes "Ainda tenho umas coisas pra fazer por aqui.";
		mes "Depois, folga.";
		close;
	}
}

// ------------------------------------------------------------------
geffen,91,36,5	script	Agente da Guilda#nd1	4_M_ROGUE,{
	if (rumour_nd < 4) {
		if (zdan_edq > 12) {
			mes "[Agente da Guilda]";
			mes "Voc� � quem tem ajudado a derrotar a Gangue Z?";
			mes "Legal!";
			close;
		} else {
			mes "[Agente da Guilda]";
			mes "Se voc� n�o tem nada a tratar comigo, ent�o...";
			mes "N�o tenho nada a tratar com voc�.";
			mes "At� mais!";
			close;
		}
	} else if (rumour_nd == 4) {
		if (zdan_edq > 12) {
			mes "[Agente da Guilda]";
			mes "Isso � do agente de Al De Baran?";
			mes "Obrigado!";
			mes "Deve ter sido dif�cil me encontrar, n�o foi?";
			next;
			mes "[Agente da Guilda]";
			mes "A Gangue Z tem espalhado rumores sobre fantasmas saindo da Torre de Geffen.";
			mes "S� para garantir, quero que voc� d� uma olhada.";
			mes "Pode fazer isso?";
			next;
			mes "[Agente da Guilda]";
			mes "Quero que voc� capture alguns monstros.";
			mes "Consiga alguma prova que demonstre que os fantasmas ficam dentro da torre, sem sair para fora.";
			mes "E, traga...";
			next;
			mes "[Agente da Guilda]";
			mes "^FF00001 Tecido^000000,";
			mes "^FF00001 Cabelo Dourado^000000,";
			mes "^FF00001 Pequeno Chifre Maligno^000000,";
			mes "^FF00001 Ferradura^000000 e";
			mes "^FF00001 Z�-Lanterna^000000.";
			mes "Isso deve bastar.";
			next;
			mes "[Agente da Guilda]";
			mes "S� precisamos conseguir algumas provas concretas para que as pessoas possam se acalmar e n�o entrar em p�nico.";
			mes "Depressa, antes que estoure um tumulto ou coisa assim.";
			rumour_nd = 5;
			close;
		} else {
			mes "[Agente da Guilda]";
			mes "Este relat�rio � do agente Arruaceiro em Al De Baran?";
			mes "Ei, aqui diz que � para a Guilda de Arruaceiros.";
			mes "Voc� precisa levar isso para l�.";
			close;
		}
	} else if (rumour_nd == 5) {
		mes "[Agente da Guilda]";
		mes "Ei, terminou de ca�ar os monstros na Torre de Geffen?";
		mes "Espero que tenha trazido as coisas...";
		next;
		switch(select("Entregar os itens","Esqueci o que voc� precisava.")) {
			case 1:
			if ((countitem(Pumpkin_Head) > 0) && (countitem(Horseshoe) > 0) && (countitem(Petite_DiablOfs_Horn) > 0) && (countitem(Golden_Hair) > 0) && (countitem(Transparent_Cloth) > 0)) {
				delitem(Pumpkin_Head,1);
				delitem(Horseshoe,1);
				delitem(Petite_DiablOfs_Horn,1);
				delitem(Golden_Hair,1);
				delitem(Transparent_Cloth,1);
				rumour_nd = 6;
				mes "[Agente]";
				mes "Obrigado.";
				mes "Essas coisas devem ajudar as pessoas em Geffen a se acalmarem um pouco.";
				mes "A Gangue Z tem feito todas essas coisas para faz�-las acreditar que os monstros est�o � solta.";
				next;
				mes "[Agente]";
				mes "Eles t�m deixado";
				mes "pegadas de cavalo que parecem que s�o de Pesadelos.";
				mes "Vestindo-se com Tecidos e fingindo que s�o Sussurros...";
				mes "S�o mesmo uns pilantras.";
				next;
				mes "[Agente]";
				mes "Acho que o agente Arruaceiro de Payon precisa saber de tudo isso.";
				mes "Leve este relat�rio para ele, est� bem?";
				mes "Obrigado, amigo.";
				close;
			} else {
				mes "[Agente]";
				mes "Espere um pouco, voc� esqueceu de alguma coisa.";
				mes "Pode verificar se deixou alguma coisa em outro lugar?";
				close;
			}
			case 2:
			mes "[Agente]";
			mes "^FF00001 Tecido^000000,";
			mes "^FF00001 Cabelo Dourado^000000,";
			mes "^FF00001 Pequeno Chifre Maligno^000000,";
			mes "^FF00001 Ferradura^000000 e";
			mes "^FF00001 Z�-Lanterna^000000.";
			mes "N�o se esque�a dessa vez!";
			close;
		}
	} else if (rumour_nd == 6) {
		mes "[Agente]";
		mes "Poderia entregar meu relat�rio para o agente Arruaceiro em Payon?";
		mes "Obrigado.";
		close;
	} else if (rumour_nd == 25) {
		mes "[Agente]";
		mes "Ei, a guilda mandou voc� vir me ver?";
		mes "Ah, sim, voc� trouxe uma mensagem.";
		mes "Vamos dar uma olhada...";
		next;
		mes "[Agente]";
		mes "Humm...";
		next;
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "Ent�o... A Gangue Z � respons�vel pelos rumores sobre os fantasmas � solta em Geffen.";
			mes "Hum. Esses pilantras.";
			mes "Certo, ou�a o que vamos fazer.";
			next;
			mes "[Agente da Guilda]";
			mes "Quero que voc� capture alguns monstros.";
			mes "Consiga alguma prova que demonstre que os fantasmas ficam dentro da torre, sem sair para fora.";
			mes "E traga...";
			next;
			mes "[Agente da Guilda]";
			mes "^FF00001 Tecido^000000,";
			mes "^FF00001 Cabelo Dourado^000000,";
			mes "^FF00001 Pequeno Chifre Maligno^000000,";
			mes "^FF00001 Ferradura^000000 e";
			mes "^FF00001 Z�-Lanterna^000000.";
			mes "Isso deve bastar.";
			next;
			mes "[Agente da Guilda]";
			mes "S� precisamos conseguir algumas provas concretas para que as pessoas possam se acalmar e n�o entrar em p�nico.";
			mes "Depressa, antes que estoure um tumulto ou coisa assim.";
			rumour_nd = 5;
			close;
		} else {
			mes "[Agente da Guilda]";
			mes "A Gangue Z tem espalhado rumores sobre fantasmas saindo da Torre de Geffen.";
			mes "S� para garantir, quero que voc� d� uma olhada.";
			mes "Pode fazer isso?";
			next;
			mes "[Agente da Guilda]";
			mes "Quero que voc� capture alguns monstros.";
			mes "Consiga alguma prova que demonstre que os fantasmas ficam dentro da torre, sem sair para fora.";
			mes "E traga...";
			next;
			mes "[Agente da Guilda]";
			mes "^FF00001 Tecido^000000,";
			mes "^FF00001 Cabelo Dourado^000000,";
			mes "^FF00001 Pequeno Chifre Maligno^000000,";
			mes "^FF00001 Ferradura^000000 e";
			mes "^FF00001 Z�-Lanterna^000000.";
			mes "Isso deve bastar.";
			next;
			mes "[Agente da Guilda]";
			mes "S� precisamos conseguir algumas provas concretas para que as pessoas possam se acalmar e n�o entrar em p�nico.";
			mes "Depressa, antes que estoure um tumulto ou coisa assim.";
			rumour_nd = 26;
			close;
		}
	} else if (rumour_nd == 26) {
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "Ei, enquanto voc� estava fora, ouvi dizer que a Gangue Z finalmente foi capturada.";
			mes "Que al�vio ouvir isso.";
			next;
			mes "[Agente]";
			mes "Mas ainda quero assegurar ao povo de Geffen que os monstros na Torre de Geffen est�o bem trancados l�.";
			mes "Voc� trouxe o que pedi?";
			next;
			switch(select("Entregar os itens","Esqueci o que voc� precisava.")) {
				case 1:
				if ((countitem(Pumpkin_Head) > 1) && (countitem(Horseshoe) > 2) && (countitem(Petite_DiablOfs_Horn) > 1) && (countitem(Golden_Hair) > 2) && (countitem(Transparent_Cloth) > 0)) {
					delitem(Pumpkin_Head,2);
					delitem(Horseshoe,3);
					delitem(Petite_DiablOfs_Horn,2);
					delitem(Golden_Hair,3);
					delitem(Transparent_Cloth,1);
					rumour_nd = 6;
					mes "[Agente]";
					mes "Obrigado. Essas coisas devem ajudar as pessoas em Geffen a se acalmarem um pouco.";
					mes "A Gangue Z tem feito todas essas coisas para faz�-las acreditar que os monstros est�o � solta.";
					next;
					mes "[Agente]";
					mes "Eles t�m deixado pegadas de cavalo que parecem que s�o de Pesadelos, vestindo-se com Tecidos e fingindo que s�o Sussurros...";
					mes "S�o mesmo uns pilantras.";
					next;
					mes "[Agente]";
					mes "Acho que o agente Arruaceiro de Payon precisa saber de tudo isso.";
					mes "Leve este relat�rio para ele, est� bem?";
					mes "Obrigado, amigo.";
					close;
				} else {
					mes "[Agente]";
					mes "Espere um pouco, voc� esqueceu de alguma coisa.";
					mes "Pode verificar se deixou alguma coisa em outro lugar?";
					close;
				}
				case 2:
				mes "[Agente da Guilda]";
				mes "^FF00001 Tecido^000000,";
				mes "^FF00001 Cabelo Dourado^000000,";
				mes "^FF00001 Pequeno Chifre Maligno^000000,";
				mes "^FF00001 Ferradura^000000 e";
				mes "^FF00001 Z�-Lanterna^000000.";
				mes "N�o se esque�a dessa vez!";
				close;
			}
		} else {
			mes "[Agente]";
			mes "Pedi para voc� trazer itens que provem que os monstros na Torre de Geffen est�o bem trancados l�.";
			mes "J� fez isso?";
			next;
			switch(select("Entregar os itens","Esqueci o que voc� precisava.")) {
				case 1:
				if ((countitem(Pumpkin_Head) > 1) && (countitem(Horseshoe) > 2) && (countitem(Petite_DiablOfs_Horn) > 1) && (countitem(Golden_Hair) > 2) && (countitem(Transparent_Cloth) > 0)) {
					delitem(Pumpkin_Head,2);
					delitem(Horseshoe,3);
					delitem(Petite_DiablOfs_Horn,2);
					delitem(Golden_Hair,3);
					delitem(Transparent_Cloth,1);
					rumour_nd = 6;
					mes "[Agente]";
					mes "Obrigado.";
					mes "Essas coisas devem ajudar as pessoas em Geffen a se acalmarem um pouco.";
					mes "A Gangue Z tem feito todas essas coisas para faz�-las acreditar que os monstros est�o � solta.";
					next;
					mes "[Agente]";
					mes "Eles t�m deixado pegadas de cavalo que parecem que s�o de Pesadelos, vestindo-se com Tecidos e fingindo que s�o Sussurros...";
					mes "S�o mesmo uns pilantras.";
					next;
					mes "[Agente]";
					mes "Acho que o agente Arruaceiro de Payon precisa saber de tudo isso.";
					mes "Leve este relat�rio para ele, est� bem?";
					mes "Obrigado, amigo.";
					close;
				} else {
					mes "[Agente]";
					mes "Espere um pouco, voc� esqueceu de alguma coisa.";
					mes "Pode verificar se deixou alguma coisa em outro lugar?";
					close;
				}
				case 2:
				mes "[Agente]";
				mes "^FF00001 Tecido^000000,";
				mes "^FF00001 Cabelo Dourado^000000,";
				mes "^FF00001 Pequeno Chifre Maligno^000000,";
				mes "^FF00001 Ferradura^000000 e";
				mes "^FF00001 Z�-Lanterna^000000.";
				mes "N�o se esque�a dessa vez!";
			}
		}
	} else if (rumour_nd == 22) {
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "Parece que teremos um pouco de paz e tranq�ilidade com a Gangue Z presa.";
			mes "Esses caras eram encrenca em dobro, se quer saber, viu?";
		} else {
			mes "[Agente]";
			mes "Mantenha o bom trabalho!";
			mes "Com gente como voc� do nosso lado, a Gangue Z vai ser pega mais cedo ou mais tarde.";
		}
		close;
	} else {
		mes "[Agente]";
		mes "Estou t�o ocupado!";
		close;
	}
}

// ------------------------------------------------------------------
payon,209,44,5	script	Agente da Guilda#nd2	4_M_ROGUE,{
	if (rumour_nd < 3) {
		mes "[Agente]";
		mes "Qu�? Quer alguma coisa?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "?????????????????";
		next;
		mes "[Agente]";
		mes "Hehe. Foi o que pensei.";
		close;
	} else if ((rumour_nd > 2) && (rumour_nd < 6)) {
		mes "[Agente]";
		mes "O que h�?";
		mes "Estou muito ocupado, ent�o seja breve.";
		next;
		mes "[Agente]";
		mes "Nada, heim?";
		mes "Acho que voc� deve falar com um agente Arruaceiro em uma das outras cidades.";
		emotion e_ag;
		close;
	} else if (rumour_nd == 6) {
		mes "[Agente]";
		mes "Ei. O que voc� est� fazendo, vadiando por aqui?";
		mes "T� procurando algu�m? Hein?";
		next;
		select("Vim ajudar um agente Arruaceiro!");
		mes "[Agente]";
		mes "Ah, sim?";
		next;
		if (BaseJob == Job_Rogue) {
			mes "[Agente]";
			mes "E a�, cara?";
			mes "� sempre bom ver um colega Arruaceiro.";
			mes "Sabe que s� estou brincando com voc�, n�o sabe?";
		} else {
			mes "[Agente]";
			mes "J� ouvi falar de voc�s, Arruaceiros disfar�ados.";
			mes "N�o tente me enganar, debaixo destas roupas, voc� � 100% Arruaceiro!";
		}
		next;
		mes "^3355FFVoc� entrega o bilhete dobrado a ele.^000000";
		next;
		mes "[Agente]";
		mes "Ahhh, droga!";
		emotion(e_omg);
		next;
		mes "[Agente]";
		mes "J� falei pra esse cara s� me enviar figuras!";
		mes "J� disse a ele mil vezes que tenho problemas para ler!";
		mes "Esse cara � um imbecil!";
		next;
		mes "[Agente]";
		mes "Ahn...";
		mes "Voc� se importa de ler o bilhete para mim?";
		rumour_nd = 7;
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Vamos ver o bilhete diz...";
		next;
		switch(select("Coopere com o aventureiro.:......")) {
			case 1:
			mes "[Agente]";
			mes "Ent�o... Somos parceiros?";
			mes "Legal, prazer em te conhecer.";
			mes "Sou o agente de Payon.";
			mes "Parece que vamos trabalhar juntos de agora em diante.";
			rumour_nd = 8;
			close;
			case 2:
			mes "[Agente]";
			mes "Voc�...";
			mes "Tamb�m n�o consegue ler?";
			next;
			mes "[Agente]";
			mes "Hahaha! Legal, legal...";
			mes "Bem, tenho certeza que eles";
			mes "mandaram voc� para trabalhar comigo.";
			mes "Quando estiver pronto para tratar";
			mes "de neg�cios, volte e a gente conversa, OK?";
			rumour_nd = 8;
			close;
		}
	} else if (rumour_nd == 7) {
		mes "[Agente]";
		mes "Ei, pedi pra voc� ler o bilhete, e n�o para fugir! Agora...";
		mes "O que ele diz?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Vamos ver, o bilhete diz...";
		next;
		switch(select("Coopere com o aventureiro.:......")) {
			case 1:
			mes "[Agente]";
			mes "Ent�o... Somos parceiros?";
			mes "Legal, prazer em te conhecer.";
			mes "Sou o agente de Payon.";
			mes "Parece que vamos trabalhar juntos de agora em diante.";
			rumour_nd = 8;
			close;
			case 2:
			mes "[Agente]";
			mes "Voc�...";
			mes "Tamb�m n�o consegue ler?";
			next;
			mes "[Agente]";
			mes "Hahaha! Legal, legal...";
			mes "Bem, tenho certeza que eles mandaram voc� para trabalhar comigo.";
			mes "Quando estiver pronto para tratar";
			mes "de neg�cios, volte e a gente conversa, OK?";
			rumour_nd = 8;
			close;
		}
	} else if (rumour_nd == 8) {
		mes "[Agente]";
		mes "Que bom, voc� voltou.";
		mes "Temos um grande trabalho pela frente.";
		mes "Vidas em jogo, e tudo o mais.";
		mes "Pronto?";
		next;
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "A Gangue Z envenenou um dos po�os de �gua aqui em Payon.";
			mes "Toda a �gua est� preta agora.";
			mes "Precisamos usar Ervas Vermelhas para conter o veneno, certo?";
			next;
			mes "[Agente]";
			mes "Ent�o v� coletar algumas ^FF0000Ervas Vermelhas^000000.";
			mes "N�o esque�a: ^FF0000Ervas Vermelhas^00000.";
			next;
			mes "[Agente]";
			mes "Espera, acho que n�o � isso.";
			mes "Eu disse Ervas Vermelhas?";
			mes "Desculpe, eu quis dizer ^0000FFErvas Verdes^000000.";
			mes "Traga-me ^0000FF1 Erva Verde^000000, OK? *Ufa!*";
			rumour_nd = 9;
			close;
		} else {
			mes "[Agente]";
			mes "Algu�m envenenou os po�os de �gua de Payon...";
			mes "Ela est� toda preta e venenosa agora.";
			mes "Quero que voc� me traga uma ^FF0000Erva Vermelha^000000 para que possamos resolver isso!";
			rumour_nd = 10;
			close;
		}
	} else if (rumour_nd == 9) {
		mes "[Agente]";
		mes "Ei, voc� voltou!";
		mes "Voc� veio bem mais r�pido do que eu pensava...";
		next;
		if (countitem(Green_Herb) > 0) {
			delitem(Green_Herb,1);
			rumour_nd = 11;
			mes "[Agente]";
			mes "Muito bem, vai levar algum tempo para neutralizar todo o veneno, mas acho que conseguimos.";
			mes "Ei, me d� um tempo para desenhar um relat�rio, e volte mais tarde, tudo bem?";
			close;
		} else {
			mes "[Agente]";
			mes "Hein?";
			mes "Cad� a Erva Verde?";
			close;
		}
	} else if (rumour_nd == 10) {
		mes "[Agente]";
		mes "Ei, voc� voltou!";
		mes "Voc� veio bem mais r�pido do que eu pensava...";
		next;
		if (countitem(Red_Herb) > 0) {
			if (countitem(Green_Herb) > 0) {
				mes "[Agente]";
				mes "Ah, uma Erva Verde!";
				mes "Foi isso que eu pedi para trazer?";
				mes "Porque tenho certeza de que � essa mesmo.";
				mes "Absoluta.";
				next;
				mes "[Agente]";
				mes "Muito bem, vai levar algum tempo para neutralizar todo o veneno, mas acho que conseguimos.";
				mes "Ei, me d� um tempo para desenhar um relat�rio, e volte mais tarde, tudo bem?";
				delitem(Green_Herb,1);
				rumour_nd = 11;
				close;
			} else {
				mes "[Agente]";
				mes "Ei, o que est� fazendo com a Erva Vermelha?";
				next;
				select("Voc� disse que era uma Erva Vermelha...");
				mes "[Agente]";
				mes "Ah, qu�?! Uh...";
				mes "Acho que sim.";
				mes "Ah, nada de mais.";
				mes "Ei, traga uma Erva Verde, sim?";
				mes "� essa que eu queria.";
				rumour_nd = 9;
				close;
			}
		} else {
			if (countitem(Green_Herb) > 0) {
				mes "[Agente]";
				mes "Muito bem, vai levar algum tempo para neutralizar todo o veneno, mas acho que conseguimos.";
				mes "Ei, me d� um tempo para desenhar um relat�rio e volte mais tarde, tudo bem?";
				delitem(Green_Herb,1);
				rumour_nd = 11;
				close;
			} else {
				mes "[Agente]";
				mes "Hein?";
				mes "Cad� a Erva Verde?";
				close;
			}
		}
	} else if (rumour_nd == 11) {
		mes "[Agente]";
		mes "Ei, sabe de uma coisa?";
		mes "A �gua do po�o ainda est� preta.";
		mes "Isso significa que, se a erva que usamos � boa...";
		mes "Ent�o � s� tintura preta para assustar o povo.";
		next;
		mes "[Agente]";
		mes "Ent�o, para limparmos a �gua, temos que usar um Ant�geno, certo?";
		mes "Pode me ajudar?";
		mes "Eu tenho um Karvodailnirol...";
		next;
		mes "[Agente]";
		mes "Ent�o, se voc� me trouxer ^0000FF1 �lcool^000000, poderemos fazer um Ant�geno.";
		next;
		if (BaseJob == Job_Alchemist) {
			select("Espere, Karvodailnirol?!");
			mes "[Agente]";
			mes "Karvodailnirol.";
			mes "O que tem?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Voc� precisa de Detrimindexta";
			mes "para fazer um Ant�geno,";
			mes "e n�o Karvodailnirol.";
			next;
			mes "[Agente]";
			mes "Oh, � mesmo? He!";
			mes "Voc� � um salvador!";
			mes "Detrimindexta, n�?";
			next;
			emotion(e_gg);
			mes "[Agente]";
			mes "N�o se preocupe, tenho esse tamb�m!";
			mes "Voc� s� tem que me trazer o �lcool!";
			rumour_nd = 12;
			close;
		} else {
			mes "[Agente]";
			mes "Certo, agora me traga um �lcool, e eu cuido do resto.";
			rumour_nd = 13;
			close;
		}
	} else if (rumour_nd == 12) {
		mes "[Agente]";
		mes "Est� tudo pronto, exceto pelo �lcool.";
		mes "Voc� trouxe?";
		next;
		if (countitem(Alchol) > 0) {
			mes "[Agente]";
			mes "�timo, agora tudo que temos a fazer � esperar.";
			mes "Belo trabalho, parceiro.";
			delitem(Alchol,1);
			rumour_nd = 15;
			close;
		}
		else {
			mes "[Agente]";
			mes "Voc� n�o trouxe?";
			mes "Voc� n�o bebeu o �lcool, bebeu?";
			close;
		}
	} else if (rumour_nd == 13) {
		mes "[Agente]";
		mes "Est� tudo pronto, exceto pelo �lcool.";
		mes "Voc� trouxe?";
		next;
		if (countitem(Alchol) > 0) {
			mes "[Agente]";
			mes " �timo, agora tudo que temos a fazer � esperar.";
			mes "Belo trabalho, parceiro.";
			delitem(Alchol,1);
			rumour_nd = 14;
			close;
		} else {
			mes "[Agente]";
			mes "Voc� n�o trouxe?";
			mes "Voc� n�o bebeu o �lcool, bebeu?";
			close;
		}
	} else if (rumour_nd == 14) {
		mes "[Agente]";
		mes "Hum, cometi um erro ao preparar um Ant�geno...";
		mes "Eu deveria usar este Detrimindexta, e n�o a outra coisa, Karvodailnirol, para preparar o Ant�geno.";
		next;
		mes "[Agente]";
		mes "Desculpe, eles parecem iguais para mim, assim como todas as letras do alfabeto.";
		mes "Voc� se importa em tentar isso de novo?";
		mes "S� mais 1 �lcool...";
		next;
		mes "[Agente]";
		mes "Ei, eu juro!";
		mes "N�o vou vacilar desta vez.";
		mes "Vamos acertar isso, com certeza...";
		rumour_nd = 12;
		close;
	} else if (rumour_nd == 15) {
		emotion e_heh;
		mes "[Agente]";
		mes "Hehehehe! Parece que resolvemos o caso!";
		mes "A �gua n�o foi realmente envenenada...";
		mes "S� foi tingida para parecer suspeita.";
		mes "V�, est� perfeita para beber?";
		next;
		mes "[Agente]";
		mes "Enfim, parece que terminamos aqui.";
		mes "Voc� se importa de levar meu relat�rio para o pr�ximo agente Arruaceiro?";
		next;
		if (rand(1,2) == 1) {
			mes "[Agente]";
			mes "Trate de levar isto para o cara em Comodo, certo?";
			next;
			mes "^3355FFVoc� recebeu um bilhete formado inteiramente por desenhos.^000000";
			rumour_nd = 18;
			close;
		} else {
			mes "[Agente]";
			mes "Trate de levar isto para o cara em Al De Baran, certo?";
			next;
			mes "^3355FFVoc� recebeu um bilhete formado inteiramente por desenhos.^000000";
			rumour_nd = 16;
			emotion e_heh;
			close;
		}
	} else if (rumour_nd == 16) {
		mes "[Agente]";
		mes "Trate de fazer com que o agente Arruaceiro em Al De Baran receba meu relat�rio, OK?";
		close;
	} else if (rumour_nd == 17) {
		mes "[Agente]";
		mes "Hum, o cara em Al De Baran n�o aceitou? Oh!";
		mes "� por isso!";
		mes "Eu quis dizer Comodo!";
		mes "Voc� precisa ir a Comodo!";
		mes "Hehe, mancada minha!";
		rumour_nd = 18;
		close;
	} else if (rumour_nd == 18) {
		mes "[Agente]";
		mes "Trate de fazer com que o agente Arruaceiro em Comodo receba meu relat�rio.";
		mes "Certo?";
		close;
	} else {
		mes "[Agente]";
		mes "Ei, parceiro, como vai?";
		mes "Desculpe se fui um pouco dif�cil de trabalhar.";
		mes "Posso n�o saber ler e escrever, mas compenso com minha esperteza.";
		close;
	}
}

// ------------------------------------------------------------------
comodo,233,199,5	script	Agente da Guilda#nd3	1_M_SIGNROGUE,{
	if (rumour_nd < 1) {
		mes "[Agente]";
		mes "......";
		mes "......";
		close;
	} else if ((rumour_nd > 0) && (rumour_nd < 16)) {
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "Foi voc� quem ajudou a prender a Gangue Z?";
			mes "Bom trabalho!";
			close;
		} else {
			mes "[Agente]";
			mes "Quem � voc�, eim?";
			close;
		}
	} else if ((rumour_nd == 16) || (rumour_nd == 18)) {
		mes "[Agente]";
		mes "Sabe, Arruaceiros s�o engenhosos e dif�ceis de pegar, ent�o vou lhe ensinar a se portar com disciplina.";
		mes "Entendeu?";
		mes "Disciplina!";
		mes "� disso que voc� precisa!";
		next;
		mes "[Agente]";
		mes "De agora em diante.";
		mes "Quero que voc� grite \"Sim, senhor!\" quando ouvir minhas instru��es.";
		mes "Entendeu?";
		mes "Alto e claro!";
		next;
		switch(select("Sim, senhor!:...")) {
			case 1:
			emotion e_dots;
			mes "[Agente]";
			mes "Legal, legal...";
			mes "Hum. Vamos tentar de novo...";
			mes "Quero ouvir voc� dizer mais alto!";
			next;
			select("Sim, senhor!");
			mes "[Agente]";
			mes "�timo!";
			next;
			mes "[Agente]";
			mes "OK, vamos �s suas instru��es de treinamento...";
			mes "H� um rumor sobre um monstro que invadiu a vila, mas sei que � s� algu�m tentando assustar a popula��o.";
			next;
			mes "[Agente]";
			mes "Tenho certeza que o, h�, transgressor est� usando uma m�scara para fazer os outros pensarem que � o monstro.";
			mes "Isso quer dizer que...";
			mes "Sua miss�o � me trazer algumas m�scaras de monstros.";
			next;
			mes "[Agente]";
			mes "Heh...";
			mes "Qual � sua miss�o?!";
			next;
			select("Trazer m�scaras de monstros!");
			mes "[Agente]";
			mes "Isso.";
			next;
			mes "[Agente]";
			mes "Certo, me traga ^FF00002 m�scaras de monstros bem assustadoras^000000.";
			mes "Apenas 2, e t�m de ser bem assustadoras.";
			rumour_nd = 19;
			close;
			case 2:
			mes "[Agente]";
			mes "O que voc� acha que est� fazendo?";
			mes "Eu me insulto vendo voc� t�o desafiador assim.";
			mes "Como voc� espera se tornar um bom Arruaceiro?!";
			close;
		}
	}
	else if (rumour_nd == 19) {
		mes "[Agente]";
		mes "Ent�o...";
		mes "Trouxe as m�scaras como um bom soldado?";
		next;
		switch(select("Hum-hum.:Sim, senhor!")) {
			case 1:
			mes "[Agente]";
			mes "Ei, esqueceu nossa regrinha?";
			mes "Eu at� dei a dica quando disse \"soldado!\" Hehe!";
			close;
			case 2:
			mes "[Agente]";
			mes "Certo, deixe-me ver.";
			next;
			if ((countitem(Mr_Smile)) || (countitem(Phantom_Of_Opera)) || (countitem(Opera_Ghost_Mask)) || (countitem(Mr_Scream)) || (countitem(Welding_Mask)) || (countitem(Goblini_Mask)) || (countitem(Gas_Mask)) || (countitem(Alarm_Mask)) || (countitem(Goblin_Mask_01)) || (countitem(Goblin_Mask_02)) || (countitem(Goblin_Mask_03)) || (countitem(Goblin_Mask_04)) || (countitem(Zherlthsh_Mask))){
				mes "[Agente]";
				mes "Excelente!";
				next;
				mes "[Agente]";
				mes "Olhe, sei que fui duro com voc�.";
				mes "E n�o se preocupe, n�o vou levar suas m�scaras.";
				mes "S� queria treinar voc� para ser o melhor Arruaceiro que puder.";
				mes "Entendeu?";
				next;
				mes "[Agente]";
				mes "Hein? E o que � esse bilhete que est� h� um tempo em sua m�o?";
				next;
				mes "[Agente]";
				mes "Humm... Humhumm...";
				mes "Humm... Humhumm...";
				mes "Humm... Humhumm... Oh!";
				next;
				mes "[Agente]";
				mes "Ah, droga! Por que n�o me disse alguma coisa?";
				mes "Pensei que voc� tivesse vindo fazer o teste de mudan�a de classe para Arruaceiro!";
				emotion(e_omg);
				next;
				emotion e_sry;
				mes "[Agente]";
				mes "Ah, cara, voc� veio at� aqui para me ajudar, e eu pensei que...";
				mes "Eu sinto muito, mesmo!";
				mes "� que eu confundi voc� com um candidato que estava esperando...";
				next;
				mes "[Agente]";
				mes "Pode me fazer um favor, e n�o contar para ningu�m?";
				mes "Considere isso...";
				mes "Sei l�, uma experi�ncia do mundo dos Arruaceiros, se puder.";
				emotion(e_sob);
				next;
				switch(select("Sim, senhor!:N�o conto pra ningu�m.")) {
					case 1:
					mes "[Agente]";
					mes "Ei! Ei!";
					mes "J� pode parar com isso agora.";
					mes "Obrigado, eu realmente agrade�o muito.";
					next;
					break;
					case 2:
					mes "[Agente]";
					mes "Obrigado.";
					mes "Sabia que podia confiar em voc�!";
					next;
					break;
				}
				mes "[Agente]";
				mes "Enfim, voc� tem mais um lugar para ir, Morroc.";
				mes "Fale com o agente Arruaceiro de l�, sim?";
				mes "Ah, e aceite esta comida com as minhas desculpas.";
				if (!checkweight(Str_Dish04,1)) {
					mes "[Agente]";
					mes "Voc� est� com muitos itens com voc�.";
					mes "Por que voc� n�o coloca alguns deles no Armaz�m Kafra antes de falar comigo, hein?";
					close;
				}
				.@sorry_item = rand(1,6);
				if (.@sorry_item == 1) { getitem(Str_Dish04,1); }
				else if (.@sorry_item == 2) { getitem(Agi_Dish04,1); }
				else if (.@sorry_item == 3) { getitem(Dex_Dish04,1); }
				else if (.@sorry_item == 4) { getitem(Int_Dish04,1); }
				else if (.@sorry_item == 5) { getitem(Vit_Dish04,1); }
				else if (.@sorry_item == 6) { getitem(Luk_Dish04,1); }
				else {
					mes "[Agente]";
					mes "Espere, tem alguma coisa errada.";
					mes "Voc� se importa em voltar mais tarde?";
					close;
				}
				next;
				mes "[Agente]";
				mes "Ei, cuide-se no caminho at� Morroc, certo?";
				mes "Boa sorte para encontrar o agente Arruaceiro de l�.";
				mes "Ah, e mantenha o segredo sobre meu engano...";
				rumour_nd = 20;
				close;
			} else {
				mes "[Agente]";
				mes "Ei, voc� nem sequer procurou as m�scaras?";
				mes "Volte e encontre-as!";
				close;
			}
		}
	} else if (rumour_nd == 20) {
		mes "[Agente]";
		mes "Ah, ei, voc� voltou?";
		mes "Voc� j� n�o estava a caminho de Morroc?";
		close;
	} else if (rumour_nd == 22) {
		mes "[Agente]";
		mes "Hehe, parece que resolvemos o caso...";
		next;
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "Gra�as a voc�, N�o temos que nos preocupar mais com a Gangue Z.";
			close;
		} else {
			mes "[Agente]";
			mes "Enquanto o mundo n�o estiver livre do mal e tudo o mais, os Arruaceiros sempre ter�o trabalho a fazer.";
			close;
		}
	} else {
		mes "[Agente]";
		mes "Por que ainda est� por aqui?";
		mes "Voc� n�o tem algo mais importante a fazer?";
		close;
	}
}

// ------------------------------------------------------------------
morocc,116,39,3	script	Agente da Guilda#nd4	4_M_YOYOROGUE,{
	if (rumour_nd == 1) {
		mes "[Agente]";
		mes "Um caso? O que voc� est�...?";
		mes "Pergunte a outro.";
		mes "N�o sei do que voc� est� falando.";
		mes "Deixe-me em paz, eu s� quero relaxar!";
		close;
	} else if ((rumour_nd > 1) && (rumour_nd < 20)) {
		mes "[Agente]";
		mes "Ah, o que eu n�o faria por uma cerveja bem gelada agora...";
		mes "...O qu�?";
		close;
	} else if (rumour_nd == 20) {
		mes "[Agente]";
		mes "Ah, sim, eu quase terminei minha investiga��o.";
		next;
		if (zdan_edq > 12) {
			mes "[Agente]";
			mes "A Gangue Z anda causando problemas em todo lugar.";
			mes "S�o quase travessuras, mas...";
			mes "Se eu puser minhas m�os neles...";
			specialeffect(EF_BEGINSPELL);
			next;
			mes "[Agente]";
			mes "Enfim, essa gangue est� chamando uma aten��o negativa para Morroc.";
			mes "Quero dizer, eles meio que vivem aqui, ent�o...";
			next;
			mes "[Agente]";
			mes "Putz, preciso de uma bebida.";
			mes "Ou�a, poderia, por favor, levar meu relat�rio para a Guilda dos Arruaceiros para mim?";
			mes "Eu sei que � minha responsabilidade, mas...";
			mes "Isso � algo que voc� pode fazer.";
			next;
			mes "[Agente]";
			mes "He! Continue fazendo um bom trabalho.";
			rumour_nd = 21;
			close;
		} else {
			mes "[Agente]";
			mes "N�o sei quem s�o esses fanfarr�es, mas quando eu puser minhas m�os neles...";
			mes "Eu vou...! Eu vou...!";
			specialeffect(EF_BEGINSPELL);
			next;
			mes "[Agente]";
			mes "Putz, preciso de uma bebida.";
			mes "Ou�a, poderia, por favor, levar meu relat�rio para a Guilda dos Arruaceiros para mim?";
			mes "Eu sei que � minha responsabilidade, mas...";
			mes "Isso � algo que voc� pode fazer.";
			next;
			mes "[Agente]";
			mes "He! Continue fazendo um bom trabalho.";
			rumour_nd = 21;
			close;
		}
	} else if (rumour_nd == 21) {
		mes "[Agente]";
		mes "Depressa, leve meu relat�rio para a Guilda dos Arruaceiros.";
		mes "Enquanto isso, acho que vou tomar uma bebida!";
		close;
	} else {
		mes "[Agente]";
		mes "*Hic*";
		mes "Hahahaha,";
		mes "como � bom!";
		mes "Essa bebida...";
		next;
		mes "[Agente]";
		mes "*Hic*";
		next;
		mes "[Agente]";
		mes "Quem � voc�?";
		mes "Suma daqui!";
		close;
	}
}