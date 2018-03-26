/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Potais no Vulc�o de Thor                                  |
\*-----------------------------------------------------------------*/

thor_v01,201,37,0	warp	thorvwarp_1	1,1,thor_v02,78,203
thor_v01,21,224,0	warp	thorvwarp_2	1,1,ve_fild03,168,235

// ------------------------------------------------------------------
thor_v02,192,60,0	warp	thorvwarp_3	1,1,thor_v03,35,262
thor_v02,73,203,0	warp	thorvwarp_4	1,1,thor_v01,196,37

thor_v02,143,78,0	script	#tcamp	WARPNPC,2,2,{
	OnTouch:
	if (rachel_camel < 24) { warp("que_thor",65,55); end; }
	else { warp("que_thor",182,55); end; }
}

// ------------------------------------------------------------------
thor_v03,30,262,0	warp	thorvwarp_5	1,1,thor_v02,187,58
