/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|      Source Script                             |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: Hercules Emulator                                    |
| - Copyright: Athena (Original Emulator)                           |
\*-----------------------------------------------------------------*/

#ifndef MAP_MESSAGES_MAIN_H
#define MAP_MESSAGES_MAIN_H

enum clif_messages {
/*20031028 to 20180523
동의 하십니까?
Do you agree?
*/
	MSG_DO_YOU_AGREE = 0x0,
/*20031028 to 20180523
서버 연결 실패
Failed to Connect to Server.
*/
	MSG_SERVER_CONNECTION_FAILED = 0x1,
/*20031028 to 20180523
서버와 연결이 끊어졌습니다.
Disconnected from Server.
*/
	MSG_UNABLE_TO_CONNECT_SERVER = 0x2,
/*20031028 to 20080617
서버와 연결이 끊어졌습니다.
Disconnected from Server.
20080624 to 20180523
서버와 연결이 끊어졌습니다!
Disconnected from Server!
*/
	MSG_BANNED = 0x3,
/*20031028 to 20180523
서버 종료됨
Server Closed.
*/
	MSG_SERVER_OFF = 0x4,
/*20031028 to 20180523
같은 계정으로 다른 사용자가 로그인 하였습니다.
Someone has Logged in with this ID.
*/
	MSG_DOUBLE_LOGIN_PROHIBITED = 0x5,
/*20031028 to 20180523
등록되지 않은 계정입니다. 다시 확인 바랍니다.
Unregistered ID. Please make sure you have a registered account and you have correctly typed in the user ID.
*/
	MSG_INCORRECT_USERID = 0x6,
/*20031028 to 20070704
비밀번호가 틀립니다
20070710 to 20180523
입력하신 비밀번호가 올바르지 않습니다.
Incorrect User ID or Password. Please try again.
*/
	MSG_INCORRECT_PASSWORD = 0x7,
/*20031028 to 20180523
본 ID 는 사용기간이 만료 되었습니다
This ID is expired.
*/
	MSG_ID_EXPIRED = 0x8,
/*20031028 to 20180523
서버 접근 거부
Rejected from Server.
*/
	MSG_ACCESS_DENIED = 0x9,
/*20031028 to 20180523
같은 캐릭터 이름이 있습니다.
Character Name already exists.
*/
	MSG_CHARACTER_NAME_ALREADY_EXISTS = 0xa,
/*20031028 to 20180523
캐릭터 생성 거부됨
Character Creation is denied.
*/
	MSG_CHARACTER_CREATION_DENIED = 0xb,
/*20031028 to 20180523
캐릭터 삭제 거부
Character Deletion is denied.
*/
	MSG_CANNOT_DELETE_CHARACTER = 0xc,
/*20031028 to 20180523
방제목를 입력하세요.
Please Enter Room Title.
*/
	MSG_ENTER_ROOM_TITLE = 0xd,
/*20031028 to 20180523
불량단어가 검출되었습니다.
Foul Language Detected.
*/
	MSG_BAD_SENTANGE = 0xe,
/*20031028 to 20180523
암호를 입력하세요.
Please enter Password.
*/
	MSG_ENTER_PASSWORD = 0xf,
/*20031028 to 20180523
암호를 영문 4자 이상 입력하세요.
Please enter Password. Passwords must be at least 4 characters long.
*/
	MSG_Enter_Password_more_than_4_char = 0x10,
/*20031028 to 20180523
종료 하시겠습니까?
Are you sure that you want to quit?
*/
	MSG_DO_YOU_REALLY_WANT_TO_QUIT = 0x11,
/*20031028 to 20180523
4자 이상 입력해주세요. 사용자 계정이 없으신분들은 왼쪽 하단의 [신청] 버튼을 눌러 계정을 만드시기 바랍니다.
Passwords are at least 4 characters long. Please try again.
*/
	MSG_NAME_MUST_EXCEED_4_CHAR = 0x12,
/*20031028 to 20070704
캐릭터를 삭제하겠습니까?
20070618 to 20180523
한 번 삭제된 캐릭터 및 관련 정보는      다시 복구되지 않습니다.                                 캐릭터를 삭제하시겠습니까?
Are you sure that you want to delete this character?
*/
	MSG_DELETE_CHARACTER = 0x13,
/*20031028 to 20180523
불량단어가 검출되었습니다.
Foul Language Detected.
*/
	MSG_BAD_NAME = 0x14,
/*20031028 to 20180523
이름을 입력해 주세요.(한글 2자 영문 4자 이상)
Character Name must be at least 4 characters long.
*/
	MSG_ENTER_NAME_MORE_THAN_4_CHAR = 0x15,
/*20031028 to 20180523
명령어 일람: /h
Command List: /h | /help
*/
	MSG_LIST_COMMAND = 0x16,
/*20031028 to 20180523
이펙트 On
Effects On
*/
	MSG_EFFECT_ON = 0x17,
/*20031028 to 20180523
이펙트 Off
Effects Off
*/
	MSG_EFFECT_OFF = 0x18,
/*20031028 to 20180523
사운드 볼륨
Sound Volume
*/
	MSG_VOLUME_OF_SOUND = 0x19,
/*20031028 to 20180523
배경음악 볼륨
BGM Volume
*/
	MSG_VOLUME_OF_BGM = 0x1a,
/*20031028 to 20180523
효과음 On
Sound Effects On
*/
	MSG_SOUND_ON = 0x1b,
/*20031028 to 20180523
효과음 Off
Sound Effects Off
*/
	MSG_SOUND_OFF = 0x1c,
/*20031028 to 20180523
프레임스킵 On
Frame Skip On
*/
	MSG_FRAME_SKIP_ON = 0x1d,
/*20031028 to 20180523
프레임스킵 Off
Frame Skip Off
*/
	MSG_FRAME_SKIP_OFF = 0x1e,
/*20031028 to 20180523
배경음악 On
BGM On
*/
	MSG_BGM_ON = 0x1f,
/*20031028 to 20180523
배경음악 Off
BGM Off
*/
	MSG_BGM_OFF = 0x20,
/*20031028 to 20180523
/h or /help: 명령어 일람
/h or /help: Shows this Command Help List
*/
	MSG_EXPLAIN_HELP = 0x21,
/*20031028 to 20180523
/w or /who or /접속자 or /누구: 현재 접속자수 보기
/w or /who or /player or /who: wiew current the number of player
*/
	MSG_EXPLAIN_WHO = 0x22,
/*20031028 to 20180523
/음악 : 배경음악 On Off
/music: Turns BGM On or Off
*/
	MSG_EXPLAIN_MUSIC = 0x23,
/*20031028 to 20180523
/효과음 : 효과음 On Off
/sound: Turns Sound Effects On or Off
*/
	MSG_EXPLAIN_SOUND = 0x24,
/*20031028 to 20180523
/이펙트 : 이펙트 On Off
/effect: Effects On or Off
*/
	MSG_EXPLAIN_EFFECT = 0x25,
/*20031028 to 20180523
/좌표 or /장소: 현재 위치 표시
/where: Shows your present location
*/
	MSG_EXPLAIN_POS = 0x26,
/*20031028 to 20180523
/skip : 프래임스킵 On Off
/skip: Turns Frame Skip On or Off
*/
	MSG_EXPLAIN_FRAMESKIP = 0x27,
/*20031028 to 20180523
/v (0~127): 효과음 볼륨조정
/v (0~127): Controls the volume of the Sound Effects
*/
	MSG_EXPLAIN_SOUNDVOLUME = 0x28,
/*20031028 to 20180523
/bv (0~127): 배경음악 볼륨조정
/bv (0~127): Controls the volume of the BGM
*/
	MSG_EXPLAIN_BGMVOLUME = 0x29,
/*20031028 to 20180523
/ex (캐릭터이름) or /차단 (캐릭터이름) : 해당캐릭터에 대해 귓말차단
/ex (Character Name): Blocks whispering from the Character
*/
	MSG_EXPLAIN_SAYISOLATION = 0x2a,
/*20031028 to 20180523
/ex or /차단 : 귓말차단 캐릭터 리스트
/ex: View a list of Characters you have Blocked
*/
	MSG_EXPLAIN_LIST_SAYISOLATION_CHAR = 0x2b,
/*20031028 to 20180523
/in (캐릭터이름) or /해제 (캐릭터이름) : 해당캐릭터에 대해 귓말허용
/in (Character Name): Allows whispering from the Character
*/
	MSG_EXPLAIN_SAY_PERMIT = 0x2c,
/*20031028 to 20180523
/inall or /해제전부 : 모두에게 귓말허용
/inall: Allows whispers from anyone
*/
	MSG_EXPLAIN_SAY_PERMITALL = 0x2d,
/*20031028 to 20180523
/exall or /차단전부 : 모두에게 귓말차단
/exall: Blocks whispers from everyone
*/
	MSG_EXPLAIN_SAY_ISOLATEALL = 0x2e,
/*20031028 to 20180523
다른유저 캐릭터를 마우스 오른버튼을 누르고 있는 상태에서 왼버튼으로 클릭하면 그캐릭터이름이 귓말콤보박스에 저장됩니다.
Right click on a character and select [Register as a Friend] to add a person to your Friend List.
*/
	MSG_EXPLAIN_TIP1 = 0x2f,
/*20031028 to 20180523
단축아이탬창(F12) 소비장비 아이템을 드래그한후 사용하세요. 사용키(F1F2F3F4F5F6F7F8F9)
F12 Brings up a Hotkey Window which allows you to drag and drop Recovery Items, Equipment and Skills into it for faster access.
*/
	MSG_EXPLAIN_TIP2 = 0x30,
/*20031028 to 20180523
같은말을 3번이상 연속해서 전송할 수 없습니다.
You can't type the same word/phrase more than 3 times.
*/
	MSG_NO_SAME_SENTANCE = 0x31,
/*20031028 to 20180523
불량단어 검출로 전송이 중단 되었습니다.
Chat Filter: Yeah, uh, I don't think so buddy...
*/
	MSG_NO_SEND_BECAUSE_INSULT = 0x32,
/*20031028 to 20180523
같은아이템은 한번만 올릴수 있습니다.
You cannot overlap items on a window.
*/
	MSG_CAN_DRAG_ITEM_OLNY_ONETIME = 0x33,
/*20031028 to 20180523
무게가 초과하여 아이템을 가질 수 없습니다.
You cannot carry more items because you are overweight.
*/
	MSG_CANT_GET_ITEM_BECAUSE_WEIGHT = 0x34,
/*20031028 to 20180523
아이템을 가질 수 없습니다.
You cannot get the item.
*/
	MSG_CANT_GET_ITEM = 0x35,
/*20031028 to 20180523
거래가 잘 이루어졌습니다.
The deal has successfully completed.
*/
	MSG_DEAL_SECCESS = 0x36,
/*20031028 to 20180523
돈이 부족합니다.
You do not have enough zeny.
*/
	MSG_INSUFFICIENT_MONEY = 0x37,
/*20031028 to 20180523
무게가 초과 되었습니다.
You are over your Weight Limit.
*/
	MSG_OVER_WEIGHT = 0x38,
/*20031028 to 20180523
거래가 실패 했습니다.
The deal has failed.
*/
	MSG_DEAL_FAIL = 0x39,
/*20031028 to 20180523
모두에게 귓말거부상태로됨
You've blocked whispers from everyone.
*/
	MSG_REFUSE_HEAR_ALL = 0x3a,
/*20031028 to 20180523
모두에게 귓말거부요청 실패함
You've failed to block all whispers.
*/
	MSG_REQ_REFUSE_HEAR_ALL_FAIL = 0x3b,
/*20031028 to 20180523
모두에게 귓말가능상태가됨
You've allowed whispers from everyone.
*/
	MSG_HEAR_ALL = 0x3c,
/*20031028 to 20180523
모두에게 귓말가능요청 실패함
You've failed to allow all whispers.
*/
	MSG_REQ_HEAR_ALL_FAIL = 0x3d,
/*20031028 to 20180523
귓말 거부 리스트가 없습니다
You have no Block List.
*/
	MSG_NO_REFUSE_HEAR_LIST = 0x3e,
/*20031028 to 20180523
-귓말 거부 리스트-
[ Character Block List ]
*/
	MSG_REFUSE_HEAR_LIST = 0x3f,
/*20031028 to 20180523
방이 잘 만들어 졌습니다.
Room has been successfully created.
*/
	MSG_ROOM_IS_MADE = 0x40,
/*20031028 to 20180523
방갯수가 허용갯수를 초과 하였습니다.
Room Limit Exceeded.
*/
	MSG_TOO_MANY_ROOM = 0x41,
/*20031028 to 20180523
같은 방제목이 있습니다.
Same Room exists.
*/
	MSG_SAME_ROOM_TITLE = 0x42,
/*20031028 to 20180523
인원초과로 방에 들어갈 수 없습니다.
The Room is full.
*/
	MSG_TOO_MANY_PEOPLE_IN_ROOM = 0x43,
/*20031028 to 20180523
강제로 퇴장된 방입니다.
You have been kicked out of this room.
*/
	MSG_YOU_HAVE_BANNED_FROM_THE_ROOM = 0x44,
/*20031028 to 20180523
교환요청을 거절 했습니다.
The deal has been rejected.
*/
	MSG_REJECT_DEAL = 0x45,
/*20031028 to 20180523
교환가능거리를 벗어났습니다.
You are too far away from the person to trade.
*/
	MSG_TOO_FAR_TO_DEAL = 0x46,
/*20031028 to 20180523
해당 캐릭터가 없습니다.
The Character is not currently online or does not exist.
*/
	MSG_CHARACTER_IS_NOT_EXIST = 0x47,
/*20031028 to 20180523
다른캐릭터와 교환중입니다.
The person is in another deal.
*/
	MSG_CHARACTER_IS_DEALING = 0x48,
/*20031028 to 20110627
상태캐릭터 중량초과로 올려놓을수가 없습니다.
20110705 to 20180523
상대 캐릭터 중량초과로 올려놓을 수 없습니다.
You cannot trade because this character will exceed his weight limit.
*/
	MSG_CHARACTER_IS_OVER_WEIGHT = 0x49,
/*20031028 to 20180523
거래가 취소 되었습니다.
The deal has been canceled.
*/
	MSG_DEAL_IS_CANCELED = 0x4a,
/*20031028 to 20180523
아이템 교환이 잘 되었습니다.
The deal has successfully completed.
*/
	MSG_DEAL_SUCCESS = 0x4b,
/*20031028 to 20180523
아이템 교환이 실패 하였습니다.
The deal has failed.
*/
	MSG_DEAL_FAILED = 0x4c,
/*20031028 to 20180523
파티가 만들어졌습니다.
Party has successfully been organized.
*/
	MSG_PARTY_MAKE_SUCCEED = 0x4d,
/*20031028 to 20180523
같은 파티이름이 있습니다.
That Party Name already exists.
*/
	MSG_SAME_PARTY_NAME = 0x4e,
/*20031028 to 20180523
이미 파티에 속해있습니다.
The Character is already in a party.
*/
	MSG_YOU_ARE_ALREADY_IN_PARTY = 0x4f,
/*20031028 to 20180523
다른파티에 가입되어 있습니다.
The Character already joined another party.
*/
	MSG_CHARACTER_IS_ALREADY_IN_PARTY = 0x50,
/*20031028 to 20180523
파티가입을 거부했습니다.
Request for party rejected.
*/
	MSG_CHARACTER_REJECT_JOIN = 0x51,
/*20031028 to 20180523
파티가입을 수락했습니다.
Request for party accepted.
*/
	MSG_CHARACTER_ACCEPT_JOIN = 0x52,
/*20031028 to 20180523
파티정원을 초과했습니다.
Party Capacity exceeded.
*/
	MSG_TOO_MANY_PEOPLE_IN_PARTY = 0x53,
/*20031028 to 20180523
파티에서 탈퇴하였습니다.
You left the party.
*/
	MSG_YOU_LEAVE_FROM_PARTY = 0x54,
/*20031028 to 20180523
전체에게 보냄
Send to All
*/
	MSG_SEND_TO_ALL = 0x55,
/*20031028 to 20180523
파티에게 보냄
Send to Party
*/
	MSG_SEND_TO_PARTY = 0x56,
/*20031028 to 20180523
님과의 거래요청
Request a deal with %s
*/
	MSG_REQ_DEAL_WITH = 0x57,
/*20031028 to 20180523
님 파티에 가입요청
Ask %s to join your party
*/
	MSG_REQ_JOIN_PARTY = 0x58,
/*20031028 to 20180523
비공개 : 
Pri:
*/
	MSG_ROOM_PRIVATE = 0x59,
/*20031028 to 20180523
공개 : 
Pub:
*/
	MSG_ROOM_PUBLIC = 0x5a,
/*20031028 to 20180523
마지막 체크지점부터 시작하려면 '재시작'을 캐릭터 선택으로 돌아가려면 '종료'를 눌러주세요.
Click ''Restart'' to go back to your save point or click ''Exit'' to select another character.
*/
	MSG_RESTART_MSG = 0x5b,
/*20031028 to 20180523
원하는 거래를 선택하세요.
Please select a Deal Type.
*/
	MSG_SELECT_DEAL_TYPE = 0x5c,
/*20031028 to 20180523
님이 거래를 요청했습니다.
 requests a deal.
*/
	MSG_SUGGEST_DEAL = 0x5d,
/*20031028 to 20180523
 파티에서 초청 메시지가 왔습니다. 합류하겠습니까?
 Party has sent you an invitation. Would you like to join?
*/
	MSG_SUGGEST_JOIN_PARTY = 0x5e,
/*20031028 to 20180523
명령이 틀렸습니다.
Invalid Command
*/
	MSG_INVALID_COMMAND = 0x5f,
/*20031028 to 20180523
탈퇴하기
Leave party
*/
	MSG_LEAVE_PARTY = 0x60,
/*20031028 to 20180523
제명시키기
Expel
*/
	MSG_EXPEL = 0x61,
/*20031028 to 20180523
쪽지보내기
Send Message
*/
	MSG_MSG = 0x62,
/*20031028 to 20180523
1:1 대화
1:1 Chat
*/
	MSG_1ON1 = 0x63,
/*20031028 to 20180523
정보
Information
*/
	MSG_CHARACTER_INFO = 0x64,
/*20031028 to 20180523
파티설정
Party Setup
*/
	MSG_PARTY_SETTING = 0x65,
/*20031028 to 20180523
친구
Friend
*/
	MSG_FRIEND = 0x66,
/*20031028 to 20180523
파티
Party
*/
	MSG_PARTY = 0x67,
/*20031028 to 20180523
장착아이템
Equipment
*/
	MSG_EQUIPED_ITEM = 0x68,
/*20031028 to 20180523
스테이터스
Status
*/
	MSG_STATUS_ = 0x69,
/*20031028 to 20180523
소지아이템
Inventory
*/
	MSG_ITEM = 0x6a,
/*20031028 to 20180523
/결성 [파티이름] : 파티결성 /탈퇴 : 파티탈퇴
/organize ''Party Name'' To organize a party. Type /leave To leave a Party.
*/
	MSG_EXPLAIN_PARTY = 0x6b,
/*20031028 to 20180523
자신이 파티리더일때 캐릭터를 오른버튼으로 클릭하면 파티에 가입요청하기 메뉴가 뜹니다.
If you are the party master, you can invite someone into your party by right-clicking on a Character.
*/
	MSG_EXPLAIN_TIP3 = 0x6c,
/*20031028 to 20180523
회복
Consumables
*/
	MSG_RESTORE = 0x6d,
/*20031028 to 20180523
공격
Attack
*/
	MSG_ATTACK = 0x6e,
/*20031028 to 20180523
보조
Support
*/
	MSG_SUPPORT = 0x6f,
/*20031028 to 20180523
전체
All
*/
	MSG_ALL = 0x70,
/*20031028 to 20180523
무기
Weapons
*/
	MSG_WEAPON = 0x71,
/*20031028 to 20180523
방어
Defense
*/
	MSG_DEFENCE = 0x72,
/*20031028 to 20180523
수
Water
*/
	MSG_WATER = 0x73,
/*20031028 to 20180523
지
Earth
*/
	MSG_EARTH = 0x74,
/*20031028 to 20180523
화
Fire
*/
	MSG_FIRE = 0x75,
/*20031028 to 20180523
풍
Wind
*/
	MSG_WIND = 0x76,
/*20031028 to 20180523
같은종류의 장비아이템은 한번에 한개만 살 수 있습니다.
Please avoid buying 2 of the same items at one time.
*/
	MSG_EQUIPITEM_OLNY_ONE = 0x77,
/*20031028 to 20180523
창모드에서 실행 할때는 16비트 컬러로 맞춰주세요.
Please change your desktop Color Depth to 16-bit when running Ragnarok in windowed mode.
*/
	MSG_ONLY_16BIT_WHEN_WINDOWMODE = 0x78,
/*20031028 to 20180523
잠시만 기다려 주세요.
Please wait...
*/
	MSG_PLEASE_BE_PATIENT = 0x79,
/*20031028 to 20180523
잠시만 기다려 주세요.
Please wait...
*/
	MSG_WAITING_RESPONSE_FROM_SERVER = 0x7a,
/*20031028 to 20180523
잠시만 기다려 주세요.
Please wait...
*/
	MSG_MAKING_CHARACTER = 0x7b,
/*20031028 to 20180523
잠시만 기다려 주세요.
Please wait...
*/
	MSG_DELETING_CHARACTER = 0x7c,
/*20031028 to 20180523
방 만들기
Make a Room
*/
	MSG_MAKING_ROOM = 0x7d,
/*20031028 to 20180523
방셋팅 바꾸기
Room Setup
*/
	MSG_CHANGE_ROOM_SETTING = 0x7e,
/*20031028 to 20180523
강퇴시키기
Kick Character Out
*/
	MSG_BAN = 0x7f,
/*20031028 to 20180523
방장권한 주기
Give Master Authority
*/
	MSG_GIVE_GIVE_ROOM_POWER = 0x80,
/*20031028 to 20180523
정보보기
View Information
*/
	MSG_SEE_INFORMATION_OF_CHARACTER = 0x81,
/*20031028 to 20180523
대화방
Chat Room
*/
	MSG_CHAT_ROOM = 0x82,
/*20031028 to 20180523
명
Ppl
*/
	MSG_COUNT_UNIT_OF_PEOPLE = 0x83,
/*20031028 to 20180523
/앉기 or /sit : 앉기. 앉아있을때 서기
/sit: Sit command. If you are sitting, you will stand instead.
*/
	MSG_EXPLAIN_SIT = 0x84,
/*20031028 to 20180523
/서기 or /stand : 서기. 서있을때 앉기
/stand: Stand command. If you are standing, you will sit instead.
*/
	MSG_EXPLAIN_STAND = 0x85,
/*20031028 to 20180523
/채팅방 or /chat : 채팅방 만들기창 띄우기
/chat: Creates a Chat Room
*/
	MSG_EXPLAIN_MAKE_CHAT = 0x86,
/*20031028 to 20180523
/q : 채팅방 나가기.
/q: Leaves a Chat Room
*/
	MSG_EXPLAIN_EXIT_CHAT_ROOM = 0x87,
/*20031028 to 20180523
/거래 [캐릭터이름] or /교환 [캐릭터이름] or /deal [캐릭터이름] : 해당 캐릭터와 거래요청
/deal ''Character Name'' Requests a deal with a character
*/
	MSG_EXPLAIN_DEAL = 0x88,
/*20031028 to 20180523
/결성 [파티이름] or /organize [파티이름] : 파티결성
/organize ''Party Name'' Organizes a party
*/
	MSG_EXPLAIN_ORGANIZE_PARTY = 0x89,
/*20031028 to 20180523
/탈퇴 or /leave : 파티 탈퇴
/leave: Leaves a party
*/
	MSG_EXPLAIN_LEAVE_PARTY = 0x8a,
/*20031028 to 20180523
/제명 [캐릭터이름] or /expel [캐릭터이름] : 해당캐릭터를 파티에서 제명시킴
/expel ''Character Name'' kicks a Character out of your party
*/
	MSG_EXPLAIN_EXPEL_PARTY_MEMBER = 0x8b,
/*20031028 to 20180523
[Alt] + [End] : 플레이어 hp/sp 게이지 On Off
[Alt] + [End]: Turns HP/SP Bar On or Off
*/
	MSG_EXPLAIN_TIP4 = 0x8c,
/*20031028 to 20180523
[Alt] + [Home] : 지면 커서 표시 On Off
[Alt] + [Home]: Turns Ground Cursor On or Off
*/
	MSG_EXPLAIN_TIP5 = 0x8d,
/*20031028 to 20180523
[Insert] : 앉기 서기
[Insert]: Makes you sit or stand. (Hotkey to toggle between /sit and /stand)
*/
	MSG_EXPLAIN_TIP6 = 0x8e,
/*20031028 to 20180523
MVP가 되셨습니다!! MVP 아이템은 
Congratulations! You are the MVP! Your reward item is 
*/
	MSG_YOU_RECEIVE_MVP_ITEM = 0x8f,
/*20031028 to 20180523
 !!
!!
*/
	MSG_YOU_RECEIVE_MVP_ITEM2 = 0x90,
/*20031028 to 20180523
MVP가 되셨습니다!! 특별경험치 
Congratulations! You are the MVP! Your reward EXP Points are 
*/
	MSG_YOU_RECEIVE_MVP_EXP = 0x91,
/*20031028 to 20180523
 획득!!
!!
*/
	MSG_YOU_RECEIVE_MVP_EXP2 = 0x92,
/*20031028 to 20180523
MVP가 되셨습니다만 무게초과로 MVP 아이템을 가질 수 없었습니다!!
You are the MVP, but you can't take the reward because you are over your weight limit.
*/
	MSG_YOU_THROW_MVPITEM = 0x93,
/*20031028 to 20180523
 없는 캐릭터 이름 입니다.
There is no such character name or the user is offline.
*/
	MSG_NOT_EXIST_CHARACTER = 0x94,
/*20031028 to 20180523
 수신 거부 상태입니다.
 doesn't want to receive your messages.
*/
	MSG_NO_RECEIVE_MODE = 0x95,
/*20031028 to 20180523
 모든 캐릭터에 대해 수신 거부 상태 입니다.
 is not in the mood to talk with anyone.
*/
	MSG_NO_RECEIVE_MODE_FOR_ALL = 0x96,
/*20031028 to 20180523
캐릭터 접속끊기 성공.
Killed/Disconnected User.
*/
	MSG_SUCCESS_DISCONNECT_CHARACTER = 0x97,
/*20031028 to 20180523
캐릭터 접속끊기 실패.
Kill has failed.
*/
	MSG_FAIL_DISCONNECT_CHARACTER = 0x98,
/*20031028 to 20180523
%s %d 개 획득
You got %s (%d).
*/
	MSG_GET_ITEM = 0x99,
/*20031028 to 20180523
[Alt] + [=] : 알파벳 간격이 넓어졌을때 되돌리기.
[Alt] + [=]: Fix the interval error between letters.
*/
	MSG_EXPLAIN_TIP7 = 0x9a,
/*20031028 to 20180523
[F10] : 채팅창 크기조정 [Alt] + [F10] : 채팅창 On Off
[F10]: To toggle Chat Window size; [Alt] + [F10]: Toggle Chat Window On or Off
*/
	MSG_EXPLAIN_TIP8 = 0x9b,
/*20031028 to 20180523
귓속말 하는법 : 채팅창 왼쪽 입력란에 캐릭터이름을 입력하고 오른쪽 입력란에 말을 입력하면 됩니다. TAB키로 두입력란 사이로 커서를 이동할 수 있습니다.
How to Whisper: Enter a Character's Name on the left side of chat window and type your message on the right side. The Tab key helps you move between these boxes.
*/
	MSG_EXPLAIN_TIP9 = 0x9c,
/*20031028 to 20180523
/! /? /기쁨 /하트 /땀 /아하 /짜증 /화 /돈 /... /가위 /바위 /보 : Alt + (1~9) Ctrl + (-=\) 에 대응되는 명령어 입니다.
/!,/?,/ho,/lv,/lv2,/swt,/ic,/an,/ag,/$,/….,/thx,/wah,/sry,/heh,/swt2,/hmm,/no1,/??,/omg,/oh,/X,/hp,/go,/sob,/gg,/kis,/kis2,/pif,/ok: Emotion icons corresponding to Alt + (1~9) Ctrl + (-=\\)
*/
	MSG_EXPLAIN_TIP10 = 0x9d,
/*20031028 to 20180523
파티원에게 말하는법 : 말의 제일앞에 '%'를 붙이면 파티원에게 말이 갑니다. (예: "%안녕")
How to Speak to Party: Add % in front of every message.(Example: \%Hello\)
*/
	MSG_EXPLAIN_TIP11 = 0x9e,
/*20031028 to 20180523
스킬레벨이 부족합니다. 교환 불능.
You haven't learned enough Basic Skills to Trade.
*/
	MSG_NOT_ENOUGH_SKILLLEVE1 = 0x9f,
/*20031028 to 20180523
스킬레벨이 부족합니다. 이모션 불능.
You haven't learned enough Basic Skills to use Emotion icons.
*/
	MSG_NOT_ENOUGH_SKILLLEVE2 = 0xa0,
/*20031028 to 20180523
스킬레벨이 부족합니다. 앉기 불능.
You haven't learned enough Basic Skills to Sit.
*/
	MSG_NOT_ENOUGH_SKILLLEVE3 = 0xa1,
/*20031028 to 20180523
스킬레벨이 부족합니다. 채팅방만들기 불능.
You haven't learned enough Basic Skills to create a chat room.
*/
	MSG_NOT_ENOUGH_SKILLLEVE4 = 0xa2,
/*20031028 to 20180523
스킬레벨이 부족합니다. 파티만들기 불능
You haven't learned enough Basic Skills to Party.
*/
	MSG_NOT_ENOUGH_SKILLLEVE5 = 0xa3,
/*20031028 to 20180523
스킬레벨이 부족합니다. 외치기 불능
You haven't learned enough skills to Shout.
*/
	MSG_NOT_ENOUGH_SKILLLEVE6 = 0xa4,
/*20031028 to 20180523
스킬레벨이 부족합니다. pk 불능
You haven't learned enough skills for Pking.
*/
	MSG_NOT_ENOUGH_SKILLLEVE7 = 0xa5,
/*20031028 to 20180523
사고자하는 품목
Buying Items
*/
	MSG_ITEMS_FOR_BUY = 0xa6,
/*20031028 to 20180523
아이템 상점
Item Shop
*/
	MSG_ITEM_STORE = 0xa7,
/*20031028 to 20180523
팔고자하는 품목
Selling Items
*/
	MSG_ITEMS_FOR_SELL = 0xa8,
/*20031028 to 20180523
보관아이템
Storage
*/
	MSG_ITEMS_THAT_IS_STORED = 0xa9,
/*20031028 to 20180523
 장비가 장착 되었습니다.
 is put on.
*/
	MSG_ITEM_IS_EQUIPED = 0xaa,
/*20031028 to 20180523
 장비가 해제 되었습니다.
 is taken off.
*/
	MSG_ITEM_IS_REMOVED = 0xab,
/*20031028 to 20180523
귓말리스트에 이름넣기
To add names on the Whispering List
*/
	MSG_ADD_TO_WHISPER_CHAR_LIST = 0xac,
/*20031028 to 20180523
스크린샷 찍는법 : [Print Screen]키나 [Scroll Lock]키를 누르면 됩니다.
How to Take Screen Shots: Press [Print Screen] or [Scroll Lock]
*/
	MSG_EXPLAIN_TIP12 = 0xad,
/*20031028 to 20180523
오늘의 팁
Tip of the Day
*/
	MSG_TIPOFTHEDAY = 0xae,
/*20031028 to 20180523
^3850a0알고 계셨습니까... ^000000  //^709fed
^3850a0Did you know...?^709fed
*/
	MSG_DIDYOUKNOW = 0xaf,
/*20031028 to 20180523
시작할때 열기
Display at startup
*/
	MSG_SHOWTIPSATSTARTUP = 0xb0,
/*20031028 to 20180523
/tip : 오늘의팁 열기
/tip: Opens ''Tip of the Day''
*/
	MSG_EXPLAIN_OPENTIP = 0xb1,
/*20031028 to 20180523
현재 접속자 %d명
There are %d Players Currently Connected.
*/
	MSG_NUMPEOPLE = 0xb2,
/*20031028 to 20180523
(%s)님이 입장 하였습니다.
(%s) has entered.
*/
	MSG_USERGETINTHEROOM = 0xb3,
/*20031028 to 20180523
(%s)님이 퇴장 하였습니다.
(%s) has left.
*/
	MSG_USERGETOUTOFTHEROOM = 0xb4,
/*20031028 to 20180523
(%s)님이 강제 퇴장 되었습니다.
(%s) was kicked out.
*/
	MSG_USERGETOUTOFTHEROOMBYFORCE = 0xb5,
/*20031028 to 20180523
 %d 개
%d ea.
*/
	MSG_EA = 0xb6,
/*20031028 to 20180523
%s : %d 개
%s: %d ea.
*/
	MSG_EA2 = 0xb7,
/*20031028 to 20180523
%s %s : %d 개
%s %s: %d
*/
	MSG_EA3 = 0xb8,
/*20031028 to 20180523
팔 수 있는 품목
Available Items to sell
*/
	MSG_ITEMSYOUCANSELL = 0xb9,
/*20031028 to 20180523
상점에서 파는 품목
Shop Items
*/
	MSG_SHOPITEMS = 0xba,
/*20031028 to 20180523
알 수 없는곳
Unknown Area
*/
	MSG_NOWHERE = 0xbb,
/*20031028 to 20180523
서버와 언어가 맞지 않습니다.
Your Client language doesn't match the Server language.
*/
	MSG_CLIENTTYPEMISMATCH = 0xbc,
/*20031028 to 20180523
아이템을 버릴려면 장비창을 닫으세요.
Please move your equipment to the inventory. And close the equipment window.
*/
	MSG_CLOSEEQUIPWND = 0xbd,
/*20031028 to 20180523
영어만 됩니다.
This server provides English Text Characters Only.
*/
	MSG_ENGLISHONLY = 0xbe,
/*20031028 to 20180523
지금은 지원되지 않습니다.
This is not implemented yet.
*/
	MSG_NOTSUPPORTEDYET = 0xbf,
/*20031028 to 20180523
귓말 리스트가 없습니다.
No Whisper List.
*/
	MSG_NOWHISPERLIST = 0xc0,
/*20031028 to 20180523
 에게 귓말거부상태로됨
: Whispering Blocked.
*/
	MSG_WHISPERIGNORESUCCESS = 0xc1,
/*20031028 to 20180523
 에게 귓말거부 요청실패함
: Whispering Block has failed.
*/
	MSG_WHISPERIGNOREFAILED1 = 0xc2,
/*20031028 to 20180523
 에게 귓말거부 요청실패함 (인원초과)
: Whispering Block has failed. Block List is full.
*/
	MSG_WHISPERIGNOREFAILED2 = 0xc3,
/*20031028 to 20180523
 에게 귓말가능상태로됨
: Whispering accepted.
*/
	MSG_WHISPERNOIGNORESUCCESS = 0xc4,
/*20031028 to 20180523
 에게 귓말가능 요청실패함
: Command has failed.
*/
	MSG_WHISPERNOIGNOREFAILED1 = 0xc5,
/*20031028 to 20180523
 에게 귓말가능 요청실패함 (인원초과)
: Command has failed. Block List is full.
*/
	MSG_WHISPERNOIGNOREFAILED2 = 0xc6,
/*20031028 to 20180523
이름의 처음과 마지막에는 공백문자를 사용할 수 없습니다.
You cannot put a space at the beginning or end of a name.
*/
	MSG_NO_SPACE_IN_NAME = 0xc7,
/*20031028 to 20180523
비공개
Private
*/
	MSG_ROOM_PRIVATE2 = 0xc8,
/*20031028 to 20180523
공개
Public
*/
	MSG_ROOM_PUBLIC2 = 0xc9,
/*20031028 to 20180523
SP가 부족합니다.
Not Enough SP
*/
	MSG_USESKILL_FAIL_SP_INSUFFICIENT = 0xca,
/*20031028 to 20180523
HP가 부족합니다.
Not Enough HP
*/
	MSG_USESKILL_FAIL_HP_INSUFFICIENT = 0xcb,
/*20031028 to 20180523
스킬사용 실패.
Skill has failed.
*/
	MSG_NOT_ENOUGH_SKILLLEVE8 = 0xcc,
/*20031028 to 20180523
훔치기 실패.
Steal has failed.
*/
	MSG_FAIL_STEAL = 0xcd,
/*20031028 to 20180523
교환창
Trade
*/
	MSG_EXCHANGE = 0xce,
/*20031028 to 20180523
독걸기 실패.
Envenom skill has failed.
*/
	MSG_FAIL_POISON = 0xcf,
/*20031028 to 20180523
이 아이디로는 이 서버에 접속할 수 없습니다.
You cannot use this ID on this server.
*/
	MSG_ID_MISMATCH = 0xd0,
/*20031028 to 20180523
스피드가 향상되었습니다.
Your Speed has increased.
*/
	MSG_SPEEDUP = 0xd1,
/*20031028 to 20180523
스피드가 감소되었습니다.
Your Speed has decreased.
*/
	MSG_SPEEDDOWN = 0xd2,
/*20031028 to 20180523
/기억 : 워프할 장소 기억(워프 스킬이 있는경우)
/memo: To memorize a place as Warp Point (If you are an Acolyte Class character)
*/
	MSG_EXPLAIN_TIP13 = 0xd3,
/*20031028 to 20180523
임의의 위치
Random Area
*/
	MSG_RANDOM_POS = 0xd4,
/*20031028 to 20180523
워프 할 위치를 선택하세요.
Select an Area to Warp
*/
	MSG_SELECTWHERETOWARP = 0xd5,
/*20031028 to 20180523
스킬레벨이 부족합니다.
Skill Level is not high enough
*/
	MSG_NOTENOUGHSKILLLEVEL = 0xd6,
/*20031028 to 20180523
저장된 워프할 장소가 없습니다.
There are no memorized locations (Memo Points).
*/
	MSG_NO_STORED_PLACE_TO_WARP = 0xd7,
/*20031028 to 20180523
워프 관련 스킬이 없습니다.
You haven't learned Warp.
*/
	MSG_NOWARPSKILL = 0xd8,
/*20031028 to 20180523
워프 장소로 저장됨.
Saved location as a Memo Point for Warp Skill.
*/
	MSG_WARPPOINTSTORED = 0xd9,
/*20031028 to 20180523
취소
Cancel
*/
	MSG_CANCEL = 0xda,
/*20031028 to 20180523
스킬 사용후 시간이 충분히 지나지 않았습니다.
There is a Delay after using a Skill.
*/
	MSG_SKILLINTERVAL = 0xdb,
/*20031028 to 20180523
한번에 가질 수 있는 아이템 종류수를 초과하여 아이템을 가질 수 없습니다.
You can't have this item because you will exceed the weight limit.
*/
	MSG_CANT_GET_ITEM_BECAUSE_COUNT = 0xdc,
/*20031028 to 20180523
아이템 최대 종류수를 초과 하였습니다.
Out of the maximum capacity
*/
	MSG_INSUFFICIENT_OVER_COUNT = 0xdd,
/*20031028 to 20180523
수레아이템
Cart Items
*/
	MSG_MERCHANTITEM = 0xde,
/*20031028 to 20180523
수레 벗기
Take off Cart
*/
	MSG_CARTOFF = 0xdf,
/*20031028 to 20180523
노점 개설
Opening a stall
*/
	MSG_MERCHANTSHOPMAKER = 0xe0,
/*20031028 to 20041207
노점이름를 입력하세요.
20041213 to 20180523
노점이름을 입력하세요.
Please Name your Shop.
*/
	MSG_ENTER_SHOP_TITLE = 0xe1,
/*20031028 to 20180523
나의 노점
My Shop
*/
	MSG_ITEM_MY_STORE = 0xe2,
/*20031028 to 20180523
상인 아이템 상점
Merchant Shop
*/
	MSG_ITEM_MERCHANT_STORE = 0xe3,
/*20031028 to 20180523
상인에게 사고자하는 품목
Buying Items
*/
	MSG_ITEMS_FOR_BUY_FROM_MERCHANT = 0xe4,
/*20031028 to 20130508
%s 사기 실패 %s
20130515 to 20180523
%s 구입 실패 %s
%s Purchase Failed %s
*/
	MSG_FAIL_BUY_ITEM_FROM_MERCHANT = 0xe5,
/*20031028 to 20180523
재고 부족.
Out of Stock
*/
	MSG_INSUFFICIENT_STOCK = 0xe6,
/*20031028 to 20180523
%s %d 개 팔림.
%s %d sold.
*/
	MSG_ITEM_IS_SOLD = 0xe7,
/*20031028 to 20180523
노점에서 팔 수 있는 아이템
Available Items for Vending
*/
	MSG_MERCHANTMIRRORITEM = 0xe8,
/*20031028 to 20111012
돈이 부족해서 스킬을 쓸 수 없습니다.
20111017 to 20180523
제니가 부족해서 스킬을 사용 할 수 없습니다.
Skill has failed because you do not have enough zeny.
*/
	MSG_SKILL_FAIL_MONEY = 0xe9,
/*20031028 to 20180523
사용할 대상을 선택하세요
Select a Target.
*/
	MSG_SELECTTARGET = 0xea,
/*20031028 to 20180523
/pk on : pk On /pk off : pk Off
/pk on: Turns PK On. /pk off: Turns PK Off.
*/
	MSG_EXPLAIN_TIP14 = 0xeb,
/*20031028 to 20180523
노점
Shop
*/
	MSG_STREETSHOP = 0xec,
/*20031028 to 20180523
수레 아이템 [Alt+W]
Cart Items [Alt+W]
*/
	MSG_OPENCARTWINDOW = 0xed,
/*20031028 to 20180523
기본정보
Basic Information
*/
	MSG_BASICINFOWND = 0xee,
/*20031028 to 20180523
이무기로는 이스킬을 사용할수 없습니다.
The skill cannot be used with this weapon.
*/
	MSG_USESKILL_FAIL_NOT_SUITABLE_WEAPON = 0xef,
/*20031028 to 20180523
%s 사기 실패 재고 부족 현재 재고 %d 개.
Buying %s has been failed. Out of Stock. Current Stock %d.
*/
	MSG_FAIL_BUY_ITEM_FROM_MERCHANT_NO_STOCK = 0xf0,
/*20031028 to 20180523
서버와 동기화가 틀려 연결이 끊어졌습니다.
You've been disconnected due to a time gap between you and the server.
*/
	MSG_SPEEDHACK = 0xf1,
/*20031028 to 20180523
화살을 장착하세요
Please equip the proper ammunition first.
*/
	MSG_ERR_ATTACK_ARROW = 0xf2,
/*20031028 to 20180523
중량과다로 공격이나 스킬을 사용할 수 없습니다.
You can't attack or use skills because you've exceeded the Weight Limit.
*/
	MSG_ERR_ATTACK_WEIGHT = 0xf3,
/*20031028 to 20180523
중량과다로 스킬을 사용할 수 없습니다.
You can't use skills because you've exceeded the Weight Limit.
*/
	MSG_ERR_SKILL_WEIGHT = 0xf4,
/*20031028 to 20180523
화살이 장착되었습니다.
Ammunition has been equipped.
*/
	MSG_MSG_ARROW_EQUIPMENT_SUCCESS = 0xf5,
/*20031028 to 20180523
레드젬스톤이 필요합니다.
Red Gemstone required.
*/
	MSG_NEED_REDJAMSTONE = 0xf6,
/*20031028 to 20180523
블루젬스톤이 필요합니다.
Blue Gemstone required.
*/
	MSG_NEED_BLUEJAMSTONE = 0xf7,
/*20031028 to 20180523
힘 파라메터
Strength
*/
	MSG_DESC_STR = 0xf8,
/*20031028 to 20180523
민첩성 파라메터
Agility
*/
	MSG_DESC_AGI = 0xf9,
/*20031028 to 20180523
체력 파라메터
Vitality
*/
	MSG_DESC_VIT = 0xfa,
/*20031028 to 20180523
지력 파라메터
Intelligence
*/
	MSG_DESC_INT = 0xfb,
/*20031028 to 20180523
손재주 파라메터
Dexterity
*/
	MSG_DESC_DEX = 0xfc,
/*20031028 to 20180523
운 파라메터
Luck
*/
	MSG_DESC_LUK = 0xfd,
/*20031028 to 20180523
공격력
Hit Point
*/
	MSG_DESC_ATK = 0xfe,
/*20031028 to 20180523
방어력
Defence Rate
*/
	MSG_DESC_DEF = 0xff,
/*20031028 to 20180523
명중률
Accuracy
*/
	MSG_DESC_HIT = 0x100,
/*20031028 to 20180523
필살공격률
Critical Attack
*/
	MSG_DESC_CRI = 0x101,
/*20031028 to 20180523
소속길드
Affiliated Guild
*/
	MSG_DESC_GUILD = 0x102,
/*20031028 to 20180523
각 파라메터 레벨업에 사용되는 포인트
Points to level up each Parameter
*/
	MSG_DESC_POINT = 0x103,
/*20031028 to 20180523
마법공격력
Magic Attack
*/
	MSG_DESC_MATK = 0x104,
/*20031028 to 20180523
마법방어력
Magic Defense
*/
	MSG_DESC_MDEF = 0x105,
/*20031028 to 20180523
회피율
Dodge
*/
	MSG_DESC_FLEE = 0x106,
/*20031028 to 20180523
공격스피드
Attack Speed
*/
	MSG_DESC_ASPD = 0x107,
/*20031028 to 20180523
지역당 수용인원 초과로 접속할 수 없습니다.
Server is jammed due to over population. Please try again shortly.
*/
	MSG_PC_OVERFLOW = 0x108,
/*20031028 to 20180523
옵션
Option
*/
	MSG_OPTIONWND = 0x109,
/*20031028 to 20180523
E-MAIL 인증이 되지않았거나 블럭된 계정입니다.
Account ID blocked by the Game Master Team.
*/
	MSG_ID_EMAIL_CONFIRM_NEEDED = 0x10a,
/*20031028 to 20180523
비밀번호가 틀립니다.
Incorrect User ID or Password. Please try again.
*/
	MSG_INCORRECT_LOGIN_PASSWORD = 0x10b,
/*20031028 to 20180523
머리모양 선택
Choose Hairstyle
*/
	MSG_SELECT_HAIR_STYLE = 0x10c,
/*20031028 to 20180523
공격력
Hit Point
*/
	MSG_ATK = 0x10d,
/*20031028 to 20180523
방어력
Defence Rate
*/
	MSG_DEF = 0x10e,
/*20031028 to 20180523
공격스냅 On
Attack Snap On
*/
	MSG_ATTACK_SNAP_ON = 0x10f,
/*20031028 to 20180523
공격스냅 Off
Attack Snap Off
*/
	MSG_ATTACK_SNAP_OFF = 0x110,
/*20031028 to 20180523
스킬스냅 On
Skill Snap On
*/
	MSG_SKILL_SNAP_ON = 0x111,
/*20031028 to 20180523
스킬스냅 Off
Skill Snap Off
*/
	MSG_SKILL_SNAP_OFF = 0x112,
/*20031028 to 20180523
/스냅 or /snap: 몬스터 공격시 스냅 On Off  /스킬스냅 or /skillsnap: 스킬로 몬스터 공격시 스냅 On Off  /아이템스냅 or /itemsnap: 아이템 주울때 스냅 On Off
/snap: Turns snap On | Off for fights, /skillsnap: Turns snap On | Off for skills. /itemsnap: Turns snap On | Off for items on the grounds.
*/
	MSG_EXPLAIN_SNAP = 0x113,
/*20031028 to 20180523
아이템스냅 On
Item Snap On
*/
	MSG_ITEM_SNAP_ON = 0x114,
/*20031028 to 20180523
아이템스냅 Off
Item Snap Off
*/
	MSG_ITEM_SNAP_OFF = 0x115,
/*20031028 to 20180523
스냅
Snap
*/
	MSG_SNAP = 0x116,
/*20031028 to 20180523
한가지 아이템을 3만개 이상 가질수 없습니다.
You cannot carry more than 30,000 of one kind of item.
*/
	MSG_CANT_GET_ITEM_OVERCOUNT_ONEITEM = 0x117,
/*20031028 to 20180523
레벨 30이상의 캐릭터는 삭제할 수 없습니다. 삭제를 원하시면 관계자에게 문의 하세요.
You cannot delete a Character with a level greater than 30. If you want to delete the character please contact a Game Master.
*/
	MSG_CANT_DELETE_CHARACTER_OVER_30_LEVEL = 0x118,
/*20031028 to 20091208
이이템 교환중에는 아이템을 사고 팔 수 없습니다.
20091215 to 20180523
아이템 교환중에는 아이템을 사고 팔 수 없습니다.
You cannot use an NPC shop while in a trade.
*/
	MSG_FAIL_BUY_ITEM_ITEM_EXCHANGING = 0x119,
/*20031028 to 20180523
상점명
Shop Name
*/
	MSG_STALL_NAME = 0x11a,
/*20031028 to 20180523
스킬목록
Skill Tree
*/
	MSG_SKILLLIST = 0x11b,
/*20031028 to 20180523
스킬포인트 : %d
Skill Point: %d
*/
	MSG_SKILLPOINT = 0x11c,
/*20031028 to 20180523
스킬사용 실패
Skill has failed.
*/
	MSG_USESKILL_FAIL = 0x11d,
/*20031028 to 20180523
패시브
Passive
*/
	MSG_PASSIVE = 0x11e,
/*20031028 to 20180523
각자 취득
Individual
*/
	MSG_EXPDIV1 = 0x11f,
/*20031028 to 20180523
균등하게 분배
Shared
*/
	MSG_EXPDIV2 = 0x120,
/*20031028 to 20180523
각자 취득
Individual
*/
	MSG_ITEMCOLLECT1 = 0x121,
/*20031028 to 20180523
파티 전체 공유
Party Share
*/
	MSG_ITEMCOLLECT2 = 0x122,
/*20031028 to 20180523
파티 설정
Party Setup
*/
	MSG_PARTYSETTING = 0x123,
/*20031028 to 20180523
경험치 분배방식
How to share EXP
*/
	MSG_HOWEXPDIV = 0x124,
/*20031028 to 20180523
아이템 수집방식
How to share Items
*/
	MSG_HOWITEMCOLLECT = 0x125,
/*20031028 to 20180523
파티 리더만 설정할 수 있습니다.
Only the Party Leader can change this setting.
*/
	MSG_ONLY_PARTYMASTER = 0x126,
/*20031028 to 20180523
아이템 갯수 안물어보기
Toggle Item Amount.
*/
	MSG_NOQUESTION_ITEMCOUNT = 0x127,
/*20031028 to 20180523
^ff0000%d^000000 초 후에 캐릭터가 지워집니다. 취소 하려면 취소 버튼을 누르세요.
Character will be deleted after ^ff0000%d^000000 seconds. Press Cancel to quit.
*/
	MSG_CHARARATER_DELETE_COUNT = 0x128,
/*20031028 to 20180523
교환할 수 있는 최대 아이템 갯수는 10가지 입니다.
You cannot trade more than 10 types of items per trade.
*/
	MSG_MAXEXCHANGE_IS_10_KIND = 0x129,
/*20031028 to 20180523
이서버를 이용할 수 없는 나이입니다.
You are underaged.
*/
	MSG_LIMIT_AGE = 0x12a,
/*20031028 to 20180523
이메일 주소를 입력하세요.
Please enter the deletion password.
*/
	MSG_ENTER_EMAIL = 0x12b,
/*20031028 to 20180523
이메일 주소 입력하기
E-mail Address (Case Sensitive).
*/
	MSG_ENTER_EMAIL_TOOLTIP = 0x12c,
/*20031028 to 20180523
이메일 주소가 틀려서 캐릭터가 삭제 되지 않았습니다.
Character Deletion has failed because you have entered an incorrect e-mail address.
*/
	MSG_CANNOT_DELETE_CHARACTER_EMAIL = 0x12d,
/*20031028 to 20070703
주민등록번호 뒷자리를 입력하세요.
20070618 to 20070622
비밀번호를 한 번 더 입력해 주시기 바랍니다.
20070704 to 20180523
계정 비밀번호를 입력하세요.
Enter Second Serial Cord of your Social Security number.
*/
	MSG_ENTER_PEOPLE_REG_NUMBER = 0x12e,
/*20031028 to 20070703
주민등록번호 뒷자리가 틀려서 캐릭터가 삭제 되지 않았습니다.
20070618 to 20070622
비밀번호가 맞지 않아 캐릭터가 삭제 되지 않았습니다.
20070704 to 20180523
비밀번호가 틀려서 캐릭터가 삭제 되지 않았습니다.
Character Deletion has failed because you have entered an incorrect SSN.
*/
	MSG_CANNOT_DELETE_CHARACTER_PEOPLE_REG_NUMBER = 0x12f,
/*20031028 to 20180523
한번에 15가지 이상의 아이템을 팔 수 없습니다.
You can't sell more than 15 types of Items at one time.
*/
	MSG_CANT_SELL_OVER_15 = 0x130,
/*20031028 to 20180523
나이제한 때문에 이계정으로 이서버에 접속할 수 없습니다.
The age limit from commandment tables cannot connect to this server.
*/
	MSG_UNDER_AGE = 0x131,
/*20031028 to 20180523
무게가 50 퍼센트 이상일때는 HP SP가 자연적으로 회복이 되지 않습니다.
HP/SP will not be restored when your carried weight is over 50% of the Weight Limit.
*/
	MSG_NO_RECOVER_OVERWEIGHT = 0x132,
/*20031028 to 20180523
무게가 90 퍼센트 이상일때는 공격과 스킬을 사용할 수 없습니다.
You can't use Skills or Attack while your carried weight is over 90% of your Weight Limit.
*/
	MSG_NO_ATTACK_OVERWEIGHT = 0x133,
/*20031028 to 20180523
HP SP가 자연적으로 회복이 가능한 상태가 되었습니다.
Your HP/SP are now being restored naturally.
*/
	MSG_NO_RECOVER_OVERWEIGHT_RELEASED = 0x134,
/*20031028 to 20180523
공격과 스킬이 가능한 상태가 되었습니다.
Attack and Skills are now available.
*/
	MSG_NO_ATTACK_OVERWEIGHT_RELEASED = 0x135,
/*20031028 to 20180523
서버 점검중입니다.
Your Game's Exe File is not the latest version.
*/
	MSG_INVALID_VERSION = 0x136,
/*20031028 to 20180523
아이템이 모두 팔렸습니다.
Items are sold out.
*/
	MSG_ITEM_IS_SOLD_OUT = 0x137,
/*20031028 to 20180523
채팅내용 파일로 저장하기
Save Chat as Text File
*/
	MSG_WRITE_CHAT_TO_FILE = 0x138,
/*20031028 to 20180523
/갈무리 or /savechat : 채팅 내용 파일로 저장하기.
/savechat: Save a Chat Log
*/
	MSG_EXPLAIN_SAVE_CHAT = 0x139,
/*20031028 to 20180523
계정 만들기
Register
*/
	MSG_MAKEACCOUNT = 0x13a,
/*20031028 to 20180523
수신거부하기
Reject Whispering
*/
	MSG_REQ_EX_LIST = 0x13b,
/*20031028 to 20180523
수신거부해제하기
Allow Whispering
*/
	MSG_REQ_IN = 0x13c,
/*20031028 to 20180523
미스표시 On
Shows ''Miss''
*/
	MSG_MISS_EFFECT_ON = 0x13d,
/*20031028 to 20180523
미스표시 Off
Shows ''Miss''
*/
	MSG_MISS_EFFECT_OFF = 0x13e,
/*20031028 to 20180523
카메라고정 On
Camera Zooming On
*/
	MSG_FIXED_CAMERA_ON = 0x13f,
/*20031028 to 20180523
카메라고정 Off
Camera Zooming Off
*/
	MSG_FIXED_CAMERA_OFF = 0x140,
/*20031028 to 20180523
/camera : 플레이어에게 카메라고정 On Off /miss : 미스이펙트 On Off
/camera: Camera Zooming On or Off. /miss: Toggle ''Miss'' display
*/
	MSG_EXPLAIN_CAMERA_MISS = 0x141,
/*20031028 to 20180523
스킬정보보기
View Skill Info
*/
	MSG_SEE_INFORMATION_OF_SKILL = 0x142,
/*20031028 to 20180523
스킬이름바꾸기
Change Skill
*/
	MSG_CHANGE_SKILL_NAME = 0x143,
/*20031028 to 20180523
스프라이트 해상도
Sprite Resolution
*/
	MSG_SPRITE_RESOLUTION = 0x144,
/*20031028 to 20180523
텍스쳐 해상도
Texture Resolution
*/
	MSG_TEXTURE_RESOLUTION = 0x145,
/*20031028 to 20180523
디테일 조정
Arrange Detail
*/
	MSG_DETAILLEVELWND = 0x146,
/*20031028 to 20180523
%s Zeny 획득
You got %s Zeny
*/
	MSG_GET_ZENY = 0x147,
/*20031028 to 20180523
길드명
Guild Name
*/
	MSG_GUILDNAME = 0x148,
/*20031028 to 20180523
길드레벨
Guild lvl
*/
	MSG_GUILDLEVEL = 0x149,
/*20031028 to 20180523
마스터이름
ClanMaster Name
*/
	MSG_GUILD_MASTER_NAME = 0x14a,
/*20031028 to 20180523
조합원수
Number of Members
*/
	MSG_GUILD_NUM_MEMBER = 0x14b,
/*20031028 to 20180523
조합원 평균레벨
Avg.lvl of Guildsmen
*/
	MSG_GUILD_AVG_MEMBER_LEVEL = 0x14c,
/*20031028 to 20180523
관리영지
Castles Owned
*/
	MSG_GUILD_MANAGE_LAND = 0x14d,
/*20031028 to 20180523
성향
Tendency
*/
	MSG_GUILD_FAIR = 0x14e,
/*20031028 to 20180523
경험치
EXP
*/
	MSG_GUILD_EXP = 0x14f,
/*20031028 to 20180523
길드엠블렘
Emblem
*/
	MSG_GUILD_EMBLEM = 0x150,
/*20031028 to 20180523
길드상납포인트
Tax Point
*/
	MSG_GUILD_POINT = 0x151,
/*20031028 to 20180523
동맹길드
Alliances
*/
	MSG_ALLY_GUILD = 0x152,
/*20031028 to 20180523
적대길드
Antagonists
*/
	MSG_HOSTILITY_GUILD = 0x153,
/*20031028 to 20180523
길드정보
Guild Info
*/
	MSG_GUILDINFOMANAGE = 0x154,
/*20031028 to 20180523
조합원정보
Guildsmen Info
*/
	MSG_GUILDMEMBERMANAGE = 0x155,
/*20031028 to 20180523
직위설정
Position
*/
	MSG_GUILDPOSITIONMANAGE = 0x156,
/*20031028 to 20180523
길드스킬
Guild Skill
*/
	MSG_GUILDSKILL = 0x157,
/*20031028 to 20180523
추방자 리스트
Expel History
*/
	MSG_GUILDBANISHEDMEMBER = 0x158,
/*20031028 to 20180523
공지사항
Guild Notice
*/
	MSG_GUILDNOTICE = 0x159,
/*20031028 to 20180523
전체길드 리스트
Entire Guild List
*/
	MSG_GUILDTOTALINFO = 0x15a,
/*20031028 to 20180523
귓말 리스트
Whispering List
*/
	MSG_WHISPERLISTWND = 0x15b,
/*20031028 to 20180523
귓말창 열기
Open Whispering Window
*/
	MSG_OPENWHISPERLISTWND = 0x15c,
/*20031028 to 20180523
귓말 리스트 창 여는법 : [Alt] + [H] 를 누르면 귓말 리스트 창이 열립니다.
How to Open Whispering List: Press [Alt] + [H]
*/
	MSG_EXPLAIN_WHISPER_LIST_WND = 0x15d,
/*20031028 to 20180523
자동으로 귓말창 열기
Open Whispering List Automatically
*/
	MSG_AUTOOPENWHISPERLISTWND = 0x15e,
/*20031028 to 20180523
지우기
Delete
*/
	MSG_DELETE = 0x15f,
/*20031028 to 20180523
다음부터 열리지 않음
Close since next
*/
	MSG_DONTOPEN = 0x160,
/*20031028 to 20180523
마지막으로 접속한 시간
Last Log-in Time
*/
	MSG_LAST_LOGIN_TIME = 0x161,
/*20031028 to 20180523
마지막으로 접속한 IP
Last Log-in IP
*/
	MSG_LAST_LOGIN_IP = 0x162,
/*20031028 to 20180523
친구 설정
Friend Setup
*/
	MSG_FRIEND_SETTING = 0x163,
/*20031028 to 20180523
정말 지우시겠습니까?
Are you sure that you want to delete?
*/
	MSG_DO_YOU_REALLY_WANT_DELETE = 0x164,
/*20031028 to 20180523
정말 탈퇴하시겠습니까?
Are you sure that you want to leave?
*/
	MSG_DO_YOU_REALLY_WANT_LEAVE = 0x165,
/*20031028 to 20180523
친구로 등록하기
Register as a Friend
*/
	MSG_ADD_TO_FRIEND_CHAR_LIST = 0x166,
/*20031028 to 20180523
친구일때 자동으로 1:1창 열기
Open 1:1 Chat between Friends
*/
	MSG_AUTOOPENWHISPERLISTWND_FRIEND = 0x167,
/*20031028 to 20180523
1:1창 열기
Open 1:1 Chat
*/
	MSG_OPEN_1ON1_WINDOW = 0x168,
/*20031028 to 20180523
친구가 아닐때 자동으로 1:1창 열기
Open 1:1 Chat between Strangers
*/
	MSG_AUTOOPEN_1ON1_WINDOW = 0x169,
/*20031028 to 20180523
1:1창 열릴때 소리로 알림
Alarm when you recieve a 1:1 Chat
*/
	MSG_WHISPER_OPEN_SOUND = 0x16a,
/*20031028 to 20180523
정말 제명시키시겠습니까?
Are you sure that you want to expel?
*/
	MSG_DO_YOU_REALLY_WANT_EXPEL = 0x16b,
/*20031028 to 20180523
%s 님이 길드를 탈퇴했습니다.
%s has withdrawn from the guild.
*/
	MSG_USER_LEFT_GUILD = 0x16c,
/*20031028 to 20180523
탈퇴사유 : %s
Secession Reason: %s
*/
	MSG_REASON_LEAVE_GUILD = 0x16d,
/*20031028 to 20120202
길드 해체 실패
20120207 to 20180523
길드명이 일치하지 않습니다
You have failed to disband the guild.
*/
	MSG_DISORGANIZE_GUILD_FAILURE = 0x16e,
/*20031028 to 20180523
길드해체사유 : %s
Disband Reason: %s
*/
	MSG_DISORGANIZATION_REASON = 0x16f,
/*20031028 to 20180523
해당 계정은 삭제된 아이디 입니다.
This ID has been removed.
*/
	MSG_DELETED_ACCOUNT = 0x170,
/*20031028 to 20180523
판매가 :
Price: 
*/
	MSG_SELLPRICE = 0x171,
/*20031028 to 20180523
%s 님이 길드에서 추방되었습니다.
%s has been expelled from our guild.
*/
	MSG_BAN_GUILD = 0x172,
/*20031028 to 20180523
추방사유 : %s
Expulsion Reason: %s
*/
	MSG_REASON_BAN_GUILD = 0x173,
/*20031028 to 20180523
아이템을 착용할 수 없습니다.
You can't put this item on.
*/
	MSG_CAN_NOT_EQUIP_ITEM = 0x174,
/*20031028 to 20180523
파티설정을 변경할 수 없습니다.
You can't modify Party Setup.
*/
	MSG_PARTYSETTING_CHANGE_IMPOSSIBLE = 0x175,
/*20031028 to 20180523
길드가 만들어 졌습니다.
Guild has been Created.
*/
	MSG_GUILD_MAKE_SUCCESS = 0x176,
/*20031028 to 20180523
이미 길드에 속해있습니다.
You are already in a Guild.
*/
	MSG_GUILD_MAKE_ALREADY_MEMBER = 0x177,
/*20031028 to 20180523
같은이름의 길드가 존재합니다.
That Guild Name already exists.
*/
	MSG_GUILD_MAKE_GUILD_EXIST = 0x178,
/*20031028 to 20180523
 길드에서 초청 메시지가 왔습니다. 가입하겠습니까?
 Guild has sent you an invitation. Would you like to join this Guild?
*/
	MSG_SUGGEST_JOIN_GUILD = 0x179,
/*20031028 to 20180523
다른길드에 가입되어 있습니다.
He/She is already in a Guild.
*/
	MSG_CHARACTER_IS_ALREADY_IN_GUILD = 0x17a,
/*20031028 to 20180523
길드가입을 거절 했습니다.
Offer Rejected
*/
	MSG_CHARACTER_REJECT_JOIN_GUILD = 0x17b,
/*20031028 to 20180523
길드가입을 수락했습니다.
Offer Accepted
*/
	MSG_CHARACTER_ACCEPT_JOIN_GUILD = 0x17c,
/*20031028 to 20180523
길드정원을 초과했습니다.
Your Guild is Full.
*/
	MSG_TOO_MANY_PEOPLE_IN_GUILD = 0x17d,
/*20031028 to 20180523
(%s)님 길드에 가입요청
Send (%s) a Guild invitation
*/
	MSG_REQ_JOIN_GUILD = 0x17e,
/*20031028 to 20180523
스킬 레벨이 모자라서 매너포인트를 줄 수 없습니다.
You haven't learned enough skills for aligning.
*/
	MSG_NOT_ENOUGH_FOR_MANNER_POINT = 0x17f,
/*20031028 to 20180523
매너 포인트 주기 성공
Aligning completed.
*/
	MSG_GIVING_MANNER_POINT_SUCCESS = 0x180,
/*20031028 to 20180523
오늘 이미 사용했습니다.
You already spent your point for today.
*/
	MSG_YOU_USE_TODAY_ALREADY = 0x181,
/*20031028 to 20180523
이캐릭터에게 지급한지 한달이 지나지 않았습니다.
Hasn't been a month yet since you aligned this person.
*/
	MSG_ONE_MONTH_NOT_PASSED = 0x182,
/*20031028 to 20180523
%s 님으로부터 플러스 매너 포인트를 받았습니다.
Remember, Spamming isn't nice.
*/
	MSG_RECEIVE_PLUS_MANNER_POINT = 0x183,
/*20031028 to 20180523
%s 님으로부터 마이너스 매너 포인트를 받았습니다.
Please refrain from ill-mannered conduct, thank you.
*/
	MSG_RECEIVE_MINUS_MANNER_POINT = 0x184,
/*20031028 to 20180523
채팅 금지 시간 줄이기(풀기)
Align with a Good Point
*/
	MSG_GIVE_PLUS_MANNER_POINT = 0x185,
/*20031028 to 20180523
채팅 금지 시간 늘이기(걸기)
Align with a Bad Point
*/
	MSG_GIVE_MINUS_MANNER_POINT = 0x186,
/*20031028 to 20180523
(%s)님과의 거래요청
Request a deal with (%s)
*/
	MSG_REQ_DEAL_WITH2 = 0x187,
/*20031028 to 20180523
(%s)님 파티에 가입요청
Ask (%s) to join your party
*/
	MSG_REQ_JOIN_PARTY2 = 0x188,
/*20031028 to 20180523
 길드에서 동맹요청 메시지가 왔습니다. 동맹하겠습니까?
 Guild is asking you to agree to an Alliance with them. Do you accept?
*/
	MSG_SUGGEST_ALLY_GUILD = 0x189,
/*20031028 to 20180523
이미 동맹되어 있습니다.
This Guild is already your Ally.
*/
	MSG_REQALLYGUILD_ALREADY_ALLIED = 0x18a,
/*20031028 to 20180523
동맹을 거절 했습니다.
You reject the offer
*/
	MSG_REQALLYGUILD_REJECT = 0x18b,
/*20031028 to 20180523
동맹을 수락 했습니다.
You accept the offer
*/
	MSG_REQALLYGUILD_ACCEPT = 0x18c,
/*20031028 to 20180523
상대길드의 동맹길드의 수가 초과 되었습니다.
They have too many Alliances.
*/
	MSG_REQALLYGUILD_OVERSIZE = 0x18d,
/*20031028 to 20180523
길드의 동맹길드의 수가 초과 되었습니다.
You have too many Alliances.
*/
	MSG_REQALLYMYGUILD_OVERSIZE = 0x18e,
/*20031028 to 20180523
길드 동맹 요청
Set this guild as an Alliance
*/
	MSG_REQ_ALLY_GUILD = 0x18f,
/*20031028 to 20180523
길드가 성공적으로 해체 되었습니다.
Guild was successfully disbanded.
*/
	MSG_DISORGANIZE_GUILD_SUCCESS = 0x190,
/*20031028 to 20180523
주민등록번호가 틀려서 길드가 해체되지 않았습니다.
You have failed to disband the guild due to your incorrect SSN.
*/
	MSG_DISORGANIZE_GUILD_INVALIDKEY = 0x191,
/*20031028 to 20180523
길드맴버가 존재해서 길드가 해체되지 않았습니다.
You have failed to disband the guild because there are guildsmen still present.
*/
	MSG_DISORGANIZE_GUILD_MEMBEREXIST = 0x192,
/*20031028 to 20180523
길드 적대 요청
Set this guild as an Antagonist
*/
	MSG_REQ_HOSTILE_GUILD = 0x193,
/*20031028 to 20180523
머리색깔 선택
Choose Hair Color
*/
	MSG_SELECT_HAIR_COLOR = 0x194,
/*20031028 to 20180523
길드결성시 필요한 아이템이 없습니다.
You don't have necessary item to create a Guild.
*/
	MSG_GUILD_MAKE_GUILD_NONE_ITEM = 0x195,
/*20031028 to 20180523
몬스터 정보
Monster Info
*/
	MSG_MONSTER_INFO_WINDOW = 0x196,
/*20031028 to 20180523
이름
Name
*/
	MSG_NAME = 0x197,
/*20031028 to 20180523
레벨
Level
*/
	MSG_LEVEL = 0x198,
/*20031028 to 20180523
HP
*/
	MSG_HP = 0x199,
/*20031028 to 20180523
크기
Size
*/
	MSG_SIZE = 0x19a,
/*20031028 to 20180523
종족
Type
*/
	MSG_RACETYPE = 0x19b,
/*20031028 to 20180523
MDEF
*/
	MSG_MDEFPOWER = 0x19c,
/*20031028 to 20180523
속성
Attribute
*/
	MSG_PROPERTY = 0x19d,
/*20031028 to 20180523
無
Neutral
*/
	MSG_PROPERTY_NEUTURAL = 0x19e,
/*20031028 to 20180523
水
Water
*/
	MSG_PROPERTY_WATER = 0x19f,
/*20031028 to 20180523
地
Earth
*/
	MSG_PROPERTY_EARTH = 0x1a0,
/*20031028 to 20180523
火
Fire
*/
	MSG_PROPERTY_FIRE = 0x1a1,
/*20031028 to 20180523
風
Wind
*/
	MSG_PROPERTY_WIND = 0x1a2,
/*20031028 to 20180523
毒
Poison
*/
	MSG_PROPERTY_POISON = 0x1a3,
/*20031028 to 20180523
聖
Holy
*/
	MSG_PROPERTY_SAINT = 0x1a4,
/*20031028 to 20180523
暗
Shadow
*/
	MSG_PROPERTY_DARK = 0x1a5,
/*20031028 to 20180523
念
Ghost
*/
	MSG_PROPERTY_MENTAL = 0x1a6,
/*20031028 to 20180523
死
Undead
*/
	MSG_PROPERTY_UNDEAD = 0x1a7,
/*20031028 to 20180523
현재는 아이템을 만들 수 없습니다.
You can't create items yet.
*/
	MSG_CANT_MAKE_ITEM = 0x1a8,
/*20031028 to 20180523
제조 목록
Item List you can craft
*/
	MSG_MAKE_LIST = 0x1a9,
/*20031028 to 20180523
 만들기
 Create
*/
	MSG_MAKE_TARGET = 0x1aa,
/*20031028 to 20180523
 에 필요한 재료:
's materials
*/
	MSG_REQUIRE_FOR_MAKE_TARGET = 0x1ab,
/*20031028 to 20180523
 만들기 실패
 item creation failed.
*/
	MSG_MAKE_TARGET_FAIL = 0x1ac,
/*20031028 to 20180523
 만들기 성공
 item created successfully.
*/
	MSG_MAKE_TARGET_SUCCEESS = 0x1ad,
/*20031028 to 20180523
%s 만들기를 실패하였습니다.
 item creation failed.
*/
	MSG_MAKE_TARGET_FAIL_MSG = 0x1ae,
/*20031028 to 20180523
%s 만들기를 성공했습니다.
 item created successfully.
*/
	MSG_MAKE_TARGET_SUCCEESS_MSG = 0x1af,
/*20031028 to 20180523
레벨이 부족합니다.
You are not the required lvl.
*/
	MSG_NOT_ENOUGH_LEVEL = 0x1b0,
/*20031028 to 20180523
레벨이 너무 높습니다.
Too high lvl for this job.
*/
	MSG_TOO_HIGH_LEVEL = 0x1b1,
/*20031028 to 20180523
직업이 적합하지 않습니다.
Not the suitable job for this type of work.
*/
	MSG_NOT_ACCEPTABLE_JOB = 0x1b2,
/*20031028 to 20180523
토키 박스 트랩 메세지
Record a message in the Talkie Box
*/
	MSG_TALKBOX_WINDOW = 0x1b3,
/*20031028 to 20180523
기록할 메세지를 입력하시기 바랍니다.
Please type a message for the Talkie Box
*/
	MSG_TALKBOX_WINDOW_MSG = 0x1b4,
/*20031028 to 20180523
길드에게 보냄
Send to Guild
*/
	MSG_SEND_TO_GUILD = 0x1b5,
/*20031028 to 20180523
결제된 계정이 아닙니다. 결제 페이지로 이동하시겠습니까?
You didn't pay for this ID. Would you like to pay for it now?
*/
	MSG_NOT_SETTLED = 0x1b6,
/*20031028 to 20180523
서버가 혼잡한 관계로 잠시후 다시 시도해 주시기 바랍니다.
Server is jammed due to overpopulation. Please try again after few minutes.
*/
	MSG_ACCOUNT_BUSY = 0x1b7,
/*20031028 to 20180523
지난 접속 정보가 남아 있습니다. 30초정도 지난뒤에 다시 시도해 주시기 바랍니다.
Server still recognizes your last log-in. Please try again after a few minutes.
*/
	MSG_INFORMATION_REMAINED = 0x1b8,
/*20031028 to 20180523
매 풀어주기
Release Falcon
*/
	MSG_BIRDOFF = 0x1b9,
/*20031028 to 20180523
페코페코 내리기
Dismount
*/
	MSG_CHIKENOFF = 0x1ba,
/*20031028 to 20180523
小
Small
*/
	MSG_SIZE_SMALL = 0x1bb,
/*20031028 to 20180523
中
Med
*/
	MSG_SIZE_MIDDLE = 0x1bc,
/*20031028 to 20180523
大
Big
*/
	MSG_SIZE_BIG = 0x1bd,
/*20031028 to 20180523
더블
Double
*/
	MSG_DOUBLE = 0x1be,
/*20031028 to 20180523
트리플
Triple
*/
	MSG_TRIPLE = 0x1bf,
/*20031028 to 20180523
쿼드로플
Quadruple
*/
	MSG_QUADROPLE = 0x1c0,
/*20031028 to 20180523
%s 까지 로그인을 금지하고 있습니다.
You are prohibited to log in until %s.
*/
	MSG_LOGIN_REFUSE_BLOCKED_UNTIL = 0x1c1,
/*20031028 to 20180523
의 
's 
*/
	MSG_MANUFACTURED_NORMAL_ITEM = 0x1c2,
/*20031028 to 20180523
의 파이어 
's Fire 
*/
	MSG_MANUFACTURED_FIRE_ITEM = 0x1c3,
/*20031028 to 20180523
의 아이스 
's Ice 
*/
	MSG_MANUFACTURED_ICE_ITEM = 0x1c4,
/*20031028 to 20180523
의 윈드 
's Wind 
*/
	MSG_MANUFACTURED_WIND_ITEM = 0x1c5,
/*20031028 to 20180523
의 어스 
's Earth 
*/
	MSG_MANUFACTURED_EARTH_ITEM = 0x1c6,
/*20031028 to 20180523
211.239.161.246
38.144.194.2
*/
	MSG_ACCOUNT_ADDRESS = 0x1c7,
/*20031028 to 20180523
6900
*/
	MSG_ACCOUNT_PORT = 0x1c8,
/*20031028 to 20171206
http://www.ragnarok.co.kr
20171213 to 20180523
http://roz.gnjoy.com/
http://www.ragnarok.co.kr
*/
	MSG_REGISTRATION_WEB_URL = 0x1c9,
/*20031028 to 20180523
%s 사용자 강제 종료
Kill %s
*/
	MSG_BAN_USER = 0x1ca,
/*20031028 to 20180523
무지쎈 
Very Strong
*/
	MSG_ONE_STARPIECE = 0x1cb,
/*20031028 to 20180523
무지무지쎈 
Very Very Strong
*/
	MSG_TWO_STARPIECE = 0x1cc,
/*20031028 to 20031028
무지무지무지쎈 
20031103 to 20180523
무무무쎈 
Very Very Very Strong
*/
	MSG_THREE_STARPIECE = 0x1cd,
/*20031028 to 20180523
길드 추방 사유
The Reason of Expulsion
*/
	MSG_GUILD_KICK_REASON = 0x1ce,
/*20031028 to 20180523
 공격 속도가 증가했습니다.
Attack Speed is up.
*/
	MSG_INCATTACKSPEED = 0x1cf,
/*20031028 to 20180523
 공격 속도가 감소했습니다.
Attack Speed is down.
*/
	MSG_DECATTACKSPEED = 0x1d0,
/*20031028 to 20180523
 무기의 공격력이 향상되었습니다.
Weapon Damage is improved.
*/
	MSG_INCWEAPONATTACK = 0x1d1,
/*20031028 to 20180523
 무기의 공격력이 감소되었습니다.
Weapon Damage is reduced.
*/
	MSG_DECWEAPONATTACK = 0x1d2,
/*20031028 to 20180523
 시전 딜레이가 줄었습니다.
Cast Delay is reduced.
*/
	MSG_FASTPREDELAY = 0x1d3,
/*20031028 to 20180523
 시전 딜레이가 정상으로 되었습니다.
Cast Delay has returned to normal.
*/
	MSG_NORMALPREDELAY = 0x1d4,
/*20031028 to 20180523
 무기에 독속성이 부여되었습니다.
Weapon is temporarily enchanted with Poison.
*/
	MSG_WEAPONPROPERTYPOISON = 0x1d5,
/*20031028 to 20180523
 무기에 성속성이 부여되었습니다.
Weapon is temporarily enchanted with an elemental property.
*/
	MSG_WEAPONPROPERTYSAINT = 0x1d6,
/*20031028 to 20180523
 무기의 원래속성이 적용되었습니다.
Weapon has changed back to normal.
*/
	MSG_WEAPONPROPERTYORIGINAL = 0x1d7,
/*20031028 to 20180523
 방어구에 성속성이 부여되었습니다.
Armor has been enchanted with the Holy Ghost.
*/
	MSG_ARMORPROPERTYSAINT = 0x1d8,
/*20031028 to 20180523
 방어구의 원래속성이 적용되었습니다.
Armor has changed back to normal.
*/
	MSG_ARMORPROPERTYORIGINAL = 0x1d9,
/*20031028 to 20180523
 배리어 상태가 되었습니다.
Barrier Formed.
*/
	MSG_BARRIOR = 0x1da,
/*20031028 to 20180523
 배리어 상태가 해제 되었습니다.
Barrier Canceled.
*/
	MSG_DISAPPEARBARRIOR = 0x1db,
/*20031028 to 20180523
 소형, 중형, 대형 몬스터에게 100% 공격력을 줍니다.
Weapon Perfection Initiated.
*/
	MSG_PERFECTDAMAGE = 0x1dc,
/*20031028 to 20180523
 웨폰퍼펙션 모드가 해제 되었습니다.
Weapon perfection Canceled.
*/
	MSG_DISAPPEARPERFECTDAMAGE = 0x1dd,
/*20031028 to 20180523
 무기가 파괴될 가능성이 높아진 대신 무기의 공격력이 증가하였습니다.
Power-Thrust Initiated.
*/
	MSG_OVERTHRUSTING = 0x1de,
/*20031028 to 20050118
 오버트러스팅 상태가 해제 되었습니다.
20050124 to 20180523
 오버트러스트 상태가 해제 되었습니다.
Power-Thrust Canceled.
*/
	MSG_DISAPPEAROVERTHRUSTING = 0x1df,
/*20031028 to 20180523
 무기의 최대 성능을 끌어냅니다.
Maximize-Power Initiated.
*/
	MSG_MAXIMIZE = 0x1e0,
/*20031028 to 20180523
 맥시마이즈 상태가 해제 되었습니다.
Maximize-Power Canceled.
*/
	MSG_DISAPPEARMAXIMIZE = 0x1e1,
/*20031028 to 20180523
[신서버] 
[New Server]
*/
	MSG_SERVER_PROPERTY_NEW = 0x1e2,
/*20031028 to 20180523
(%d 명)
(%d players)
*/
	MSG_SERVER_USER_COUNT = 0x1e3,
/*20031028 to 20180523
(점검중)
(On the maintenance)
*/
	MSG_SERVER_INSPECTING = 0x1e4,
/*20031028 to 20180523
길드멤버 %s님이 접속하셨습니다.
Guild member %s has connected.
*/
	MSG_GUILD_MEMBER_STATUS_ONLINE = 0x1e5,
/*20031028 to 20180523
길드멤버 %s님이 종료하셨습니다.
Guild member %s has disconnected.
*/
	MSG_GUILD_MEMBER_STATUS_OFFLINE = 0x1e6,
/*20031028 to 20180523
경험치 %d 얻음
You got %d Base EXP.
*/
	MSG_GOT_EXPERIENCE_POINT = 0x1e7,
/*20031028 to 20180523
잡경험치 %d 얻음
You got %d Job EXP.
*/
	MSG_GOT_JOB_EXPERIENCE_POINT = 0x1e8,
/*20031028 to 20180523
길드에서 탈퇴 했습니다.
You left the guild.
*/
	MSG_LEFT_GUILD = 0x1e9,
/*20031028 to 20180523
길드에서 추방 당했습니다.
You have been expelled from the Guild.
*/
	MSG_BAN_FROM_GUILD = 0x1ea,
/*20031028 to 20180523
아이템 감정 성공
Item Appraisal has completed successfully.
*/
	MSG_ITEM_IDENTIFY_SUCCEESS = 0x1eb,
/*20031028 to 20180523
아이템 감정 실패
Item appraisal has failed.
*/
	MSG_ITEM_IDENTIFY_FAIL = 0x1ec,
/*20031028 to 20180523
아이템 조합 성공
Compounding has completed successfully.
*/
	MSG_ITEM_COMPOUNDING_SUCCEESS = 0x1ed,
/*20031028 to 20180523
아이템 조합 실패
Compounding has failed.
*/
	MSG_ITEM_COMPOUNDING_FAIL = 0x1ee,
/*20031028 to 20180523
길드 적대 성공
Antagonist has been set.
*/
	MSG_HOSTILE_GUILD_SUCCEESS = 0x1ef,
/*20031028 to 20180523
적대 길드수 초과로 길드 적대 실패
Guild has too many Antagonists.
*/
	MSG_TOO_MANY_HOSTILE_GUILD = 0x1f0,
/*20031028 to 20180523
이미 적대 길드 입니다
Already set as an Antagonist
*/
	MSG_ALREADY_REGISTERED_HOSTILE_GUILD = 0x1f1,
/*20031028 to 20180523
제련이 성공적으로 되었습니다.
Upgrade has been completed successfully.
*/
	MSG_ITEM_REFINING_SUCCEESS = 0x1f2,
/*20031028 to 20180523
제련이 실패하였습니다.
Upgrade has failed.
*/
	MSG_ITEM_REFINING_FAIL = 0x1f3,
/*20031028 to 20040311
텔레포트 불가능 지역입니다.
20040315 to 20180523
이곳에서는 순간이동이 불가능합니다.
Unavailable Area to Teleport
*/
	MSG_IMPOSSIBLE_TELEPORT_AREA = 0x1f4,
/*20031028 to 20040311
텔레포트 가능 지역입니다.
20040315 to 20180523
이 장소는 기억할 수 없습니다.
Unable to memorize this place as Warp Point
*/
	MSG_POSSIBLE_TELEPORT_AREA = 0x1f5,
/*20031028 to 20180523
지금은 종료할 수 없습니다.
Please wait 10 seconds before trying to log out.
*/
	MSG_CANT_EXIT_NOW = 0x1f6,
/*20031028 to 20180523
직위
Position
*/
	MSG_POSITION = 0x1f7,
/*20031028 to 20180523
직업
Job
*/
	MSG_JOB = 0x1f8,
/*20031028 to 20180523
메모
Note
*/
	MSG_MEMO = 0x1f9,
/*20031028 to 20180523
기여
Devotion
*/
	MSG_CONTRIBUTION = 0x1fa,
/*20031028 to 20180523
상납경험치
Tax Point
*/
	MSG_EXP_CONTIRIBUTION = 0x1fb,
/*20031028 to 20180523
길드탈퇴
Leave Guild
*/
	MSG_LEAVE_GUILD = 0x1fc,
/*20031028 to 20180523
제명시키기
Expel
*/
	MSG_EXPEL_GUILD = 0x1fd,
/*20031028 to 20180523
서열
Rank
*/
	MSG_GRADE = 0x1fe,
/*20031028 to 20180523
직위명
Position Title
*/
	MSG_POSITION_NAME = 0x1ff,
/*20031028 to 20180523
가입권한
Invitation
*/
	MSG_JOIN_AUTHORITY = 0x200,
/*20031028 to 20180523
처벌권한
Punish
*/
	MSG_PENALTY_AUTORITY = 0x201,
/*20031028 to 20180523
상납%
Tax %
*/
	MSG_CONTRIBUTION_PERCENT = 0x202,
/*20031028 to 20180523
제목
Title
*/
	MSG_TITLE = 0x203,
/*20031028 to 20180523
내용
For
*/
	MSG_CONTENTS = 0x204,
/*20031028 to 20180523
길드이름
Guild Name
*/
	MSG_GUILD_NAME = 0x205,
/*20031028 to 20180523
길드레벨
Guild lvl
*/
	MSG_GUILD_LEVEL = 0x206,
/*20031028 to 20180523
조합원수
Number of Members
*/
	MSG_GUILD_PEOPLE_COUNT = 0x207,
/*20031028 to 20180523
랭킹
Ranking
*/
	MSG_RANKING = 0x208,
/*20031028 to 20180523
아이템 감정
Item Appraisal
*/
	MSG_ITEM_IDENTIFY = 0x209,
/*20031028 to 20180523
아이템 조합
Insert Card
*/
	MSG_ITEM_COMPOUNDING = 0x20a,
/*20031028 to 20180523
탈퇴 사유를 입력해주세요.
Please enter the reason of Secession.
*/
	MSG_PLEASE_INPUT_WHY_LEAVING = 0x20b,
/*20031028 to 20180523
추방 사유를 입력해주세요.
Please enter the reason of Expulsion.
*/
	MSG_PELASE_INPUT_WHY_EXPEL = 0x20c,
/*20031028 to 20180523
상점을 닫으세요.
Please close Shop.
*/
	MSG_PLEASE_CLOSE_STORE = 0x20d,
/*20031028 to 20180523
스킬 이름
Skill 
*/
	MSG_SKILL_NAME = 0x20e,
/*20031028 to 20180523
아이템 이름
Item Name
*/
	MSG_ITEM_NAME = 0x20f,
/*20031028 to 20031118
https://pay.ragnarok.co.kr
20031119 to 20180523
https://payment.ragnarok.co.kr
https://pay.ragnarok.co.kr (Billing Web)
*/
	MSG_SETTLE_WEB_URL = 0x210,
/*20031028 to 20180523
게임방에서 사용가능한 IP개수가 모두 사용중입니다. 개인 계정으로 결제 하시겠습니까?
IP capacity of this Internet Cafe is full. Would you like to pay the personal base?
*/
	MSG_BAN_IP_OVERFLOW = 0x211,
/*20031028 to 20180523
결제시간이 다되어 게임을 종료합니다.
You are out of available paid playing time. Game will be shut down automatically.
*/
	MSG_BAN_PAY_OUT = 0x212,
/*20031028 to 20180523
이름이 너무 깁니다. 한글 11자 영문 23자 이내로 써주십시오.
Name is too long. Please enter a name no greater than 23 english characters.
*/
	MSG_NAMELENGTH_TOO_LONG = 0x213,
/*20031028 to 20180523
deleted
Character will be deleted in %d seconds.
*/
	MSG_DELETE_AFTER_10_SECOND = 0x214,
/*20031028 to 20180523
귀하는 개인 정액제 사용자입니다.
You paid with the personal regular base.
*/
	MSG_BILLING_100 = 0x215,
/*20031028 to 20180523
귀하는 개인정량제 사용자입니다.
You paid with the personal regular base. Available time is xx hrs xx mins xx secs.
*/
	MSG_BILLING_200 = 0x216,
/*20031028 to 20180523
귀하는 개인 무료 사용자입니다.
You are free!
*/
	MSG_BILLING_300 = 0x217,
/*20031028 to 20180523
귀하는 개인 무료 허용기간 사용자입니다.
You are free for the test, your available time is xx hrs xx mins xx secs.
*/
	MSG_BILLING_400 = 0x218,
/*20031028 to 20180523
귀하는 게임방 정액제 사용자입니다.
You paid with the Internet Cafe regular base. Available time is xx hrs xx mins xx secs.
*/
	MSG_BILLING_500 = 0x219,
/*20031028 to 20180523
귀하는 게임방 정량제 사용자입니다.
You paid with the Time Limit for Internet Cafe. Available time is xx hrs xx mins xx secs.
*/
	MSG_BILLING_501 = 0x21a,
/*20031028 to 20180523
귀하는 게임방 무료 허용기간 사용자입니다.
You are free for the test of Internet Cafe version .
*/
	MSG_BILLING_600 = 0x21b,
/*20031028 to 20180523
귀하는 게임방 무료 사용자입니다.
You are free for the Internet Cafe version.
*/
	MSG_BILLING_700 = 0x21c,
/*20031028 to 20180523
귀하는 종량제 사이트 이용자입니다.
You paid on the Time Limit Website.
*/
	MSG_BILLING_800 = 0x21d,
/*20031028 to 20180523
이모션 목록
Emotion icon List
*/
	MSG_EMOTION_LIST = 0x21e,
/*20031028 to 20180523
/이모션
/emo
*/
	MSG_VIEW_EMOTION = 0x21f,
/*20031028 to 20180523
/!
*/
	MSG_EMOTION_SURPRISE = 0x220,
/*20031028 to 20180523
/?
*/
	MSG_EMOTION_QUESTION = 0x221,
/*20031028 to 20180523
/기쁨
/ho
*/
	MSG_EMOTION_DELIGHT = 0x222,
/*20031028 to 20180523
/하트
/lv
*/
	MSG_EMOTION_THROB = 0x223,
/*20031028 to 20180523
/왕하트
/lv2
*/
	MSG_EMOTION_BIGTHROB = 0x224,
/*20031028 to 20180523
/땀
/swt
*/
	MSG_EMOTION_SWEAT = 0x225,
/*20031028 to 20180523
/아하
/ic
*/
	MSG_EMOTION_AHA = 0x226,
/*20031028 to 20180523
/짜증
/an
*/
	MSG_EMOTION_FRET = 0x227,
/*20031028 to 20180523
/화
/ag
*/
	MSG_EMOTION_ANGER = 0x228,
/*20031028 to 20180523
/돈
/$
*/
	MSG_EMOTION_MONEY = 0x229,
/*20031028 to 20180523
/...
*/
	MSG_EMOTION_THINK = 0x22a,
/*20031028 to 20180523
/감사
/thx
*/
	MSG_EMOTION_THANKS = 0x22b,
/*20031028 to 20180523
/꽥
/wah
*/
	MSG_EMOTION_KEK = 0x22c,
/*20031028 to 20180523
/죄송
/sry
*/
	MSG_EMOTION_SORRY = 0x22d,
/*20031028 to 20180523
/웃음
/heh
*/
	MSG_EMOTION_SMILE = 0x22e,
/*20031028 to 20180523
/뻘뻘
/swt2
*/
	MSG_EMOTION_PROFUSELY_SWEAT = 0x22f,
/*20031028 to 20180523
/긁적
/hmm
*/
	MSG_EMOTION_SCRATCH = 0x230,
/*20031028 to 20180523
/최고
/no1
*/
	MSG_EMOTION_BEST = 0x231,
/*20031028 to 20180523
/두리번
/??
*/
	MSG_EMOTION_STARE_ABOUT = 0x232,
/*20031028 to 20180523
/헉
/omg
*/
	MSG_EMOTION_HUK = 0x233,
/*20031028 to 20180523
/오
/oh
*/
	MSG_EMOTION_O = 0x234,
/*20031028 to 20180523
/엑스
/X
*/
	MSG_EMOTION_X = 0x235,
/*20031028 to 20180523
/헬프
/hlp
*/
	MSG_EMOTION_HELP = 0x236,
/*20031028 to 20180523
/가
/go
*/
	MSG_EMOTION_GO = 0x237,
/*20031028 to 20180523
/엉엉
/sob
*/
	MSG_EMOTION_CRY = 0x238,
/*20031028 to 20180523
/킥킥
/gg
*/
	MSG_EMOTION_KIK = 0x239,
/*20031028 to 20180523
/쪽
/kis
*/
	MSG_EMOTION_CHUP = 0x23a,
/*20031028 to 20180523
/쪽쪽
/kis2
*/
	MSG_EMOTION_CHUPCHUP = 0x23b,
/*20031028 to 20180523
/흥
/pif
*/
	MSG_EMOTION_HNG = 0x23c,
/*20031028 to 20180523
/응
/ok
*/
	MSG_EMOTION_OK = 0x23d,
/*20031028 to 20180523
단축키 목록
Shortcut List
*/
	MSG_SHORTCUT_LIST = 0x23e,
/*20031028 to 20180523
귀하의 계정은 보류되었습니다.
Your account is suspended.
*/
	MSG_BAN_PAY_SUSPEND = 0x23f,
/*20031028 to 20180523
과금 정책 변경으로 인해 일시 종료됩니다. 다시 접속하여 주시기 바랍니다.
Your connection is terminated due to change in the billing policy. Please connect again.
*/
	MSG_BAN_PAY_CHANGE = 0x240,
/*20031028 to 20180523
어카운트 서버에 인증된 IP와 귀하의 IP가 달라 연결을 종료합니다.
Your connection is terminated because your IP doesn't match the authorized IP from the account server.
*/
	MSG_BAN_PAY_WRONGIP = 0x241,
/*20031028 to 20180523
게임방 IP에서 개인 종량제 과금을 막기 위해 연결을 종료합니다. 개인 종량제 과금을 사용하기 위해서는 게임방IP로 등록이 되지 않은 IP를 사용해 주세요.
Your connection is terminated to prevent charging from your account's play time.
*/
	MSG_BAN_PAY_PNGAMEROOM = 0x242,
/*20031028 to 20180523
귀하는 운영자에 의해 강제 종료 되었습니다.
You have been forced to disconnect by the Game Master Team.
*/
	MSG_BAN_OP_FORCE = 0x243,
/*20031028 to 20180523
무게가 90%를 초과하여 스킬을 사용할 수 없습니다.
You can't use this Skill because you are over your Weight Limit.
*/
	MSG_USESKILL_FAIL_WEIGHTOVER = 0x244,
/*20031028 to 20180523
무명
Nameless
*/
	MSG_NAMELESS_USER = 0x245,
/*20031028 to 20180523
축하합니다. %s님의 현재 랭킹이 %d위로 상승하였습니다.
Congratulations! %s ranking has gone up to %d.
*/
	MSG_RANK_IN_TEN = 0x246,
/*20031028 to 20180523
안타깝게도 %s님의 현재 랭킹이 %d위로 하락하였습니다.
What a pity! %s ranking has gone down to %d.
*/
	MSG_RANK_OUT_TEN = 0x247,
/*20031028 to 20180523
Pet Info
*/
	MSG_PET_INFO = 0x248,
/*20031028 to 20180523
만복도
Hunger
*/
	MSG_PET_HUNGRY = 0x249,
/*20031028 to 20180523
친밀도
Intimacy
*/
	MSG_PET_FRIENDLY = 0x24a,
/*20031028 to 20180523
상점과 채팅방을 동시에 열수 없습니다.
Please avoid opening a chatroom while vending.
*/
	MSG_CANT_OPEN_STORE_WHILE_CHAT = 0x24b,
/*20031028 to 20180523
개
Total
*/
	MSG_EA4 = 0x24c,
/*20031028 to 20180523
%s 를 전투불능으로 만들었습니다.
You have knocked down %s.
*/
	MSG_SLAIN = 0x24d,
/*20031028 to 20180523
%s 님에 의해 전투불능 상태가 되었습니다.
You have been knocked down by %s.
*/
	MSG_SLAINBY = 0x24e,
/*20031028 to 20180523
먹이 - '%s' 아이템이 존재하지 않습니다..
Feed - "%s" is not available.
*/
	MSG_NOT_EXIST_PET_FOOD = 0x24f,
/*20031028 to 20180523
먹이 주기
Feed Pet
*/
	MSG_PET_FEEDING = 0x250,
/*20031028 to 20180523
퍼포먼스
Performance
*/
	MSG_PET_PERFORMANCE = 0x251,
/*20031028 to 20180523
알로 되돌리기
Return to Egg Shell
*/
	MSG_PET_RETURN_EGG = 0x252,
/*20031028 to 20180523
악세사리 해제
Unequip Accessory
*/
	MSG_PET_ACC_OFF = 0x253,
/*20031028 to 20180523
Pet 상태 보기
Check Pet Status
*/
	MSG_PET_SHOWINFO = 0x254,
/*20031028 to 20180523
악세사리
Accessory
*/
	MSG_PET_ACCESSARY = 0x255,
/*20031028 to 20180523
장착됨
Equipped
*/
	MSG_ITEM_EQUIPED = 0x256,
/*20031028 to 20180523
펫 리스트
Pet List
*/
	MSG_PET_EGG_LIST = 0x257,
/*20031028 to 20180523
장착 안됨
Unequipped
*/
	MSG_ITEM_UNEQUIPED = 0x258,
/*20031028 to 20180523
정말로 먹이를 주시겠습니까?
Are you sure that you want to feed your pet?
*/
	MSG_SURE_TO_FEED_PET = 0x259,
/*20031028 to 20180523
가격을 쓰실땐 숫자(0~9)만 써주십시오.
Only the numbers (0~9) are available.
*/
	MSG_CAN_INPUT_NUMBER_ONLY = 0x25a,
/*20031028 to 20180523
감정되지 않은 아이템은 판매할 수 없습니다.
You cannot sell unidentified items.
*/
	MSG_CANT_SELL_UNIDENTIFIED_ITEM = 0x25b,
/*20031028 to 20180523
가격이 0 Zeny인 아이템이 존재합니다. 계속 하시겠습니까?
Item at 0 Zeny exists. Do you wish to continue?
*/
	MSG_YOU_HAVE_FREE_ITEM_ON_SHOP = 0x25c,
/*20031028 to 20180523
[새로 추가된 이모션 리스트]
[New Emotion List]
*/
	MSG_NEW_EMOTION_LIST = 0x25d,
/*20031028 to 20180523
일본쪽 베타 사용자들에게 전하는 메세지. -> 겅호에서 재가입 하세요.
N/A
*/
	MSG_BAN_JAPAN_REFUSE1 = 0x25e,
/*20031028 to 20180523
일본쪽 과금이 종료된 사용자들에게 전하는 메세지. -> 돈내라. 두 번내라.
N/A
*/
	MSG_BAN_JAPAN_REFUSE2 = 0x25f,
/*20031028 to 20180523
같은 계정의 캐릭터가 이미 가입되어있습니다.
Character in the same account already joined.
*/
	MSG_ALREADY_SAME_AID_JOINED = 0x260,
/*20031028 to 20180523
(%d 명) - 만18세이상
(%d ppl) - over the age 18
*/
	MSG_SERVER_PROPERTY_ADULT = 0x261,
/*20031028 to 20180523
 프로보크 상태가 되었습니다.
Provoke initiated.
*/
	MSG_ENST_PROVOKE = 0x262,
/*20031028 to 20180523
 프로보크 상태가 해제되었습니다.
Provoke canceled.
*/
	MSG_DSST_PROVOKE = 0x263,
/*20031028 to 20180523
 인듀어 상태가 되었습니다.
Endure initiated.
*/
	MSG_ENST_ENDURE = 0x264,
/*20031028 to 20180523
 인듀어 상태가 해제되었습니다.
Endure canceled.
*/
	MSG_DSST_ENDURE = 0x265,
/*20031028 to 20180523
 집중력 향상 상태가 되었습니다.
Improve Concentration initiated.
*/
	MSG_ENST_CONCENTRATION = 0x266,
/*20031028 to 20180523
 집중력 향상 상태가 해제되었습니다.
Improve Concentration canceled.
*/
	MSG_DSST_CONCENTRATION = 0x267,
/*20031028 to 20180523
 하이딩 상태가 되었습니다.
Hiding Initiated.
*/
	MSG_ENST_HIDING = 0x268,
/*20031028 to 20180523
 하이딩 상태가 해제되었습니다.
Hiding Canceled.
*/
	MSG_DSST_HIDING = 0x269,
/*20031028 to 20180523
 클로킹 상태가 되었습니다.
Cloaking initiated.
*/
	MSG_ENST_CLOAKING = 0x26a,
/*20031028 to 20180523
 클로킹 상태가 해제되었습니다.
Cloaking canceled.
*/
	MSG_DSST_CLOAKING = 0x26b,
/*20031028 to 20180523
 독을 반사 할 수 있는 상태가 되었습니다.
Poison React initiated.
*/
	MSG_ENST_POISONREACT = 0x26c,
/*20031028 to 20180523
 포이즌 리액트 상태가 해제되었습니다.
Poison React canceled.
*/
	MSG_DSST_POISONREACT = 0x26d,
/*20031028 to 20180523
 이동속도가 감소하였습니다.
Speed reduced.
*/
	MSG_ENST_QUAGMIRE = 0x26e,
/*20031028 to 20180523
 콰그마이어 상태가 해제되었습니다.
Quagmire canceled.
*/
	MSG_DSST_QUAGMIRE = 0x26f,
/*20031028 to 20180523
 방어력이 증가되었습니다.
Defense increased.
*/
	MSG_ENST_ANGELUS = 0x270,
/*20031028 to 20031223
 안젤루스 상태가 해제돼었습니다.
20031229 to 20180523
 안젤루스 상태가 해제되었습니다.
Angelus canceled.
*/
	MSG_DSST_ANGELUS = 0x271,
/*20031028 to 20180523
 힘과 지능, 덱스가 증가하였습니다.
Blessing aligned.
*/
	MSG_ENST_BLESSING = 0x272,
/*20031028 to 20180523
 블레싱 상태가 해제되었습니다.
Blessing canceled.
*/
	MSG_DSST_BLESSING = 0x273,
/*20031028 to 20180523
 시그넘 크루시스를 사용하였습니다.
Signum Crusis initiated.
*/
	MSG_ENST_CRUCIS = 0x274,
/*20031028 to 20180523
 시그넘 크루시스 상태가 해제되었습니다.
Signum Crusis canceled.
*/
	MSG_DSST_CRUCIS = 0x275,
/*20031028 to 20180523
 독이 퍼지는 속도가 느려졌습니다.
Slow Poison initiated.
*/
	MSG_ENST_SLOWPOISON = 0x276,
/*20031028 to 20180523
 슬로우 포이즌 상태가 해제되었습니다.
Slow Poison Canceled.
*/
	MSG_DSST_SLOWPOISON = 0x277,
/*20031028 to 20180523
 SP의 회복 속도가 향상 되었습니다.
HP/SP recovery increased.
*/
	MSG_ENST_MAGNIFICAT = 0x278,
/*20031028 to 20180523
 마니피캇 상태가 해제되었습니다.
Magnificat canceled.
*/
	MSG_DSST_MAGNIFICAT = 0x279,
/*20031028 to 20180523
 행운이 향상되었습니다.
Luck increased.
*/
	MSG_ENST_GLORIA = 0x27a,
/*20031028 to 20180523
 글로리아 상태가 해제되었습니다.
Gloria canceled.
*/
	MSG_DSST_GLORIA = 0x27b,
/*20031028 to 20180523
 1회 공격에 두 배 데미지를 받는 상태가 되었습니다.
You will received double damage from all attacking opponents.
*/
	MSG_ENST_LEXAETERNA = 0x27c,
/*20031028 to 20180523
 렉스에테르나 상태가 해제되었습니다.
Lex Eterna canceled.
*/
	MSG_DSST_LEXAETERNA = 0x27d,
/*20031028 to 20180523
 공격속도가 증가하였습니다.
Attack Speed increased.
*/
	MSG_ENST_ADRENALINE = 0x27e,
/*20031028 to 20180523
 공격속도가 감소하였습니다.
Attack Speed reduced.
*/
	MSG_DSST_ADRENALINE = 0x27f,
/*20031028 to 20180523
 페코에 올라 탔습니다.
You've just been on a Peco Peco.
*/
	MSG_ENST_RIDING = 0x280,
/*20031028 to 20180523
 페코에서 내렸습니다.
You've just got off of a Peco Peco.
*/
	MSG_DSST_RIDING = 0x281,
/*20031028 to 20180523
 팔콘을 장착하였습니다.
You've just carried a Falcon with.
*/
	MSG_ENST_FALCON = 0x282,
/*20031028 to 20180523
 팔콘을 풀어주었습니다.
You've just released a Falcon.
*/
	MSG_DSST_FALCON = 0x283,
/*20031028 to 20180523
 죽은척하기 상태가 되었습니다.
Play Dead initiated.
*/
	MSG_ENST_TRICKDEAD = 0x284,
/*20031028 to 20180523
 죽은척하기 상태가 해제되었습니다.
Play Dead canceled.
*/
	MSG_DSST_TRICKDEAD = 0x285,
/*20031028 to 20180523
 힘이 강해졌습니다.
STR improved.
*/
	MSG_ENST_SHOUT = 0x286,
/*20031028 to 20180523
 힘이 원래대로 돌아왔습니다.
STR turned back to normal.
*/
	MSG_DSST_SHOUT = 0x287,
/*20031028 to 20180523
 에너지코트 상태가 되었습니다.
Energy Coat initiated.
*/
	MSG_ENST_ENERGYCOAT = 0x288,
/*20031028 to 20180523
 에너지코트 상태가 해제되었습니다.
Energy Coat canceled.
*/
	MSG_DSST_ENERGYCOAT = 0x289,
/*20031028 to 20180523
 방어구가 파괴되었습니다.
Armor destroyed.
*/
	MSG_ENST_BROKENAMOR = 0x28a,
/*20031028 to 20180523
 ...
Weapon has just been released from destroyed status.
*/
	MSG_DSST_BROKENAMOR = 0x28b,
/*20031028 to 20180523
 무기가 파괴되었니다.
Weapon destroyed.
*/
	MSG_ENST_BROKENWEAPON = 0x28c,
/*20031028 to 20180523
 ...
Weapon has just been released from destroyed status.
*/
	MSG_DSST_BROKENWEAPON = 0x28d,
/*20031028 to 20180523
 환영상태가 되었습니다.
Invisibility initiated.
*/
	MSG_ENST_ILLUSION = 0x28e,
/*20031028 to 20180523
 환영상태가 해제되었습니다.
Invisibility canceled.
*/
	MSG_DSST_ILLUSION = 0x28f,
/*20031028 to 20180523
과금 정보 처리가 늦어지고 있어 접속이 지연되고 있습니다. 잠시 후에 다시 시도해 주시기 바랍니다.
Sorry. It is delayed due to the process of payment. Please re-connect in a minute.
*/
	MSG_REFUSE_BLOCK_TEMPORARY = 0x290,
/*20031028 to 20060403
장착된 화살을 해제 하여야 합니다.
20060410 to 20061009
장착된 화살 또는 탄환을 해제 하여야 합니다.
20061016 to 20180523
장착된 화살/탄환/수리검 을 해제해야합니다.
You must unequip ammunition first.
*/
	MSG_UNEQUIP_ARROW = 0x291,
/*20031028 to 20180523
화살 목록
Arrow List
*/
	MSG_ARROW_LIST = 0x292,
/*20031028 to 20180523
카트 목록
Cart List
*/
	MSG_CART_LIST = 0x293,
/*20031028 to 20180523
카트를 장착한 상태여야 합니다.
You must have a Pushcart.
*/
	MSG_MUST_EQUIP_CART = 0x294,
/*20031028 to 20180523
채팅방을 개설 할 수 없습니다.
You cannot open a Chat Window.
*/
	MSG_CANT_MAKE_CHAT_ROOM = 0x295,
/*20031028 to 20180523
라그나로크 홈페이지로 접속하여 계정을 만듭니다. 처음 계정을 만드시면 3일 동안은 무료로 이용하실 수 있습니다.
Registering an account is the first step to accessing the game. Do you want to visit the registration page now?
*/
	MSG_3DAY_FREE = 0x296,
/*20031028 to 20180523
앉은 상태에서는 이 아이템을 사용할 수 없습니다.
You cannot use this item while sitting.
*/
	MSG_CANT_USE_WHEN_SITDOWN = 0x297,
/*20031028 to 20040413
운영자에 의한 채팅 및 스킬 금지가 %d 분간 남아 있습니다.
20040419 to 20040714
운영자에 의한 채팅, 스킬, 아이템 사용금지가 %d 분간 남아 있습니다.
20040726 to 20180523
채팅, 스킬, 아이템 사용금지가 %d 분간 남아 있습니다.
Your use of skills and chat will be blocked for the next %d minutes.
*/
	MSG_BAD_MANNER_REMAIN = 0x298,
/*20031028 to 20040413
운영자에 의한 채팅 및 스킬 금지가 해지 되었습니다.
20040419 to 20040714
운영자에 의한 채팅, 스킬, 아이템 사용금지가 해지 되었습니다.
20040726 to 20180523
채팅, 스킬, 아이템 사용금지가 해지 되었습니다.
Your use of skills and chat have been reinstated.
*/
	MSG_BAD_MANNER_END = 0x299,
/*20031028 to 20180523
-[장착안됨]
- [Not equipped]
*/
	MSG_REF_UNEQUIP = 0x29a,
/*20031028 to 20180523
배고픔
Very Hungry
*/
	MSG_VERY_HUNGRY = 0x29b,
/*20031028 to 20180523
출출함
Hungry
*/
	MSG_HUNGRY = 0x29c,
/*20031028 to 20180523
보통
Normal
*/
	MSG_NORMAL = 0x29d,
/*20031028 to 20180523
배부름
Satisfied
*/
	MSG_REPLETE = 0x29e,
/*20031028 to 20180523
아주 배부름
Stuffed
*/
	MSG_VERY_REPLETE = 0x29f,
/*20031028 to 20180523
서먹서먹함
Awkward
*/
	MSG_VERY_AWKWARD = 0x2a0,
/*20031028 to 20180523
어색함
Shy
*/
	MSG_AWKWARD = 0x2a1,
/*20031028 to 20180523
친함
Cordial
*/
	MSG_FRIENDLY = 0x2a2,
/*20031028 to 20180523
절친함
Loyal
*/
	MSG_VERY_FRIENDLY = 0x2a3,
/*20031028 to 20180523
알수 없음
Unknown
*/
	MSG_UNKNOWN = 0x2a4,
/*20031028 to 20080513
(태국)귀하는 앞으로 %일 %d시간 %d분 사용이 가능합니다.
20080514 to 20180523
귀하는 앞으로 %일 %d시간 %d분 사용이 가능합니다.
Your account has play time of %d day %d hour %d minute.
*/
	MSG_BILLING_DAY_HOUR_MINUTES = 0x2a5,
/*20031028 to 20080513
(태국)이 계정은 이미 다른 어카운트 서버로 접속한 상태입니다.
20080514 to 20180523
이 계정은 이미 다른 어카운트 서버로 접속한 상태입니다.
Your account is already connected to account server.
*/
	MSG_BAN_INFORMATION_REMAINED_ANOTHER_ACCOUNT = 0x2a6,
/*20031028 to 20080513
(태국)귀하는 앞으로 %d시간 %d분 사용이 가능합니다.
20080514 to 20180523
귀하는 앞으로 %d시간 %d분 사용이 가능합니다.
Your account has play time of %d hour %d minute.
*/
	MSG_BILLING_HOUR_MINUTES = 0x2a7,
/*20031028 to 20080513
(태국)귀하는 무료 사용자 입니다.
20080514 to 20180523
귀하는 무료 사용자 입니다.
Your account is a free account.
*/
	MSG_BILLING_FREE_USER = 0x2a8,
/*20031028 to 20080513
(태국)이 계정으로 사크라이에 접속할수 없습니다.
20080514 to 20180523
이 계정으로 사크라이에 접속할수 없습니다.
This account can't connect the Sakray server.
*/
	MSG_REFUSE_NONSAKRAY_ID_BLOCKED = 0x2a9,
/*20031028 to 20180523
펫의 이름은 영문 23, 한글 11자 이내로 정해 주세요.
Your pet name must be 23 characters or less.
*/
	MSG_PETNAME_IN23 = 0x2aa,
/*20031028 to 20180523
이름은 단 한번만 바꿀수 있습니다. 펫 이름을 ^0000ff^0000ff %s^000000^000000 로 수정합니다. 계속 하시겠습니까?
You may change your pet's name only once. Your pet's name will be changed to ^0000ff^0000ff %s^000000^000000.  Do you wish to continue?
*/
	MSG_PETNAME_CHANGE_ONLYONCE = 0x2ab,
/*20031028 to 20180523
/폰트
/font
*/
	MSG_NAMEBALLOON_TYPE = 0x2ac,
/*20031028 to 20180523
길드에 남은 제니가 부족하여 작업이 실패하였습니다.
Your guild lacks the funds to pay for this venture.
*/
	MSG_GUILDZENY_NOT_ENOUGH = 0x2ad,
/*20031028 to 20180523
길드가 소유할 수 있는 최대 금액을 초과하여 작업이 실패하였습니다.
Your guild zeny limit prevents you from performing this action.
*/
	MSG_GUILDZENY_OVER = 0x2ae,
/*20031028 to 20180523
이펙트 간략화 On
Simplified effects have been activated.
*/
	MSG_MINEFFECT_ON = 0x2af,
/*20031028 to 20180523
이펙트 간략화 Off
Simplified effects have been deactivated.
*/
	MSG_MINEFFECT_OFF = 0x2b0,
/*20031028 to 20180523
자본금
Required Fee
*/
	MSG_CAPITAL = 0x2b1,
/*20031028 to 20180523
아이템을 바닥에 버리려면, 아이템 창을 열어 주십시오.
If you wish to drop an item, you must first open your Item Window (alt+e).
*/
	MSG_OPEN_ITEMWND_TO_THROW = 0x2b2,
/*20031028 to 20180523
PC방 요금이 종료하여 개인 요금제로 전환합니다. 개인 요금으로 게임을 계속 하시겠습니까?
Internet Cafe Time Plan has been ended. Would you like to continue the game with your personal play time?
*/
	MSG_ASK_PNGAMEROOM = 0x2b3,
/*20031028 to 20100928

20081008 to 20180523

Current admission application state.
*/
	MSG_REPLY_REMAINTIME = 0x2b4,
/*20031028 to 20100928

20081008 to 20180523

Current admission application state.
*/
	MSG_INFO_REMAINTIME = 0x2b5,
/*20031028 to 20180523
돈이 모자라거나, 가질 수 있는 최대 금액을 초과하였습니다.
Your lack of zeny or your zeny limit have prevented you from performing this action.
*/
	MSG_OVER_OR_LOW_MONEY = 0x2b6,
/*20031028 to 20180523
전투불능 상태가 되었습니다. esc키를 누르시면 선택창이 뜹니다.
Your character has fainted. Push the ESC key to restart.
*/
	MSG_PRESS_ESC_TO_RESTART = 0x2b7,
/*20031028 to 20180523
  %d 개 획득
- %d obtained.
*/
	MSG_EA_OBTAIN = 0x2b8,
/*20031028 to 20180523
스펠 리스트
Spell List
*/
	MSG_SPELL_LIST = 0x2b9,
/*20031028 to 20180523
/최소화
/minimize
*/
	MSG_MINEFFECT = 0x2ba,
/*20031028 to 20180523
이 아이템은 손상되어 있습니다..
This item has been damaged.
*/
	MSG_DAMAGED_ITEM = 0x2bb,
/*20031028 to 20180523
/noshift : 쉬프트를 누르지않고 힐로 적을 공격할수있게됩니다 On Off
/noshift: You may use your ''force heal'' ability without the Shift key. On | Off
*/
	MSG_EXPLAIN_NOSHIFT = 0x2bc,
/*20031028 to 20040223
시프트를 누르지 않고도 힐로 몬스터를 공격할수 있습니다 [ON]
20040225 to 20180523
시프트를 누르지 않고도 힐로 언데드를 공격할수 있습니다 [/ns ON]
[no shift] option activated. [ON]
*/
	MSG_NOSHIFT_ON = 0x2bd,
/*20031028 to 20040223
시프트를 누르지 않고도 힐로 몬스터를 공격할수 있습니다 [OFF]
20040225 to 20040315
시프트를 누르지 않고도 힐로 언데드를 공격할수 있습니다 [/ns OFF]
20040322 to 20180523
시프트를 눌러야 힐로 언데드를 공격할수 있습니다 [/ns OFF]
[no shift] option deactivated. [OFF]
*/
	MSG_NOSHIFT_OFF = 0x2be,
/*20031028 to 20180523
MSI_REFUSE_BAN_BY_DBA
*/
	MSG_REFUSE_BAN_BY_DBA = 0x2bf,
/*20031028 to 20180523
MSI_REFUSE_EMAIL_NOT_CONFIRMED
*/
	MSG_REFUSE_EMAIL_NOT_CONFIRMED = 0x2c0,
/*20031028 to 20180523
MSI_REFUSE_BAN_BY_GM
*/
	MSG_REFUSE_BAN_BY_GM = 0x2c1,
/*20031028 to 20180523
MSI_REFUSE_TEMP_BAN_FOR_DBWORK
*/
	MSG_REFUSE_TEMP_BAN_FOR_DBWORK = 0x2c2,
/*20031028 to 20180523
MSI_REFUSE_SELF_LOCK
*/
	MSG_REFUSE_SELF_LOCK = 0x2c3,
/*20031028 to 20180523
MSI_REFUSE_NOT_PERMITTED_GROUP
*/
	MSG_REFUSE_NOT_PERMITTED_GROUP = 0x2c4,
/*20031028 to 20180523
MSI_REFUSE_WAIT_FOR_SAKRAY_ACTIVE
*/
	MSG_REFUSE_WAIT_FOR_SAKRAY_ACTIVE = 0x2c5,
/*20031028 to 20180523
/aura : 오오라를 간략화 시킬수있습니다 On Off
/aura: Simplify Aura effect On | Off
*/
	MSG_EXPLAIN_AURA = 0x2c6,
/*20031028 to 20180523
오오라가 정상적으로 표시됩니다 [오오라 ON]
Turn On Aura [Aura ON]
*/
	MSG_AURA_ON = 0x2c7,
/*20031028 to 20180523
오오라가 간략화되서 표시됩니다 [오오라 OFF]
Simplify Aura enabled. [ON]
*/
	MSG_AURA_OFF = 0x2c8,
/*20031028 to 20180523
채팅금지 기록 %d 회
Chat block record %d times
*/
	MSG_PROHIBIT_LOG = 0x2c9,
/*20031028 to 20180523
채팅 금지 리스트
Chat block list
*/
	MSG_PROHIBIT_LIST = 0x2ca,
/*20031028 to 20180523
/이름표시 or /showname : 캐릭터의 이름 표시 방식을 변경합니다.
/showname: Change the name font type.
*/
	MSG_EXPLAIN_SHOWNAMETYPE = 0x2cb,
/*20031028 to 20180523
/noctrl : 콘트롤을 누르지않아도 자동공격이 됩니다. On Off
/noctrl | /nc: Auto attack without pressing ctrl key. On | Off
*/
	MSG_EXPLAIN_NOCTRL = 0x2cc,
/*20031028 to 20040223
콘트롤을 누르지 않아도 자동공격을 합니다 [자동공격 ON]
20040225 to 20180523
콘트롤을 누르지 않아도 자동공격을 합니다 [/nc ON]
Use auto attack without Ctrl. [Auto attack ON]
*/
	MSG_NOCTRL_ON = 0x2cd,
/*20031028 to 20040223
콘트롤을 눌러야 자동공격을 합니다 [자동공격 OFF]
20040225 to 20180523
콘트롤을 눌러야 자동공격을 합니다 [/nc OFF]
Use auto attack with Ctrl. [Auto attack OFF]
*/
	MSG_NOCTRL_OFF = 0x2ce,
/*20031028 to 20180523
채팅 금지 주기
Mute this player.
*/
	MSG_APPEND_PROHIBIT = 0x2cf,
/*20031028 to 20180523
채팅 금지 완전 풀기 & 로그 삭제
Unmute player & Erase mute time.
*/
	MSG_ERASE_PROHIBIT = 0x2d0,
/*20031028 to 20180523
채팅 금지 시간 줄이기(로그 삭제 안됨)
Decrease Player Mute time.
*/
	MSG_REDUCE_PROHIBIT = 0x2d1,
/*20031028 to 20180523
폰트가 정상적으로 바뀌었습니다 [이름표시방식 1]
Normal Font Displayed. [showname type 1]
*/
	MSG_SHOWNAME_ON = 0x2d2,
/*20031028 to 20180523
폰트가 가늘게 바뀌면서 파티명도 표시됩니다 [이름표시방식 2]
Font will be thin and party name will be shown [showname type 2]
*/
	MSG_SHOWNAME_OFF = 0x2d3,
/*20031028 to 20180523
/doridori : 연속해서 이 명령어를 쳐주면 캐릭터가 도리도리 ^^;;
/doridori: Shake head
*/
	MSG_EXPLAIN_DORIDORI = 0x2d4,
/*20031028 to 20180523
인터넷 카페에서 과금을 하고 있습니다.
Internet room is paying now.
*/
	MSG_BILLING_INTERNET_CAFE = 0x2d5,
/*20031028 to 20180523
정액제 과금은 %d일 %d시간 %d분이 남았습니다.
종량제 과금은 %d시간 %d분이 남았습니다.
Prepaid voucher validate until %d days %d hours %d minutes later.
Time limit voucher validate untill %d hours %d minutes later.
*/
	MSG_BILLING_BOTH = 0x2d6,
/*20031028 to 20180523
/bingbing : 연속해서 이 명령어를 쳐주면 캐릭터가 빙글빙글 ^^;;
/bingbing: Rotates player counter clockwise.
*/
	MSG_EXPLAIN_BINGBING = 0x2d7,
/*20031028 to 20180523
/bangbang : 연속해서 이 명령어를 쳐주면 캐릭터가 뱅글뱅글 ^^;;
/bangbang: Rotates player clockwise.
*/
	MSG_EXPLAIN_BANGBANG = 0x2d8,
/*20031028 to 20180523
/skillfail : 빨간색의 스킬사용 실패 메세지를 표시하지 않습니다 On Off
/skillfail: Display red font message when skill fails. On | Off
*/
	MSG_EXPLAIN_SKILLFAIL = 0x2d9,
/*20031028 to 20040223
스킬사용 실패 메세지를 표시합니다 [표시 ON]
20040225 to 20180523
스킬사용 실패 메세지를 표시합니다 [/sf ON]
Skill fail messages will be displayed. [Display On]
*/
	MSG_SKILLFAIL_ON = 0x2da,
/*20031028 to 20040223
스킬사용 실패 메세지를 표시하지 않습니다 [표시 OFF]
20040225 to 20180523
스킬사용 실패 메세지를 표시하지 않습니다 [/sf OFF]
Skill fail messages will not be displayed. [Display OFF]
*/
	MSG_SKILLFAIL_OFF = 0x2db,
/*20031028 to 20180523
/notalkmsg : 채팅내용을 채팅창에 표시하지 않습니다 On Off
/notalkmsg: Chat will not be displayed in chat window. On | Off
*/
	MSG_EXPLAIN_NOTALKMSG = 0x2dc,
/*20031028 to 20040223
채팅내용을 채팅창에 표시합니다 [표시 ON]
20040225 to 20180523
채팅내용을 채팅창에 표시합니다 [/nm ON]
Chat content will be displayed in the chat window. [Display ON]
*/
	MSG_NOTALKMSG_ON = 0x2dd,
/*20031028 to 20040223
채팅내용을 채팅창에 표시하지않습니다 [표시 OFF]
20040225 to 20180523
채팅내용을 채팅창에 표시하지않습니다 [/nm OFF]
Chat content will not be displayed in the chat window. [Display OFF]
*/
	MSG_NOTALKMSG_OFF = 0x2de,
/*20031028 to 20040423
/set1 : /noctrl + /showname + /skillfail
20040426 to 20040707
/set1 : /noctrl + /showname + /skillfail , /set2 : + /q3
20040707 to 20180523
/set1 : /nc + /showname + /sf + /wi, /set2 : + /q3
/set1: /noctrl + /showname + /skillfail
*/
	MSG_EXPLAIN_SET1 = 0x2df,
/*20031028 to 20180523
/fog : FOG이펙트를 키거나 끌수있습니다 On Off
/fog: Fog effect. On | Off
*/
	MSG_EXPLAIN_FOG = 0x2e0,
/*20031028 to 20180523
  청혼을 해왔습니다. 승낙하시겠습니까?
You have received a marriage proposal. Do you accept?
*/
	MSG_SUGGEST_COUPLE = 0x2e1,
/*20031028 to 20180523
아이템 분배 방식
Item sharing type
*/
	MSG_HOWITEMDIV = 0x2e2,
/*20031028 to 20180523
각자 취득
Individual
*/
	MSG_ITEMDIV1 = 0x2e3,
/*20031028 to 20180523
균등하게 분배
Shared
*/
	MSG_ITEMDIV2 = 0x2e4,
#if PACKETVER >= 20031103
/*20031103 to 20180523
nProtect KeyCrypt
*/
	MSG_KEYCRYPT = 0x2e5,
/*20031103 to 20180523
Keyboard Driver가 검출되었습니다. 

키보드 보안 입력을 위해 추가기능을 설치하시겠습니까?    

(추가기능 설치후, 시스템 reboot 필수)
Keyboard Driver has been detected. 

Do you want to install a program for keyboard security?    

(After installation, System Reboot is required)
*/
	MSG_KEYCRYPT_INSTALL_KEYDRIVER = 0x2e6,
/*20031103 to 20180523
설치가 완료 되었습니다. 

시스템을 Reboot 합니다.    
Installation has been completed.  

System will be rebooted.
*/
	MSG_KEYCRYPT_REBOOT = 0x2e7,
/*20031103 to 20180523
설치 실패. 
Installation has been failed.
*/
	MSG_KEYCRYPT_INSTALLFAIL = 0x2e8,
/*20031103 to 20180523
키보드 보안을 적용하지 않고 계속합니다.
Keyboard Security will be skipped.
*/
	MSG_KEYCRYPT_SKIPKEYCRYPT = 0x2e9,
/*20031103 to 20180523
키보드 보안에 필요한 파일이 존재하지 않습니다.  

(npkeyc.vxd, npkeyc.sys, npkeycs.sys)
Required file for Keyboard Security is not existing.  

(npkeyc.vxd, npkeyc.sys, npkeycs.sys)
*/
	MSG_KEYCRYPT_NOKEYCRYPTFILE = 0x2ea,
/*20031103 to 20180523
USB Keyboard가 검출되었습니다. 

키보드 보안 입력을 위해 추가기능을 설치하시겠습니까?    

(추가기능 설치후, 시스템 reboot 필수)
USB Keyboard has been detected. 

Do you want to install a program for keyboard security?    

(After installation, System Reboot is required)
*/
	MSG_KEYCRYPT_USBKEYBOARD = 0x2eb,
/*20031103 to 20180523
ftp://ragnarok.nefficient.co.kr/pub/ragnarok/ragnarok0526.exe
*/
	MSG_FINDHACK_PATH = 0x2ec,
/*20031103 to 20180523
FindHack이 정상적으로 설치가 되어있지 않습니다. ragnarok0226.exe 를 다운로드 하여 라그나로크가 설치된 폴더에 설치해 주시기 바랍니다.(%d).
FindHack is not installed correctly. Please download ragnarok0226.exe and install it in RagnarokOnline directory.(%d).
*/
	MSG_FINDHACK_NOTINSTALLED = 0x2ed,
/*20031103 to 20180523
해킹툴이 존재하지만 치료가 정상적으로 되지 않았습니다. 라그나로크가 실행되지 않습니다.
Hacking tool is existing but it hasn't been cleaned. Rangarok Online will not be executed.
*/
	MSG_FINDHACK_HACKTOOLEXIST = 0x2ee,
/*20031103 to 20180523
해킹툴 진단 프로그램이 정상적으로 다운로드 되지 않았습니다. ragnarok0226.exe 를 다운로드 하여 라그나로크가 설치된 폴더에 설치해 주시기 바랍니다.
Hacking tool scan program has not been downloaded correctly. Please download ragnarok0226.exe and install it in RagnarokOnline directory.
*/
	MSG_FINDHACK_CANTDOWNLOAD = 0x2ef,
/*20031103 to 20180523
NPX.DLL 등록에러 이거나 FindHack 구동에 필요한 파일이 없습니다. ragnarok0226.exe 를 다운로드 하여 라그나로크가 설치된 폴더에 설치해 주시기 바랍니다.
NPX.DLL register error or there is no necessary file to run FindHack. Please download ragnarok0226.exe and install it in RagnarokOnline directory.
*/
	MSG_FINDHACK_NOFILE = 0x2f0,
/*20031103 to 20180523
예외사항이 발생했습니다. (02-3281-0361)로 문의해주세요. 리턴값(%d)
Exceptional Error. Please contact the customer support. Return Value: (%d)
*/
	MSG_FINDHACK_EXCEPTION = 0x2f1,
/*20031103 to 20180523
종료버튼을 클릭 하셨습니다.
Exit button has been clicked.
*/
	MSG_FINDHACK_EXITPRESSED = 0x2f2,
/*20031103 to 20180523
Findhack 업데이트 서버접근 실패하였습니다. 잠시 후에 다시 시도해 주시거나 그라비티 운영팀으로 연락해주시기 바랍니다.
Unable to connect Findhack Update Server. Please try again or contact the customer support.
*/
	MSG_FINDHACK_UPDATEFAILED = 0x2f3,
/*20031103 to 20180523
사랑받고있는 
Beloved
*/
	MSG_NAMED_PET = 0x2f4,
#endif
#if PACKETVER >= 20031110
/*20031110 to 20180523
/report or /신고 : 신고용 갈무리 파일을 저장합니다.
/report: Save a chat log file.
*/
	MSG_REPORTCOMMAND_EXPLANATION = 0x2f5,
/*20031110 to 20031112
이 파일은 (주)그라비티의 운영팀에서 게임내의 부정행위나 비매너 행위에 대한
증거자료로사용하게 됩니다.
문서를 다른 문서 형식으로 저장하거나 내용을 변경하여 원본과 일치하지 않게
 될 경우 그 문서는 증거 효력을 상실하게 됩니다.
20031117 to 20180523
이 파일은 (주)그라비티의 운영팀에서 게임내의 부정행위나 비매너 행위에 대한
증거자료로 사용하게 됩니다.
문서를 다른 문서 형식으로 저장하거나 내용을 변경하여 원본과 일치하지 않게
 될 경우 그 문서는 증거 효력을 상실하게 됩니다.
Chat logs are not accepted as evidence for any ill-mannered violation on account of possible file modifications. However this feature is provided for players' personal reference.
*/
	MSG_REPORTTEXT_HEADER = 0x2f6,
/*20031110 to 20180523
당신을 사랑해요 ♡
I love you.
*/
	MSG_LOVE_SKILL = 0x2f7,
#endif
#if PACKETVER >= 20031124
/*20031124 to 20180523
화면 또는 이펙트가 밝아서 눈에 부담이 되시는분들은 모니터의 밝기를 조정해주시기바랍니다.
Please adjust your monitor/video brightness if effects appear too bright.
*/
	MSG_EXPLAIN_BRIGHT = 0x2f8,
#endif
#if PACKETVER >= 20031218
/*20031218 to 20180523
전체화면모드가 잘안되는 경우에 게임실행후 ALT+TAB으로 화면을 전환하면 잘되는 기종도 있습니다
If full screen mode fails to work, it is suggested you alt+tab [or ctrl+esc] to inactivate and reactivate the Ragnarok Client.
*/
	MSG_EXPLAIN_ALTTAB = 0x2f9,
#endif
#if PACKETVER >= 20031223
/*20031223 to 20180523
(%d 명) - 유료서버
(%d players) - Pay to Play Server
*/
	MSG_SERVER_PROPERTY_PAY = 0x2fa,
/*20031223 to 20180523
(%d 명) - 무료서버
(%d players) - Free Server
*/
	MSG_SERVER_PROPERTY_FREE = 0x2fb,
/*20031223 to 20180523
무료 회원은 유료 서버로 접속할 수 없습니다.
Trial players can't connect Pay to Play Server.
*/
	MSG_CANT_CONNECT_TO_PAY_SERVER = 0x2fc,
#endif
#if PACKETVER >= 20031230
/*20031230 to 20040108
마우스 우클릭으로 F9에 저장한 스킬을 쓸수있습니다 [QUICK ON]
20040112 to 20180523
마우스 우클릭으로 F9에 저장한 스킬을 쓸수있습니다 [/q1 ON]
Right click menu skills for F9 are Enabled.[/q1 ON]
*/
	MSG_QUICKSPELL_ON = 0x2fd,
/*20031230 to 20040108
마우스 우클릭으로 스킬을 사용하지 못합니다 [QUICK OFF]
20040112 to 20180523
마우스 우클릭으로 스킬을 사용하지 못합니다 [/q1 OFF]
Right click menu skills for F9 are Disabled.[/q1 OFF]
*/
	MSG_QUICKSPELL_OFF = 0x2fe,
/*20031230 to 20040119
/quickspell : 마우스 우클릭으로 F9에 저장한 스킬을 사용합니다 On Off
20040126 to 20180523
/quickspell  : 마우스 우클릭으로 F9에 저장한 스킬을 사용합니다 On Off
/quickspell: Right-click menu enables you to use skills assigned to the F9 hotkey. On | Off
*/
	MSG_EXPLAIN_QUICKSPELL = 0x2ff,
#endif
#if PACKETVER >= 20040112
/*20040112 to 20180523
마우스의 WHEEL을 사용해서 F7 과 F8에 저장한 스킬을 사용합니다 [/q2 ON]
Mouse wheel skills for F7 and F8 are Enabled.[/q2 ON]
*/
	MSG_QUICKSPELL2_ON = 0x300,
/*20040112 to 20180523
마우스 WHEEL로 스킬을 사용하지 못합니다 [/q2 OFF]
Mouse wheel skills for F7 and F8 are Disabled.[/q2 OFF]
*/
	MSG_QUICKSPELL2_OFF = 0x301,
/*20040112 to 20040119
/quickspell2 : 마우스 WHEEL로 F7 과 F8에 저장한 스킬을 사용합니다 On Off
20040126 to 20180523
/quickspell2 : 마우스 WHEEL을 위,아래로 굴려서 F7과F8에 저장한 스킬을 사용합니다 On Off
/quickspell2: By rolling the mouse wheel up and down, you are able to use skills registered on F7 and F8 hotkeys. On | Off
*/
	MSG_EXPLAIN_QUICKSPELL2 = 0x302,
/*20040112 to 20180523
/q3 : /quickspell (/q1) + /quickspell2 (/q2)
/q3: /quickspell (/q1) + /quickspell2 (/q2)
*/
	MSG_EXPLAIN_QUICKSPELL3 = 0x303,
#endif
#if PACKETVER >= 20040202
/*20040202 to 20180523
/찌릿
/bzz
*/
	MSG_EMOTION_STARE = 0x304,
/*20040202 to 20180523
/밥
/rice
*/
	MSG_EMOTION_HUNGRY = 0x305,
/*20040202 to 20180523
/멋져
/awsm
*/
	MSG_EMOTION_COOL = 0x306,
/*20040202 to 20180523
/메롱
/meh
*/
	MSG_EMOTION_MERONG = 0x307,
/*20040202 to 20180523
/부끄
/shy
*/
	MSG_EMOTION_SHY = 0x308,
/*20040202 to 20180523
/쓱쓱
/pat
*/
	MSG_EMOTION_GOODBOY = 0x309,
/*20040202 to 20180523
/엠탐
/mp
*/
	MSG_EMOTION_SPTIME = 0x30a,
/*20040202 to 20180523
/질질
/slur
*/
	MSG_EMOTION_SEXY = 0x30b,
/*20040202 to 20180523
/컴온
/com
*/
	MSG_EMOTION_COMEON = 0x30c,
/*20040202 to 20180523
/하품
/yawn
*/
	MSG_EMOTION_SLEEPY = 0x30d,
/*20040202 to 20180523
/축하
/grat
*/
	MSG_EMOTION_CONGRATULATION = 0x30e,
/*20040202 to 20180523
/피탐
/hp
*/
	MSG_EMOTION_HPTIME = 0x30f,
/*20040202 to 20180523
/이모션 : 현재 사용가능한 이모션의 리스트를 보여줍니다.
/emotion: views the emoticon list.
*/
	MSG_EXPLAIN_EMOTION = 0x310,
#endif
#if PACKETVER >= 20040223
/*20040223 to 20040302
키보드를 이용해서 스킬단축창2 와 3의 스킬들을 사용합니다. [/bm ON]
20040308 to 20180523
키보드를 이용해서 스킬단축창 1,2,3의 스킬들을 사용합니다. [/bm ON]
Skills assigned to shortcut windows 1, 2, 3 are Enabled. [/bm ON]
*/
	MSG_BATTLE_ON = 0x311,
/*20040223 to 20040302
키보드를 이용해서 스킬단축창2 와 3의 스킬들을 사용하지못합니다. [/bm OFF]
20040308 to 20180523
키보드를 이용해서 스킬단축창 1,2,3의 스킬들을 사용하지못합니다. [/bm OFF]
Skills assigned to shortcut windows 1, 2, 3 are Disabled. [/bm OFF]
*/
	MSG_BATTLE_OFF = 0x312,
/*20040223 to 20180523
/battlemode : Q ~ O 를 누르면 스킬단축창2의 스킬들이 사용됩니다.
/battlemode: allows you to use skills assigned to Shortcut Window 2 by pressing Q ~ O keys.
*/
	MSG_EXPLAIN_BATTLE = 0x313,
/*20040223 to 20040302
                    A ~ L 을 누르면 스킬단축창3의 스킬들이 사용됩니다. On Off
20040308 to 20180523
                    A ~ L 을 누르면 스킬단축창3의 스킬들이 사용됩니다.
A ~ L keys allow you to use skills assigned to Shortcut Window 3.
*/
	MSG_EXPLAIN_BATTLE2 = 0x314,
/*20040223 to 20180523
라그나로크를 실행하실때 다른 프로그램을 띄우시면 게임이 느려질수도있습니다.
Please remember, programs running in the background while playing may affect the game's performance.
*/
	MSG_EXPLAIN_LAG = 0x315,
#endif
#if PACKETVER >= 20040302
/*20040302 to 20041130
천사님 제 목소리 들리세여? ^^;
20041206 to 20180523
천사님 제 목소리 들리세요? ^^;
Dear angel, can you hear my voice?
*/
	MSG_SUPERNOVICE1 = 0x316,
/*20040302 to 20180523
슈퍼노비스
Super Novice
*/
	MSG_SUPERNOVICE2 = 0x317,
/*20040302 to 20041130
예여~
20041206 to 20180523
예요~
Super Novice~
*/
	MSG_SUPERNOVICE3 = 0x318,
/*20040302 to 20041130
저 좀 도와주세여~ ㅠ_ㅠ
20041206 to 20180523
저 좀 도와주세요~ ㅠ_ㅠ
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE4 = 0x319,
#endif
#if PACKETVER >= 20040308
/*20040308 to 20041011
  입양을 요청해왔습니다. 승낙하시겠습니까?
20041018 to 20180523
님께서 당신을 입양시키고 싶어하십니다. 승낙하시겠습니까?
 wishes to adopt you. Do you accept?
*/
	MSG_SUGGEST_BABY = 0x31a,
/*20040308 to 20180523
                    Z ~ > 을 누르면 스킬단축창1의 스킬들이 사용됩니다. On Off
Z ~ > keys allow you to use skills assigned on shortcut window 1. On | Off
*/
	MSG_EXPLAIN_BATTLE3 = 0x31b,
/*20040308 to 20180523
                    Space를 한번 누른뒤에 글자를 입력하면 채팅을 할수있습니다.
Press the space bar to Chat when in Battle mode [/battlemode | /bm].
*/
	MSG_EXPLAIN_BATTLE4 = 0x31c,
/*20040308 to 20180523
게임가드 파일이 없거나 변조되었습니다. 게임가드 셋업 파일을 설치해보시기 바랍니다.
"Either there's no Game Guard installed on the program or Game Guard is cracked. Please, try to reinstall Game Guard from its setup file."
*/
	MSG_NPGAMEMON_ERROR_AUTH_GAMEGUARD = 0x31d,
/*20040308 to 20180523
윈도우의 일부 시스템 파일이 손상되었습니다. 인터넷 익스플로러(IE)를 다시 설치해보시기 바랍니다.
Some of Windows system files have been damaged. Please re-install your Internet Explorer.
*/
	MSG_NPGAMEMON_ERROR_CRYPTOAPI = 0x31e,
/*20040308 to 20180523
게임가드 실행에 실패했습니다. 게임가드 셋업 파일을 다시 설치해보시기 바랍니다.
"Failed to run Game Guard. Please, try to reinstall Game Guard from its setup file."
*/
	MSG_NPGAMEMON_ERROR_EXECUTE = 0x31f,
/*20040308 to 20180523
불법 프로그램이 발견되었습니다. 불필요한 프로그램을 종료한 후 다시 실행해보시기 바랍니다.
"At least one hazardous program has been detected. Please, terminate all the unnecessary programs before executing Game Guard."
*/
	MSG_NPGAMEMON_ERROR_ILLEGAL_PRG = 0x320,
/*20040308 to 20180523
게임가드 업데이트를 취소하셨습니다. 접속이 계속 되지 않을 경우 인터넷 및 방화벽 상태를 점검해보시기 바랍니다.
"Game Guard update is canceled. If the disconnection continues, please, check your internet or firewall settings."
*/
	MSG_NPGMUP_ERROR_ABORT = 0x321,
/*20040308 to 20180523
게임가드 업데이트 서버 접속에 실패하였습니다. 잠시 후 재시도 해보거나, 인터넷 및 방화벽 상태를 점검해 보시기 바랍니다.
"Failed to connect to Game Guard update server. Try to connect again later, or try to check the internet or firewall settings."
*/
	MSG_NPGMUP_ERROR_CONNECT = 0x322,
/*20040308 to 20180523
게임가드 업데이트를 완료하지 못 했습니다. 바이러스 검사를 해보시거나, PC 관리 프로그램을 사용하시면 설정을 조정한 후 게임을 실행해 보시기 바랍니다.
"Can't complete Game Guard update process. Please, try to execute a vaccine program to remove viruses. Or, please try to modify the settings of your PC managing tool if you are using any."
*/
	MSG_NPGMUP_ERROR_AUTH = 0x323,
#endif
#if PACKETVER >= 20040311
/*20040311 to 20180523
/notrade : 거래신청을 자동으로 거절합니다 On Off
/notrade: Declines trade offers automatically. On | Off
*/
	MSG_EXPLAIN_NOTRADE = 0x324,
/*20040311 to 20040804
거래신청을 자동으로 거절합니다 [/nt ON]
20040809 to 20180523
거래신청과 친구등록요청을 자동으로 거절합니다 [/nt ON]
Auto decline trade offers has been Enabled. [/nt ON]
*/
	MSG_NOTRADE_ON = 0x325,
/*20040311 to 20040804
거래신청을 정상적으로 받습니다 [/nt OFF]
20040809 to 20180523
거래신청과 친구등록요청을 정상적으로 받습니다 [/nt OFF]
Auto decline trade offers has been Disabled. [/nt OFF]
*/
	MSG_NOTRADE_OFF = 0x326,
#endif
#if PACKETVER >= 20040329
/*20040329 to 20180523
같은 아이템은 한번에 30000개 이상은 살수 없습니다.
You cannot buy more than 30,000ea items at once.
*/
	MSG_LIMIT_BUY_ITEM = 0x327,
/*20040329 to 20180523
재료가 충분하지 않습니다.
You do not have enough ingredients.
*/
	MSG_NOT_ENOUGH_SOURCE = 0x328,
#endif
#if PACKETVER >= 20040419
/*20040419 to 20180523
%s에 계정정보가 남아있습니다.
Login information remains at %s.
*/
	MSG_ALREADY_CONNECT = 0x329,
#endif
#if PACKETVER >= 20040423
/*20040423 to 20040429
해킹조사에 관련되어 %s 까지 로그인을 금지하고 있습니다.
20040503 to 20040906
해킹 관련 조사를 위해 로그인이 금지되 었습니다. 자세한 문의는 해킹관련 메일로 하여주시기 바랍니다.
20040913 to 20180523
계정도용 조사를 위해 로그인이 금지되었습니다. 자세한 문의는 계정도용 관련 문의 메일로 해주시기 바랍니다.
Account has been locked for a hacking investigation. Please contact the GM Team for more information.
*/
	MSG_HACKING_INVESTIGATION = 0x32a,
/*20040423 to 20040429
버그조사에 관련되어 %s 까지 로그인을 금지하고 있습니다.
20040503 to 20180523
귀하는 버그관련 조사중이므로 일시적으로 접속을 금합니다
This account has been temporarily prohibited from login due to a bug-related investigation.
*/
	MSG_BUG_INVESTIGATION = 0x32b,
/*20040423 to 20180523
수리가능한 아이템
Repairable items
*/
	MSG_REPAIRITEMLIST = 0x32c,
#endif
#if PACKETVER >= 20040426
/*20040426 to 20180523
아이템 수리 성공
Item has been successfully repaired.
*/
	MSG_ITEM_REPAIR_SUCCEESS = 0x32d,
/*20040426 to 20180523
아이템 수리 실패 (재료 또는 상대와의 거리등을 확인해주십시요)
You have failed to repair this item. Please check the distance between you and opponent.
*/
	MSG_ITEM_REPAIR_FAIL = 0x32e,
#endif
#if PACKETVER >= 20040531
/*20040531 to 20180523
시스템 상황을 지속적으로 체크 합니다.[운영자모드] [/sc ON]
System process enabled [GM mode] [/sc ON]
*/
	MSG_SYSTEM_CHECK_ON = 0x32f,
/*20040531 to 20180523
시스템 상황을 지속적으로 체크 하지 않습니다.[운영자모드] [/sc OFF]
System process disabled [GM mode] [/sc OFF]
*/
	MSG_SYSTEM_CHECK_OFF = 0x330,
/*20040531 to 20180523
/systemcheck : 시스템 상황을 지속적으로 체크 합니다.[운영자모드] 
/systemcheck: Check the system process [GM mode] On | Off
*/
	MSG_EXPLAIN_SYSTEM_CHECK = 0x331,
#endif
#if PACKETVER >= 20040614
/*20040614 to 20180523
(%s)님이 친구 신청을 하셨습니다. 친구가 되시겠습니까?
(%s) wishes to be friends with you. Would you like to accept?
*/
	MSG_SUGGEST_JOIN_FRIEND = 0x332,
#endif
#if PACKETVER >= 20040621
/*20040621 to 20180523
더 이상 친구 등록을 하실수 없습니다.
Your Friend List is full.
*/
	MSG_FRIEND_ADD_ME_OVERSIZE = 0x333,
/*20040621 to 20180523
(%s)님이 더 이상 친구 등록을 하실수 없습니다.
(%s)'s Friend List is full.
*/
	MSG_FRIEND_ADD_OTHER_OVERSIZE = 0x334,
/*20040621 to 20180523
(%s)님과 친구가 되셨습니다.
You have become friends with (%s).
*/
	MSG_FRIEND_ADD_SUCCEED = 0x335,
/*20040621 to 20180523
(%s)님이 친구 되기를 원하지 않습니다.
(%s) does not want to be friends with you.
*/
	MSG_FRIEND_ADD_FALSE = 0x336,
/*20040621 to 20180523
이 캐릭터는 %s 까지 블럭되어있습니다.
This character will be blocked to use until %s.
*/
	MSG_BLOCKED = 0x337,
/*20040621 to 20040621
천만제니이상을 입력하신 아이템은 천만제니로 판매됩니다.
20040628 to 20180523
천만제니 이상 입력하셔도 가격은 천만제니로 판매됩니다.
Price will be fixed at 10,000,000 zeny, even if you enter higher price.
*/
	MSG_OVERPRICE = 0x338,
#endif
#if PACKETVER >= 20040628
/*20040628 to 20180523
(적음)
(Very low)
*/
	MSG_LITTLEUSER = 0x339,
/*20040628 to 20180523
(약간 적음)
(Low)
*/
	MSG_ALITTLEUSER = 0x33a,
/*20040628 to 20180523
(보통)
(Normal)
*/
	MSG_NORMLEUSER = 0x33b,
/*20040628 to 20180523
(많음)
(High)
*/
	MSG_MANYUSER = 0x33c,
/*20040628 to 20180523
(매우 많음)
(Very high)
*/
	MSG_VERYMANYUSER = 0x33d,
/*20040628 to 20040714
비매너에 의해 GM으로부터 채팅금지가 %d 분간 적용됩니다.
20040726 to 20180523
비매너에 의해 운영자로부터 채팅금지가 적용됩니다.
You have been blocked from using chat and skills for %d minutes by the GM Team.
*/
	MSG_GM_BAD_MANNER_START = 0x33e,
/*20040628 to 20180523
GM에 의한 채팅금지가 %d 분 남아 있습니다.
%d minutes remain until release from the GM penalty.
*/
	MSG_GM_BAD_MANNER_REMAIN = 0x33f,
/*20040628 to 20180523
GM에 의한 채팅금지가 해지 되었습니다.
You have been released from the GM penalty.
*/
	MSG_GM_BAD_MANNER_END = 0x340,
/*20040628 to 20040714
도배 방지 시스템으로 인한 채팅금지가 %d 분간 적용됩니다.
20040726 to 20180523
도배 방지 시스템으로 인한 자동 채팅금지가 적용됩니다.
You have been blocked from using chat and skills for %d as an automatic penalty.
*/
	MSG_AUTO_BAD_MANNER_START = 0x341,
/*20040628 to 20180523
도배 방지 시스템으로 인한 채팅금지가 %d 분 남아 있습니다.
%d minutes remain until release from auto penalty.
*/
	MSG_AUTO_BAD_MANNER_REMAIN = 0x342,
/*20040628 to 20180523
도배 방지 시스템으로 인한 채팅금지가 해지되었습니다. 게임진행 시에는 도배에 대해서 주의하여 주시기 바랍니다.
You have been released from the auto penalty. Please refrain from spamming in-game.
*/
	MSG_AUTO_BAD_MANNER_END = 0x343,
/*20040628 to 20180523
%s님과 %s님이 이혼하셨습니다.
%s and %s have divorced from each other.
*/
	MSG_DIVORCE = 0x344,
#endif
#if PACKETVER >= 20040705
/*20040705 to 20041108
星鬪士 %s의 태양의 장소로 %s 가 지정됐습니다.
20041115 to 20180523
拳聖 %s의 태양의 장소로 %s 가 지정됐습니다.
%s has been designated as Gravity %s's Solar Space.
20041220 to 20050816
태양과 달과 별의 전사 %s의 태양의 장소로 %s 가 지정됐습니다.
*/
	MSG_STARPLACE1 = 0x345,
/*20040705 to 20041108
星鬪士 %s의 달의 장소로 %s 가 지정됐습니다.
20041115 to 20180523
拳聖 %s의 달의 장소로 %s 가 지정됐습니다.
%s has been designated as Gravity %s's Luna Space.
20041220 to 20050816
태양과 달과 별의 전사 %s의 달의 장소로 %s 가 지정됐습니다.
*/
	MSG_STARPLACE2 = 0x346,
/*20040705 to 20041108
星鬪士 %s의 별의 장소로 %s 가 지정됐습니다.
20041115 to 20180523
拳聖 %s의 별의 장소로 %s 가 지정됐습니다.
%s has been designated as Gravity %s's Stellar Space.
20041220 to 20050816
태양과 달과 별의 전사 %s의 별의 장소로 %s 가 지정됐습니다.
*/
	MSG_STARPLACE3 = 0x347,
/*20040705 to 20040726
星鬪士 %s의 태양의 장소 : %s
20040804 to 20041108
星鬪士 %s의 태양의 장소는 %s 입니다
20041115 to 20180523
拳聖 %s의 태양의 장소는 %s 입니다
Gravity %s's Solar Space: %s
20041220 to 20050816
태양과 달과 별의 전사 %s의 태양의 장소는 %s 입니다
*/
	MSG_STARPLACE4 = 0x348,
/*20040705 to 20040726
星鬪士 %s의 달의 장소 : %s
20040804 to 20041108
星鬪士 %s의 달의 장소는 %s 입니다
20041115 to 20180523
拳聖 %s의 달의 장소는 %s 입니다
Gravity %s's Luna Space: %s
20041220 to 20050816
태양과 달과 별의 전사 %s의 달의 장소는 %s 입니다
*/
	MSG_STARPLACE5 = 0x349,
/*20040705 to 20040726
星鬪士 %s의 별의 장소 : %s
20040804 to 20041108
星鬪士 %s의 별의 장소는 %s 입니다
20041115 to 20180523
拳聖 %s의 별의 장소는 %s 입니다
Gravity %s's Stellar Space: %s
20041220 to 20050816
태양과 달과 별의 전사 %s의 별의 장소는 %s 입니다
*/
	MSG_STARPLACE6 = 0x34a,
#endif
#if PACKETVER >= 20040706
/*20040706 to 20041108
星鬪士 %s의 태양의 몬스터로 %s 가 지정됐습니다.
20041115 to 20180523
拳聖 %s의 태양의 몬스터로 %s 가 지정됐습니다.
%s has been designated as Gravity %s's Solar Monster.
20041220 to 20050816
태양과 달과 별의 전사 %s의 태양의 몬스터로 %s 가 지정됐습니다.
*/
	MSG_STARMONSTER1 = 0x34b,
/*20040706 to 20041108
星鬪士 %s의 달의 몬스터로 %s 가 지정됐습니다.
20041115 to 20180523
拳聖 %s의 달의 몬스터로 %s 가 지정됐습니다.
%s has been designated as Gravity %s's Luna Monster.
20041220 to 20050816
태양과 달과 별의 전사 %s의 달의 몬스터로 %s 가 지정됐습니다.
*/
	MSG_STARMONSTER2 = 0x34c,
/*20040706 to 20041108
星鬪士 %s의 별의 몬스터로 %s 가 지정됐습니다.
20041115 to 20180523
拳聖 %s의 별의 몬스터로 %s 가 지정됐습니다.
%s has been designated as Gravity %s's Stellar Monster.
20041220 to 20050816
태양과 달과 별의 전사 %s의 별의 몬스터로 %s 가 지정됐습니다.
*/
	MSG_STARMONSTER3 = 0x34d,
/*20040706 to 20040726
星鬪士 %s의 태양의 몬스터 : %s
20040804 to 20041108
星鬪士 %s의 태양의 몬스터는 %s 입니다
20041115 to 20180523
拳聖 %s의 태양의 몬스터는 %s 입니다
Gravity %s's Solar Monster: %s
20041220 to 20050816
태양과 달과 별의 전사 %s의 태양의 몬스터는 %s 입니다
*/
	MSG_STARMONSTER4 = 0x34e,
/*20040706 to 20040726
星鬪士 %s의 달의 몬스터 : %s
20040804 to 20041108
星鬪士 %s의 달의 몬스터는 %s 입니다
20041115 to 20180523
拳聖 %s의 달의 몬스터는 %s 입니다
Gravity %s's Luna Monster: %s
20041220 to 20050816
태양과 달과 별의 전사 %s의 달의 몬스터는 %s 입니다
*/
	MSG_STARMONSTER5 = 0x34f,
/*20040706 to 20040726
星鬪士 %s의 별의 몬스터 : %s
20040804 to 20041108
星鬪士 %s의 별의 몬스터는 %s 입니다
20041115 to 20180523
拳聖 %s의 별의 몬스터는 %s 입니다
Gravity %s's Stellar Monster: %s
20041220 to 20050816
태양과 달과 별의 전사 %s의 별의 몬스터는 %s 입니다
*/
	MSG_STARMONSTER6 = 0x350,
#endif
#if PACKETVER >= 20040707
/*20040707 to 20180523
/window : 창 위치 이동시 다른 창과 달라붙는 속성이 들어갑니다 On Off
/window: Display windows will snap/dock together. On | Off
*/
	MSG_EXPLAIN_WINDOW = 0x351,
/*20040707 to 20180523
창 위치 이동시 다른 창과 잘 붙습니다 [/wi ON]
Display window docking enabled. [/wi ON]
*/
	MSG_WINDOW_ON = 0x352,
/*20040707 to 20180523
창 위치 이동시 다른 창과 붙으려는 속성을 가지지 않습니다 [/wi OFF]
Display window docking disabled. [/wi OFF]
*/
	MSG_WINDOW_OFF = 0x353,
#endif
#if PACKETVER >= 20040712
/*20040712 to 20180523
/pvpinfo : 자신의 PVP 승패와 PVP 포인트를 알 수 있습니다.
/pvpinfo: shows your PVP result and PVP points.
*/
	MSG_EXPLAIN_PVP_INFO = 0x354,
/*20040712 to 20180523
현재 %d승, %d패, PVP포인트는 %d입니다.
You have won %d times and have lost %d times in PVP. Current points %d.
*/
	MSG_PVP_INFO = 0x355,
#endif
#if PACKETVER >= 20040726
/*20040726 to 20180523
매너 포인트를 성공적으로 보냈습니다.
A manner point has been successfully aligned.
*/
	MSG_SEND_MANNER_POINT = 0x356,
#endif
#if PACKETVER >= 20040809
/*20040809 to 20180523
현재 이곳은 PK 가능 지역입니다. 불의의 공격에 유의 하시기 바랍니다.
You are in a PK area. Please beware of sudden attack.
*/
	MSG_PKZONE = 0x357,
#endif
#if PACKETVER >= 20040817
/*20040817 to 20180523
게임가드 업데이트가 바이러스나 스파이웨어와의 충돌로 실패했습니다. 백신 프로그램/스파이웨어 제거 프로그램을 사용한 후 접속해 주십시기 바랍니다
Game Guard update has been failed when either Virus or Spyware conflicted with. Please, Uninstall Spyware and Virus protection program before you log in.
*/
	MSG_NPGAMEMON_ERROR_100ERROR = 0x358,
#endif
#if PACKETVER >= 20040823
/*20040823 to 20180523
윈도우 호환성 문제로 프로그램을 종료합니다. 게임을 다시 실행해 주시기 바랍니다
Program has encountered an error related to Windows compatibility. Please start the game again.
*/
	MSG_NPGAMEMON_XP_COMPATIBILITY = 0x359,
#endif
#if PACKETVER >= 20040906
/*20040906 to 20180523
채팅, 스킬, 아이템을 사용할수없게 되었습니다.
You have been blocked from chatting, using skills and items.
*/
	MSG_PK_HONOR = 0x35a,
/*20040906 to 20180523
캐릭터 삭제 작업중이므로 접속이 일시적으로 제한됩니다.
Login is temporarily unavailable while this character is being deleted.
*/
	MSG_DELETING_CHAR = 0x35b,
/*20040906 to 20180523
결혼 상대자의 캐릭터 삭제 작업중이므로 접속이 일시적으로 제한됩니다.
Login is temporarily unavailable while your spouse character is being deleted.
*/
	MSG_DELETING_SPOUSE_CHAR = 0x35c,
#endif
#if PACKETVER >= 20040913
/*20040913 to 20180523
Novice
*/
	MSG_NOVICE = 0x35d,
/*20040913 to 20180523
Swordman
*/
	MSG_SWORDMAN = 0x35e,
/*20040913 to 20180523
Magician
Mage
*/
	MSG_MAGICIAN = 0x35f,
/*20040913 to 20180523
Archer
*/
	MSG_ARCHER = 0x360,
/*20040913 to 20180523
Acolyte
*/
	MSG_ACOLYTE = 0x361,
/*20040913 to 20180523
Merchant
*/
	MSG_MERCHANT = 0x362,
/*20040913 to 20180523
Thief
*/
	MSG_THIEF = 0x363,
/*20040913 to 20180523
Knight
*/
	MSG_KNIGHT = 0x364,
/*20040913 to 20180523
Prieset
Priest
*/
	MSG_PRIEST = 0x365,
/*20040913 to 20180523
Wizerd
Wizard
*/
	MSG_WIZARD = 0x366,
/*20040913 to 20180523
Blacksmith
*/
	MSG_BLACKSMITH = 0x367,
/*20040913 to 20180523
Hunter
*/
	MSG_HUNTER = 0x368,
/*20040913 to 20180523
Assassin
*/
	MSG_ASSASSIN = 0x369,
/*20040913 to 20180523
Novice
*/
	MSG_NOVICE_W = 0x36a,
/*20040913 to 20180523
Swordman
*/
	MSG_SWORDMAN_W = 0x36b,
/*20040913 to 20180523
Magician
Mage
*/
	MSG_MAGICIAN_W = 0x36c,
/*20040913 to 20180523
Archer
*/
	MSG_ARCHER_W = 0x36d,
/*20040913 to 20180523
Acolyte
*/
	MSG_ACOLYTE_W = 0x36e,
/*20040913 to 20180523
Merchant
*/
	MSG_MERCHANT_W = 0x36f,
/*20040913 to 20180523
Thief
*/
	MSG_THIEF_W = 0x370,
/*20040913 to 20180523
Knight
*/
	MSG_KNIGHT_W = 0x371,
/*20040913 to 20180523
Prieset
Priest
*/
	MSG_PRIEST_W = 0x372,
/*20040913 to 20180523
Wizerd
Wizard
*/
	MSG_WIZARD_W = 0x373,
/*20040913 to 20180523
Blacksmith
*/
	MSG_BLACKSMITH_W = 0x374,
/*20040913 to 20180523
Hunter
*/
	MSG_HUNTER_W = 0x375,
/*20040913 to 20180523
Assassin
*/
	MSG_ASSASSIN_W = 0x376,
#endif
#if PACKETVER >= 20041018
/*20041018 to 20180523
(%s)님을 아이로 입양신청
Send an adoption request to %s
*/
	MSG_REQ_JOIN_BABY = 0x377,
/*20041018 to 20041025
아이가 되시면 전승을 하실수 없게 됩니다. 그래도 괜찮습니까?
20041101 to 20180523
아이가 되면 전승을 할수없고 스텟은 80이상 올릴수없게되며 HP와 SP가 줄어듭니다. 그래도 괜찮습니까?
When you become a child, you will be unable to become a Transcendent Class character, all stats will be limited to a maximum of 80, and Max HP/SP will be reduced. Are you sure that you want to be adopted?
*/
	MSG_SUGGEST_BABY2 = 0x378,
#endif
#if PACKETVER >= 20041101
/*20041101 to 20180523
모든 나쁜 상태이상이 제거 되었습니다.
All abnormal status effects have been removed.
*/
	MSG_GOSPEL1 = 0x379,
/*20041101 to 20180523
1분간 모든 상태이상에 대해 면역이 됩니다.
You will be immune to abnormal status effects for the next minute.
*/
	MSG_GOSPEL2 = 0x37a,
/*20041101 to 20180523
1분간 최대 생명력이 크게 늘어납니다.
Your Max HP will stay increased for the next minute.
*/
	MSG_GOSPEL3 = 0x37b,
/*20041101 to 20180523
1분간 최대 마법력이 크게 늘어납니다.
Your Max SP will stay increased for the next minute.
*/
	MSG_GOSPEL4 = 0x37c,
/*20041101 to 20180523
1분간 모든 능력이 크게 상승합니다.
All of your Stats will stay increased for the next minute.
*/
	MSG_GOSPEL5 = 0x37d,
/*20041101 to 20180523
1분간 사용하는 무기에 성스러운 속성이 부여됩니다.
Your weapon will remain blessed with Holy power for the next minute.
*/
	MSG_GOSPEL6 = 0x37e,
/*20041101 to 20180523
1분간 사용하는 갑옷에 성스러운 속성이 부여됩니다.
Your armor will remain blessed with Holy power for the next minute.
*/
	MSG_GOSPEL7 = 0x37f,
/*20041101 to 20180523
10초간 방어력이 크게 상승합니다.
Your Defense will stay increased for the next 10 seconds.
*/
	MSG_GOSPEL8 = 0x380,
/*20041101 to 20180523
1분간 공격력이 크게 증가합니다.
Your Attack strength will be increased for the next minute.
*/
	MSG_GOSPEL9 = 0x381,
/*20041101 to 20180523
1분간 명중률과 회피율이 크게 상승합니다.
Your Accuracy and Flee Rate will be increased for the next minute.
*/
	MSG_GOSPEL10 = 0x382,
#endif
#if PACKETVER >= 20041108
/*20041108 to 20180523
아이를 한번 입양했던 부부는 추가 입양이 불가능합니다.
You cannot adopt more than 1 child.
*/
	MSG_BABY1 = 0x383,
/*20041108 to 20180523
부부가 둘다 레벨70이 넘어야 아이를 입양할수있습니다.
You must be at least character level 70 in order to adopt someone.
*/
	MSG_BABY2 = 0x384,
/*20041108 to 20041108
블랙스미스 랭킹포인트가 %d 상승해서 %d 포인트가 되었습니다.
20041115 to 20180523
[POINT] 블랙스미스 랭킹포인트가 %d 상승해서 %d 포인트가 되었습니다.
[Point] You have been rewarded with %d Blacksmith rank points. Your point total is %d.
*/
	MSG_BLACKSMITH_POINT = 0x385,
/*20041108 to 20041108
알케미스트 랭킹포인트가 %d 상승해서 %d 포인트가 되었습니다.
20041115 to 20180523
[POINT] 알케미스트 랭킹포인트가 %d 상승해서 %d 포인트가 되었습니다.
[Point] You have been rewarded with %d Alchemist rank points. Your point total is %d.
*/
	MSG_ALCHEMIST_POINT = 0x386,
#endif
#if PACKETVER >= 20041115
/*20041115 to 20041130
천사님 제 목소리 들리세요? ^^;
Dear angel, can you hear my voice?
20041206 to 20180523
X
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE11 = 0x387,
/*20041115 to 20041130
슈퍼노비스
Super Novice
20041206 to 20180523
X
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE12 = 0x388,
/*20041115 to 20041130
예요~
Super Novice~
20041206 to 20180523
X
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE13 = 0x389,
/*20041115 to 20041130
저 좀 도와주세요~ ㅠ_ㅠ
Help me out~ Please~ T_T
20041206 to 20180523
X
Help me out~ Please~ T_T
*/
	MSG_SUPERNOVICE14 = 0x38a,
/*20041115 to 20180523
/notalkmsg2 : 채팅내용을 채팅창에 표시하지 않습니다 (길드말 포함) On Off
/notalkmsg2: Hides chat messages(including guild chat). On Off
*/
	MSG_EXPLAIN_NOTALKMSG2 = 0x38b,
/*20041115 to 20180523
채팅내용을 채팅창에 표시합니다 [/nm2 ON]
Show chat messages. [/nm2 ON]
*/
	MSG_NOTALKMSG2_ON = 0x38c,
/*20041115 to 20180523
채팅내용을 채팅창에 표시하지않습니다 (길드말 포함) [/nm2 OFF]
Hide chat messages(including guild chat) [/nm2 OFF]
*/
	MSG_NOTALKMSG2_OFF = 0x38d,
#endif
#if PACKETVER >= 20041129
/*20041129 to 20180523
제련가능한 아이템
Upgradable Weapons
*/
	MSG_REFINEITEMLIST = 0x38e,
/*20041129 to 20180523
제련한 무기 : %s
Weapons upgraded: %s
*/
	MSG_ITEM_REFINE_SUCCEESS = 0x38f,
/*20041129 to 20180523
제련한 무기 : %s
Weapons upgraded: %s
*/
	MSG_ITEM_REFINE_FAIL = 0x390,
/*20041129 to 20180523
무기제련스킬의 레벨이 부족해서 %s 제련을 할수없습니다.
You cannot upgrade %s until you level up your Upgrade Weapon skill.
*/
	MSG_ITEM_REFINE_FAIL_LEVEL = 0x391,
/*20041129 to 20180523
제련에 필요한 아이템 (%s) 이 없으므로 제련할수없습니다.
You lack a necessary item %s to upgrade this weapon.
*/
	MSG_ITEM_REFINE_FAIL_MATERIAL = 0x392,
#endif
#if PACKETVER >= 20041206
/*20041206 to 20180523
완벽하게 코팅되어있어서 풀스트립이 통하지 않습니다.
Full Divestment cannot pierce the target. The target is fully shielded.
*/
	MSG_FULLSTRIP = 0x393,
#endif
#if PACKETVER >= 20041213
/*20041213 to 20180523
결혼한 캐릭터는 입양시킬수 없습니다.
You cannot adopt a married person.
*/
	MSG_BABY3 = 0x394,
#endif
#if PACKETVER >= 20041220
/*20041220 to 20180523
친구로 등록된 이름과 비슷하지만 등록된 이름이 아닙니다. 아는사람인지 확인하십시요.
This name is not registered in your Friend List. Please check the name again.
*/
	MSG_ID_WARNING = 0x395,
/*20041220 to 20180523
/hi 또는 /hi 문장 : 친구로 등록된 캐릭터들에게 인사를 합니다.
/hi or /hi message: Send greetings to people who are online and registered on your Friend List.
*/
	MSG_EXPLAIN_HI = 0x396,
#endif
#if PACKETVER >= 20041227
/*20041227 to 20180523
길드원의 이름과 비슷하지만 길드원이 아닙니다. 길드원인지 확인하십시요.
This character is not your guildsman. Please check the name again.
*/
	MSG_ID_WARNING_GUILD = 0x397,
#endif
#if PACKETVER >= 20050117
/*20050117 to 20180523
9999만제니 이상 입력하셔도 가격은 9999만제니로 판매됩니다.
Please be aware that the maximum selling price is fixed as 2 Billion. You cannot sell an item higher than that.
*/
	MSG_OVERPRICE9999 = 0x398,
#endif
#if PACKETVER >= 20050131
/*20050131 to 20180523
친구의 귓속말은 [ Friend ] , 길드원은 [ Member ] 로 표시됩니다.
Whispers from friends are displayed as [ Friend ], and ones from guildsmen are displayed as [ Member ].
*/
	MSG_EXPLAIN_SACHING1 = 0x399,
/*20050131 to 20180523
( From 캐릭터이름 : ) 이라고 표시 되는 귓속말은 친구나 길드원이 아닙니다.
( From character name: ) is from an anonymous character who is neither your friend nor guildsman.
*/
	MSG_EXPLAIN_SACHING2 = 0x39a,
#endif
#if PACKETVER >= 20050214
/*20050214 to 20050310
블랙스미스의 상위 10위권 랭킹을 보여줍니다.
20050314 to 20180523
/blacksmith : 블랙스미스의 상위 10위권 랭킹을 보여줍니다.
/blacksmith: Shows top 10 Blacksmiths in the server.
*/
	MSG_EXPLAIN_BLACKSMITH = 0x39b,
/*20050214 to 20050310
알케미스트의 상위 10위권 랭킹을 보여줍니다.
20050314 to 20180523
/alchemist : 알케미스트의 상위 10위권 랭킹을 보여줍니다.
/alchemist: Shows top 10 Alchemists in the server.
*/
	MSG_EXPLAIN_ALCHEMIST = 0x39c,
/*20050214 to 20180523
ALT+Y : 여러가지 명령어를 쉽게 쓸수있는 윈도우가 열립니다.
ALT+Y: Opens a window which allows you to use various commands with ease.
*/
	MSG_EXPLAIN_ALTY = 0x39d,
#endif
#if PACKETVER >= 20050328
/*20050328 to 20180523
[POINT] 태권미션 랭킹포인트가 %d 상승해서 %d 포인트가 되었습니다.
[POINT] You have been rewarded with %d Tae-Kwon Mission rank points. Your point total is %d.
*/
	MSG_TAEKWON_POINT = 0x39e,
#endif
#if PACKETVER >= 20050404
/*20050404 to 20180523
[태권미션] Target Monster : %s (%d%%)
[Taekwon Mission] Target Monster: %s (%d%%)
*/
	MSG_TAEKWON_MISSION = 0x39f,
#endif
#if PACKETVER >= 20050502
/*20050502 to 20180523
게임가드 초기화 에러 : %lu
Error - Failed to initialize GameGuard: %lu
*/
	MSG_INIT_ERROR = 0x3a0,
/*20050502 to 20180523
스피드핵이 감지되었습니다.
Speed Hack has been detected.
*/
	MSG_SPEEDHACK_DETECT = 0x3a1,
/*20050502 to 20180523
불법 프로그램 (%s) 가 발견되었습니다
The illegal program, (%s) has been detected.
*/
	MSG_GAMEHACK_DETECT = 0x3a2,
/*20050502 to 20180523
게임이나 게임가드가 변조되었습니다.
The Game or Gameguard has been cracked.
*/
	MSG_GAMEHACK_DOUBT = 0x3a3,
/*20050502 to 20180523
게임가드가 실행 중 입니다. 잠시 후에 다시 실행해보시기 바랍니다.
GameGuard is currently running. Please wait for sometime and restart the game.
*/
	MSG_ERROR_EXIST = 0x3a4,
/*20050502 to 20180523
게임이 중복 실행되었거나 게임가드가 이미 실행 중 입니다. 게임 종료 후 다시 실행해보시기 바랍니다.
The Game or GameGuard is already running. Please close the game and restart the game.
*/
	MSG_GAME_EXIST = 0x3a5,
/*20050502 to 20180523
게임가드 초기화 에러입니다. 재부팅 후 다시 실행해보거나 충돌할 수 있는 다른 프로그램들을 종료한 후 실행해 보시기 바랍니다.
Failed to intialize GameGuard. Please try again after rebooting the system or closing other programs.
*/
	MSG_ERROR_INIT = 0x3a6,
/*20050502 to 20180523
바이러스 및 해킹툴 검사 모듈 로딩에 실패 했습니다. 메모리 부족이거나 바이러스에 의한 감염일 수 있습니다.
Failed to load the scan module of virus and hacking tool. It's caused by lack of memory or PC virus infection.
*/
	MSG_ERROR_NPSCAN = 0x3a7,
#endif
#if PACKETVER >= 20050509
/*20050509 to 20180523
호문클루스 정보
Homunculus Info
*/
	MSG_HOMUN_INFO = 0x3a8,
#endif
#if PACKETVER >= 20050523
/*20050523 to 20180523
호문클루스 스킬목록
Homunculus Skill List
*/
	MSG_HOMUN_SKILLLIST = 0x3a9,
/*20050523 to 20180523
호문클루스의 이름은 영문 23, 한글 11자 이내로 정해 주세요.
Please give your Homunculus a name no longer than 23 letters.
*/
	MSG_HOMUN_NAME_IN23 = 0x3aa,
/*20050523 to 20180523
이름은 단 한번만 바꿀수 있습니다. 호문클루스의 이름을 ^0000ff^0000ff %s^000000^000000 로 수정합니다. 계속 하시겠습니까?
You can name a Homunculus only once. You have entered the name, ^0000ff%s^000000. Would you like to continue?
*/
	MSG_HOMUN_NAME_CHANGE_ONLYONCE = 0x3ab,
/*20050523 to 20180523
지금은 부재중~
(Away)
*/
	MSG_AUTO_MSG = 0x3ac,
/*20050523 to 20180523
[자동응답] 
[Automated Message]
*/
	MSG_AUTO_MSG2 = 0x3ad,
/*20050523 to 20180523
부재시 타인의 귓말에 자동응답합니다.
Send an automated message while you are away.
*/
	MSG_AUTO_MSG_ON = 0x3ae,
/*20050523 to 20180523
부재시 타인의 귓말에 자동응답하지 않습니다.
Cancel automated away message.
*/
	MSG_AUTO_MSG_OFF = 0x3af,
/*20050523 to 20180523
자동 응답 메시지를 입력하세요.
Please enter Away Message.
*/
	MSG_ENTER_AUTO_MSG = 0x3b0,
#endif
#if PACKETVER >= 20050530
/*20050530 to 20180523
/번쩍
/fsh
*/
	MSG_EMOTION_SPARK = 0x3b1,
/*20050530 to 20180523
/빙빙
/spin
*/
	MSG_EMOTION_CONFUSE = 0x3b2,
/*20050530 to 20180523
/하아
/sigh
*/
	MSG_EMOTION_OHNO = 0x3b3,
/*20050530 to 20180523
/덤덤
/dum
*/
	MSG_EMOTION_HUM = 0x3b4,
/*20050530 to 20180523
/시끌
/crwd
*/
	MSG_EMOTION_BLABLA = 0x3b5,
/*20050530 to 20180523
/좌절
/desp
*/
	MSG_EMOTION_OTL = 0x3b6,
/*20050530 to 20180523
/주사위
/dice
*/
	MSG_EMOTION_DICE = 0x3b7,
/*20050530 to 20180523
/pk : 학살자의 상위 10위권 랭킹을 보여줍니다.
/pk: Shows top 10 Slayers in the server.
*/
	MSG_EXPLAIN_KILLER_RANK = 0x3b8,
/*20050530 to 20180523
[POINT] 학살자 랭킹포인트가 %d 상승해서 %d 포인트가 되었습니다.
[POINT] You have been rewarded with %d Slayer rank points. Your point total is %d.
*/
	MSG_KILLER_POINT = 0x3b9,
#endif
#if PACKETVER >= 20050608
/*20050608 to 20180523
진화 가능
Evolution Available
*/
	MSG_HOMUN_EVOLVE = 0x3ba,
/*20050608 to 20180523
^ff0000^ff0000호문클루스를 삭제합니다.^000000^000000 삭제하실 경우 지금까지 키운 내역이 모두 삭제됩니다. 계속하시겠습니까?
You have decided to delete this Homunculus ^ff0000^ff0000. When deleted, the homunculus and its history will be deleted and they cannot be restored in the future. Would you like to continue?
*/
	MSG_DELETE_HOMUN = 0x3bb,
#endif
#if PACKETVER >= 20050613
/*20050613 to 20180523
호문의 상태를 파일에 저장합니다.
Save Homunculus status as a file.
*/
	MSG_TRACE_AI_ON = 0x3bc,
/*20050613 to 20180523
호문의 상태를 파일에 저장하지 않습니다.
Do not save Homunculus status as a file.
*/
	MSG_TRACE_AI_OFF = 0x3bd,
/*20050613 to 20180523
Crusader
*/
	MSG_CRUSADER = 0x3be,
/*20050613 to 20180523
Monk
*/
	MSG_MONK = 0x3bf,
/*20050613 to 20180523
Sage
*/
	MSG_SAGE = 0x3c0,
/*20050613 to 20180523
Rouge
Rogue
*/
	MSG_ROGUE = 0x3c1,
/*20050613 to 20180523
Alchemist
*/
	MSG_ALCHEMIST = 0x3c2,
/*20050613 to 20180523
Bard
*/
	MSG_BARD = 0x3c3,
/*20050613 to 20180523
Crusader_W
Crusader
*/
	MSG_CRUSADER_W = 0x3c4,
/*20050613 to 20180523
Monk_W
Monk
*/
	MSG_MONK_W = 0x3c5,
/*20050613 to 20180523
Sage_W
Sage
*/
	MSG_SAGE_W = 0x3c6,
/*20050613 to 20180523
Rouge_W
Rogue
*/
	MSG_ROGUE_W = 0x3c7,
/*20050613 to 20180523
Alchemist_W
Alchemist
*/
	MSG_ALCHEMIST_W = 0x3c8,
/*20050613 to 20180523
Dancer
*/
	MSG_DANCER = 0x3c9,
/*20050613 to 20180523
Novice High
High Novice
*/
	MSG_NOVICE_H = 0x3ca,
/*20050613 to 20180523
Swordman High
High Swordman
*/
	MSG_SWORDMAN_H = 0x3cb,
/*20050613 to 20180523
Magician High
High Mage
*/
	MSG_MAGICIAN_H = 0x3cc,
/*20050613 to 20180523
Archer High
High Archer
*/
	MSG_ARCHER_H = 0x3cd,
/*20050613 to 20180523
Acolyte High
High Acolyte
*/
	MSG_ACOLYTE_H = 0x3ce,
/*20050613 to 20180523
Merchant High
High Merchant
*/
	MSG_MERCHANT_H = 0x3cf,
/*20050613 to 20180523
Thief High
High Thief
*/
	MSG_THIEF_H = 0x3d0,
/*20050613 to 20180523
Novice High_W
High Novice
*/
	MSG_NOVICE_H_W = 0x3d1,
/*20050613 to 20180523
Swordman High_W
High Swordman
*/
	MSG_SWORDMAN_H_W = 0x3d2,
/*20050613 to 20180523
Magician High_W
High Mage
*/
	MSG_MAGICIAN_H_W = 0x3d3,
/*20050613 to 20180523
Archer High_W
High Archer
*/
	MSG_ARCHER_H_W = 0x3d4,
/*20050613 to 20180523
Acolyte High_W
High Acolyte
*/
	MSG_ACOLYTE_H_W = 0x3d5,
/*20050613 to 20180523
Merchant High_W
High Merchant
*/
	MSG_MERCHANT_H_W = 0x3d6,
/*20050613 to 20180523
Thief High_W
High Thief
*/
	MSG_THIEF_H_W = 0x3d7,
/*20050613 to 20180523
Lord Knight
*/
	MSG_KNIGHT_H = 0x3d8,
/*20050613 to 20180523
High Priest
*/
	MSG_PRIEST_H = 0x3d9,
/*20050613 to 20180523
High Wizard
*/
	MSG_WIZARD_H = 0x3da,
/*20050613 to 20180523
White Smith
WhiteSmith
*/
	MSG_BLACKSMITH_H = 0x3db,
/*20050613 to 20180523
Sniper
*/
	MSG_HUNTER_H = 0x3dc,
/*20050613 to 20180523
Saaassin Cross
Assassin Cross
*/
	MSG_ASSASSIN_H = 0x3dd,
/*20050613 to 20180523
Lord Knight_W
Lord Knight
*/
	MSG_KNIGHT_H_W = 0x3de,
/*20050613 to 20180523
High Priest_W
High Priest
*/
	MSG_PRIEST_H_W = 0x3df,
/*20050613 to 20180523
High Wizard_W
High Wizard
*/
	MSG_WIZARD_H_W = 0x3e0,
/*20050613 to 20180523
White Smith_W
WhiteSmith
*/
	MSG_BLACKSMITH_H_W = 0x3e1,
/*20050613 to 20180523
Sniper_W
Sniper
*/
	MSG_HUNTER_H_W = 0x3e2,
/*20050613 to 20180523
Saaassin Cross_W
Assassin Cross
*/
	MSG_ASSASSIN_H_W = 0x3e3,
/*20050613 to 20180523
Paladin
*/
	MSG_CRUSADER_H = 0x3e4,
/*20050613 to 20180523
Champion
*/
	MSG_MONK_H = 0x3e5,
/*20050613 to 20180523
Professor
Scholar
*/
	MSG_SAGE_H = 0x3e6,
/*20050613 to 20180523
Stalker
*/
	MSG_ROGUE_H = 0x3e7,
/*20050613 to 20180523
Creator
Biochemist
*/
	MSG_ALCHEMIST_H = 0x3e8,
/*20050613 to 20180523
Clown
Minstrel
*/
	MSG_BARD_H = 0x3e9,
/*20050613 to 20180523
Paladin_W
Paladin
*/
	MSG_CRUSADER_H_W = 0x3ea,
/*20050613 to 20180523
Champion_W
Champion
*/
	MSG_MONK_H_W = 0x3eb,
/*20050613 to 20180523
Professor_W
Professor
*/
	MSG_SAGE_H_W = 0x3ec,
/*20050613 to 20180523
Stalker_W
Stalker
*/
	MSG_ROGUE_H_W = 0x3ed,
/*20050613 to 20180523
Creator_W
Creator
*/
	MSG_ALCHEMIST_H_W = 0x3ee,
/*20050613 to 20180523
Gypsy
*/
	MSG_DANCER_H = 0x3ef,
/*20050613 to 20180523
비밀번호가 지정되어 있지 않습니다. 새로운 비밀번호를 지정하시겠습니까?
You have not set a password yet. Would you like to create one now?
*/
	MSG_STORE_PASSWORD_REQ = 0x3f0,
/*20050613 to 20180523
비밀번호를 3회 틀려셨습니다. 나중에 다시 시도해 주세요.
You have incorrectly entered the password 3 times. Please try again later.
*/
	MSG_STORE_PASSWORD_PENALTY = 0x3f1,
/*20050613 to 20180523
비밀번호 변경이 실패하였습니다.
Password creation has failed.
*/
	MSG_STORE_PASSWORD_CHANGE_NG = 0x3f2,
/*20050613 to 20180523
비밀번호는 4자리 이상 8자리이하여야만 합니다.
Password must be 4~8 letters long.
*/
	MSG_STORE_PASSWORD_4_8 = 0x3f3,
/*20050613 to 20180523
비밀번호
Password
*/
	MSG_STORE_PASSWORD = 0x3f4,
/*20050613 to 20180523
신규 비밀번호
New Password
*/
	MSG_STORE_NEW_PASSWORD = 0x3f5,
/*20050613 to 20180523
확인 비밀번호
Confirm Password
*/
	MSG_STORE_RENEW_PASSWORD = 0x3f6,
/*20050613 to 20180523
비밀번호 변경이 완료되었습니다.
Password has been changed.
*/
	MSG_STORE_PASSWORD_CHANGE_OK = 0x3f7,
/*20050613 to 20180523
비밀번호가 서로 다릅니다.
Password does not match.
*/
	MSG_STORE_PASSWORD_MISMATCH = 0x3f8,
/*20050613 to 20180523
비밀번호 입력
Enter Password
*/
	MSG_STORE_PASSWORD_INPUT = 0x3f9,
#endif
#if PACKETVER >= 20050624
/*20050624 to 20050624
호문이 아사 직전입니다!!! 밥좀 주셈~!!
20050628 to 20180523
호문이 아사 직전입니다! 먹이를 주지 않으면 가출하게됩니다.
Your Homunculus is starving. Please feed it, otherwise it will leave you.
*/
	MSG_HOMUN_HUNGRY = 0x3fa,
/*20050624 to 20180523
경험치
EXP
*/
	MSG_HOMUN_EXP = 0x3fb,
#endif
#if PACKETVER >= 20050628
/*20050628 to 20110526
[EVENT] 이벤트에 당첨되셨습니다. 게임내에서 아이템을 지급받으십시요.
20110531 to 20180523
수령하지 않은 아이템이 존재합니다. 알베르타의 존다 기획사 직원을 찾아주세요. ^ff0000※ 아이템 수령 기간이 지나면 아이템이 소실 됩니다!^000000
[EVENT] You have won an event prize. Please claim your prize in game.
*/
	MSG_EVENT_RESULT = 0x3fc,
#endif
#if PACKETVER >= 20050704
/*20050704 to 20180523
싫어함
Hate
*/
	MSG_HATE = 0x3fd,
/*20050704 to 20050704
매우 싫어함
20050711 to 20180523
매우싫어함
Hate with a Passion
*/
	MSG_VERYHATE = 0x3fe,
#endif
#if PACKETVER >= 20050718
/*20050718 to 20180523
호문클루스가 사용자 인공지능으로 동작합니다.
Homunculus has been customized.
*/
	MSG_HOMUN_USERAI_ON = 0x3ff,
/*20050718 to 20180523
호문클루스가 기본 인공지능으로 동작합니다.
Homunculus has been activated with the basic AI.
*/
	MSG_HOMUN_USERAI_OFF = 0x400,
#endif
#if PACKETVER >= 20050808
/*20050808 to 20180523
편지목록
Mail List
*/
	MSG_MAIL_LIST = 0x401,
/*20050808 to 20180523
편지쓰기
Write Mail
*/
	MSG_MAIL_WRITE = 0x402,
/*20050808 to 20180523
편지읽기
Read Mail
*/
	MSG_MAIL_READ = 0x403,
#endif
#if PACKETVER >= 20050822
/*20050822 to 20180523
한번 지정하시면 변경이 불가능합니다!     이 맵으로 지정하시겠습니까?
You cannot change a map's designation once it is designated. Are you sure that you want to designate this map?
*/
	MSG_STARPLACE_ACCEPT = 0x404,
/*20050822 to 20050822
보내실 아이템이 추가 되었습니다.
20050829 to 20051018
아이템창에 아이템이 추가 되었습니다.
20051024 to 20180523
메일 아이템을 수령했습니다.
Item has been added in the Item Window.
*/
	MSG_MAIL_ADD_ITEM_SUCCESS = 0x405,
/*20050822 to 20050822
보내실 아이템이 추가 되지 않았습니다.
20050829 to 20051018
아이템창에 아이템이 추가 되지 않았습니다.
20051024 to 20180523
메일 아이템을 수령하지 못했습니다.
You have failed to add the item in the Item Window.
*/
	MSG_MAIL_ADD_ITEM_FAILURE = 0x406,
/*20050822 to 20180523
메일 보내기가 성공하였습니다.
You have successfully mailed a message.
*/
	MSG_MAIL_SEND_SUCCESS = 0x407,
/*20050822 to 20180523
메일 보내기가 실패하였습니다. 받는 사람이 존재하지 않습니다.
You have failed to mail a message. Recipient does not exist.
*/
	MSG_MAIL_USER_NOT_FOUND = 0x408,
#endif
#if PACKETVER >= 20050829
/*20050829 to 20180523
[태양과 달과 별의 천사] 지정했던 장소들과 몬스터들이 초기화됐습니다!
[Solar, Lunar and Stellar Angel] Designated places and monsters have been reset.
*/
	MSG_STAR_ANGEL = 0x409,
/*20050829 to 20180523
경매 등록이 실패했습니다.
The minimum starting bid for auctions is 10,000,000 zeny.
*/
	MSG_AUCTION_ADD_FALSE = 0x40a,
/*20050829 to 20180523
경매 등록이 성공했습니다.
You have successfully started a new auction.
*/
	MSG_AUCTION_ADD_TRUE = 0x40b,
/*20050829 to 20180523
해당 경매가 취소되었습니다.
The auction has been canceled.
*/
	MSG_AUCTION_ADD_CANCEL = 0x40c,
/*20050829 to 20180523
입찰자가 있는 경매는 취소할 수 없습니다.
An auction with at least one bidder cannot be canceled.
*/
	MSG_AUCTION_ADD_CANCEL_FALSE = 0x40d,
#endif
#if PACKETVER >= 20050905
/*20050905 to 20180523
메일 삭제가 성공하였습니다.
Mail has been successfully deleted.
*/
	MSG_MAIL_DELETE_SUCCESS = 0x40e,
/*20050905 to 20180523
메일 삭제가 실패하였습니다.
You have failed to delete the mail.
*/
	MSG_MAIL_DELETE_FAILURE = 0x40f,
#endif
#if PACKETVER >= 20050912
/*20050912 to 20180523
던지는 단검이 장착되었습니다.
You have equipped throwing daggers.
*/
	MSG_MSG_KNIFE_EQUIPMENT_SUCCESS = 0x410,
#endif
#if PACKETVER >= 20050926
/*20050926 to 20180523
%s 님이 로그인했습니다.
%s has logged in.
*/
	MSG_LOGIN_FRIEND = 0x411,
/*20050926 to 20180523
%s 님이 로그아웃했습니다.
%s has logged out.
*/
	MSG_LOGOUT_FRIEND = 0x412,
#endif
#if PACKETVER >= 20051004
/*20051004 to 20180523
/loginout : 길드원과 친구들의 접속관련 메세지를 보여줍니다. On Off
/loginout: Shows guildsmen and friends online status. On Off
*/
	MSG_EXPLAIN_LOGINOUT = 0x413,
/*20051004 to 20180523
친구들의 접속관련 메세지를 대화창에 표시합니다. [/li ON]
Display online status of friends in Chat Window. [/li ON]
*/
	MSG_LOGINOUT_ON = 0x414,
/*20051004 to 20180523
친구들의 접속관련 메세지를 대화창에 표시하지않습니다.  [/li OFF]
Do not display online status of friends in Chat Window. [/li OFF]
*/
	MSG_LOGINOUT_OFF = 0x415,
/*20051004 to 20180523
이미 실행중입니다.
It is already running.
*/
	MSG_SGP_CODE_ALREADY_RUNNING = 0x416,
/*20051004 to 20180523
매크로 사용이 감지되었습니다.
Use of Macro program has been detected.
*/
	MSG_SGP_CODE_DETECTED_MACRO = 0x417,
/*20051004 to 20180523
스피드해킹이 감지되었습니다.
Use of Speed hack has been detected.
*/
	MSG_SGP_CODE_DETECTED_SPEEDHACK = 0x418,
/*20051004 to 20180523
API 후킹이 감지되었습니다.
API Hooking has been detected.
*/
	MSG_SGP_CODE_DETECTED_APIHOOK = 0x419,
/*20051004 to 20180523
메시지 후킹이 감지되었습니다.
Message Hooking has been detected.
*/
	MSG_SGP_CODE_DETECTED_MSGHOOK = 0x41a,
/*20051004 to 20180523
모듈이 변조 또는 손상되었거나 버전이 일치하지 않습니다.
Module has been modified or damaged or its version does not match.
*/
	MSG_SGP_CODE_NOT_EQUALENCRYPTEDDATA = 0x41b,
#endif
#if PACKETVER >= 20051010
/*20051010 to 20180523
(태국)귀하는 게임방 과금으로 로그인 하셨습니다.
(Thailand) You have logged in game with PC cafe payment.
*/
	MSG_BILLING_PCB = 0x41c,
#endif
#if PACKETVER >= 20051017
/*20051017 to 20180523
이전
Prev
*/
	MSG_PREV_PAGE = 0x41d,
/*20051017 to 20180523
다음
Next
*/
	MSG_NEXT_PAGE = 0x41e,
/*20051017 to 20180523
경매
Auction
*/
	MSG_AUCTION = 0x41f,
/*20051017 to 20180523
물품보기
Product List
*/
	MSG_AUCTION_VIEW = 0x420,
/*20051017 to 20180523
등록하기
Register
*/
	MSG_AUCTION_ADD = 0x421,
/*20051017 to 20180523
판매 진행상태
Sale Status
*/
	MSG_AUCTION_SELL = 0x422,
/*20051017 to 20180523
구매 진행상태
Purchase Status
*/
	MSG_AUCTION_BUY = 0x423,
/*20051017 to 20180523
아이템
Item
*/
	MSG_ITEM2 = 0x424,
/*20051017 to 20180523
아이템명
Name
*/
	MSG_ITEM_NAME2 = 0x425,
/*20051017 to 20180523
가격 / 즉시구입가격
Current Bid / Max Bid
*/
	MSG_ITEM_PRICE = 0x426,
/*20051017 to 20180523
판매자
Seller
*/
	MSG_SELLER = 0x427,
/*20051017 to 20180523
구매자
Buyer
*/
	MSG_BUYER = 0x428,
/*20051017 to 20180523
종료시간
End Time
*/
	MSG_FINISH_TIME = 0x429,
/*20051017 to 20180523
%m월 %d일 %H시
%m %d %H
*/
	MSG_TIME_TYPE = 0x42a,
/*20051017 to 20180523
시간설정
Time (Hr)
*/
	MSG_SET_TIME = 0x42b,
/*20051017 to 20180523
수수료
Fee
*/
	MSG_CHARGE = 0x42c,
/*20051017 to 20170906
검색 된 아이템이 없습니다.
20170913 to 20180523
검색된 아이템이 없습니다.
No items found in search.
*/
	MSG_NOTHING_SEARCH_ITEM = 0x42d,
/*20051017 to 20180523
현재 판매중인 아이템이 없습니다.
Your Sale List is empty.
*/
	MSG_NOTHING_SEARCH_SELL_ITEM = 0x42e,
/*20051017 to 20180523
현재 구매중인 아이템이 없습니다.
Your Purchase List is empty.
*/
	MSG_NOTHING_SEARCH_BUY_ITEM = 0x42f,
/*20051017 to 20180523
경매정보가 정확하지 않습니다.
Auction Information is incorrect or incomplete.
*/
	MSG_ERROR_AUCTION_ITEM_INFO = 0x430,
/*20051017 to 20180523
경매에 등록할 아이템 정보가 없습니다.
You must drag and drop an item from your Inventory into the Register Window to begin a new auction.
*/
	MSG_NOTHING_AUCTION_ITEM_INFO = 0x431,
/*20051017 to 20180523
이미 등록된 경매입니다.
The auction has already been registered.
*/
	MSG_ERROR_ADD_AUCTION = 0x432,
/*20051017 to 20180523
제시가격
Starting Bid
*/
	MSG_PRICE = 0x433,
/*20051017 to 20180523
구입희망가격
Current Bid
*/
	MSG_PRICE2 = 0x434,
/*20051017 to 20180523
즉시구입가격
Buy Now Price
*/
	MSG_PRICE3 = 0x435,
/*20051017 to 20180523
현재소지제니
Your Current Zeny
*/
	MSG_PRICE4 = 0x436,
/*20051017 to 20180523
현재최고가격
Highest Bid
*/
	MSG_PRICE5 = 0x437,
/*20051017 to 20180523
이전입찰가격
Previous Bid
*/
	MSG_PRICE6 = 0x438,
/*20051017 to 20180523
추가입찰가격
Next Bid
*/
	MSG_PRICE7 = 0x439,
/*20051017 to 20180523
구입하시겠습니까?
Press buy to confirm.
*/
	MSG_BUY_ACTION_ITEM = 0x43a,
/*20051017 to 20180523
이 가격에 판매하시겠습니까?
Would you like to sell this item?
*/
	MSG_SELL_ACTION_ITEM = 0x43b,
/*20051017 to 20180523
입찰하기
Place Bid
*/
	MSG_BUY_AUCTION = 0x43c,
/*20051017 to 20180523
즉시구매하기
Buy Now
*/
	MSG_BUY_AUCTION2 = 0x43d,
/*20051017 to 20180523
경매종료하기
End the Auction
*/
	MSG_BUY_AUCTION3 = 0x43e,
/*20051017 to 20180523
재입찰하기
Place another Bid
*/
	MSG_FINISH_AUCTION = 0x43f,
/*20051017 to 20180523
해당 경매에 대한 입찰이 성공했습니다.
You have placed a bid.
*/
	MSG_RESULT_BUY_TRUE = 0x440,
/*20051017 to 20180523
해당 경매에 대한 입찰이 실패했습니다.
You have failed to place a bid.
*/
	MSG_RESULT_BUY_FALSE = 0x441,
/*20051017 to 20180523
제니가 충분하지 않습니다.
You do not have enough zeny.
*/
	MSG_RESULT_BUY_FALSE_MONEY = 0x442,
#endif
#if PACKETVER >= 20051024
/*20051024 to 20180523
방어구
Armors
*/
	MSG_EQUIP = 0x443,
/*20051024 to 20180523
카드
Card
*/
	MSG_CARD = 0x444,
/*20051024 to 20180523
기타
Other
*/
	MSG_ETC = 0x445,
/*20051024 to 20180523
경매번호
Bid
*/
	MSG_AUCTION_NUM = 0x446,
/*20051024 to 20180523
검색
Search
*/
	MSG_AUCTION_SEARCH = 0x447,
/*20051024 to 20180523
해당 경매를 종료했습니다.
You have ended the auction.
*/
	MSG_RESULT_MY_SELL_STOP_TRUE = 0x448,
/*20051024 to 20180523
해당 경매를 종료 할 수 없습니다.
You cannot end the auction.
*/
	MSG_RESULT_MY_SELL_STOP_FALSE = 0x449,
/*20051024 to 20180523
경매 번호가 정확하지 않습니다.
Bid Number is incorrect.
*/
	MSG_RESULT_AUCTION_ID_FALSE = 0x44a,
/*20051024 to 20180523
받는이
To
*/
	MSG_SENDER = 0x44b,
#endif
#if PACKETVER >= 20051205
/*20051205 to 20180523
제 목
Title
*/
	MSG_TITLE2 = 0x44c,
/*20051205 to 20180523
새 메일이 도착하였습니다.
You have received a message in the mail.
*/
	MSG_NEW_MAIL = 0x44d,
/*20051205 to 20180523
검색중입니다.
Searching...
*/
	MSG_SEARCHING_ITEM = 0x44e,
/*20051205 to 20180523
더 이상 경매 등록할 수 없습니다. 경매 등록은 최대 5개까지 가능합니다.
You cannot register more than 5 items in an auction at a time.
*/
	MSG_AUCTION_ADD_OVER = 0x44f,
/*20051205 to 20180523
더 이상 경매 물품에 입찰할 수 없습니다. 경매 물품 입찰은 최대 5개까지 가능합니다.
You cannot place more than 5 bids at a time.
*/
	MSG_RESULT_BUY_OVER = 0x450,
/*20051205 to 20180523
삭제하려는 메일에 수령하지 않은 아이템이 있습니다.
Please accept all items from your mail before deleting.
*/
	MSG_MAIL_DELETE_ERROR = 0x451,
/*20051205 to 20180523
메일 제목을 입력하여 주십시오.
Please enter a title.
*/
	MSG_MAIL_SEND_ERROR = 0x452,
/*20051205 to 20180523
/shopping : 클릭 한번으로 상점을 열고 상점이름 오른쪽 클릭으로 상점을 닫습니다 On Off
/shopping: Enables you to open a shop with a single left-click and close your shop with a single right-click. On Off
*/
	MSG_EXPLAIN_SHOPPING = 0x453,
/*20051205 to 20180523
클릭 한번으로 상점을 열고 상점이름을 오른쪽 클릭해서 상점을 닫을수있습니다. [/sh ON]
You can now open a shop with a single left-click and close your shop with a single right-click. [sh ON].
*/
	MSG_SHOPPING_ON = 0x454,
/*20051205 to 20180523
더블클릭 으로 상점을 열게됩니다.  [/sh OFF]
You can open a shop by double-clicking. [/sh OFF]
*/
	MSG_SHOPPING_OFF = 0x455,
/*20051205 to 20180523
메일을 보내려면, 제니 입력을 완료해야 합니다.
Please enter zeny amount before sending mail.
*/
	MSG_MAIL_SEND_ERROR2 = 0x456,
/*20051205 to 20180523
경매 수수료가 부족합니다.
You do not have enough zeny to pay the Auction Fee.
*/
	MSG_ADD_MONEY_FALSE = 0x457,
/*20051205 to 20180523
상태보기
View Status
*/
	MSG_HOMUN_SHOWINFO = 0x458,
/*20051205 to 20180523
먹이주기
Feed
*/
	MSG_HOMUN_FEEDING = 0x459,
/*20051205 to 20180523
대기
Stand By
*/
	MSG_HOMUN_WAITING = 0x45a,
/*20051205 to 20180523
슈퍼노비스(남)
Super Novice (Male)
*/
	MSG_JOB_SUPERNOVICE_M = 0x45b,
/*20051205 to 20180523
슈퍼노비스(여)
Super Novice (Female)
*/
	MSG_JOB_SUPERNOVICE_F = 0x45c,
/*20051205 to 20180523
태권소년
Taekwon Boy
*/
	MSG_JOB_TAEKWON_M = 0x45d,
/*20051205 to 20180523
태권소녀
Taekwon Girl
*/
	MSG_JOB_TAEKWON_F = 0x45e,
/*20051205 to 20180523
권성(남)
Taekwon Master (Male)
*/
	MSG_KWONSUNG_M = 0x45f,
/*20051205 to 20180523
권성(여)
Taekwon Master (Female)
*/
	MSG_KWONSUNG_F = 0x460,
/*20051205 to 20180523
소울링커(남)
Soul Linker (Male)
*/
	MSG_SOULLINGKER_M = 0x461,
/*20051205 to 20180523
소울링커(여)
Soul Linker (Female)
*/
	MSG_SOULLINGKER_F = 0x462,
/*20051205 to 20180523
PC방요금제로 2개이상의 계정이 접속되고있습니다. 확인후 다시 사용하시기 바랍니다.
Please check the connection, more than 2 accounts are connected with Internet Cafe Time Plan.
*/
	MSG_BAN_PC_IP_UNFAIR = 0x463,
/*20051205 to 20180523
귀하는 월정액 요금제 사용자 입니다. (남은기간 : %d일)
Your account is using monthly payment. (Remaining day: %d day)
*/
	MSG_BILLING_1 = 0x464,
/*20051205 to 20180523
귀하는 정량 요금제 사용자 입니다. (남은시간 : %d시간 %분 %초)
Your account is using time limited. (Remaining time: %d hour %d minute %d second)
*/
	MSG_BILLING_2 = 0x465,
#endif
#if PACKETVER >= 20051212
/*20051212 to 20180523
해당 아이템은 메일에 첨부 할수 없는 아이템입니다.
This item cannot be mailed.
*/
	MSG_MAIL_ITEM_ADD_FAILED = 0x466,
/*20051212 to 20180523
더이상 아이템을 가질수 없습니다. 아이템은 메일로 보관하겠습니다.
You cannot accept any more items. Please try again later.
*/
	MSG_MAIL_ADD_ITEM_OVER_FAILURE = 0x467,
#endif
#if PACKETVER >= 20060109
/*20060109 to 20180523
남성
Male
*/
	MSG_PTSEX1 = 0x468,
/*20060109 to 20180523
여성
Female
*/
	MSG_PTSEX2 = 0x469,
/*20060109 to 20180523
새로운 유저입니다
New User.
*/
	MSG_PT_NEWUSER = 0x46a,
/*20060109 to 20180523
E-mail은 캐릭터를 지울때 필요합니다.
E-mail address is required to delete a character.
*/
	MSG_PT_ACINFO = 0x46b,
/*20060109 to 20180523
정확한 형식으로 입력해 주세요.
Please enter the correct information.
*/
	MSG_PT_ACINFO2 = 0x46c,
/*20060109 to 20180523
이 키를 사용하세요
Please use this key.
*/
	MSG_PT_NEWKEYINFO = 0x46d,
/*20060109 to 20180523
정확한 카드 패스워드를 다시 입력해주세요
Please enter the correct card password.
*/
	MSG_PT_FAIL_CARDPASS = 0x46e,
/*20060109 to 20180523
PT정보
PT Info
*/
	MSG_PTID1 = 0x46f,
/*20060109 to 20180523
PT_ID는 %s
PT_ID is %s
*/
	MSG_PTID2 = 0x470,
/*20060109 to 20180523
NUM_ID는 %s
NUM_ID is %s
*/
	MSG_PTID3 = 0x471,
/*20060109 to 20180523
잊지않게 주의하세요
Please don't forget this information.
*/
	MSG_PTID4 = 0x472,
/*20060109 to 20180523
1001
*/
	MSG_PT_ERROR_1001 = 0x473,
/*20060109 to 20180523
1002
*/
	MSG_PT_ERROR_1002 = 0x474,
/*20060109 to 20180523
1003
*/
	MSG_PT_ERROR_1003 = 0x475,
/*20060109 to 20180523
1004
*/
	MSG_PT_ERROR_1004 = 0x476,
/*20060109 to 20180523
1006
*/
	MSG_PT_ERROR_1006 = 0x477,
/*20060109 to 20180523
1007
*/
	MSG_PT_ERROR_1007 = 0x478,
/*20060109 to 20180523
1008
*/
	MSG_PT_ERROR_1008 = 0x479,
/*20060109 to 20180523
1009
*/
	MSG_PT_ERROR_1009 = 0x47a,
/*20060109 to 20180523
1012
*/
	MSG_PT_ERROR_1012 = 0x47b,
/*20060109 to 20180523
1013
*/
	MSG_PT_ERROR_1013 = 0x47c,
/*20060109 to 20180523
1014
*/
	MSG_PT_ERROR_1014 = 0x47d,
/*20060109 to 20180523
1015
*/
	MSG_PT_ERROR_1015 = 0x47e,
/*20060109 to 20180523
1019
*/
	MSG_PT_ERROR_1019 = 0x47f,
/*20060109 to 20180523
1020
Navigation
*/
	MSG_PT_ERROR_1020 = 0x480,
/*20060109 to 20180523
1021
*/
	MSG_PT_ERROR_1021 = 0x481,
/*20060109 to 20180523
1023
*/
	MSG_PT_ERROR_1023 = 0x482,
/*20060109 to 20180523
1024
*/
	MSG_PT_ERROR_1024 = 0x483,
/*20060109 to 20180523
1025
*/
	MSG_PT_ERROR_1025 = 0x484,
/*20060109 to 20180523
1027
*/
	MSG_PT_ERROR_1027 = 0x485,
/*20060109 to 20180523
1028
*/
	MSG_PT_ERROR_1028 = 0x486,
/*20060109 to 20180523
10
*/
	MSG_PT_ERROR_10 = 0x487,
/*20060109 to 20180523
20
*/
	MSG_PT_ERROR_20 = 0x488,
/*20060109 to 20180523
40
*/
	MSG_PT_ERROR_40 = 0x489,
/*20060109 to 20180523
50
*/
	MSG_PT_ERROR_50 = 0x48a,
/*20060109 to 20180523
60
*/
	MSG_PT_ERROR_60 = 0x48b,
/*20060109 to 20180523
70
*/
	MSG_PT_ERROR_70 = 0x48c,
/*20060109 to 20180523
80
*/
	MSG_PT_ERROR_80 = 0x48d,
/*20060109 to 20180523
90
*/
	MSG_PT_ERROR_90 = 0x48e,
/*20060109 to 20180523
100
*/
	MSG_PT_ERROR_100 = 0x48f,
/*20060109 to 20180523
110
*/
	MSG_PT_ERROR_110 = 0x490,
#endif
#if PACKETVER >= 20060126
/*20060126 to 20180523
30포인트를 받으시겠습니까?
Do you want to receive 30 points?
*/
	MSG_PT_POINT1 = 0x491,
/*20060126 to 20180523
30포인트(5시간)이 충전되었습니다
30 points (5 hours) have been added.
*/
	MSG_PT_POINT2 = 0x492,
#endif
#if PACKETVER >= 20060213
/*20060213 to 20180523
감정되지 않은 아이템은 경매에 등록할 수 없습니다.
You cannot register Unidentified Items in auctions.
*/
	MSG_AUCTION_ADD_ITEM_FAILURE = 0x493,
/*20060213 to 20180523
소비 아이템은 경매에 등록할 수 없습니다.
You cannot register this Consumable Item in an auction.
*/
	MSG_AUCTION_ADD_ITEM_FAILURE2 = 0x494,
#endif
#if PACKETVER >= 20060306
/*20060306 to 20180523
메일창을 열려면 카트창을 닫아 주십시요.
Please close the Cart Window to open the Mail Window.
*/
	MSG_CLOSE_MERCHANTITEMWND = 0x495,
/*20060306 to 20180523
카트창을 열려면 메일창을 닫아 주십시요.
Please close the Mail Window to open the Cart Window.
*/
	MSG_CLOSE_MAILWND = 0x496,
#endif
#if PACKETVER >= 20060313
/*20060313 to 20180523
탄환이 장착되었습니다.
Bullets have been equipped.
*/
	MSG_MSG_BULLET_EQUIPMENT_SUCCESS = 0x497,
/*20060313 to 20180523
메일이 반송되었습니다.
The mail has been returned to sender.
*/
	MSG_MAIL_RETURN_SUCCESS = 0x498,
/*20060313 to 20180523
메일이 존재하지 않습니다.
The mail no longer exists.
*/
	MSG_MAIL_RETURN_FAILURE = 0x499,
#endif
#if PACKETVER >= 20060522
/*20060522 to 20060522
한시간 동안, 동일한 IP로 접속한 유저가 60건 이상입니다. 확인후 다시 사용하시기 바랍니다.
20060523 to 20180523
한시간 동안, 동일한 IP로 접속한 유저가 30건 이상입니다. 확인후 다시 사용하시기 바랍니다.
More than 30 players sharing the same IP have logged into the game for an hour. Please check this matter.
*/
	MSG_BAN_PC_IP_COUNT_ALL = 0x49a,
/*20060522 to 20180523
한시간 동안, 동일한 IP로 10번 이상 접속되었습니다. 확인후 다시 사용하시기 바랍니다.
More than 10 connections sharing the same IP have logged into the game for an hour. Please check this matter.
*/
	MSG_BAN_PC_IP_COUNT = 0x49b,
/*20060522 to 20180523
게임을 재시작 하십시오 
Please restart the game.
*/
	MSG_GAMEGUARD_RESTART = 0x49c,
#endif
#if PACKETVER >= 20060703
/*20060703 to 20180523
용병정보 - 아쳐타입
Mercenary: Archer
*/
	MSG_MER_INFO_TYPE_ARCHER = 0x49d,
/*20060703 to 20180523
용병정보 - 검사타입
Mercenary: Swordman
*/
	MSG_MER_INFO_TYPE_SWORDMAN = 0x49e,
/*20060703 to 20180523
용병정보 - 창병타입
Mercenary: Spearman
*/
	MSG_MER_INFO_TYPE_LANCER = 0x49f,
/*20060703 to 20070109
남은시간
20070115 to 20180523
삭제시간
Expiration
*/
	MSG_LEFT_TIME = 0x4a0,
/*20060703 to 20180523
신뢰도
Loyalty
*/
	MSG_MER_FRIENDLY = 0x4a1,
/*20060703 to 20180523
소환횟수
Summons
*/
	MSG_MER_CALLCOUNT = 0x4a2,
/*20060703 to 20180523
Kill
*/
	MSG_MER_KILL = 0x4a3,
#endif
#if PACKETVER >= 20060904
/*20060904 to 20180523
펫이 배가 고파서 당신을 원망하고 있다는 느낌이 든다.
You can feel hatred from your pet for neglecting to feed it.
*/
	MSG_PET_STARVING = 0x4a4,
/*20060904 to 20180523
[POINT] 테이밍미션 랭킹포인트가 %d 상승해서 %d 포인트가 되었습니다.
[POINT] You earned %d Taming Mission Ranking Points, giving you a total of %d points.
*/
	MSG_GANGSI_POINT = 0x4a5,
/*20060904 to 20180523
[테이밍미션] Target Monster : %s
[Taming Mission] Target Monster: %s
*/
	MSG_GANGSI_MISSION = 0x4a6,
#endif
#if PACKETVER >= 20060918
/*20060918 to 20180523
/hunting : 사냥 목록을 보여줍니다.
/hunting: You can check the your hunting list.
*/
	MSG_EXPLAIN_HUNTING = 0x4a7,
/*20060918 to 20180523
[천사의질문] 소녀에게 가르쳐주시어요. %s는 몇 스킬 찍으셨나요?
[Angel's Question] Please tell me, how many %s skills do you have?
*/
	MSG_DEATH_Q01 = 0x4a8,
/*20060918 to 20180523
[천사의질문] 소녀에게 가르쳐주시어요. 소지하시고있는 제니를 십만으로 나누면 얼마가 되시나요?
[Angel's Question] Please tell me, how much zeny you'll have if you divide it by 100,000?
*/
	MSG_DEATH_Q02 = 0x4a9,
/*20060918 to 20180523
[천사의질문] 소녀에게 가르쳐주시어요. 오늘이 몇일이신지 아시나요?
[Angel's Question] Please tell me, what is today's date?
*/
	MSG_DEATH_Q03 = 0x4aa,
/*20060918 to 20180523
[천사의질문] 소녀에게 가르쳐주시어요. %s은 지금 몇이신가요?
[Angel's Question] Please tell me, how many %s do you have?
*/
	MSG_DEATH_Q04 = 0x4ab,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 슈노, 태권계열, 무낙계열을 담당하고있는 SiYeon씨의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in SiYeon's name?
*/
	MSG_DEATH_Q05 = 0x4ac,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 귀엽고 어여쁜 라그나로크의 히로인 Munak의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in Munak's name?
*/
	MSG_DEATH_Q06 = 0x4ad,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 제가 어여뻐하는 Bongun의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in Bongun's name?
*/
	MSG_DEATH_Q07 = 0x4ae,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 저희가 존재하는 온라인세계 Ragnarok의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, Ragnarok?
*/
	MSG_DEATH_Q08 = 0x4af,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 언제나 Online상태인 천사동료들은 큰힘이 되어주죠. Online의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, online?
*/
	MSG_DEATH_Q09 = 0x4b0,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 죽음도 두려워하지않는 기사들을 상징하는 단어인 Death의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, death?
*/
	MSG_DEATH_Q10 = 0x4b1,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 기사들은 너무 멋진다고 생각해요. Knight의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, knight?
*/
	MSG_DEATH_Q11 = 0x4b2,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 중력을 뜻하는 단어인 Gravity의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, gravity?
*/
	MSG_DEATH_Q12 = 0x4b3,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 어둠속에서도 밝게 사는게 중요하지요. Dark의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, dark?
*/
	MSG_DEATH_Q13 = 0x4b4,
/*20060918 to 20180523
[천사의질문] A는 1이고 Z는 26이어요. 뭐든지 수집하는 Collector의 알파벳을 더하면 몇이 되나요?
[Angel's Question] If A is 1, B is 2, and so on, and if Z is 26, what number do you get if you add the letters in the word, collecter?
*/
	MSG_DEATH_Q14 = 0x4b5,
/*20060918 to 20180523
[천사의대답] 소녀에게 정확한 사실을 가르쳐주셔서 감사하옵니다.
[Angel's Answer] Thank you for letting me know~
*/
	MSG_DEATH_R01 = 0x4b6,
/*20060918 to 20180523
[천사의대답] 사랑스러우신 분이시군요. 소녀 감탄했사옵니다.
[Angel's Answer] I'm very pleased with your answer. You are a splendid adventurer.
*/
	MSG_DEATH_R02 = 0x4b7,
/*20060918 to 20180523
[천사의대답] 소녀 실망했사옵니다.
[Angel's Answer] You've disappointed me...
*/
	MSG_DEATH_R05 = 0x4b8,
#endif
#if PACKETVER >= 20060925
/*20060925 to 20180523
[POINT] 랭킹포인트가 %d 상승해서 %d 포인트가 되었습니다.
[Point] You earned %d Ranking Points, giving you a total of %d Ranking Points.
*/
	MSG_DEATH_POINT = 0x4b9,
#endif
#if PACKETVER >= 20060927
/*20060927 to 20070417
[%s]의 소지 Point : %d Point
20070423 to 20180523
[%s]의 소지 캐시 : %d 캐시
[%s]'s Points: %d Points
*/
	MSG_POINT_SHOP = 0x4ba,
#endif
#if PACKETVER >= 20061009
/*20061009 to 20180523
선택하지 않은 캐릭터는 삭제 됩니다. 완료하시겠습니까?
Unselected Characters will be deleted. Continue?
*/
	MSG_CONFIRM_SELECT_CHARACTERS = 0x4bb,
/*20061009 to 20180523
9개 이상 선택하실 수 없습니다.
You cannot select more than 8.
*/
	MSG_ERROR_SELECT_CHARACTERS = 0x4bc,
#endif
#if PACKETVER >= 20061016
/*20061016 to 20180523
캐릭터명을 '%s' (으)로 변경하시겠습니까?
Do you want to change your name to '%s'?
*/
	MSG_CONFIRM_TO_CHANGE_NAME = 0x4bd,
/*20061016 to 20180523
캐릭터명이 성공적으로 변경되었습니다.
Character Name has been changed successfully.
*/
	MSG_CHANGE_NAME_SUCCESS = 0x4be,
/*20061016 to 20180523
캐릭터명 변경이 실패하였습니다.
You have failed to change this character's name.
*/
	MSG_CHANGE_NAME_FAILURE = 0x4bf,
/*20061016 to 20180523
한 번에 한 종류의 아이템만 구매할 수 있습니다.
You can purchase only one kind of item at a time.
*/
	MSG_CAN_BUY_ONLY_ONEITEM = 0x4c0,
#endif
#if PACKETVER >= 20061017
/*20061017 to 20061017
캐릭터가 하나도 선택되지 않았습니다.  반드시 하나 이상의 캐릭터를 선택하여야 합니다.
20061023 to 20180523
캐릭터가 한개도 선택되지 않았습니다.  반드시 한개 이상의 캐릭터를 선택하여야 합니다.
No characters were selected. You must select at least one character.
*/
	MSG_NO_SELECT_CHARACTERS = 0x4c1,
#endif
#if PACKETVER >= 20061023
/*20061023 to 20180523
이미 캐릭터명을 변경한 적이 있습니다. 더 이상 변경 할 수 없습니다.
This character's name has already been changed. You cannot change a character's name more than once.
*/
	MSG_ALREADY_CHANGED_NAME = 0x4c2,
/*20061023 to 20180523
사용자 정보가 정확하지 않습니다.
User Information is not correct.
*/
	MSG_NOTREGISTED_USER = 0x4c3,
/*20061023 to 20180523
다른 사용자가 같은 캐릭터 명을 먼저 사용하였습니다. 다른 캐릭터명을 사용하여 주십시요.
Another user is using this character name, so please select another one.
*/
	MSG_DUPLICATED_CHAR_NAME = 0x4c4,
#endif
#if PACKETVER >= 20061030
/*20061030 to 20180523
파티장 권한이 없어 파티원을 소환하지 못했습니다.
The party member was not summoned because you are not the party leader.
*/
	MSG_CANNOT_PARTYCALL = 0x4c5,
/*20061030 to 20180523
현재 맵에는 소환될 파티원이 존재하지 않습니다.
There is no party member to summon in the current map.
*/
	MSG_NO_PARTYMEM_ON_THISMAP = 0x4c6,
/*20061030 to 20180523
이 지역에선 보스몬스터의 흔적을 찾을 수가 없습니다.
You cannot find any trace of a Boss Monster in this area.
*/
	MSG_NOTFIND_BOSSMON = 0x4c7,
/*20061030 to 20070122
보스 몬스터 '%s'의 등장 예정시간 %02d시:%02d분
20070129 to 20071205
보스 몬스터 '%s'(이)가  %d시 %d분 후에 등장합니다.
20071211 to 20180523
보스 몬스터 '%s'(이)가  %d시간 %d분 후에 등장합니다.
Boss Monster, '%s' will appear in %02d hour(s) and %02d minute(s).
*/
	MSG_APPEARANCE_TIME_OF_BOSSMON = 0x4c8,
/*20061030 to 20180523
보스 몬스터 '%s'의 위치가 미니맵에 표시됩니다.
The location of Boss Monster, '%s', will be displayed on your Mini-Map.
*/
	MSG_SHOW_POSITION_OF_BOSSMON = 0x4c9,
#endif
#if PACKETVER >= 20061106
/*20061106 to 20061211
%s를 개봉 하시겠습니까?  한번 개봉된 아이템은 창고 저장 외의 다른 이동은 불가하며 동일한 아이템을 중복 사용하더라도 효과가 중첩되지 않습니다.
20061218 to 20070618
'%s'를 개봉 하시겠습니까?  한번 개봉된 아이템은 창고 저장 외의 다른 이동은 불가하며 동일한 아이템을 중복 사용하더라도 효과가 중첩되지 않습니다.
20070619 to 20071218
'%s'를 개봉 하시겠습니까?  한번 개봉된 아이템은 창고 저장 외의 다른 이동은 불가하며 임대 아이템은 창고 저장도 불가합니다. 동일한 아이템을 중복 사용하더라도 효과가 중첩되지 않습니다.
20080102 to 20101026
'%s'를 개봉 하시겠습니까?  한번 개봉된 아이템은 창고 저장 외의 다른 이동은 불가하며 임대 아이템은 창고 저장도 불가합니다. 한정 아이템은 거래 및 이동이 가능 합니다. 동일한 아이템을 중복 사용하더라도 효과가 중첩되지 않습니다.
20101102 to 20110330
'%s'를 개봉 하시겠습니까?  ^ff0000상자를 개봉하시면 청약 철회 및 환불 대상에서 제외 됩니다.^000000 한번 개봉 된 아이템은 창고 저장 외의 다른 이동은 불가하며 임대 아이템은 창고 저장도 불가합니다. 한정 아이템은 거래 및 이동이 가능 합니다. 동일한 아이템을 중복 사용하더라도 효과가 중첩되지 않습니다.
20110405 to 20180523
'%s'를 개봉 하시겠습니까?  ^ff0000상자를 개봉하시면 청약 철회 대상에서 제외 됩니다.^000000 한번 개봉 된 아이템은 창고 저장 외의 다른 이동은 불가하며 임대 아이템은 창고 저장도 불가합니다. 한정 아이템은 거래 및 이동이 가능 합니다. 동일한 아이템을 중복 사용하더라도 효과가 중첩되지 않습니다.
Do you want to open '%s'? Once opened, the contents cannot be moved to other locations aside from the Kafra Storage. The item effect isn't doubled, even if the same items are used more than once.
*/
	MSG_CONFIRM_TO_OPEN_CASH_ITEM = 0x4ca,
/*20061106 to 20180523
NPC가 존재하지 않아 구매가 실패하였습니다.
The Purchase has failed because the NPC does not exist.
*/
	MSG_BUY_CASH_FAIL_NPC = 0x4cb,
/*20061106 to 20180523
부분 유료화 시스템이 정상 작동하지 않아 구매가 실패하였습니다.
The Purchase has failed because the Kafra Shop System is not working correctly.
*/
	MSG_BUY_CASH_FAIL_SYSTEM = 0x4cc,
/*20061106 to 20180523
교환중에는 아이템을 구매 할 수 없습니다.
You cannot purchase items while you are in a trade.
*/
	MSG_BUY_CASH_FAIL_EXCHANGE = 0x4cd,
/*20061106 to 20180523
아이템 정보가 정확하지 않아 구매가 실패하였습니다.
The Purchase has failed because the Item Information was incorrect.
*/
	MSG_BUY_CASH_FAIL_ITEM_ID = 0x4ce,
#endif
#if PACKETVER >= 20061204
/*20061204 to 20180523
 STR이 향상되었습니다.
STR has increased.
*/
	MSG_ENST_STR = 0x4cf,
/*20061204 to 20180523
 STR이 원래대로 돌아왔습니다.
STR has returned to normal.
*/
	MSG_DSST_STR = 0x4d0,
/*20061204 to 20180523
 AGI이 향상되었습니다.
AGI has increased.
*/
	MSG_ENST_AGI = 0x4d1,
/*20061204 to 20180523
 AGI이 원래대로 돌아왔습니다.
AGI has returned to normal.
*/
	MSG_DSST_AGI = 0x4d2,
/*20061204 to 20180523
 VIT이 향상되었습니다.
VIT has increased.
*/
	MSG_ENST_VIT = 0x4d3,
/*20061204 to 20180523
 VIT이 원래대로 돌아왔습니다.
VIT has returned to normal.
*/
	MSG_DSST_VIT = 0x4d4,
/*20061204 to 20180523
 INT이 향상되었습니다.
INT has increased.
*/
	MSG_ENST_INT = 0x4d5,
/*20061204 to 20180523
 INT이 원래대로 돌아왔습니다.
INT has returned to normal.
*/
	MSG_DSST_INT = 0x4d6,
/*20061204 to 20180523
 DEX이 향상되었습니다.
DEX has increased.
*/
	MSG_ENST_DEX = 0x4d7,
/*20061204 to 20180523
 DEX이 원래대로 돌아왔습니다.
DEX has returned to normal.
*/
	MSG_DSST_DEX = 0x4d8,
/*20061204 to 20180523
 LUK이 향상되었습니다.
LUK has increased.
*/
	MSG_ENST_LUK = 0x4d9,
/*20061204 to 20180523
 LUK이 원래대로 돌아왔습니다.
LUK has returned to normal.
*/
	MSG_DSST_LUK = 0x4da,
/*20061204 to 20180523
 회피율이 향상되었습니다.
Flee Rate (Flee) has increased.
*/
	MSG_ENST_AVOIDANCE = 0x4db,
/*20061204 to 20180523
 회피율이 원래대로 돌아왔습니다.
Flee Rate has returned to normal.
*/
	MSG_DSST_AVOIDANCE = 0x4dc,
/*20061204 to 20180523
 명중률이 향상되었습니다.
Accuracy Rate (Hit) has increased.
*/
	MSG_ENST_HIT = 0x4dd,
/*20061204 to 20180523
 명중률이 원래대로 돌아왔습니다.
Accuracy Rate has returned to normal.
*/
	MSG_DSST_HIT = 0x4de,
/*20061204 to 20180523
 크리티컬 확률이 향상되었습니다.
Critical Attack (Critical) has increased.
*/
	MSG_ENST_CRITICALSUCCESSVALUE = 0x4df,
/*20061204 to 20180523
 크리티컬 확률이 원래대로 돌아왔습니다.
Critical Attack has returned to normal.
*/
	MSG_DSST_CRITICALSUCCESSVALUE = 0x4e0,
/*20061204 to 20111021
 몬스터 사냥을 통해 얻을 수 있는 경험치가 30분간 1.5배로 증가합니다.
20111025 to 20111101
 30분간 얻을 수 있는 경험치가 75%% 증가합니다.
20111102 to 20180523
 30분간 얻을 수 있는 경험치가 50%% 증가합니다.
You will receive 1.5 times more EXP from hunting monsters for the next 30 minutes.
*/
	MSG_PLUSEXP = 0x4e1,
/*20061204 to 20180523
 30분내 사망시 1회에 한해 경험치 감소가 일어나지 않습니다.
This character will not receive any EXP penalty if killed within the next 30 minutes.
*/
	MSG_DDEATHPENALTY = 0x4e2,
/*20061204 to 20180523
 몬스터 사냥을 통해 얻을 수 있는 기본 아이템의 드롭률이 30분간 2배로 증가합니다.
Regular item drops from monsters will be doubled for the next 30 minutes.
*/
	MSG_RECEIVEITEM = 0x4e3,
/*20061204 to 20180523
 10분간 맵 내에 출현 가능한 보스 몬스터에 대한 정보를 안내해 드립니다.
Boss Monster Map Information for the next 10 minutes.
*/
	MSG_BOSS_ALARM = 0x4e4,
/*20061204 to 20061211
 정말로 %s아이템을 구매하시겠습니까?, %d포인트가 차감됩니다.
20061218 to 20070423
 정말로 '%s'아이템을 구매하시겠습니까?, %d포인트가 차감됩니다.
20070423 to 20080603
 정말로 '%s'아이템을 구매하시겠습니까?, %d캐시가 차감됩니다.
20080610 to 20100629
 본 아이템은 청약 철회나 환불 대상에서 제외되는 아이템입니다. 정말로 '%s'아이템을 구매하시겠습니까?, %d캐시가 차감됩니다.
20100701 to 20101026
 본 아이템은 청약 철회나 환불 대상에서 제외되는 아이템입니다. 정말로 %s아이템을 구매하시겠습니까?, %d캐시가 차감됩니다.
20101102 to 20101130
 ^ff0000본 아이템을 구매 후 개봉하시면 청약 철회 및 환불 대상에서 제외 됩니다.^000000 정말로 %s아이템을 구매하시겠습니까? 구매하실 경우 %d캐시가 차감됩니다.
20101207 to 20110330
 ^ff0000본 아이템을 구매 후 개봉하시면 청약 철회 및 환불 대상에서 제외 됩니다.^000000 정말로 아이템을 구매하시겠습니까? 구매하실 경우 %d캐시가 차감됩니다.
20110405 to 20120618
 ^ff0000본 아이템을 구매 후 7일 이내에는 청약 철회가 가능합니다. 다만, 7일이 지났거나 아이템을 개봉하시면 청약 철회 대상에서 제외 됩니다.^000000 정말로 아이템을 구매하시겠습니까? 구매하실 경우 %d캐시가 차감됩니다.
20120626 to 20180523
 ^ff0000본 아이템을 구매 후 7일 이내에는 청약 철회가 가능합니다. 다만, 7일이 지났거나 아이템을 개봉하시면 청약 철회 대상에서 제외 됩니다.또한 구매시 사용된 무료캐시는 청약철회시 반환되지 않습니다.^000000 정말로 아이템을 구매하시겠습니까? 구매하실 경우 %d캐시가 차감됩니다.
Do you really want to purchase this item? %d points will be deducted from your total Kafra Credit Points.
*/
	MSG_BUY_RECONFIRM = 0x4e5,
#endif
#if PACKETVER >= 20061211
/*20061211 to 20061211
'%s'아이템의 사용시간이 %d분 남았습니다.
20061218 to 20070423
 포인트가 부족합니다.
20070423 to 20180523
 캐시가 부족합니다.
 You do not have enough Kafra Credit Points.
*/
	MSG_BUY_CASH_FAIL_MONEY = 0x4e6,
/*20061211 to 20061211
1분 후, '%s'아이템이 인벤토리에서 삭제됩니다.
20061218 to 20180523
 ^ff0000파기일시: %s^000000
 ^ff0000Expiration Date: %s^000000
*/
	MSG_NOTICE_TO_DELETE_TIME = 0x4e7,
/*20061211 to 20061211
'%s'아이템이 인벤토리에서 삭제되었습니다.
20061218 to 20180523
 '%s'아이템의 사용시간이 %d분 남았습니다.
 The '%s' item will disappear in %d minutes.
20070102 to 20070312
 '%s'아이템의 사용시간이 %s 남았습니다.
*/
	MSG_NOTICE_TO_REMAIN_ITEMUSINGTIME = 0x4e8,
#endif
#if PACKETVER >= 20061218
/*20061218 to 20180523
 1분 후, '%s'아이템이 인벤토리에서 삭제됩니다.
 '%s' item will be deleted from the Inventory in 1 minute.
*/
	MSG_LAST_NOTICE_TO_REMAIN_ITEMUSINGTIME = 0x4e9,
/*20061218 to 20180523
 '%s'아이템이 인벤토리에서 삭제되었습니다.
  '%s' item has been deleted from the Inventory.
*/
	MSG_NOTICE_TO_DELETE_ITEM = 0x4ea,
#endif
#if PACKETVER >= 20070102
/*20070102 to 20180523
Input Number
*/
	MSG_INPUT_NUMBER = 0x4eb,
/*20070102 to 20180523
%m월 %d일 %H시 %M분
%m/%d %H:%M
*/
	MSG_TIME_TYPE2 = 0x4ec,
#endif
#if PACKETVER >= 20070129
/*20070129 to 20071120
보스 몬스터 '%s'(이)가 1분 이내에 등장합니다.
20071127 to 20180523
보스 몬스터 '%s'(이)가 잠시 후에 등장합니다.
Boss Monster '%s' will appear within 1 minute.
*/
	MSG_APPEARANCE_TIME_OF_BOSSMON2 = 0x4ed,
/*20070129 to 20180523
용병 스킬목록
Mercenary Soldier Skill List
*/
	MSG_MER_SKILLLIST = 0x4ee,
/*20070129 to 20180523
블랙젬스톤 1개와 백만제니를 소모하는 마법의 실행에 동의합니까?
Do you agree to cast the magic spell that consumes 1 Black Gemstone and 1,000,000 Zeny?
*/
	MSG_DA_EXP_ACCEPT = 0x4ef,
#endif
#if PACKETVER >= 20070220
/*20070220 to 20180523
[POINT] 콜렉터랭킹 포인트가 %d 상승해서 %d 포인트가 되었습니다.
[Point] You have gained %d Collector Rank Points; you now have a total of %d Collector Rank Points.
*/
	MSG_COLLECTOR_POINT = 0x4f0,
/*20070220 to 20180523
[콜렉터랭킹] Target Item : %s
[Collector Rank] Target Item: %s
*/
	MSG_COLLECTOR_MISSION = 0x4f1,
#endif
#if PACKETVER >= 20070227
/*20070227 to 20180523
용병 사용시간이 만료되었습니다.
The mercenary contract has expired.
*/
	MSG_MER_FINISH = 0x4f2,
/*20070227 to 20180523
용병이 사망하였습니다.
The mercenary has died.
*/
	MSG_MER_DIE = 0x4f3,
/*20070227 to 20180523
용병이 해고되었습니다.
You have released the mercenary.
*/
	MSG_MER_RETIRE = 0x4f4,
/*20070227 to 20180523
용병이 도망갔습니다.
The mercenary has run away.
*/
	MSG_MER_RUNAWAY = 0x4f5,
#endif
#if PACKETVER >= 20070319
/*20070319 to 20180523
 '%s'아이템의 사용시간이 %d초 남았습니다.
 The '%s' item will disappear in %d seconds.
*/
	MSG_NOTICE_TO_REMAIN_ITEMUSINGTIME2 = 0x4f6,
#endif
#if PACKETVER >= 20070326
/*20070326 to 20070821
PC방 이벤트 : 경험치 증가 %d%%, 죽을때 경험치 %d%%, 드롭율 증가 %d%%
20070828 to 20180523
PC방 프리미엄 서비스 : 경험치 %d%% 증가, 사망 페널티 %d%% 감소, 드롭율 %d%% 증가
IP Bonus: EXP/JEXP %d%%, Death Penalty %d%%, Item Drop %d%%
*/
	MSG_PCBANG_EVENT = 0x4f7,
#endif
#if PACKETVER >= 20070402
/*20070402 to 20180523
24시간 이후에 시도하세요
Symbols in Character Names are forbidden.
*/
	MSG_LIMIT_CHAR_DELETE = 0x4f8,
#endif
#if PACKETVER >= 20070416
/*20070416 to 20180523
용병이 사용자 인공지능으로 동작합니다.
Mercenary will follow custom AI.
*/
	MSG_MER_USERAI_ON = 0x4f9,
/*20070416 to 20180523
용병이 기본 인공지능으로 동작합니다.
Mercenary will follow basic AI.
*/
	MSG_MER_USERAI_OFF = 0x4fa,
#endif
#if PACKETVER >= 20070611
/*20070611 to 20180523
 %s님의
 %s's
*/
	MSG_CHARACTER_NAME = 0x4fb,
/*20070611 to 20070801
%s님이 %s를 획득하셨습니다.
20070807 to 20180523
%s님이 %s 아이템을 획득하셨습니다.
%s has acquired %s.
*/
	MSG_ITEM_PICKUP_PARTY = 0x4fc,
/*20070611 to 20180523
공개 채팅 메시지 표시
Public Chat Display
*/
	MSG_VIEW_CHAT_MSG = 0x4fd,
/*20070611 to 20180523
귓속말 채팅 메시지 표시
Whisper Display
*/
	MSG_VIEW_WHISPER_MSG = 0x4fe,
/*20070611 to 20180523
파티 채팅 메시지 표시
Party Chat Display
*/
	MSG_VIEW_PARTY_MSG = 0x4ff,
/*20070611 to 20180523
길드 채팅 메시지 표시
Guild Chat Display
*/
	MSG_VIEW_GUILD_MSG = 0x500,
/*20070611 to 20180523
아이템 획득/드롭 메시지 표시
Item Get/Drop Message Display
*/
	MSG_VIEW_GET_ITEM_MSG = 0x501,
/*20070611 to 20180523
장비 장착/해제 메시지 표시
Equipment On/Off Message Display
*/
	MSG_VIEW_EQUIP_MSG = 0x502,
/*20070611 to 20180523
상태이상 메시지 표시
Abnormal Status Message Display
*/
	MSG_VIEW_CHANGE_STATUS_MSG = 0x503,
/*20070611 to 20180523
파티원의 주요 아이템 획득 메시지 표시
Party Member's Obtained Item Message Display
*/
	MSG_VIEW_GET_ITEM_PARTY_MSG = 0x504,
/*20070611 to 20180523
파티원의 상태이상 메시지 표시
Party Member's Abnormal Status Message Display
*/
	MSG_VIEW_CHANGE_STATUS_PARTY_MSG = 0x505,
/*20070611 to 20180523
스킬 사용 실패 메시지 표시
Skill Failure Message Display
*/
	MSG_VIEW_FAIL_SKILL_MSG = 0x506,
/*20070611 to 20180523
파티 설정 메시지 표시
Party Configuration Message Display
*/
	MSG_VIEW_PARTY_SETUP_MSG = 0x507,
/*20070611 to 20180523
장비 손상 메시지 표시
Damaged Equipment Message Display
*/
	MSG_VIEW_DAMAGED_EQUIP_MSG = 0x508,
/*20070611 to 20180523
배틀 메시지 창 표시 정보
Battle Message Window Display
*/
	MSG_BATTLE_CHAT_WND_OPTION = 0x509,
/*20070611 to 20180523
[%s]의 소지 한코인 : %d 한코인
[%s]'s Han Coin: %d Han Coin
*/
	MSG_POINT_SHOP_NHN = 0x50a,
#endif
#if PACKETVER >= 20070618
/*20070618 to 20180523
일반 메시지
Public Log
*/
	MSG_ST_CHAT = 0x50b,
/*20070618 to 20180523
배틀 메시지
Battle Log
*/
	MSG_BT_CHAT = 0x50c,
/*20070618 to 20180523
휴대폰 인증.
Mobile Authentication
*/
	MSG_PHONE_CONFIRM = 0x50d,
/*20070618 to 20180523
읽기
Read
*/
	MSG_BOOK_READ = 0x50e,
/*20070618 to 20180523
자동낭독
Auto Read
*/
	MSG_BOOK_AUTOREAD = 0x50f,
/*20070618 to 20180523
책갈피
Bookmark
*/
	MSG_BOOK_KEEP = 0x510,
/*20070618 to 20180523
이전페이지
Previous
*/
	MSG_BOOK_PREV = 0x511,
/*20070618 to 20180523
다음페이지
Next
*/
	MSG_BOOK_NEXT = 0x512,
/*20070618 to 20180523
닫기
Close
*/
	MSG_BOOK_CLOSE = 0x513,
#endif
#if PACKETVER >= 20070622
/*20070622 to 20180523
%s 장비가 손상되었습니다.
%s's Equipment has been damaged.
*/
	MSG_DAMAGED_EQUIP = 0x514,
/*20070622 to 20180523
%s님의 %s 손상되었습니다.
%s's %s was damaged.
*/
	MSG_DAMAGED_EQUIP_PARTY = 0x515,
/*20070622 to 20180523
무기가
Weapon
*/
	MSG_DAMAGED_WEAPON = 0x516,
/*20070622 to 20180523
갑옷이
Armor
*/
	MSG_DAMAGED_BODY = 0x517,
/*20070622 to 20180523
스킬레벨이 부족합니다. 파티가입 불능
Insufficient Skill Level for joining a Party
*/
	MSG_NOT_ENOUGH_SKILLLEVE5_2 = 0x518,
#endif
#if PACKETVER >= 20070703
/*20070703 to 20180523
[%s]의 무료 캐시 : %d 캐시
[%s]'s Free Cash: %d Cash
*/
	MSG_POINT_SHOP2 = 0x519,
/*20070703 to 20180523
무료 캐시 사용 : 
Use Free Cash: 
*/
	MSG_USE_FREE_POINT = 0x51a,
/*20070703 to 20180523
캐시
Cash
*/
	MSG_CASH = 0x51b,
#endif
#if PACKETVER >= 20070710
/*20070710 to 20180523
http://payment.ro.hangame.com/index.asp
*/
	MSG_SETTLE_WEB_URL_HANGAME = 0x51c,
/*20070710 to 20090603
그라비티 회원 정보동의를 하셔야 사용할수있습니다.
20090610 to 20180523
그라비티 회원 정보동의를 하셔야 사용할 수 있습니다.
You need to accept the Privacy Policy from Gravity in order to use the service.
*/
	MSG_BAN_GRAVITY_MEM_AGREE = 0x51d,
/*20070710 to 20180523
이용약관에 동의를 하셔야 본 서비스를 이용하실 수 있습니다.
You need to accept the User Agreement in order to use the service.
*/
	MSG_BAN_GAME_MEM_AGREE = 0x51e,
/*20070710 to 20080514
존재하지 않는 한게임 ID이거나 잘못된 ID입니다.
20080520 to 20180523
입력하신 아이디와 비밀번호가 등록된 정보와 일치하지 않습니다.
Incorrect or nonexistent ID.
*/
	MSG_BAN_HAN_VALID = 0x51f,
#endif
#if PACKETVER >= 20070711
/*20070711 to 20080603
 정말로 '%s'아이템을 구매하시겠습니까?, 일반 %d캐시, 무료 %d캐시가 차감됩니다.
20080610 to 20100629
 본 아이템은 청약 철회나 환불 대상에서 제외되는 아이템입니다. 정말로 '%s'아이템을 구매하시겠습니까?, 일반 %d캐시, 무료 %d캐시가 차감됩니다.
20100701 to 20101026
 본 아이템은 청약 철회나 환불 대상에서 제외되는 아이템입니다. 정말로 %s아이템을 구매하시겠습니까?, 일반 %d캐시, 무료 %d캐시가 차감됩니다.
20101102 to 20101130
 ^ff0000본 아이템을 구매 후 개봉하시면 청약 철회 및 환불 대상에서 제외됩니다.^000000 정말로 %s아이템을 구매하시겠습니까? 구매하실 경우 일반 %d캐시, 무료 %d캐시가 차감됩니다.
20101207 to 20110330
 ^ff0000본 아이템을 구매 후 개봉하시면 청약 철회 및 환불 대상에서 제외됩니다.^000000 정말로 아이템을 구매하시겠습니까? 구매하실 경우 일반 %d캐시, 무료 %d캐시가 차감됩니다.
20110405 to 20120618
 ^ff0000본 아이템을 구매 후 7일 이내에는 청약 철회가 가능합니다. 다만, 7일이 지났거나 아이템을 개봉하시면 청약 철회 대상에서 제외 됩니다.^000000 정말로 아이템을 구매하시겠습니까? 구매하실 경우 일반 %d캐시, 무료 %d캐시가 차감됩니다.
20120626 to 20180523
 ^ff0000본 아이템을 구매 후 7일 이내에는 청약 철회가 가능합니다. 다만, 7일이 지났거나 아이템을 개봉하시면 청약 철회 대상에서 제외 됩니다.또한 구매시 사용된 무료캐시는 청약철회시 반환되지 않습니다.^000000 정말로 아이템을 구매하시겠습니까? 구매하실 경우 일반 %d캐시, 무료 %d캐시가 차감됩니다.
Do you really want to purchase these items? You will spend %d Regular Cash Points and %d Free Cash Points.
*/
	MSG_BUY_RECONFIRM2 = 0x520,
#endif
#if PACKETVER >= 20070718
/*20070718 to 20180523
%d시간이 경과하였습니다.
%d hour(s) has passed.
*/
	MSG_NOTIFY_PLAYTIME1 = 0x521,
/*20070718 to 20180523
%d시간 %d분이 경과하였습니다.
%d hour(s) %d minute(s) has passed.
*/
	MSG_NOTIFY_PLAYTIME2 = 0x522,
/*20070718 to 20180523
게임을 종료하세요, 경험치 및 모든게 50%로 조정됩니다
Please stop playing the game, and take a break. Exp and other features will be reduced to 50%.
*/
	MSG_WARNING_MSG1 = 0x523,
/*20070718 to 20180523
불건전 시간대에 접어들었습니다. 게임을 종료하세요, 경험치 및 모든게 0%로 조정됩니다
Please stop playing the game since you'll need to rest. Exp and other features will be fixed to 0%.
*/
	MSG_WARNING_MSG2 = 0x524,
#endif
#if PACKETVER >= 20070724
/*20070724 to 20180523
퀘스트 목록
Quest List
*/
	MSG_QUESTWIN = 0x525,
#endif
#if PACKETVER >= 20070807
/*20070807 to 20180523
RO SHOP
RO Shop
*/
	MSG_RO_SHOP = 0x526,
#endif
#if PACKETVER >= 20070821
/*20070821 to 20070904
메모리얼던젼 '%s'이 예약되었습니다.
20070911 to 20180523
메모리얼던젼 '%s'의 예약이 알수없는 이유로 실패 하였습니다.
Memorial Dungeon, '%s' is booked.
*/
	MSG_MDUNGEON_SUBSCRIPTION_ERROR_UNKNOWN = 0x527,
/*20070821 to 20070904
메모리얼던젼 '%s' 예약이 실패했습니다.
20070911 to 20180523
메모리얼던젼 '%s'의 예약이 예약중복으로 실패 하였습니다.
Failed to book Memorial Dungeon, '%s'.
*/
	MSG_MDUNGEON_SUBSCRIPTION_ERROR_DUPLICATE = 0x528,
/*20070821 to 20070904
메모리얼던젼 '%s' 이미 예약중입니다.
20070911 to 20180523
메모리얼던젼 '%s'의 예약이 권한문제로 실패 하였습니다.
Memorial Dungeon, '%s' is already booked.
*/
	MSG_MDUNGEON_SUBSCRIPTION_ERROR_RIGHT = 0x529,
/*20070821 to 20070904
메모리얼던젼 '%s'가 생성 되었습니다
 5분내에 입장하세요.
20070911 to 20180523
메모리얼던젼 '%s'의 예약이 중복생성요청으로 실패하였습니다.
Memorial Dungeon, '%s' is created.
 Please enter in 5 minutes.
*/
	MSG_MDUNGEON_SUBSCRIPTION_ERROR_EXIST = 0x52a,
/*20070821 to 20070904
메모리얼던젼 '%s' 생성에 실패했습니다.
 나중에 다시 시도하세요.
20070911 to 20180523
메모리얼던젼 '%s'의 예약취소가 실패 하였습니다.
Failed to create Memorial Dungeon, '%s'.
 Please try again.
*/
	MSG_MDUNGEON_SUBSCRIPTION_CANCEL_FAIL = 0x52b,
/*20070821 to 20180523
상대방이 파티 초대 거부 상태입니다.
The character blocked the party invitation.
*/
	MSG_JOINMSG_REFUSE = 0x52c,
#endif
#if PACKETVER >= 20070828
/*20070828 to 20180523
모든 파티 초대를 거부합니다.
Block all party invitations.
*/
	MSG_INVITE_PARTY_REFUSE = 0x52d,
/*20070828 to 20180523
모든 파티 초대를 수락합니다.
Allow all party invitations.
*/
	MSG_INVITE_PARTY_ACCEPT = 0x52e,
#endif
#if PACKETVER >= 20070904
/*20070904 to 20180523
착용하시면 이 아이템은 영구 귀속됩니다. 착용하시겠습니까?
This item will be permanently bound to this character once it is equipped. Do you really want to equip this item?
*/
	MSG_YOURITEM_EQUIP = 0x52f,
/*20070904 to 20180523
%s 아이템이 귀속되었습니다.
%s is now permanently bound to this character.
*/
	MSG_YOURITEM_EQUIPED = 0x530,
/*20070904 to 20180523
캐시가 부족합니다. 무료 캐시 포인트를 입력해 주시기 바랍니다.
You do not have enough Kafra Credit Points. Please enter whether you have free credit points.
*/
	MSG_BUY_TO_FREE_POINT = 0x531,
/*20070904 to 20180523
파티 가입요청
Request to Join Party
*/
	MSG_REQ_JOIN_PARTY3 = 0x532,
#endif
#if PACKETVER >= 20070912
/*20070912 to 20180523
공성 정보 메시지 표시
Display WOE Info
*/
	MSG_VIEW_SIEGE_INFO_MSG = 0x533,
/*20070912 to 20180523
메모리얼던젼 '%s'의 예약이 취소 되었습니다.
Memorial Dungeon %s's reservation has been canceled.
*/
	MSG_MDUNGEON_SUBSCRIPTION_CANCEL_SUCCESS = 0x534,
/*20070912 to 20180523
메모리얼던젼 '%s' 생성에 실패하였습니다. 다시 시도 하세요.
Failed to create Memorial Dungeon %s. Please try again.
*/
	MSG_MDUNGEON_CREATE_FAIL = 0x535,
/*20070912 to 20180523
이 장소에서는 사용할 수 없는 스킬입니다.
This skill cannot be used within this area.
*/
	MSG_IMPOSSIBLE_SKILL_AREA = 0x536,
/*20070912 to 20180523
이 장소에서는 사용할 수 없는 아이템입니다.
This item cannot be used within this area.
*/
	MSG_IMPOSSIBLE_USEITEM_AREA = 0x537,
#endif
#if PACKETVER >= 20070918
/*20070918 to 20180523
메모리얼 던전
Memorial Dungeon
*/
	MSG_MEMORIAL_DUN = 0x538,
/*20070918 to 20180523
%s 대기중
%s in Standby
*/
	MSG_MEMORIAL_DUN_WAITING = 0x539,
/*20070918 to 20180523
%s 입장 가능
%s Available
*/
	MSG_MEMORIAL_DUN_READY = 0x53a,
/*20070918 to 20071120
%s 내부
20071127 to 20180523
%s 진행중
%s in Progress
*/
	MSG_MEMORIAL_DUN_IN = 0x53b,
/*20070918 to 20180523
시간 안에 입장하지 않아 메모리얼 던전이 사라졌습니다.
No one entered the Memorial Dungeon within its duration; the dungeon has disappeared.
*/
	MSG_MEMORIAL_DUN_OUT1 = 0x53c,
/*20070918 to 20180523
이용하시려면 이용 신청을 처음부터 다시 해주시기 바랍니다.
Please apply for dungeon entry again to play in this dungeon.
*/
	MSG_MEMORIAL_DUN_OUT2 = 0x53d,
/*20070918 to 20180523
대기 순위 : ^ff0000%d^000000
Your Standby Priority: ^ff0000%d^000000
*/
	MSG_MEMORIAL_DUN_PRIORITY = 0x53e,
/*20070918 to 20180523
^ff0000%s^000000 내에 입장하지 않을 경우 신청하신 던전이 삭제 됩니다.
The requested dungeon will be removed if you do not enter within ^ff0000%s^000000.
*/
	MSG_MEMORIAL_DUN_NOTIFY = 0x53f,
/*20070918 to 20180523
던전 미션 제한 시간 : 
Dungeon Mission Time Limit:
*/
	MSG_MEMORIAL_DUN_NOTIFY2 = 0x540,
/*20070918 to 20180523
메모리얼 던전 예약이 취소되었습니다.
The Memorial Dungeon reservation has been canceled.
*/
	MSG_MEMORIAL_DUN_CANCEL = 0x541,
/*20070918 to 20180523
메모리얼 던전이 유지 시간 제한에 의해 파괴되었습니다.
The Memorial Dungeon duration expired; it has been destroyed.
*/
	MSG_MEMORIAL_DUN_LIVE_TIME_OUT = 0x542,
/*20070918 to 20180523
메모리얼 던전이 입장 시간 제한에 의해 파괴되었습니다.
The Memorial Dungeon's entry time limit expired; it has been destroyed.
*/
	MSG_MEMORIAL_DUN_ENTER_TIME_OUT = 0x543,
/*20070918 to 20180523
메모리얼 던전이 삭제 되었습니다.
The Memorial Dungeon has been removed.
*/
	MSG_MEMORIAL_DUN_DESTROY_REQUEST = 0x544,
/*20070918 to 20180523
메모리얼 던전에 시스템 오류가 발생하였습니다. 정상적인 게임 진행을 위해 재접속을 해주십시오.
A system error has occurred in the Memorial Dungeon. Please relog in to the game to continue playing.
*/
	MSG_MEMORIAL_DUN_ERROR = 0x545,
/*20070918 to 20180523
사용할 수 없는 슬롯입니다.
This slot is not usable.
*/
	MSG_FR_INVALID_SLOT = 0x546,
/*20070918 to 20180523
Base Level이 15를 넘었습니다.
Your Base Level is over 15.
*/
	MSG_FR_BASELVL = 0x547,
/*20070918 to 20180523
Job Level이 15를 넘었습니다.
Your Job Level is over 15.
*/
	MSG_FR_INVALID_JOBLV = 0x548,
/*20070918 to 20180523
해당슬롯 캐릭터에 직업군의 상인이므로 게임을 할 수 없습니다.
You cannot play the Merchant class character in this slot.
*/
	MSG_FR_JOB = 0x549,
/*20070918 to 20180523
추후 사용예정
Not Yet Implemented
*/
	MSG_FR_MAP = 0x54a,
/*20070918 to 20180523
만들수 있는 케릭터 슬롯이 아닙니다.
You are not eligible to open the Character Slot.
*/
	MSG_FR_ERR_MKCHAR_INVALID_SLOT = 0x54b,
/*20070918 to 20180523
삭제할 수 없는 케릭터 입니다.
This character cannot be deleted.
*/
	MSG_FR_ERR_DELCHAR_INVALID_SLOT = 0x54c,
/*20070918 to 20180523
상대방의 장비창이 공개되어 있지 않습니다.
This character's equipment information is not open to the public.
*/
	MSG_OPEN_EQUIPEDITEM_REFUSED = 0x54d,
/*20070918 to 20180523
장비창을 공개하지 않습니다.
Equipment information not open to the public.
*/
	MSG_OPEN_EQUIPEDITEM_REFUSE = 0x54e,
/*20070918 to 20180523
장비창을 공개합니다.
Equipment information open to the public.
*/
	MSG_OPEN_EQUIPEDITEM_ACCEPT = 0x54f,
/*20070918 to 20180523
(%s)님 장비창 보기
Check %s's Equipment Info
*/
	MSG_REQ_VIEW_OTHERUSER = 0x550,
/*20070918 to 20180523
%s의 장착아이템
'%s's Equipment
*/
	MSG_OTHERUSER_EQUIPED_ITEM = 0x551,
/*20070918 to 20180523
장비창 공개
Show Equip
*/
	MSG_OPEN_EQUIPED_ITEM = 0x552,
#endif
#if PACKETVER >= 20071002
/*20071002 to 20180523
프리미엄 서비스를 이용해 주시기 바랍니다.
This service is only available for premium users.
*/
	MSG_NEED_PREMIUM_SERVICE = 0x553,
/*20071002 to 20180523
무료 사용자는 최대 50000제니까지 소유할 수 있습니다.
Free Trial users can only hold up to 50,000 zeny.
*/
	MSG_FR_INVALID_MONEY = 0x554,
#endif
#if PACKETVER >= 20071009
/*20071009 to 20180523
전장채팅 상태가 되었습니다.
Battlefield Chat has been activated.
*/
	MSG_BATTLECHAT_ON = 0x555,
/*20071009 to 20180523
전장채팅 상태가 해제되었습니다.
Battlefield Chat has been deactivated.
*/
	MSG_BATTLECHAT_OFF = 0x556,
#endif
#if PACKETVER >= 20071017
/*20071017 to 20180523
용병정보 - 몬스터타입
Mercenary Info - Monster Type
*/
	MSG_MER_INFO_TYPE_MONSTER = 0x557,
#endif
#if PACKETVER >= 20071106
/*20071106 to 20180523
전체 맵 보기
World Map
*/
	MSG_RO_MAP = 0x558,
#endif
#if PACKETVER >= 20071127
/*20071127 to 20180523
메모리얼던젼이 CLOSE 상태입니다.
The Memorial Dungeon is now closed.
*/
	MSG_MEMORIAL_DUN_CLOSE = 0x559,
#endif
#if PACKETVER >= 20071204
/*20071204 to 20180523
^ff0000^ff0000용병을 삭제합니다.^000000^000000 삭제하실 경우 지금까지 키운 내역이 모두 삭제됩니다. 계속하시겠습니까?
^ff0000Deleting a Mercenary Soldier^000000 will also delete his growth history. Do you really want to proceed with the deletion?
*/
	MSG_DELETE_MER = 0x55a,
#endif
#if PACKETVER >= 20071211
/*20071211 to 20180523
메모리얼던젼이 OPEN 상태입니다.
The Memorial Dungeon is now open.
*/
	MSG_MEMORIAL_DUN_OPEN = 0x55b,
#endif
#if PACKETVER >= 20080108
/*20080108 to 20180523
위의 계정은 아직 통신 안전 키에 연결되지 않았습니다.  먼저 안전 키를 해제하신 뒤 게임에 접속해 주십시오.
This account has not been confirmed by connecting to the safe communication key. Please connect to the key first, and then log into the game.
*/
	MSG_PHONE_BLOCK = 0x55c,
/*20080108 to 20180523
한 아이피로 접속 가능한 유저수를 초과하였습니다.
The number of accounts connected to this IP has exceeded the limit.
*/
	MSG_BAN_PC_IP_LIMIT_ACCESS = 0x55d,
#endif
#if PACKETVER >= 20080219
/*20080219 to 20180523
새로운 퀘스트를 받았습니다
You have received a new quest.
*/
	MSG_QUESTGET = 0x55e,
#endif
#if PACKETVER >= 20080401
/*20080401 to 20180523
^777777습득조건 : 
^CC3399Requirement:
*/
	MSG_FINDTEXT_TO_SKILLDES = 0x55f,
/*20080401 to 20180523
스킬 설명 보기
View Skill Info
*/
	MSG_VIEW_SKILL_DESCRIPT = 0x560,
#endif
#if PACKETVER >= 20080408
/*20080408 to 20180523
사용된 스킬 포인트는 다시 되돌릴 수 없습니다. 적용하시겠습니까?
Once used, skill points cannot be re-allocated. Would you like to use the skill points?
*/
	MSG_APPLY_SKILL_UP = 0x561,
/*20080408 to 20180523
노비스·1차직업
1st
*/
	MSG_1TABNAME_SKILLWND = 0x562,
/*20080408 to 20180523
2차·전승직업
2nd
*/
	MSG_2TABNAME_SKILLWND = 0x563,
/*20080408 to 20080514
불법프로그램을 사용하였거나            혹은 해킹을 시도한 계정입니다.                블럭시간 : %s
20080520 to 20180523
불법프로그램을 사용하였거나            혹은 해킹을 시도한 계정입니다.              블럭종료시간 : %s
This account has been used for illegal program or hacking program. Block Time: %s
20081210 to 20081218
불법프로그램을 사용하였거나 해킹을 시도한 계정이거나 그라비티 이전을 신청한 한게임 계정입니다.  블럭종료시간 : %s
*/
	MSG_RE17 = 0x564,
/*20080408 to 20180523
불법프로그램이 실행, 바이러스 감염, 또는 해킹툴이 설치되어 있을 가능성이 있습니다. 정상 클라이언트를 실행하여 주시기 바랍니다. 함께 만드는 밝은 라그나로크가 될 수 있도록 노력하고 있습니다.
The possibility of exposure to illegal program, PC virus infection or Hacking Tool has been detected. Please execute licensed client. Our team is trying to make a best environment for Ro players.
*/
	MSG_RE18 = 0x565,
#endif
#if PACKETVER >= 20080415
/*20080415 to 20180523
당신은 지금 건강한 게임 시간 대에 있습니다, 즐거운 게임이 되시길 바랍니다
You are currently playing in the best game environment. Please enjoy the Ragnarok.
*/
	MSG_WARNING_MSG3 = 0x566,
/*20080415 to 20100720
 몬스터 사냥을 통해 얻을 수 있는 Job경험치가 30분간 1.5배로 증가합니다.
20100727 to 20180523
 몬스터 사냥을 통해 얻을 수 있는 Job경험치가 30분간 1.25배로 증가합니다.
Job Exp points from hunting monsters are increased by 50% for 30 minutes.
*/
	MSG_PLUSONLYJOBEXP = 0x567,
/*20080415 to 20091110
 몬스터 사냥을 통해 얻을 수 있는 경험치가 30분간 1.25배로 증가합니다.
20091117 to 20180523
 몬스터 사냥을 통해 얻을 수 있는 경험치가 30분간 1.2배로 증가합니다.
Exp points from hunting monsters are increased by 25% for 30 minutes.
*/
	MSG_PLUSEXP14532 = 0x568,
/*20080415 to 20180523
 몬스터 사냥을 통해 얻을 수 있는 경험치가 30분간 2배로 증가합니다.
EXP points from hunting monsters are increased by 100%% for 30 minutes.
*/
	MSG_PLUSEXP14533 = 0x569,
/*20080415 to 20180523
 몬스터 사냥을 통해 얻을 수 있는 경험치가 60분간 1.5배로 증가합니다.
EXP points from hunting monsters are increased by 50% for 60 minutes.
*/
	MSG_PLUSEXP12312 = 0x56a,
#endif
#if PACKETVER >= 20080520
/*20080520 to 20180523
이 맵에서는 파티를 결성할 수 없습니다.
Unable to organize a party in this map.
*/
	MSG_NOPARTY = 0x56b,
/*20080520 to 20180523
(%s)님은 파티에 참여할 수 없는 맵에 있습니다.
(%s) are currently in restricted map to join a party.
*/
	MSG_NOPARTY2 = 0x56c,
#endif
#if PACKETVER >= 20080528
/*20080528 to 20080603
간편아이템샵.
20080610 to 20180523
간편아이템샵
Simple Item Shop
*/
	MSG_SIMPLE_CASH_SHOP = 0x56d,
/*20080528 to 20180523
소지 한코인 : %d 한코인
Han Coin: %d Han Coin
*/
	MSG_SIMPLE_POINT_SHOP_NHN = 0x56e,
/*20080528 to 20180523
소지 캐시 : %d 캐시
RoK Point: %d RoK Point
*/
	MSG_SIMPLE_POINT_SHOP = 0x56f,
/*20080528 to 20180523
무료 캐시 : %d 캐시
Free Cash: %d Cash
*/
	MSG_SIMPLE_POINT_SHOP2 = 0x570,
#endif
#if PACKETVER >= 20080715
/*20080715 to 20180523
본서버 유저는 프리서버에 접속할수 없습니다.
An user of this server cannot connect to free server
*/
	MSG_MAIN_USER_CANONT_LOGIN_FREE_SERVER = 0x571,
/*20080715 to 20180523
유효기간이 지난 비밀번호 입니다. 다시 로그인하여주십시오.
Your password has expired. Please log in again
*/
	MSG_INVALID_ONETIMELIMIT = 0x572,
#endif
#if PACKETVER >= 20080903
/*20080903 to 20180523
3차직업
3rd
*/
	MSG_3TABNAME_SKILLWND = 0x573,
#endif
#if PACKETVER >= 20080917
/*20080917 to 20180523
이 스킬을 사용할 수 없는 대상입니다.
This skill can't be used on that target.
*/
	MSG_USESKILL_FAIL_TOTARGET = 0x574,
/*20080917 to 20180523
안실라 소유 개수가 초과하여 스킬을 사용할 수 없습니다.
You can't use skill because you have exceeded the number Ancilla possession limit
*/
	MSG_USESKILL_FAIL_ANCILLA_NUMOVER = 0x575,
/*20080917 to 20180523
성수가 필요합니다.
Unable to use the skill to exceed the number of Ancilla.
*/
	MSG_USESKILL_FAIL_HOLYWATER = 0x576,
/*20080917 to 20180523
안실라가 필요합니다.
Holy water is required.
*/
	MSG_USESKILL_FAIL_ANCILLA = 0x577,
/*20080917 to 20180523
일정거리 내에 중복될 수 없습니다.
Ancilla is required.
*/
	MSG_USESKILL_FAIL_DUPLICATE_RANGEIN = 0x578,
/*20080917 to 20180523
이 스킬을 사용하기 위해서는 다른 스킬이 필요합니다.
Cannot be duplicated within a certain distance.
*/
	MSG_USESKILL_FAIL_NEED_OTHER_SKILL = 0x579,
#endif
#if PACKETVER >= 20080924
/*20080924 to 20180523
이 맵에서는 채팅을 할 수 없습니다.
This skill requires other skills to be used.
*/
	MSG_NO_CHATTING = 0x57a,
#endif
#if PACKETVER >= 20081001
/*20081001 to 20180523
3시간이 지났습니다.
Chat is not allowed in this map
*/
	MSG_VET_3HOUR = 0x57b,
/*20081001 to 20180523
5시간이 지났습니다.
3 hours have passed.
*/
	MSG_VET_5HOUR = 0x57c,
#endif
#if PACKETVER >= 20081008
/*20081008 to 20180523
게임가드 초기화 에러 또는 구버전의 게임가드 파일입니다. 게임가드 셋업파일을 다시 설치하고 게임을 실행해 보시기 바랍니다.
5 hours have passed.
*/
	MSG_NPGAMEMON_ERROR_GAMEGUARD = 0x57d,
/*20081008 to 20180523
ini 파일이 없거나 변조되었습니다. 게임가드 셋업파일을 설치하면 해결 할 수 있습니다.
Game guard initialization error or previous version game guard file is installed. Please re-install the setup file and try again
*/
	MSG_NPGMUP_ERROR_PARAM = 0x57e,
/*20081008 to 20180523
게임가드와 충돌 프로그램이 발견되었습니다.
Either ini file is missing or altered. Install game guard setup file to fix the problem
*/
	MSG_NPGG_ERROR_COLLISION = 0x57f,
#endif
#if PACKETVER >= 20081112
/*20081112 to 20180523
잘못된 클라이언트입니다. 정상적인 클라이언트를 실행하여 주십시요.
There is a program found that conflicts with game guard
*/
	MSG_PROOF_ERROR = 0x580,
#endif
#if PACKETVER >= 20081203
/*20081203 to 20180523
모바일 인증을 받아주시기 바랍니다.
Incorrect client. Please run a normal client
*/
	MSG_MOBILE_LOCKSERVER = 0x581,
#endif
#if PACKETVER >= 20081210
/*20081210 to 20180523
모바일 인증에 실패하였습니다.
Thank you to accept mobile authentication.
*/
	MSG_FAILED_MOBILE_LOCKSERVER = 0x582,
#endif
#if PACKETVER >= 20081217
/*20081217 to 20180523
이스킬은 혼자서 사용할수 없습니다.
This skill can't be used alone
*/
	MSG_USESKILL_FAIL_NEED_HELPER = 0x583,
/*20081217 to 20180523
이스킬은 특정방향으로만 사용할수 있습니다.
This skill can be used to certain direction only
*/
	MSG_USESKILL_FAIL_INVALID_DIR = 0x584,
/*20081217 to 20180523
더이상 소환할수 없습니다.
Cannot summon spheres anymore.
*/
	MSG_USESKILL_FAIL_SUMMON = 0x585,
/*20081217 to 20130710
소환된 구체가 존재하지 않습니다.
20130717 to 20180523
소환된 구체가 존재하지 않거나 부족합니다.
There is no summoned sphere or you do not have enough sphere.
*/
	MSG_USESKILL_FAIL_SUMMON_NONE = 0x586,
/*20081217 to 20180523
사용가능한 모방스킬이 존재하지 않습니다.
There is no imitation skills available.
*/
	MSG_USESKILL_FAIL_IMITATION_SKILL_NONE = 0x587,
/*20081217 to 20180523
이 스킬은 중복해서 사용할수 없습니다.
You can't reuse this skill
*/
	MSG_USESKILL_FAIL_DUPLICATE = 0x588,
/*20081217 to 20180523
스킬을 사용할수 없는 상태입니다.
Skill can't be used in this state
*/
	MSG_USESKILL_FAIL_CONDITION = 0x589,
/*20081217 to 20180523
아이템별 최대 소지량을 초과하여 가질 수 없습니다.
You have exceeded the maximum amount of possession of another item.
*/
	MSG_PICKUP_MAXCOUNT_LIMIT = 0x58a,
#endif
#if PACKETVER >= 20090204
/*20090204 to 20180523
관리자 권한이 없습니다. 프로그램 최초 실행은 관리자 권한으로 실행하셔야 합니다.
No administrative privileges. Must first run the program with administrator privileges.
*/
	MSG_NPK_ERROR_NOTADMIN = 0x58b,
/*20090204 to 20180523
nProtect KeyCrypt 드라이버 버전이 맞지 않습니다. 시스템 재 부팅 후에 새로 실행 시켜 주십시오.
nProtect KeyCrypt not the same. Please restart the program and the computer first.
*/
	MSG_NPK_ERROR_DRIVERVERSION = 0x58c,
/*20090204 to 20180523
WindowXP 호환성 모드를 사용하고 계십니다. 현재 프로그램에서 호환성 모드를 제거하였습니다. 프로그램을 새로 시작해 주십시오.
Currently wearing WindowXP Compatibility Mode. The program now removes Compatibility Mode. Please restart the program.
*/
	MSG_NPK_ERROR_VERIFYVERSION = 0x58d,
/*20090204 to 20180523
PS/2 키로거가 존재합니다.
PS/2 keyloggers exist.
*/
	MSG_DETECT_PS2KEYLOGGER = 0x58e,
/*20090204 to 20180523
USB 키보드 드라이버 해킹 시도가 탐지되었습니다.
USB Keylogging attempt was detected.
*/
	MSG_DETECT_USBKEYLOGGER = 0x58f,
/*20090204 to 20180523
HHD 모니터링 툴이 탐지되었습니다.
HHD monitoring tool has been detected.
*/
	MSG_DETECT_HHDUSBH = 0x590,
/*20090204 to 20180523
페인트붓이 필요합니다.
Paintbrush is required.
*/
	MSG_USESKILL_FAIL_PAINTBRUSH = 0x591,
/*20090204 to 20090401
그림물감이 필요합니다.
20090406 to 20180523
서페이스페인트가 필요합니다.
Paint is required.
*/
	MSG_USESKILL_FAIL_II_SURFACE_PAINTS = 0x592,
/*20090204 to 20180523
지정한 위치에 스킬을 사용할수 없습니다.
Use the skills that are not at the specified location.
*/
	MSG_USESKILL_FAIL_POS = 0x593,
/*20090204 to 20180523
도우미의 SP가 부족합니다.
Not enough SP.
*/
	MSG_USESKILL_FAIL_HELPER_SP_INSUFFICIENT = 0x594,
#endif
#if PACKETVER >= 20090211
/*20090211 to 20090218
생성 가능 캐릭터 수는 9개입니다!!(임시)
20090225 to 20180523
캐릭터 선택창의 캐릭터가 %d개를 초과하면 게임에 접속할 수 없습니다. 불필요한 캐릭터를 삭제해주십시오.
Character %d is character selection window cannot connect to the game that exceeds the total. Please remove unwanted characters.
*/
	MSG_BAN_OVER_CHARACTER_LIST = 0x595,
#endif
#if PACKETVER >= 20090225
/*20090225 to 20180523
목캔디가 필요합니다.
Throat Lozenge is required.
*/
	MSG_USESKILL_FAIL_II_NECK_CANDY = 0x596,
/*20090225 to 20180523
안타까운눈물이 필요합니다.
Painful Tears is required.
*/
	MSG_USESKILL_FAIL_II_MISERABLE_TEAR = 0x597,
/*20090225 to 20180523
목 보호 캔디가 필요합니다.
Throat Lozenge is required.
*/
	MSG_USESKILL_FAIL_II_PROTECT_NECK_CANDY = 0x598,
/*20090225 to 20180523
웨폰 블로킹의 연계로만 사용가능합니다.
Cooperation is only available with Weapon Blocking.
*/
	MSG_USESKILL_FAIL_GC_WEAPONBLOCKING = 0x599,
/*20090225 to 20180523
길로틴크로스의 독을 바른 무기가 필요합니다.
Poisoned weapons is required.
*/
	MSG_USESKILL_FAIL_GC_POISONINGWEAPON = 0x59a,
#endif
#if PACKETVER >= 20090304
/*20090304 to 20180523
마도기어 탑승시에만 사용가능합니다.
Item can only be used when Mado Gear is mounted.
*/
	MSG_USESKILL_FAIL_MADOGEAR = 0x59b,
/*20090304 to 20180523
발칸블릿이 필요합니다.
Vulcan Bullet is required.
*/
	MSG_USESKILL_FAIL_II_VULCANBULLET = 0x59c,
/*20090304 to 20180523
마도기어 연료가 필요합니다.
Mado Gear Fuel is required.
*/
	MSG_USESKILL_FAIL_II_FUELGAS = 0x59d,
/*20090304 to 20180523
액체냉각탄이 필요합니다.
Liquid Cold Bullet is required.
*/
	MSG_USESKILL_FAIL_II_COLDSLOWERBULLET = 0x59e,
/*20090304 to 20180523
캐논볼을 장전 하세요.
Please load a Cannon Ball.
*/
	MSG_USESKILL_FAIL_CANONBALL = 0x59f,
/*20090304 to 20180523
미도기어 가속장치를 착용하세요.
Please equipped with a Mado Gear Accelerator.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_ACCELERATION = 0x5a0,
/*20090304 to 20180523
호버링부스터를 착용하세요.
Please equipped with a Hovering Booster.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_HOVERING_BOOSTER = 0x5a1,
/*20090304 to 20180523
[톡신] 독 효과가 무기에 적용되었습니다.
[Toxin] Poison effect was applied to the weapon.
*/
	MSG_TOXIN = 0x5a2,
/*20090304 to 20180523
[패럴라이즈] 독 효과가 무기에 적용되었습니다.
[Paralysis] Poison effect was applied to the weapon.
*/
	MSG_PARALYZE = 0x5a3,
/*20090304 to 20180523
[베놈블리드] 독 효과가 무기에 적용되었습니다.
[Fatigue] Poison effect was applied to the weapon.
*/
	MSG_VENOMBLEED = 0x5a4,
/*20090304 to 20180523
[매직 머쉬룸] 독 효과가 무기에 적용되었습니다.
[Laughing] Poison effect was applied to the weapon.
*/
	MSG_MAGICMUSHROOM = 0x5a5,
/*20090304 to 20180523
[데스 허트] 독 효과가 무기에 적용되었습니다.
[Disheart] Poison effect was applied to the weapon.
*/
	MSG_DEATHHURT = 0x5a6,
/*20090304 to 20180523
[파이렉시아] 독 효과가 무기에 적용되었습니다.
[Pyrexia] Poison effect was applied to the weapon.
*/
	MSG_PHYREXIA = 0x5a7,
/*20090304 to 20180523
[오블리비언 커즈] 독 효과가 무기에 적용되었습니다.
[Oblivion] Poison effect was applied to the weapon.
*/
	MSG_OBLIANCURSE = 0x5a8,
/*20090304 to 20180523
[리치 엔드] 독 효과가 무기에 적용되었습니다.
[Leech] Poison effect was applied to the weapon.
*/
	MSG_RICHEND = 0x5a9,
#endif
#if PACKETVER >= 20090311
/*20090311 to 20180523
호버링상태에서만 사용가능합니다.
Can only be used in Hovering state.
*/
	MSG_USESKILL_FAIL_MADOGEAR_HOVERING = 0x5aa,
/*20090311 to 20180523
자폭장치를 장착하세요.
Please equip a Self-Destruct Mechanism.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_SELFDESTRUCTION_DEVICE = 0x5ab,
/*20090311 to 20180523
셰이프쉬프터를 장착하세요.
Please equip a Shape Shift.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_SHAPESHIFTER = 0x5ac,
/*20090311 to 20180523
길로틴독이 필요합니다.
Guillotine Cross Poison is required.
*/
	MSG_USESKILL_FAIL_GUILLONTINE_POISON = 0x5ad,
/*20090311 to 20180523
냉각장치를 장착하세요.
Please equipped with a Cooling System.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_COOLING_DEVICE = 0x5ae,
/*20090311 to 20180523
자기장필드생성기를 착용하세요.
Please equipped with a Magnetic Field Generator.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_MAGNETICFIELD_GENERATOR = 0x5af,
/*20090311 to 20180523
베리어생성기를 착용하세요.
Please equipped with a Barrier Generator.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_BARRIER_GENERATOR = 0x5b0,
/*20090311 to 20180523
광학미채발생기를 착용하세요.
Please equipped with a Optical Camouflage Generator.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_OPTICALCAMOUFLAGE_GENERATOR = 0x5b1,
/*20090311 to 20180523
리페어키트를 착용하세요.
Please equipped with a Repair Kit.
*/
	MSG_USESKILL_FAIL_II_MADOGEAR_REPAIRKIT = 0x5b2,
/*20090311 to 20180523
몽키 스패너가 필요합니다.
Monkey Wrench is required.
*/
	MSG_USESKILL_FAIL_II_MONKEY_SPANNER = 0x5b3,
#endif
#if PACKETVER >= 20090312
/*20090312 to 20090312
'%s' 시전 시간까지 약 %d 분 남았습니다.
20090318 to 20180523
[%s] 스킬을 시전 할 수 없습니다.
[%s] Cannot use the skills due to cooldown delay.
*/
	MSG_SKILLINTERVAL2 = 0x5b4,
#endif
#if PACKETVER >= 20090318
/*20090318 to 20180523
%d레벨 이상은 삭제가 불가능합니다.
Deletion is impossible for over level %d
*/
	MSG_LEMIT_DELETE_LEVEL = 0x5b5,
/*20090318 to 20110614
마도기어 탑승시에는 사용할수 없습니다.
20110620 to 20180523
마도기어 탑승시에는 사용 할 수 없습니다.
Can't be used while on Magic Gear.
*/
	MSG_USESKILL_FAIL_MADOGEAR_RIDE = 0x5b6,
#endif
#if PACKETVER >= 20090325
/*20090325 to 20180523
드래곤 내리기
Dismount Dragon
*/
	MSG_DRAGONOFF = 0x5b7,
/*20090325 to 20180523
마도기어 내리기
Dismount Magic Gear
*/
	MSG_MADOOFF = 0x5b8,
#endif
#if PACKETVER >= 20090401
/*20090401 to 20180523
소비
I
*/
	MSG_STORE_TABNAME_0 = 0x5b9,
/*20090401 to 20180523
캐쉬
Cash
*/
	MSG_STORE_TABNAME_1 = 0x5ba,
/*20090401 to 20180523
방어구
Armors
*/
	MSG_STORE_TABNAME_2 = 0x5bb,
/*20090401 to 20180523
무기
Weapons
*/
	MSG_STORE_TABNAME_3 = 0x5bc,
/*20090401 to 20180523
투사체
Ammo
*/
	MSG_STORE_TABNAME_4 = 0x5bd,
/*20090401 to 20180523
카드
Card
*/
	MSG_STORE_TABNAME_5 = 0x5be,
/*20090401 to 20180523
기타
Other
*/
	MSG_STORE_TABNAME_6 = 0x5bf,
/*20090401 to 20180523
클라이언트 응답시간이 초과되어 연결이 끊어집니다.
Client response time has passed so connection is terminated
*/
	MSG_ERROR_HS_TIMEOUT = 0x5c0,
/*20090401 to 20180523
핵쉴드 파일의 버전이 맞지 않습니다. 클라이언트를 재설치 해주십시오.
Incorrect version of hack shield file. Please reinstall the client
*/
	MSG_ERROR_DIFF_CLIENT = 0x5c1,
#endif
#if PACKETVER >= 20090406
/*20090406 to 20180523
마법서가 필요합니다.
[Magic Book] is required.
*/
	MSG_USESKILL_FAIL_SPELLBOOK = 0x5c2,
/*20090406 to 20180523
마법서가 너무 어려워서 졸음이 몰려온다.
Feel sleepy since Magic Book is too difficult to understand.
*/
	MSG_USESKILL_FAIL_SPELLBOOK_DIFFICULT_SLEEP = 0x5c3,
/*20090406 to 20180523
보존포인트가 부족합니다.
Not enough saved point.
*/
	MSG_USESKILL_FAIL_SPELLBOOK_PRESERVATION_POINT = 0x5c4,
/*20090406 to 20180523
더이상 마법서를 읽을수 없습니다.
Can't read a Magic Book anymore.
*/
	MSG_USESKILL_FAIL_SPELLBOOK_READING = 0x5c5,
/*20090406 to 20180523
페이스페인트가 필요합니다.
Face Paint is required.
*/
	MSG_USESKILL_FAIL_II_FACE_PAINTS = 0x5c6,
/*20090406 to 20180523
분장용붓이 필요합니다.
Brush is required.
*/
	MSG_USESKILL_FAIL_II_MAKEUP_BRUSH = 0x5c7,
#endif
#if PACKETVER >= 20090408
/*20090408 to 20180523
대기 시간이 초과하였습니다. 다시 로그인 해주십시오.
Waiting time has passed. Please log in again
*/
	MSG_MOBILE_TIMEOVER = 0x5c8,
/*20090408 to 20180523
위험! 이미 동일한 계정이 로그인 중에 있습니다. 잠시 모바일 인증 진행을 멈추시고 비번을 수정한 뒤 재 로그인 해주십시오.
Watch out! Same account is already logged in. Stop mobile verification and log in again after changing your password
*/
	MSG_MOBILE_ANOTHER_LOGIN = 0x5c9,
/*20090408 to 20180523
위험! 현재 동일한 계정이 모바일 인증 대기 중에 있습니다. 잠시 모바일 인증 진행을 멈추시고 비번을 수정한 뒤 재 로그인 해주십시오.
Watch out! Same account is waiting for mobile verification. Stop mobile verification and log in again after changing your password
*/
	MSG_MOBILE_WAITING_STATE = 0x5ca,
#endif
#if PACKETVER >= 20090506
/*20090506 to 20180523
게임 옵션창
Game setting window
*/
	MSG_ESC_OPTIONWND = 0x5cb,
/*20090506 to 20180523
그래픽 설정
Graphics Settings
*/
	MSG_GRAPHIC_OPTIONWND = 0x5cc,
/*20090506 to 20180523
사운드 설정
Sound Settings
*/
	MSG_SOUND_OPTIONWND = 0x5cd,
#endif
#if PACKETVER >= 20090514
/*20090514 to 20180523
변경 할 단축키를 누르거나, 'ESC'키를 눌러 삭제 해 주세요.
Press a key to assign. Pressing 'ESC' will remove the assigned key.
*/
	MSG_HOTKEYWND_NOTICE1 = 0x5ce,
/*20090514 to 20180523
단일 키로 지정 할 수 없는 키입니다.
Unable to specify a single key.
*/
	MSG_HOTKEYWND_NOTICE2 = 0x5cf,
/*20090514 to 20180523
지정 할 수 없는 키입니다.
Unable to specify the key assigned.
*/
	MSG_HOTKEYWND_NOTICE3 = 0x5d0,
/*20090514 to 20180523
'%s'에 사용된 단축키와 중복됩니다. 바꾸시겠습니까?
Duplicated with ['%s']. Do you still want to change?
*/
	MSG_HOTKEYWND_NOTICE4 = 0x5d1,
/*20090514 to 20180523
저장된 단축키 조합이 초기화 됩니다. 초기화 하시겠습니까?
Initialization is stored in the shortcut key settings. Do you want to initialized?
*/
	MSG_HOTKEYWND_NOTICE5 = 0x5d2,
/*20090514 to 20180523
스킬바
Skill Bar
*/
	MSG_HOTKEYWND_TAB1 = 0x5d3,
/*20090514 to 20180523
인터페이스
Interface
*/
	MSG_HOTKEYWND_TAB2 = 0x5d4,
/*20090514 to 20180523
이모션
Macros
*/
	MSG_HOTKEYWND_TAB3 = 0x5d5,
/*20090514 to 20180523
단축키 설정 창
Shortcut Settings
*/
	MSG_HOTKEYWND_TITLE = 0x5d6,
#endif
#if PACKETVER >= 20090520
/*20090520 to 20180523
배경음
BGM
*/
	MSG_BGM = 0x5d7,
/*20090520 to 20180523
효과음
Effect
*/
	MSG_SOUND = 0x5d8,
/*20090520 to 20180523
스킨
Skin
*/
	MSG_SKIN = 0x5d9,
/*20090520 to 20180523
채팅방 입장음만 소리남 On
Chat room entrance sound on
*/
	MSG_TINGONLY_ON = 0x5da,
/*20090520 to 20180523
채팅방 입장음만 소리남 Off
Chat room entrance sound off
*/
	MSG_TINGONLY_OFF = 0x5db,
/*20090520 to 20180523
/tingonly : 채팅방 입장음만 들을수있게됩니다
/tingonly: you can hear only sound like a chat room entry.
*/
	MSG_EXPLAIN_TINGONLY = 0x5dc,
/*20090520 to 20180523
/주먹
/rock
*/
	MSG_EMOTION_ROCK = 0x5dd,
/*20090520 to 20180523
/가위
/scissors
*/
	MSG_EMOTION_SCISSOR = 0x5de,
/*20090520 to 20180523
/보
/paper
*/
	MSG_EMOTION_WRAP = 0x5df,
/*20090520 to 20180523
/러브
/love
*/
	MSG_EMOTION_LUV = 0x5e0,
/*20090520 to 20180523
/mobile
*/
	MSG_EMOTION_MOBILE = 0x5e1,
/*20090520 to 20180523
/mail
*/
	MSG_EMOTION_MAIL = 0x5e2,
/*20090520 to 20180523
/antenna0
*/
	MSG_EMOTION_ANTENNA0 = 0x5e3,
/*20090520 to 20180523
/antenna1
*/
	MSG_EMOTION_ANTENNA1 = 0x5e4,
/*20090520 to 20180523
/antenna2
*/
	MSG_EMOTION_ANTENNA2 = 0x5e5,
/*20090520 to 20180523
/antenna3
*/
	MSG_EMOTION_ANTENNA3 = 0x5e6,
/*20090520 to 20180523
/hum
*/
	MSG_EMOTION_HUM2 = 0x5e7,
/*20090520 to 20180523
/abs
*/
	MSG_EMOTION_ABS = 0x5e8,
/*20090520 to 20180523
/oops
*/
	MSG_EMOTION_OOPS = 0x5e9,
/*20090520 to 20180523
/spit
*/
	MSG_EMOTION_SPIT = 0x5ea,
/*20090520 to 20180523
/ene
*/
	MSG_EMOTION_ENE = 0x5eb,
/*20090520 to 20180523
/panic
*/
	MSG_EMOTION_PANIC = 0x5ec,
/*20090520 to 20180523
/whisp
*/
	MSG_EMOTION_WHISP = 0x5ed,
#endif
#if PACKETVER >= 20090527
/*20090527 to 20180523
지정안함
Not Assigned
*/
	MSG_HOTKEY_NOTHING = 0x5ee,
#endif
#if PACKETVER >= 20090603
/*20090603 to 20180523
카트장착시에만 사용가능합니다.
Only available when cart is mounted.
*/
	MSG_USESKILL_FAIL_CART = 0x5ef,
/*20090603 to 20180523
[가시나무 씨앗]이 필요합니다.
[Thorny Seed] is required.
*/
	MSG_USESKILL_FAIL_II_THORNS_SEED = 0x5f0,
/*20090603 to 20180523
[흡혈 식물 씨앗]이 필요합니다.
[Bloodsucker Seed] is required.
*/
	MSG_USESKILL_FAIL_II_BLOOD_SUCKER_SEED = 0x5f1,
/*20090603 to 20180523
더이상 시전할수 없습니다.
Cannot be used anymore.
*/
	MSG_USESKILL_FAIL_NO_MORE_SPELL = 0x5f2,
/*20090603 to 20180523
[폭탄버섯포자]가 필요합니다.
[Bomb Mushroom Spore] is required.
*/
	MSG_USESKILL_FAIL_II_BOMB_MUSHROOM_SPORE = 0x5f3,
/*20090603 to 20180523
[화염병]이 필요합니다.
[Fire Bottle] is required.
*/
	MSG_USESKILL_FAIL_II_GASOLINE_BOOMB = 0x5f4,
/*20090603 to 20180523
[기름병]이 필요합니다.
[Oil Bottle] is required.
*/
	MSG_USESKILL_FAIL_II_OIL_BOTTLE = 0x5f5,
/*20090603 to 20180523
[폭발가루]가 필요합니다.
[Explosive Powder] is required.
*/
	MSG_USESKILL_FAIL_II_EXPLOSION_POWDER = 0x5f6,
/*20090603 to 20180523
[연막가루]가 필요합니다.
[Smokescreen Powder] is required.
*/
	MSG_USESKILL_FAIL_II_SMOKE_POWDER = 0x5f7,
/*20090603 to 20180523
[최루가스]가 필요합니다.
[Tear Gas] is required.
*/
	MSG_USESKILL_FAIL_II_TEAR_GAS = 0x5f8,
/*20090603 to 20180523
[염산병]이 필요합니다.
[Acid Bottle] is required.
*/
	MSG_USESKILL_FAIL_II_HYDROCHLORIC_ACID_BOTTLE = 0x5f9,
/*20090603 to 20180523
[식인식물병]이 필요합니다.
[Bottom Man-Eating Plant] is required.
*/
	MSG_USESKILL_FAIL_II_HELLS_PLANT_BOTTLE = 0x5fa,
/*20090603 to 20180523
[만드라고라의 화분]이 필요합니다.
[Pot of Mandragora] is required.
*/
	MSG_USESKILL_FAIL_II_MANDRAGORA_FLOWERPOT = 0x5fb,
/*20090603 to 20180523
파티장 위임
Party delegation
*/
	MSG_YIELD_PARTYMASTER = 0x5fc,
/*20090603 to 20180523
정말 파티장을 위임하시겠습니까?
Do you want to delegate the real party?
*/
	MSG_DO_YOU_REALLY_WANT_YIELD_PARTYMASTER = 0x5fd,
/*20090603 to 20180523
파티장을 위임 할 수 없습니다.
Party cannot be delegated.
*/
	MSG_CANNOT_YIELD_PARTYMASTER = 0x5fe,
/*20090603 to 20180523
변경불가
Immutable
*/
	MSG_FAILED_CHANGE = 0x5ff,
#endif
#if PACKETVER >= 20090610
/*20090610 to 20180523
[%s]가 %d개 필요합니다.
[%s] required '%d' amount.
*/
	MSG_USESKILL_FAIL_NEED_ITEM = 0x600,
/*20090610 to 20180523
제련 수치가 하향 조정 되었습니다.
Is now refining the value lowered.
*/
	MSG_ITEM_REFINING_DOWNGRADE = 0x601,
/*20090610 to 20180523
[%s]를 장비하고 있어야 사용할 수 있습니다
Need to put on [%s] in order to use.
*/
	MSG_USESKILL_FAIL_NEED_EQUIPMENT = 0x602,
#endif
#if PACKETVER >= 20090617
/*20090617 to 20090922
전장 리스트
20090929 to 20180523
전장 입장 설정
Battle field entrance setting
*/
	MSG_BATTLEFIELD_LIST = 0x603,
/*20090617 to 20090929
전장 - [%s] 신청 하시겠습니까?
20091006 to 20180523
% 전장으로 이동 할 수 없는 상태가 되어 전장 신청이 취소 되었습니다.
Battlefield - [%s] you sign up?
*/
	MSG_CANNOT_JOINTO_BATTLEFIELD = 0x604,
/*20090617 to 20090715
전장 - [%s] 입장 신청이 완료되었습니다.
20090722 to 20090929
입장 신청이 완료되었습니다.
20091006 to 20100928

20101005 to 20180523

Current admission application state.
*/
	MSG_COMPLETED_JOINTO_BATTLEFIELD = 0x605,
/*20090617 to 20090624
전장 - [%s] 입장 하실 수 없습니다.
20090701 to 20090715
전장 - [%s] 에 입장 할 수 없는 상태이므로 등록이 취소 되었습니다.
20090722 to 20090929
에 입장 할 수 없는 상태이므로 등록이 취소 되었습니다.
20091006 to 20180523
% 전장 입장이 보류 되었습니다. 다른 플레이어를 기다립니다.
It was unregistered and not be able to enter the state.
*/
	MSG_DIFFER_JOINTO_BATTLEFIELD = 0x606,
/*20090617 to 20090929
현재 입장 신청 상태입니다.
20091006 to 20100928

20101005 to 20180523

Current admission application state.
*/
	MSG_STATUS_JOINTO_BATTLEFIELD = 0x607,
/*20090617 to 20090929
입장 신청을 취소하시겠습니까?
20091006 to 20100616
%s 전장 신청을 정말로 취소하시겠습니까?
20100622 to 20180523
확인 단추를 누르면 전장 신청이 취소됩니다. 아래 단추를 클릭해 주세요.
Do you want to cancel the admission application?
*/
	MSG_REQ_CANCEL_JOINTO_BATTLEFIELD = 0x608,
/*20090617 to 20090715
전장 - [%s] 입장 신청이 취소되었습니다.
20090722 to 20090929
입장 신청이 취소되었습니다.
20091006 to 20180523
%s 전장 입장 신청이 취소되었습니다.
Admission request has been cancelled.
*/
	MSG_CANCEL_JOINTO_BATTLEFIELD = 0x609,
/*20090617 to 20090929
곧 전장으로 이동 합니다.
20091006 to 20180523
잠시후 %s 전장으로 이동 합니다. 공간 이동을 위한 안정적인 상태를 확보해 주시길 바랍니다. (거래 및 공간 이동 기능 일시 중지됨)
Go to the battlefield quickly.
*/
	MSG_MOVETO_BATTLEFIELD = 0x60a,
/*20090617 to 20091028
전장 - [%s]
20091103 to 20180523
전장 명칭
Battlefield - [%s]
*/
	MSG_BATTLEFIELD_NAME = 0x60b,
#endif
#if PACKETVER >= 20090624
/*20090624 to 20180523
정말 이동 하시겠습니까?
Do you really want to go back to your savepoint?
*/
	MSG_MOVETO_SAVEPOINT = 0x60c,
/*20090624 to 20180523
파티원 찾기 메세지
Search Message for Party Members
*/
	MSG_VIEW_SEEK_PARTY = 0x60d,
/*20090624 to 20180523
파티원 찾기 메세지 옵션이 꺼져있습니다.
Message option is off the search party members.
*/
	MSG_UNVIEW_SEEK_PARTY = 0x60e,
/*20090624 to 20180523
10초간 파티 지원 딜레이가 걸려있습니다.
10 seconds delay of party support is in effect
*/
	MSG_SEEK_PARTY_DEALY = 0x60f,
#endif
#if PACKETVER >= 20090701
/*20090701 to 20180523
 파티장은 '%s' 님 입니다.
Party leader is '%s'.
*/
	MSG_NOTIFY_PARTY_ROLE_MASTER = 0x610,
/*20090701 to 20090715
전장 - [%s] : 시스템 오류로 입장 할 수 없습니다.
20090722 to 20180523
시스템 오류로 입장 할 수 없습니다.
Unable to enter due to system error.
*/
	MSG_ERROR_SYSTEM_ERROR_BATTLEFIELD = 0x611,
/*20090701 to 20090715
전장 - [%s] : 대기 인원 수 초과로 입장 할 수 없습니다.
20090722 to 20180523
대기 인원 수 초과로 입장 할 수 없습니다.
Cannot wait to enter the number of excess.
*/
	MSG_ERROR_FULL_ESROOM_BATTLEFIELD = 0x612,
/*20090701 to 20090715
전장 - [%s] : 이미 신청 되었습니다.
20090722 to 20180523
이미 신청 되었습니다.
Has already been applied.
*/
	MSG_ERROR_DOUBLE_OFFER_BATTLEFIELD = 0x613,
/*20090701 to 20090715
전장 - [%s] : 대기 시간이 초과되어 등록이 취소 되었습니다.
20090722 to 20180523
대기 시간이 초과되어 등록이 취소 되었습니다.
Registration has been cancelled because of the excessive waiting time.
*/
	MSG_ERROR_WAIT_TIMEOUT_BATTLEFIELD = 0x614,
/*20090701 to 20090715
전장 - [%s] : 입장 조건이 맞지 않아, 등록이 취소 되었습니다.
20090722 to 20180523
입장 조건이 맞지 않아, 등록이 취소 되었습니다.
Unregistered because admission requirements are not matching.
*/
	MSG_ERROR_BATTLEFILD_ENTER_BATTLEFIELD = 0x615,
/*20090701 to 20090715
전장 - [%s] : 오류가 발생하여 등록이 취소 되었습니다.
20090722 to 20180523
오류가 발생하여 등록이 취소 되었습니다.
Was unregistered and error.
*/
	MSG_ERROR_DROP_ENTRANCESTATION_BATTLEFIELD = 0x616,
#endif
#if PACKETVER >= 20090708
/*20090708 to 20180523
[%s]의 연계 스킬입니다.
The skill need [%s].
*/
	MSG_USESKILL_FAIL_COMBOSKILL = 0x617,
/*20090708 to 20180523
특정스킬 의 연계 스킬입니다.
The skill need a particular skill.
*/
	MSG_USESKILL_FAIL_COMBOSKILL2 = 0x618,
/*20090708 to 20180523
기구체 %d 개가 필요합니다
Requires %d mind bullets
*/
	MSG_USESKILL_FAIL_SPIRITS = 0x619,
/*20090708 to 20090708
기구체 %d 개가 필요합니다
Requires %d mind bullets
20090715 to 20180523
기구체가 필요합니다
Mind Bullet is required.
*/
	MSG_USESKILL_FAIL_SPIRITS2 = 0x61a,
#endif
#if PACKETVER >= 20090729
/*20090729 to 20180523
최대 소지량 보다 많은 룬스톤을 제작할 수 없습니다.
Cannot create rune stone more than the maximum amount.
*/
	MSG_RUNESTONE_MAKEERROR_OVERCOUNT = 0x61b,
/*20090729 to 20180523
전장 리스트를 받을 수 없는 상태입니다. 확인 후 다시 시도 해 주세요.
Not able to receive battle field list. Please check and try again
*/
	MSG_ERROR_LIST_OPEN_BATTLEFIELD = 0x61c,
/*20090729 to 20180523
레벨이 부족하여 입장 할 수 없습니다.
Level is not high enough to enter
*/
	MSG_ERROR_LEVEL_LIMIT_BATTLEFIELD = 0x61d,
#endif
#if PACKETVER >= 20090805
/*20090805 to 20180523
 1차 직업 스킬 %d개를 더 올려 주십시오.
You must consume all '%d' points in your 1st Tab.
*/
	MSG_UPGRADESKILLERROR_MORE_FIRSTJOBSKILL = 0x61e,
#endif
#if PACKETVER >= 20091013
/*20091013 to 20180523
 1차 혹은 2차 직업 스킬 %d개를 더 올려 주십시오.
You must consume all '%d' remaining points in your 2nd Tab. 1st Tab is already done.
*/
	MSG_UPGRADESKILLERROR_MORE_SECONDJOBSKILL = 0x61f,
/*20091013 to 20180523
변환 가능한 아이템
Items available for conversion
*/
	MSG_ITEMSYOUCANCHANGE = 0x620,
/*20091013 to 20180523
변환할 아이템
Insert items to convert
*/
	MSG_ITEMS_FOR_CHANGE = 0x621,
/*20091013 to 20180523
변환이 불가능한 조합 입니다.
Inconvertible combination
*/
	MSG_SKILL_RECIPE_NOTEXIST = 0x622,
/*20091013 to 20180523
인벤토리의 무게가 너무 무겁습니다.
Inventory weight is too much
*/
	MSG_SKILL_INVENTORY_WEIGHT_OVER = 0x623,
/*20091013 to 20180523
인벤토리를 공간을 확보해주세요.
Please secure some room in the inventory
*/
	MSG_SKILL_INVENTORY_KINDCNT_OVER = 0x624,
/*20091013 to 20180523
재료가 존재하지 않습니다.
Material doesn't exist
*/
	MSG_SKILL_MATERIAL_FAIL = 0x625,
/*20091013 to 20180523
성공하였습니다.
Successful.
*/
	MSG_SKILL_SUCCESS = 0x626,
/*20091013 to 20180523
실패 하였습니다.
Failed.
*/
	MSG_SKILL_FAIL = 0x627,
/*20091013 to 20180523
실패하여 모든 재료가 사라졌습니다.
all materials are gone due to failure
*/
	MSG_SKILL_FAIL_MATERIAL_DESTROY = 0x628,
/*20091013 to 20180523
지정하신 탭 이름이 너무 길어 변경 할 수 없습니다.
unable to change the name of the specified tab, because it's too long.
*/
	MSG_FAILED_CHANGE_TABNAME = 0x629,
/*20091013 to 20180523
더 이상 추가 할 수 없습니다.
Cannot add more.
*/
	MSG_FAILED_ADD_TAB = 0x62a,
/*20091013 to 20180523
인증에 실패 했습니다.
Authentication failed.
*/
	MSG_FAILED_LOCKSERVER = 0x62b,
/*20091013 to 20101012
봇 체크
20101019 to 20101019
자동 로그인 방지
20101026 to 20180523
자동 입력 방지
Bot checks
*/
	MSG_BOT_CHECK = 0x62c,
/*20091013 to 20180523
감정이 않된 아이템은 재료로 사용할 수 없습니다.
Items cannot be used in materials cannot be emotional.
*/
	MSG_SKILL_FAIL_MATERIAL_IDENTITY = 0x62d,
/*20091013 to 20180523
접속하신 IP는 라그나로크 온라인 이용이 불가능 합니다. 고객 지원 센터 또는 홈페이지로 문의 해 주십시오.
It is impossible to connect using this IP in Ragnarok Online. Please contact the customer support center or home.
*/
	MSG_BAN_IP_BLOCK = 0x62e,
/*20091013 to 20180523
비밀번호가 6회 이상 잘못 입력되어 잠시 동안 접속이 제한됩니다. 고객님의 개인정보를 다시 한 번 확인해 주시길 바랍니다.
You have entered a wrong password for more than six times, please check your personal information again.
*/
	MSG_BAN_INVALID_PWD_CNT = 0x62f,
/*20091013 to 20180523
합성에 사용한 아이템은 소모됩니다. 괜찮겠습니까?
Consumption items are used in the synthesis. Are you sure?
*/
	MSG_MIX_ACCEPT = 0x630,
/*20091013 to 20180523
왼쪽에 보이는 글자 및 숫자조합을 입력해주세요.
Please input the captcha code found at your left side.
*/
	MSG_BOT_CHECK_NOTIC = 0x631,
/*20091013 to 20180523
전장 설명 - 
Describes the battlefield --
*/
	MSG_DESCRIBE_BATTLEFIELD = 0x632,
/*20091013 to 20180523
입장 대기 상태 - 
Waiting for admission --
*/
	MSG_BATTLEFIELD_STATUS = 0x633,
/*20091013 to 20180523
전장 입장 신청 도움말
Request help battle position
*/
	MSG_BATTLEFIELD_HELP = 0x634,
#endif
#if PACKETVER >= 20091015
/*20091015 to 20180523
죄송합니다. 해당 직업의 캐릭터는 현재 테스트를 위해서 접속이 금지됩니다.
Sorry the character you are trying to use is banned for testing connection.
*/
	MSG_BAN_NOT_ALLOWED_JOBCLASS = 0x635,
#endif
#if PACKETVER >= 20091027
/*20091027 to 20180523
모든 장비 해제
Remove all equipment
*/
	MSG_REMOVE_EQUIPEDITEM = 0x636,
#endif
#if PACKETVER >= 20091103
/*20091103 to 20180523
미니 아이콘
Mini Icon
*/
	MSG_MINI_ICON = 0x637,
/*20091103 to 20180523
진영 A  :  진영 B
Camp A: Camp B
*/
	MSG_BATTLEFIELD_TEAM = 0x638,
/*20091103 to 20100616
대기 상태
20100622 to 20180523
대기열
Wait
*/
	MSG_WAIT_STATUS = 0x639,
/*20091103 to 20180523
전장 신청 취소 알림
cancellation notice of Battlefield registration.
*/
	MSG_NOTIFY_BATTLEFIELD_CANCEL = 0x63a,
/*20091103 to 20180523
전장 필요 인원
Required field for staff
*/
	MSG_BATTLEFIELD_COUNT = 0x63b,
/*20091103 to 20180523
전장 A 대기 인원
Battlefield staff A is waiting.
*/
	MSG_BATTLEFIELD_ATEAM_COUNT = 0x63c,
/*20091103 to 20180523
전장 B 대기 인원
Battlefield staff B is waiting.
*/
	MSG_BATTLEFIELD_BTEAM_COUNT = 0x63d,
/*20091103 to 20180523
내 대기 상황 : %d(진영 A)
Waiting for my situation: %d (Camp A)
*/
	MSG_BATTLEFIELD_ATEAM_WAIT = 0x63e,
/*20091103 to 20180523
내 대기 상황 : %d(진영 B)
Waiting for my situation: %d (Camp B)
*/
	MSG_BATTLEFIELD_BTEAM_WAIT = 0x63f,
/*20091103 to 20180523
전장 아이콘을 보여줍니다.
Battlefield display icon.
*/
	MSG_SHOW_BATTLEFIELD_ICON = 0x640,
/*20091103 to 20180523
전장 아이콘을 보여주지 않습니다.
Does not display the icon field.
*/
	MSG_DONT_SHOW_BATTLEFIELD_ICON = 0x641,
/*20091103 to 20180523
전장 이동 알림
Field notification was moved.
*/
	MSG_NOTIFY_BATTLEFIELD_MOVE = 0x642,
/*20091103 to 20180523
전장 입장 보류 알림
Admission pending notification of the battlefield
*/
	MSG_NOTIFY_BATTLEFIELD_DEFER = 0x643,
/*20091103 to 20180523
누군가
Anyone
*/
	MSG_WHO_IS = 0x644,
/*20091103 to 20180523
 [%s](으)로부터 '%d'의 데미지를 받았습니다.
 [%s] deal '%d' damage on you.
*/
	MSG_I_RECEIVED_DAMAGE = 0x645,
/*20091103 to 20091104
 [%s]가 [%s](으)로부터 '%d'의 데미지를 받았습니다.
20091110 to 20180523
 [%s]님이 [%s](으)로부터 '%d'의 데미지를 받았습니다.
 [%s] received damage from [%s] with '%d' damage.
*/
	MSG_PARTY_RECEIVED_DAMAGE = 0x646,
/*20091103 to 20180523
 [%s]에게 '%d'의 데미지를 주었습니다.
 [%s] received '%d' damage.
*/
	MSG_I_GAVE_DAMAGE = 0x647,
/*20091103 to 20091104
 [%s님]가 [%s]에게 '%d'의 데미지를 주었습니다.
20091110 to 20180523
 [%s]님이 [%s]에게 '%d'의 데미지를 주었습니다.
 [%s] deal damage to [%s] with '%d' damage.
*/
	MSG_PARTY_GAVE_DAMAGE = 0x648,
/*20091103 to 20180523
%s %d 개 드롭
You dropped '%s' (%d).
*/
	MSG_DROP_ITEM = 0x649,
/*20091103 to 20180523
 [%s]퀘스트의 [%s]몬스터를 처치하였습니다. (%d/%d)
[%s] Quest - defeated [%s] progress (%d/%d)
*/
	MSG_CLEAR_QUEST_MONSTER = 0x64a,
/*20091103 to 20180523
%s 퀘스트가 삭제 되었습니다.
The Quest '%s' has been removed.
*/
	MSG_DELETE_QUEST = 0x64b,
/*20091103 to 20180523
[%s]님이 
[%s] has 
*/
	MSG_NOTIFY_WHO = 0x64c,
/*20091103 to 20180523
'%d'의 경험치를 
You acquired '%d' Experience Points
*/
	MSG_NOTIFY_EXP = 0x64d,
/*20091103 to 20180523
'%d'의 잡경험치를 
You acquired '%d' Job Experience Points
*/
	MSG_NOTIFY_JOBEXP = 0x64e,
/*20091103 to 20180523
획득했습니다.
 gained.
*/
	MSG_GET = 0x64f,
/*20091103 to 20180523
상실했습니다.
 has lost.
*/
	MSG_LOSS = 0x650,
/*20091103 to 20180523
 [%s](으)로부터 '%d'의 코인을 스틸했습니다.
From [%s], '%d' coins were stolen.
*/
	MSG_NOTIFY_STEAL_COIN = 0x651,
/*20091103 to 20180523
전투 메시지
Battle Message
*/
	MSG_VIEW_COMBAT_MSG = 0x652,
/*20091103 to 20180523
파티원 전투 메시지
Display Party Battle Message
*/
	MSG_VIEW_PARTY_COMBAT_MSG = 0x653,
/*20091103 to 20180523
획득 경험치
Display Experience Message
*/
	MSG_VIEW_GETTING_EXP_MSG = 0x654,
/*20091103 to 20180523
파티원의 획득 경험치
Display Party Experience Message
*/
	MSG_VIEW_PARTY_GETTING_EXP_MSG = 0x655,
/*20091103 to 20180523
퀘스트 정보 표시
Display Quest Info Message
*/
	MSG_VIEW_QUEST_INFO_MSG = 0x656,
/*20091103 to 20180523
전장 정보 표시
Display Battlefield Message
*/
	MSG_VIEW_BATTLEFIELD_INFO_MSG = 0x657,
#endif
#if PACKETVER >= 20091104
/*20091104 to 20180523
[%s]에게 
[%s] 
*/
	MSG_NOTIFY_TARGET_WHO = 0x658,
/*20091104 to 20091104
[%s] 스킬을 캐스팅합니다.
20091110 to 20180523
[%s] 스킬을 사용합니다.
Casts [%s] skill.
*/
	MSG_NOTIFY_SKILL_TO_TARGET = 0x659,
#endif
#if PACKETVER >= 20091110
/*20091110 to 20180523
기능제한상태
Activate lock function
*/
	MSG_LOCK_MOUSE = 0x65a,
/*20091110 to 20180523
기능제한해제상태
Deactivate lock function
*/
	MSG_UNLOCK_MOUSE = 0x65b,
#endif
#if PACKETVER >= 20091201
/*20091201 to 20180523
[%s]님이 [%s](으)로부터 '%s' 를 획득 했습니다.
Citizens of Midgard, Lady Luck shines upon [%s] !! [%s] has awarded the player with '%s' !!
*/
	MSG_BROADCASTING_SPECIAL_ITEM_OBTAIN = 0x65c,
#endif
#if PACKETVER >= 20091208
/*20091208 to 20180523
소드맨
Swordman
*/
	MSG_JOB_SWORDMAN = 0x65d,
/*20091208 to 20180523
매지션
Magician
*/
	MSG_JOB_MAGICIAN = 0x65e,
/*20091208 to 20180523
아처
Archer
*/
	MSG_JOB_ARCHER = 0x65f,
/*20091208 to 20180523
어콜라이트
Acolyte
*/
	MSG_JOB_ACOLYTE = 0x660,
/*20091208 to 20180523
머첸트
Merchant
*/
	MSG_JOB_MERCHANT = 0x661,
/*20091208 to 20180523
씨프
Thief
*/
	MSG_JOB_THIEF = 0x662,
/*20091208 to 20180523
나이트
Knight
*/
	MSG_JOB_KNIGHT = 0x663,
/*20091208 to 20180523
프리스트
Priest
*/
	MSG_JOB_PRIEST = 0x664,
/*20091208 to 20180523
위저드
Wizard
*/
	MSG_JOB_WIZARD = 0x665,
/*20091208 to 20180523
블랙스미스
Black Smith
*/
	MSG_JOB_BLACKSMITH = 0x666,
/*20091208 to 20180523
헌터
Hunter
*/
	MSG_JOB_HUNTER = 0x667,
/*20091208 to 20180523
어새신
Assasin
*/
	MSG_JOB_ASSASSIN = 0x668,
/*20091208 to 20180523
크루세이더
Crusader
*/
	MSG_JOB_CRUSADER = 0x669,
/*20091208 to 20180523
몽크
Monk
*/
	MSG_JOB_MONK = 0x66a,
/*20091208 to 20180523
세이지
Sage
*/
	MSG_JOB_SAGE = 0x66b,
/*20091208 to 20180523
로그
Rogue
*/
	MSG_JOB_ROGUE = 0x66c,
/*20091208 to 20180523
알케미스트
Alchemist
*/
	MSG_JOB_ALCHEMIST = 0x66d,
/*20091208 to 20180523
바드
Bard
*/
	MSG_JOB_BARD = 0x66e,
/*20091208 to 20180523
댄서
Dancer
*/
	MSG_JOB_DANCER = 0x66f,
/*20091208 to 20100310
룬나이트
20100316 to 20180523
룬 나이트
Rune Knight
*/
	MSG_JOB_RUNE_KNIGHT = 0x670,
/*20091208 to 20180523
워록
Warlock
*/
	MSG_JOB_WARLOCK = 0x671,
/*20091208 to 20180523
레인져
Ranger
*/
	MSG_JOB_RANGER = 0x672,
/*20091208 to 20100310
아크비숍
20100316 to 20180523
아크 비숍
Arc Bishop
*/
	MSG_JOB_ARCHBISHOP = 0x673,
/*20091208 to 20180523
미케닉
Mechanic
*/
	MSG_JOB_MECHANIC = 0x674,
/*20091208 to 20100310
길로틴크로스
20100316 to 20180523
길로틴 크로스
Guillotine Cross
*/
	MSG_JOB_GUILLOTINE_CROSS = 0x675,
/*20091208 to 20180523
로얄가드
Royal Guard
*/
	MSG_JOB_ROYAL_GUARD = 0x676,
/*20091208 to 20180523
소서러
Sorcerer
*/
	MSG_JOB_SORCERER = 0x677,
/*20091208 to 20180523
민스트럴
Minstrel
*/
	MSG_JOB_MINSTREL = 0x678,
/*20091208 to 20180523
원더러
Wanderer
*/
	MSG_JOB_WANDERER = 0x679,
/*20091208 to 20180523
수라
Sura
*/
	MSG_JOB_SURA = 0x67a,
/*20091208 to 20180523
제네릭
Genetic
*/
	MSG_JOB_GENETIC = 0x67b,
/*20091208 to 20100310
쉐도우체이서
20100316 to 20180523
쉐도우 체이서
Shadow Chaser
*/
	MSG_JOB_SHADOW_CHASER = 0x67c,
/*20091208 to 20100113
소드맨_하이
20100119 to 20180523
소드맨 하이
High Swordman
*/
	MSG_JOB_SWORDMAN_H = 0x67d,
/*20091208 to 20100113
매지션_하이
20100119 to 20180523
매지션 하이
High Magician
*/
	MSG_JOB_MAGICIAN_H = 0x67e,
/*20091208 to 20100113
아처_하이
20100119 to 20180523
아처 하이
High Archer
*/
	MSG_JOB_ARCHER_H = 0x67f,
/*20091208 to 20100113
어콜라이트_하이
20100119 to 20180523
어콜라이트 하이
High Acolyte
*/
	MSG_JOB_ACOLYTE_H = 0x680,
/*20091208 to 20100113
머첸트_하이
20100119 to 20180523
머첸트 하이
High Merchant
*/
	MSG_JOB_MERCHANT_H = 0x681,
/*20091208 to 20100113
시프_하이
20100119 to 20100223
시프 하이
20100302 to 20180523
씨프 하이
High Thief
*/
	MSG_JOB_THIEF_H = 0x682,
/*20091208 to 20180523
로드나이트
Lord Knight
*/
	MSG_JOB_KNIGHT_H = 0x683,
/*20091208 to 20180523
하이프리스트
High Priest
*/
	MSG_JOB_PRIEST_H = 0x684,
/*20091208 to 20180523
하이위저드
High Wizard
*/
	MSG_JOB_WIZARD_H = 0x685,
/*20091208 to 20180523
화이트스미스
White Smith
*/
	MSG_JOB_BLACKSMITH_H = 0x686,
/*20091208 to 20180523
스나이퍼
Sniper
*/
	MSG_JOB_HUNTER_H = 0x687,
/*20091208 to 20180523
어새신크로스
Assasin Cross
*/
	MSG_JOB_ASSASSIN_H = 0x688,
/*20091208 to 20180523
팔라딘
Paladin
*/
	MSG_JOB_CRUSADER_H = 0x689,
/*20091208 to 20180523
챔피온
Champion
*/
	MSG_JOB_MONK_H = 0x68a,
/*20091208 to 20180523
프로페서
Professor
*/
	MSG_JOB_SAGE_H = 0x68b,
/*20091208 to 20180523
스토커
Stalker
*/
	MSG_JOB_ROGUE_H = 0x68c,
/*20091208 to 20180523
크리에이터
Creator
*/
	MSG_JOB_ALCHEMIST_H = 0x68d,
/*20091208 to 20180523
클로운
Clown
*/
	MSG_JOB_BARD_H = 0x68e,
/*20091208 to 20180523
집시
Gypsy
*/
	MSG_JOB_DANCER_H = 0x68f,
/*20091208 to 20180523
노비스
Wedding
*/
	MSG_JOB_NOVICE = 0x690,
/*20091208 to 20180523
하이노비스
High Novice
*/
	MSG_JOB_NOVICE_H = 0x691,
/*20091208 to 20180523
슈퍼노비스
Super Novice
*/
	MSG_JOB_SUPERNOVICE = 0x692,
/*20091208 to 20180523
건슬링거
Gunslinger
*/
	MSG_JOB_GUNSLINGER = 0x693,
/*20091208 to 20180523
닌자
Ninja
*/
	MSG_JOB_NINJA = 0x694,
/*20091208 to 20100105
태권소녀,태권소년
20100112 to 20100310
태권소년소녀
20100316 to 20180523
태권소년/소녀
Taekwon F/M
*/
	MSG_JOB_TAEKWON = 0x695,
/*20091208 to 20180523
권성
Star Gladiator
*/
	MSG_JOB_STAR = 0x696,
/*20091208 to 20180523
소울링커
Soul Linker
*/
	MSG_JOB_LINKER = 0x697,
/*20091208 to 20180523
파티모집
Party Recruitment
*/
	MSG_SEEK_PARTY_MEMBER = 0x698,
/*20091208 to 20100310
파티 부킹 리스트
20100316 to 20180523
파티 모집 리스트
Party Booking List
*/
	MSG_SEEK_PARTY_LIST = 0x699,
/*20091208 to 20180523
파티 모집 중
Recruiting Party
*/
	MSG_SEEK_PARTY_CHECK = 0x69a,
#endif
#if PACKETVER >= 20091215
/*20091215 to 20180523
[활]을 장착한 상태여야 합니다.
[Bow] must be equipped.
*/
	MSG_FAIL_NEED_EQUIPPED_BOW = 0x69b,
/*20091215 to 20180523
[악기/채찍]을 장착한 상태여야 합니다.
[Musical Instrument/Whip] must be equipped.
*/
	MSG_FAIL_NEED_EQUIPPED_INSTRUMENT_WHIP = 0x69c,
/*20091215 to 20180523
영문과 숫자만 사용가능합니다.
Only alphanumeric characters are allowed.
*/
	MSG_BAD_CHAR = 0x69d,
/*20091215 to 20180523
알림
Notice
*/
	MSG_ALRAM = 0x69e,
/*20091215 to 20180523
상점 정보가 정확하지 않아 아이템 구매가 실패하였습니다.
Item purchase failed due to incorrect shop information.
*/
	MSG_FAIL_BUY_ITEM_INVALID_MCSTORE = 0x69f,
#endif
#if PACKETVER >= 20100105
/*20100105 to 20180523
소지 아이템 창에서 버릴 수 있습니다.
Item cannot be discarded from the window.
*/
	MSG_CAN_DROP_ITEM_TO_ITEMWND = 0x6a0,
#endif
#if PACKETVER >= 20100112
/*20100112 to 20180523
시간
Time
*/
	MSG_TIME = 0x6a1,
/*20100112 to 20180523
맵
Map
*/
	MSG_MAP = 0x6a2,
/*20100112 to 20180523
거래 상태에서는 아이템 사용 및 장비 착용/해제를 할 수 없습니다.
You can't use, equip or disarm items when you're trading.
*/
	MSG_CANT_USE_WHEN_OPENED_EXCHANGEWND = 0x6a3,
/*20100112 to 20180523
미지정값
Unspecified value
*/
	MSG_HOTKEY_UNKOWN = 0x6a4,
#endif
#if PACKETVER >= 20100126
/*20100126 to 20180523
/stateinfo : 상태 아이콘에 대한 설명을 보여줍니다. On Off
/stateinfo: Shows the description of status icons. On Off
*/
	MSG_EXPLAIN_STATEINFO = 0x6a5,
/*20100126 to 20180523
상태 정보 On : 상태 아이콘에 대한 설명이 표시됩니다. 
Status Information On: Status icon description is enabled.
*/
	MSG_SHOW_STATEINFO_ON = 0x6a6,
/*20100126 to 20180523
상태 정보 Off: 상태 아이콘에 대한 설명이 표시되지 않습니다.
Status Information Off: Status icon description is disabled.
*/
	MSG_SHOW_STATEINFO_OFF = 0x6a7,
/*20100126 to 20100126
같은 아이템은 한번에 %d개 이상은 살수 없습니다.
20100202 to 20180523
같은 아이템은 한번에 %d개 이상은 살 수 없습니다.
It is not possible to purchase the same item more than %d pieces at a time
*/
	MSG_LIMIT_BUY_ITEM2 = 0x6a8,
#endif
#if PACKETVER >= 20100202
/*20100202 to 20180523
같은 아이템은 한번에 %d개 이상은 팔 수 없습니다.
It is not possible to purchase the same item more than %d pieces at a time
*/
	MSG_LIMIT_SELL_ITEM = 0x6a9,
/*20100202 to 20100203
총 구매 가능 개수는 %d개 입니다.
20100209 to 20180523
해당 아이템의 총 구매 가능 개수는 %d개 입니다.
Can purchase upto %d pieces of the same item at a time.
*/
	MSG_CAN_BUY_ITEM_NUM = 0x6aa,
#endif
#if PACKETVER >= 20100209
/*20100209 to 20180523
설정한 내용은 정상 종료 시 [%s\%s]에 저장됩니다.
User customized key is saved to [%s\%s]
*/
	MSG_SAVE_HOTKEY_TO_FILE = 0x6ab,
#endif
#if PACKETVER >= 20100216
/*20100216 to 20180523
[%s] 님은 현재 교환 신청을 받을 수 없는 상태입니다.
[%s] is currently on trade and cannot accept the request.
*/
	MSG_CHARACTER_IS_BUSY = 0x6ac,
#endif
#if PACKETVER >= 20100309
/*20100309 to 20180523
RO_HELP
RO_HELP.
*/
	MSG_RO_HELP = 0x6ad,
#endif
#if PACKETVER >= 20100316
/*20100316 to 20180523
모루가 존재 하지 않습니다.
Anvil does not exist.
*/
	MSG_HAVENOT_ANVIL = 0x6ae,
/*20100316 to 20180523
노비스 레벨 10 이하는 귓속말이 금지됩니다
Novice below level 10 is not allowed to whisper.
*/
	MSG_WHISPER_BLOCK_NOVICE_LEVEL10 = 0x6af,
#endif
#if PACKETVER >= 20100323
/*20100323 to 20180523
공격
Attack
*/
	MSG_JOB_ATTACKER = 0x6b0,
/*20100323 to 20180523
방어
Defense
*/
	MSG_JOB_TANKER = 0x6b1,
/*20100323 to 20180523
회복
Consumables
*/
	MSG_JOB_HEALER = 0x6b2,
/*20100323 to 20180523
보조
Support
*/
	MSG_JOB_ASSISTANCE = 0x6b3,
/*20100323 to 20180523
파티 모집 관련 명령어
Party recruitment related command
*/
	MSG_DESCRIBE_PARTY_BOOKING = 0x6b4,
#endif
#if PACKETVER >= 20100330
/*20100330 to 20180523
길드 동맹신청이 불가능합니다
Guild alliance application is not possible.
*/
	MSG_GUILD_ALLY_REQUEST_DISABLE = 0x6b5,
/*20100330 to 20180523
길드 적대신청이 불가능합니다
Guild hostility application is not possible.
*/
	MSG_GUILD_HOSTILE_REQUEST_DISABLE = 0x6b6,
/*20100330 to 20180523
아지트맵에서는 친구추가가 불가능합니다
Adding friends is not possible in this map.
*/
	MSG_FRIEND_ADD_FALSE_AGIT = 0x6b7,
#endif
#if PACKETVER >= 20100406
/*20100406 to 20180523
구매노점 개설
Buying Store Window
*/
	MSG_BUYINGSTORE_MAKEWND_TITLE = 0x6b8,
/*20100406 to 20180523
구매가 :
Price: 
*/
	MSG_BUYINGSTORE_MAKEWND_PRICE = 0x6b9,
/*20100406 to 20180523
소지액 : 
Money: 
*/
	MSG_BUYINGSTORE_MAKEWND_MYZENY = 0x6ba,
/*20100406 to 20180523
구매 한도액
Purchase Zeny Limit
*/
	MSG_BUYINGSTORE_MAKEWND_LIMITZENY = 0x6bb,
/*20100406 to 20100414
판매 가능한 아이템 목록
Available items:
20100420 to 20180523
구매할 아이템을 등록하지 않았습니다. 구매하실 아이템을 등록해 주세요
Please register the item first that has to be purchased.
*/
	MSG_BUYINGSTORE_MAKEWND_ADDITEM = 0x6bc,
/*20100406 to 20100414
나의 구매노점
Purchase list:
20100420 to 20180523
%s 아이템의 가격을 입력해 주세요.
Enter the price for item %s.
*/
	MSG_BUYINGSTORE_MAKEWND_INPUTPRICE = 0x6bd,
/*20100406 to 20100414
구매 노점
Wanted items
20100420 to 20180523
%s 아이템의 가격을 9999만 Zeny이하로 입력해 주세요.
Enter the price for item %s. It has to be below 99990000 Zeny.
*/
	MSG_BUYINGSTORE_MAKEWND_REINPUTPRICE = 0x6be,
/*20100406 to 20100414
제한금액 : %d Zeny
20100420 to 20180523
%s 아이템의 구매수량을 입력해 주세요.
Enter the item number for %s.
*/
	MSG_BUYINGSTORE_MAKEWND_INPUTNUM = 0x6bf,
/*20100406 to 20100414
%s %s Zeny %d 개
Buying %s for %s Zeny. Amount: %d.
20100420 to 20180523
%s 아이템의 소지수량과 구매수량의 합이 9999개 이상입니다. 9999개 이하의 수량을 입력해 주세요.
The sum of purchasing and belonging items is over 9999. The sum has to be bellow 9999.
*/
	MSG_BUYINGSTORE_MAKEWND_REINPUTNUM = 0x6c0,
/*20100406 to 20100414
%s  :  %s  Zeny => %s EA
%s: %s  Zeny => %s ea.
20100420 to 20180523
중복된 아이템이 존재합니다.
You have duplicate items in your purchase list.
*/
	MSG_BUYINGSTORE_MAKEWND_DUPLICATEITEM = 0x6c1,
/*20100406 to 20100414
%s %d 개 구매.
20100420 to 20180523
제한 금액을 입력해 주세요
Enter the limited price.
*/
	MSG_BUYINGSTORE_MAKEWND_INPUTLIMITZENY = 0x6c2,
/*20100406 to 20100414
아이템을 모두 구매했습니다.
You purchased all items.
20100420 to 20180523
입력한 제한금액이 소지금액을 초과합니다. 다시 설정해 주세요
You have entered a greater amount of zeny than you have. Please check your zeny.
*/
	MSG_BUYINGSTORE_MAKEWND_REINPUTLIMITZENY = 0x6c3,
/*20100406 to 20100414
해당 아이템의 총 판매 가능 개수는 %d개 입니다.
The max. number of items you can sell is %d.
20100420 to 20180523
%s  :  %s  Zeny => %s EA
%s: %s  Zeny => %s ea.
*/
	MSG_BUYINGSTORE_MAKEWND_ITEMLIST = 0x6c4,
/*20100406 to 20100414
가격이 0 Zeny인 아이템이 존재합니다. 가격을 입력해 주세요.
20100420 to 20180523
구매 가능한 아이템 목록
Available items:
*/
	MSG_BUYINGSTORE_MIRRORBUYITEMLIST = 0x6c5,
/*20100406 to 20100414
가격이 9999만 Zeny이상인 아이템이 존재합니다. 9999만 Zeny 이하의 가격을 입력해 주세요.
20100420 to 20180523
나의 구매노점
Purchase list:
*/
	MSG_BUYINGSTORE_MYSHOPWND_TITLE = 0x6c6,
/*20100406 to 20100414
구매수량이 0 개인 아이템이 존재합니다. 수량을 입력해 주세요.
20100420 to 20110208
제한금액 : %d Zeny
20110210 to 20180523
제한금액 : %s Zeny
Price limit: %s Zeny
*/
	MSG_BUYINGSTORE_MYSHOPWND_LIMITZENY = 0x6c7,
/*20100406 to 20100414
구매수량이 9999개 이상인 아이템이 존재합니다. 9999개 이하의 수량을 입력해 주세요.
20100420 to 20180523
%s %s Zeny %d 개
Buying %s for %s Zeny. Amount: %d.
*/
	MSG_BUYINGSTORE_MYSHOPWND_ITEMINFO = 0x6c8,
/*20100406 to 20100414
중복된 아이템이 존재합니다.
You have duplicate items in your purchase list.
20100420 to 20180523
구매 노점
Wanted items
*/
	MSG_BUYINGSTORE_SHOPWND_TITLE = 0x6c9,
/*20100406 to 20100414
구매상점 열기에 실패했습니다.
20100420 to 20180523
판매 가능한 아이템 목록
Available items:
*/
	MSG_BUYINGSTORE_MIRRORSELLWND_TITLE = 0x6ca,
/*20100406 to 20100414
구매상점 열기에 실패했습니다.
20100420 to 20180523
해당 아이템의 총 판매 가능 개수는 %d개 입니다.
The max. number of items you can sell is %d.
*/
	MSG_BUYINGSTORE_SELLWND_LIMITNUM = 0x6cb,
/*20100406 to 20100414
구매가능한 최대 갯수를 초과하였습니다.
20100420 to 20110208
구매자의 잔액이 부족하니 다시 설정해 주세요
20110210 to 20180523
구매노점의 제한금액을 초과하여 판매할 수 없습니다.
Buyer has insufficient money, lower the amount of items you're selling.
*/
	MSG_BUYINGSTORE_SELLWND_LACKBUYERZENY = 0x6cc,
/*20100406 to 20100414
남은 잔액으로 아이템 구매가 불가능 합니다.
20100420 to 20180523
구매상점 개설에 실패했습니다.
Failed to open purchase shop.
*/
	MSG_BUYINGSTORE_OPEN_FAILED = 0x6cd,
#endif
#if PACKETVER >= 20100413
/*20100413 to 20100414
소환된 정령이 없습니다.
You don't have any summoned spirits.
20100420 to 20180523
아이템의 총 무게가 %d 만큼 소지 한계량을 초과합니다. 다시 설정해 주세요.
You exceed the total amount of items.
*/
	MSG_BUYINGSTORE_OVERWEIGHT = 0x6ce,
/*20100413 to 20100414
서버연합대전 제약사항 입니다.
This is a restricted server.
20100420 to 20180523
제한금액만큼의 아이템을 모두 구매하였습니다.
You have purchased all items within the limited price.
*/
	MSG_BUYINGSTORE_TRADE_OVERLIMITZENY = 0x6cf,
#endif
#if PACKETVER >= 20100420
/*20100420 to 20180523
아이템을 모두 구매했습니다.
You purchased all items.
*/
	MSG_BUYINGSTORE_TRADE_BUYCOMPLETE = 0x6d0,
/*20100420 to 20180523
구매자의 잔액이 부족하여 거래가 실패하였습니다.
Failed to deal because you have not enough Zeny.
*/
	MSG_BUYINGSTORE_TRADE_LACKBUYERZENY = 0x6d1,
/*20100420 to 20180523
%s %d개를 %dz에 판매하였습니다.
You have sold %s. Amount: %d. Total Zeny: %dz
*/
	MSG_BUYINGSTORE_TRADE_SELLCOMPLETE = 0x6d2,
/*20100420 to 20180523
%s 아이템은 희망 구매갯수보다 수량이 많아 판매하지 못하였습니다
%s item could not be sold because you do not have the wanted amount of items.
*/
	MSG_BUYINGSTORE_TRADE_OVERCOUNT = 0x6d3,
/*20100420 to 20180523
소환된 정령이 없습니다.
You don't have any summoned spirits.
20130807 to 20130814
판매할 아이템을 등록하지 않았습니다. 판매하실 아이템을 등록해 주세요
Has not registered to sell the item. Please register to sell the item
*/
	MSG_USESKILL_FAIL_EL_SUMMON = 0x6d4,
/*20100420 to 20180523
서버연합대전 제약사항 입니다.
This is a restricted server.
20130807 to 20130814
소환된 정령이 없습니다.
You don't have any summoned spirits.
*/
	MSG_AGAINSTSERVERSIEGEWARFARE_RESTRICTION = 0x6d5,
/*20100420 to 20180523
OTP 비밀번호는 6자리 입니다.
OTP password is 6 digits long.
20130807 to 20130814
서버연합대전 제약사항 입니다.
This is a restricted server.
*/
	MSG_OTP_MUST_6_CHAR = 0x6d6,
/*20100420 to 20180523
OTP 정보가 없습니다. 관리자에게 문의하시기 바랍니다.
OTP information is unavailable. Please contact your administrator.
20130807 to 20130814
OTP 비밀번호는 6자리 입니다.
OTP password is 6 digits long.
*/
	MSG_DB_ERROR = 0x6d7,
/*20100420 to 20180523
OTP 인증에 실패 했습니다.
OTP authentication failed.
20130807 to 20130814
OTP 정보가 없습니다. 관리자에게 문의하시기 바랍니다.
OTP information is unavailable. Please contact your administrator.
*/
	MSG_OTP_FAILED = 0x6d8,
/*20100420 to 20180523
파티광고가 추가되었습니다
Party ad has been added.
20130807 to 20130814
OTP 인증에 실패 했습니다.
OTP authentication failed.
*/
	MSG_PARTY_BOOKING_NOTIFY = 0x6d9,
/*20100420 to 20110718
파티원 모집 중
20110726 to 20180523
모집 중
Recruit party members
20130807 to 20130814
파티광고가 추가되었습니다
Party ad has been added.
*/
	MSG_PARTY_BOOKING_REQURT = 0x6da,
/*20100420 to 20180523
역할
Roles
20130807 to 20130814
모집 중
Recruit party members
*/
	MSG_PARTY_BOOKING_TYPE = 0x6db,
/*20100420 to 20180523
1차 직업
1st Jobs
20130807 to 20130814
역할
Roles
*/
	MSG_PARTY_BOOKING_TYPE_1 = 0x6dc,
/*20100420 to 20180523
2차 직업
2nd Jobs
20130807 to 20130814
1차 직업
1st Jobs
*/
	MSG_PARTY_BOOKING_TYPE_2 = 0x6dd,
/*20100420 to 20180523
3-1차 직업
3-1 Classes
20130807 to 20130814
2차 직업
2nd Jobs
*/
	MSG_PARTY_BOOKING_TYPE_3_1 = 0x6de,
/*20100420 to 20180523
3-2차 직업
3-2 Classes
20130807 to 20130814
3-1차 직업
3-1 Classes
*/
	MSG_PARTY_BOOKING_TYPE_3_2 = 0x6df,
/*20100420 to 20180523
전승 1차 직업
1st Job High
20130807 to 20130814
3-2차 직업
3-2 Classes
*/
	MSG_PARTY_BOOKING_TYPE_1PLUS = 0x6e0,
/*20100420 to 20180523
전승 2차 직업
2nd Jobs High
20130807 to 20130814
전승 1차 직업
1st Job High
*/
	MSG_PARTY_BOOKING_TYPE_2PLUS = 0x6e1,
/*20100420 to 20180523
기타 직업군
Other Jobs
20130807 to 20130814
전승 2차 직업
2nd Jobs High
*/
	MSG_PARTY_BOOKING_TYPE_ETC = 0x6e2,
/*20100420 to 20180523
모집 하기
Recruit
20130807 to 20130814
기타 직업군
Other Jobs
*/
	MSG_PARTY_BOOKING_REQURTING = 0x6e3,
/*20100420 to 20180523
파티원을 모집합니다.
Open party recruitment window.
20130807 to 20130814
모집 하기
Recruit
*/
	MSG_PARTY_BOOKING_REQURT_TIP = 0x6e4,
/*20100420 to 20110718
검색중 - 
20110726 to 20180523
검색 중 - 
Searching - 
20130807 to 20130814
파티원을 모집합니다.
Open party recruitment window.
*/
	MSG_PARTY_BOOKING_SEARCH = 0x6e5,
/*20100420 to 20180523
모두 선택
Select All
20130807 to 20130814
검색 중 - 
Searching - 
*/
	MSG_PARTY_BOOKING_ALL_SELECT = 0x6e6,
/*20100420 to 20180523
최소한 하나의 직업이 모집 중이어야 합니다.
Recruitment of at least one job must be running.
20130807 to 20130814
모두 선택
Select All
*/
	MSG_PARTY_BOOKING_ERR1 = 0x6e7,
/*20100420 to 20180523
최소 1개이상의 직업을 선택해 주셔야 합니다.
You have to select atleast 1 or more jobs.
20130807 to 20130814
최소한 하나의 직업이 모집 중이어야 합니다.
Recruitment of at least one job must be running.
*/
	MSG_PARTY_BOOKING_ERR2 = 0x6e8,
/*20100420 to 20180523
선택된 직업은 %d개입니다. 최대 6개까지만 직업을 선택할 수 있습니다.
You have selected %d Jobs. You can only select up to 6 different jobs.
20130807 to 20130814
최소 1개이상의 직업을 선택해 주셔야 합니다.
You have to select atleast 1 or more jobs.
*/
	MSG_PARTY_BOOKING_ERR3 = 0x6e9,
/*20100420 to 20180523
레벨에 숫자 이외의 문자는 들어갈 수 없습니다.
Only numeric characters are allowed.
20130807 to 20130814
선택된 직업은 %d개입니다. 최대 6개까지만 직업을 선택할 수 있습니다.
You have selected %d Jobs. You can only select up to 6 different jobs.
*/
	MSG_PARTY_BOOKING_ERR4 = 0x6ea,
/*20100420 to 20180523
레벨은 1~150 사이의 숫자를 입력해 주세요.
Please enter levels between 1~150.
20130807 to 20130814
레벨에 숫자 이외의 문자는 들어갈 수 없습니다.
Only numeric characters are allowed.
*/
	MSG_PARTY_BOOKING_ERR5 = 0x6eb,
#endif
#if PACKETVER >= 20100511
/*20100511 to 20180523
 해당 맵에서는 의상 장비가 보이지 않습니다.
Nothing found in the selected map.
20130807 to 20130814
레벨은 1~150 사이의 숫자를 입력해 주세요.
Please enter levels between 1~150.
*/
	MSG_DISABLE_COSTUMEITEM_MAP = 0x6ec,
#endif
#if PACKETVER >= 20100525
/*20100525 to 20180523
아이템을 착용할 수 있는 레벨이 아닙니다.
You cannot equip this item with your current level.
20130807 to 20130814
 해당 맵에서는 의상 장비가 보이지 않습니다.
Nothing found in the selected map.
*/
	MSG_CANNOT_EQUIP_ITEM_LEVEL = 0x6ed,
/*20100525 to 20180523
아이템을 사용할 수 있는 레벨이 아닙니다.
You cannot use this item with your current level.
20130807 to 20130814
아이템을 착용할 수 있는 레벨이 아닙니다.
You cannot equip this item with your current level.
*/
	MSG_CANNOT_USE_ITEM_LEVEL = 0x6ee,
#endif
#if PACKETVER >= 20100601
/*20100601 to 20180523
  채팅모드 OnOff 활성화
Enable Battlemode
20130807 to 20130814
아이템을 사용할 수 있는 레벨이 아닙니다.
You cannot use this item with your current level.
*/
	MSG_CHATMODE_ONOFF = 0x6ef,
/*20100601 to 20180523
탭사이즈 크기가 초과되어 추가할 수 없습니다.
Failed to add because you have reached the limit.
20130807 to 20130814
  채팅모드 OnOff 활성화
Enable Battlemode
*/
	MSG_OVER_TABSIZE = 0x6f0,
/*20100601 to 20100601
 창 표시 정보.
20100608 to 20180523
 창 표시 정보
Window Sign Information
20130807 to 20130814
탭사이즈 크기가 초과되어 추가할 수 없습니다.
Failed to add because you have reached the limit.
*/
	MSG_SET_CHATINFO = 0x6f1,
#endif
#if PACKETVER >= 20100608
/*20100608 to 20180523
판매
Sell
20130807 to 20130814
 창 표시 정보
Window Sign Information
*/
	MSG_SELL = 0x6f2,
/*20100608 to 20180523
구매
Purchase
20130807 to 20130814
판매
Sell
*/
	MSG_BUY = 0x6f3,
/*20100608 to 20180523
노점 검색
Search for Vends
20130807 to 20130814
구매
Purchase
*/
	MSG_SEARCH_STOREINFO = 0x6f4,
/*20100608 to 20180523
노점 이름
Shop Name
20130807 to 20130814
노점 검색
Search for Vends
*/
	MSG_STORE_NAME = 0x6f5,
/*20100608 to 20180523
수량
Quantity
20130807 to 20130814
노점 이름
Shop Name
*/
	MSG_SEARCH_ITEM_COUNT = 0x6f6,
/*20100608 to 20180523
가격
Cost
20130807 to 20130814
수량
Quantity
*/
	MSG_SEARCH_ITEM_PRICE = 0x6f7,
/*20100608 to 20180523
검색 결과가 너무 많습니다. 검색어를 자세히 입력 해 주세요.
Too much results have been found. Please do a more precisely search.
20130807 to 20130814
가격
Cost
*/
	MSG_SSI_FAILED_OVER_MAXCOUNT = 0x6f8,
/*20100608 to 20180523
해당 노점을 여시겠습니까?
Do you want to open a street stall?
20130807 to 20130814
검색 결과가 너무 많습니다. 검색어를 자세히 입력 해 주세요.
Too much results have been found. Please do a more precisely search.
*/
	MSG_OPEN_SEARCH_STORE = 0x6f9,
/*20100608 to 20180523
SSO 인증에 실패하였습니다.
Failed to recognize SSO.
20130807 to 20130814
해당 노점을 여시겠습니까?
Do you want to open a street stall?
*/
	MSG_SSO_FAILED = 0x6fa,
#endif
#if PACKETVER >= 20100615
/*20100615 to 20180523
현재 해당지역으로 이동 할 수 없습니다
Cannot move to the applied area.
20130807 to 20130814
SSO 인증에 실패하였습니다.
Failed to recognize SSO.
*/
	MSG_ZONE_MOVE_FAIL = 0x6fb,
/*20100615 to 20100622
포함 검색
20100629 to 20180523
단어가 포함된 아이템 검색
searching  item including the word
20130807 to 20130814
현재 해당지역으로 이동 할 수 없습니다
Cannot move to the applied area.
*/
	MSG_SEARCH_INCLUDED = 0x6fc,
/*20100615 to 20180523
탈퇴한 유저입니다.
User has been expelled.
20130807 to 20130814
단어가 포함된 아이템 검색
searching  item including the word
*/
	MSG_WITHDREW_USERS = 0x6fd,
/*20100615 to 20180523
게임 이용에 동의하지 않았습니다.
You have not accepted the user agreements yet.
20130807 to 20130814
탈퇴한 유저입니다.
User has been expelled.
*/
	MSG_DIDNOT_AGREE = 0x6fe,
/*20100615 to 20180523
존재 하지 않는 계정입니다.
You will not be disconnect from the game.
20130807 to 20130814
게임 이용에 동의하지 않았습니다.
You have not accepted the user agreements yet.
*/
	MSG_ACCOUNT_DOESNOT_EXIST = 0x6ff,
/*20100615 to 20180523
본 게임은 12세 이용가입니다.
It is available only for 12 hours.
20130807 to 20130814
존재 하지 않는 계정입니다.
You will not be disconnect from the game.
*/
	MSG_AGE_RESTRICTIONS = 0x700,
#endif
#if PACKETVER >= 20100616
/*20100616 to 20180523
계정도용 조사를 위한 블럭상태입니다.
Your account is blocked due to illegal use of the game account.
20130807 to 20130814
본 게임은 12세 이용가입니다.
It is available only for 12 hours.
*/
	MSG_ACCOUNT_BLOCK = 0x701,
/*20100616 to 20180523
버그조사를 위한 블럭상태입니다.
Your account is blocked because there may exist a bug with your account.
20130807 to 20130814
계정도용 조사를 위한 블럭상태입니다.
Your account is blocked due to illegal use of the game account.
*/
	MSG_BUG_BLOCK = 0x702,
#endif
#if PACKETVER >= 20100622
/*20100622 to 20180523
몬스터 사냥을 통해 얻을 수 있는 Base, Job 경험치가 30분간 75% 증가합니다.
Increases base exp and job exp gained by killing monsters up to 75% for 30 minutes.
20130807 to 20130814
버그조사를 위한 블럭상태입니다.
Your account is blocked because there may exist a bug with your account.
*/
	MSG_PLUSEXP75 = 0x703,
/*20100622 to 20180523
몬스터 사냥을 통해 얻을 수 있는 Base, Job 경험치가 30분간 50% 증가합니다.
Increases base exp and job exp gained by killing monsters up to 50% for 30 minutes.
20130807 to 20130814
몬스터 사냥을 통해 얻을 수 있는 Base, Job 경험치가 30분간 75% 증가합니다.
Increases base exp and job exp gained by killing monsters up to 75% for 30 minutes.
*/
	MSG_PLUSEXP50 = 0x704,
/*20100622 to 20100622
상점 정보가 정확하지 않아 상점을 열 수 없습니다.
20100629 to 20180523
판매(구매) 정보가 없습니다.
No sales information.
20130807 to 20130814
몬스터 사냥을 통해 얻을 수 있는 Base, Job 경험치가 30분간 50% 증가합니다.
Increases base exp and job exp gained by killing monsters up to 50% for 30 minutes.
*/
	MSG_FAIL_OPEN_STORE = 0x705,
/*20100622 to 20180523
더 이상 검색 할 수 없습니다.
Failed to search any further.
20130807 to 20130814
판매(구매) 정보가 없습니다.
No sales information.
*/
	MSG_SSI_FAILED_SEARCH_CNT = 0x706,
/*20100622 to 20100622
검색이 실패하였습니다.
20100629 to 20180523
해당 아이템 명은 존재하지 않습니다.
The item you have entered does not exist.
20130807 to 20130814
더 이상 검색 할 수 없습니다.
Failed to search any further.
*/
	MSG_SSI_FAILED_ITEM_DOES_NOT_EXIST = 0x707,
/*20100622 to 20180523
아직 검색 할 수 없습니다.
Cannot search yet.
20130807 to 20130814
해당 아이템 명은 존재하지 않습니다.
The item you have entered does not exist.
*/
	MSG_SSI_FAILED_LIMIT_SERACH_TIME = 0x708,
#endif
#if PACKETVER >= 20100629
/*20100629 to 20100707
카드 이름, 접두사, 접미사
20100713 to 20180523
카드 이름 또는 접두사(접미사)를 입력하세요
Enter the card name or prefix/suffix.
20130807 to 20130814
아직 검색 할 수 없습니다.
Cannot search yet.
*/
	MSG_SSI_TOOLTIP_OF_SERACHING_THE_CARD = 0x709,
/*20100629 to 20180523
남은 검색 횟수 : %d
Searches left: %d
20130807 to 20130814
카드 이름 또는 접두사(접미사)를 입력하세요
Enter the card name or prefix/suffix.
*/
	MSG_SSI_REST_OF_NUMBER_OF_SEARCHES = 0x70a,
/*20100629 to 20180523
검색 된 노점이 없습니다.
No result has been found.
20130807 to 20130814
남은 검색 횟수 : %d
Searches left: %d
*/
	MSG_SSI_FAILED_SEARCH_STORE = 0x70b,
/*20100629 to 20180523
아이템 가격 범위가 잘못되었습니다.
The item price is too high.
20130807 to 20130814
검색 된 노점이 없습니다.
No result has been found.
*/
	MSG_SSI_FAILED_PRICE_ISNOT_VALID = 0x70c,
/*20100629 to 20180523
일반 장비
Normal Gear
20130807 to 20130814
아이템 가격 범위가 잘못되었습니다.
The item price is too high.
*/
	MSG_GENERAL_EQUIPMENT = 0x70d,
/*20100629 to 20180523
의상 장비
Costume
20130807 to 20130814
일반 장비
Normal Gear
*/
	MSG_COSTUME_EQUIPMENT = 0x70e,
#endif
#if PACKETVER >= 20100713
/*20100713 to 20180523
분
minute
20130807 to 20130814
의상 장비
Costume
*/
	MSG_MINUTE = 0x70f,
/*20100713 to 20180523
초
second
20130807 to 20130814
분
minute
*/
	MSG_SECOND = 0x710,
/*20100713 to 20180523
아이템 명을 입력해 주세요.
Please enter the name of the item.
20130807 to 20130814
초
second
*/
	MSG_SSI_FAILED_ENTER_THE_NAME_OF_ITEM = 0x711,
/*20100713 to 20180523
해당 아이템 명은 존재하지 않습니다.
The item you have entered does not exist.
20130807 to 20130814
아이템 명을 입력해 주세요.
Please enter the name of the item.
*/
	MSG_SSI_FAILED_NAME_OF_ITEM_DOES_NOT_EXIST = 0x712,
#endif
#if PACKETVER >= 20100720
/*20100720 to 20180523
진입가능한 맵이 존재하지 않습니다.
The map is not available.
20130807 to 20130814
해당 아이템 명은 존재하지 않습니다.
The item you have entered does not exist.
*/
	MSG_NOT_EXIST_ENTRYMAP = 0x713,
/*20100720 to 20180523
해당 카드 이름이나 접두사(접미사)는 존재하지 않습니다.
The selected name or prefix/suffix does not exist.
20130807 to 20130814
진입가능한 맵이 존재하지 않습니다.
The map is not available.
*/
	MSG_SSI_FAILED_NAME_OF_CARD_DOES_NOT_EXIST = 0x714,
#endif
#if PACKETVER >= 20100727
/*20100727 to 20180523
 한번에 구매 가능 종류는 10개입니다.
You can purchase up to 10 items.
20130807 to 20130814
해당 카드 이름이나 접두사(접미사)는 존재하지 않습니다.
The selected name or prefix/suffix does not exist.
*/
	MSG_CASH_FAILED_TOTAL_CNT = 0x715,
/*20100727 to 20180523
 일부 아이템의 구매가 실패하였습니다.
Some items could not be purchased.
20130807 to 20130814
 한번에 구매 가능 종류는 10개입니다.
You can purchase up to 10 items.
*/
	MSG_CASH_FAILED_BUY_SOME = 0x716,
#endif
#if PACKETVER >= 20100730
/*20100730 to 20180523
생년월일 6자리를 입력하세요.(예시:801122)
Enter your 6-digit DOB(YYMMDD) (e.g: 801122)
20130807 to 20130814
 일부 아이템의 구매가 실패하였습니다.
Some items could not be purchased.
*/
	MSG_ENTER_PEOPLE_BIRTH = 0x717,
/*20100730 to 20180523
알 수 없는 오류가 발생하였습니다.
Now Logging Out.
20130807 to 20130814
생년월일 6자리를 입력하세요.(예시:801122)
Enter your 6-digit DOB(YYMMDD) (e.g: 801122)
*/
	MSG_RESULT_FAIL_UNKNOWN = 0x718,
/*20100730 to 20180523
데이타 베이스 오류가 발생하였습니다.
A database error has occurred.
20130807 to 20130814
알 수 없는 오류가 발생하였습니다.
Now Logging Out.
*/
	MSG_RESULT_FAIL_DATABASE = 0x719,
/*20100730 to 20180523
캐릭터를 삭제하기 위해서는 길드에서 탈퇴 해야 합니다.
Please leave your guild first in order to remove your character.
20130807 to 20130814
데이타 베이스 오류가 발생하였습니다.
A database error has occurred.
*/
	MSG_RESULT_FAIL_GUILD = 0x71a,
/*20100730 to 20180523
캐릭터를 삭제하기 위해서는 파티에서 탈퇴 해야 합니다.
Please leave your party first in order to remove your character.
20130807 to 20130814
캐릭터를 삭제하기 위해서는 길드에서 탈퇴 해야 합니다.
Please leave your guild first in order to remove your character.
*/
	MSG_RESULT_FAIL_PARTY = 0x71b,
/*20100730 to 20180523
시스템 설정으로 인해 삭제할 수 없습니다.
You cannot delete this character because the delete time has not expired yet.
20130807 to 20130814
캐릭터를 삭제하기 위해서는 파티에서 탈퇴 해야 합니다.
Please leave your party first in order to remove your character.
*/
	MSG_RESULT_FAIL_CONFIGURATION = 0x71c,
/*20100730 to 20180523
아직 삭제 가능 시간이 아닙니다.
You cannot delete this character at the moment.
20130807 to 20130814
시스템 설정으로 인해 삭제할 수 없습니다.
You cannot delete this character because the delete time has not expired yet.
*/
	MSG_RESULT_FAIL_DATE = 0x71d,
/*20100730 to 20180523
생년월일이 일치하지 않습니다.
Your entered birthday does not match.
20130807 to 20130814
아직 삭제 가능 시간이 아닙니다.
You cannot delete this character at the moment.
*/
	MSG_RESULT_FAIL_BIRTH = 0x71e,
/*20100730 to 20180523
친밀도가 부족합니다.
You lack of familiarity.
20130807 to 20130814
생년월일이 일치하지 않습니다.
Your entered birthday does not match.
*/
	MSG_USESKILL_FAIL_RELATIONGRADE = 0x71f,
/*20100730 to 20180523
스타일체인지 파이터 상태에서만 사용가능합니다.
This is only available on style change for fighting classes.
20130807 to 20130814
친밀도가 부족합니다.
You lack of familiarity.
*/
	MSG_USESKILL_FAIL_STYLE_CHANGE_FIGHTER = 0x720,
/*20100730 to 20180523
스타일체인지 그래플러 상태에서만 사용가능합니다.
This is only available on style change for novice.
20130807 to 20130814
스타일체인지 파이터 상태에서만 사용가능합니다.
This is only available on style change for fighting classes.
*/
	MSG_USESKILL_FAIL_STYLE_CHANGE_GRAPPLER = 0x721,
#endif
#if PACKETVER >= 20100817
/*20100817 to 20180523
파티등록실패
Party Registration failed.
20130807 to 20130814
스타일체인지 그래플러 상태에서만 사용가능합니다.
This is only available on style change for novice.
*/
	MSG_PARTY_REGISTRATION_FAILED = 0x722,
/*20100817 to 20180523
검색된 조건의 리스트가 없습니다.
results have been found.
20130807 to 20130814
파티등록실패
Party Registration failed.
*/
	MSG_PARTY_SEARCH_FAILED = 0x723,
/*20100817 to 20180523
광고삭제에 실패했습니다.
Failed to remove result.
20130807 to 20130814
검색된 조건의 리스트가 없습니다.
results have been found.
*/
	MSG_PARTY_AD_DELETE_FAILED = 0x724,
/*20100817 to 20180523
조건에 맞는 광고가 없어 실패했습니다.
No results have been found.
20130807 to 20130814
광고삭제에 실패했습니다.
Failed to remove result.
*/
	MSG_PARTY_NOT_EXIST_AD = 0x725,
#endif
#if PACKETVER >= 20100824
/*20100824 to 20180523
결제 정보가 없습니다.
No payment information has been found.
20130807 to 20130814
조건에 맞는 광고가 없어 실패했습니다.
No results have been found.
*/
	MSG_REFUSE_SSO_NOT_PAY_USER = 0x726,
/*20100824 to 20180523
교환 시 스크린샷 찍기
Screenshot Trade
20130807 to 20130814
결제 정보가 없습니다.
No payment information has been found.
*/
	MSG_SCREENSHOT_FOR_EXCHANGE = 0x727,
/*20100824 to 20180523
[거래_%s]
[Trade_%s]
20130807 to 20130814
교환 시 스크린샷 찍기
Screenshot Trade
*/
	MSG_SCREENSHOT_FOR_EXCHANGE_CHARNAME = 0x728,
#endif
#if PACKETVER >= 20100914
/*20100914 to 20180131
사망으로 인해 신생명보험서가 자동 소비되었습니다
20130807 to 20130814
[거래_%s]
[Trade_%s]
20180207 to 20180523
사망 시 소지한 아이템으로 경험치 손실을 막았습니다.
Death due to the auto insurance young people are spending.
*/
	MSG_NOTIFY_NEO_INSURANCE_ITEM_USE = 0x729,
/*20100914 to 20180523
대화
Chat Dialog
20130807 to 20130814
사망으로 인해 신생명보험서가 자동 소비되었습니다
*/
	MSG_TALK = 0x72a,
#endif
#if PACKETVER >= 20101019
/*20101019 to 20180523
중복사용이 불가능합니다.
Redundant is not available.
20130807 to 20130814
대화
Chat Dialog
*/
	MSG_MACRO_DUPLICATE = 0x72b,
/*20101019 to 20180523
사용제한이 걸려있습니다.
Use the limit that has been set.
20130807 to 20130814
중복사용이 불가능합니다.
Redundant is not available.
*/
	MSG_MACRO_POSTDELAY = 0x72c,
/*20101019 to 20180523
현재 사용제한이 걸려 있지 않습니다.
No user restrictions are set.
20130807 to 20130814
사용제한이 걸려있습니다.
Use the limit that has been set.
*/
	MSG_MACRO_NOT_POSTDELAY = 0x72d,
/*20101019 to 20180523
예기치 못한 사유로 인해 접속이 실패하였습니다. 관리자에게 문의해 주시기 바랍니다.
Connection has failed. Please contact your administrator.
20130807 to 20130814
현재 사용제한이 걸려 있지 않습니다.
No user restrictions are set.
*/
	MSG_SSO_ERROR_MSG = 0x72e,
/*20101019 to 20180523
접속 정보 인증 실패하였습니다.
Failed to authenticate.
20130807 to 20130814
예기치 못한 사유로 인해 접속이 실패하였습니다. 관리자에게 문의해 주시기 바랍니다.
Connection has failed. Please contact your administrator.
*/
	MSG_REFUSE_SSO_AUTH_INVALID_TOKEN = 0x72f,
/*20101019 to 20180523
가입하지 않은 사용자입니다.
User is offline.
20130807 to 20130814
접속 정보 인증 실패하였습니다.
Failed to authenticate.
*/
	MSG_REFUSE_SSO_AUTH_INVALID_USER = 0x730,
/*20101019 to 20180523
나이제한 때문에 이계정으로 이서버에 접속할 수 없습니다.
The age limit from commandment tables cannot connect to this server.
20130807 to 20130814
가입하지 않은 사용자입니다.
User is offline.
*/
	MSG_REFUSE_SSO_AUTH_INVALID_AGE = 0x731,
/*20101019 to 20180523
구매하기
Buy
20130807 to 20130814
나이제한 때문에 이계정으로 이서버에 접속할 수 없습니다.
The age limit from commandment tables cannot connect to this server.
*/
	MSG_NC_BUY = 0x732,
/*20101019 to 20180523
장바구니 비우기
Cancel.
20130807 to 20130814
구매하기
Buy
*/
	MSG_NC_BLANK = 0x733,
/*20101019 to 20180523
첫 페이지
First page
20130807 to 20130814
장바구니 비우기
Cancel.
*/
	MSG_NC_FIRSTPAGE = 0x734,
/*20101019 to 20180523
마지막 페이지
Last page
20130807 to 20130814
첫 페이지
First page
*/
	MSG_NC_LASTPAGE = 0x735,
/*20101019 to 20180523
신규
New
20130807 to 20130814
마지막 페이지
Last page
*/
	MSG_NC_CAT1 = 0x736,
/*20101019 to 20180523
인기
Headgears
20130807 to 20130814
신규
New
*/
	MSG_NC_CAT2 = 0x737,
/*20101019 to 20180523
한정
Limited
20130807 to 20130814
인기
Headgears
*/
	MSG_NC_CAT3 = 0x738,
/*20101019 to 20180523
임대장비
Rental Items
20130807 to 20130814
한정
Limited
*/
	MSG_NC_CAT4 = 0x739,
/*20101019 to 20180523
영구장비
Equipments
20130807 to 20130814
임대장비
Rental Items
*/
	MSG_NC_CAT5 = 0x73a,
/*20101019 to 20180523
버프
Scrolls
20130807 to 20130814
영구장비
Equipments
*/
	MSG_NC_CAT6 = 0x73b,
/*20101019 to 20180523
회복
Consumables
20130807 to 20130814
버프
Scrolls
*/
	MSG_NC_CAT7 = 0x73c,
/*20101019 to 20180523
기타
Other
20130807 to 20130814
회복
Consumables
*/
	MSG_NC_CAT8 = 0x73d,
/*20101019 to 20180523
가격
Cost
20130807 to 20130814
기타
Other
*/
	MSG_NC_COST = 0x73e,
/*20101019 to 20180523
수량
Quantity
20130807 to 20130814
가격
Cost
*/
	MSG_NC_NUM = 0x73f,
/*20101019 to 20180523
개
Total
20130807 to 20130814
수량
Quantity
*/
	MSG_NC_COUNT = 0x740,
/*20101019 to 20180523
무료 캐시 : %s C
Free Cash: %s C
20130807 to 20130814
개
Total
*/
	MSG_NC_FREECASH = 0x741,
/*20101019 to 20180523
소지 캐시 : %s C
CashPoints: %s C
20130807 to 20130814
무료 캐시 : %s C
Free Cash: %s C
*/
	MSG_NC_CASH = 0x742,
/*20101019 to 20180523
이 지역에서는 몬스터 소환이 불가능합니다.
You cannot summon a monster in this area.
20130807 to 20130814
소지 캐시 : %s C
CashPoints: %s C
*/
	MSG_CALLMONSTER_FAIL_AREA = 0x743,
#endif
#if PACKETVER >= 20101109
/*20101109 to 20180523
무료캐시 사용량이 전체 금액을 초과하고있습니다
Exceeded total free cash
20130807 to 20130814
이 지역에서는 몬스터 소환이 불가능합니다.
You cannot summon a monster in this area.
*/
	MSG_BUY_CASH_FAIL2 = 0x744,
/*20101109 to 20180523
 설정한 내용이 [SaveData_ExMacro%d]에 저장됩니다.
%d seconds left until you can use
20130807 to 20130814
무료캐시 사용량이 전체 금액을 초과하고있습니다
Exceeded total free cash
*/
	MSG_MACRO_SAVE_DATA = 0x745,
#endif
#if PACKETVER >= 20101123
/*20101123 to 20180523
약 %d 초 후에 사용할 수 있습니다
Content has been saved in [SaveData_ExMacro%d]
20130807 to 20130814
 설정한 내용이 [SaveData_ExMacro%d]에 저장됩니다.
%d seconds left until you can use
*/
	MSG_ITEM_REUSE_LIMIT_SECOND = 0x746,
#endif
#if PACKETVER >= 20101207
/*20101207 to 20180523
[창]을 장착한 상태여야 합니다.
~ [Windows] must be equipped with.
20130807 to 20130814
약 %d 초 후에 사용할 수 있습니다
Content has been saved in [SaveData_ExMacro%d]
*/
	MSG_FAIL_NEED_EQUIPPED_SPEAR = 0x747,
#endif
#if PACKETVER >= 20101214
/*20101214 to 20180523
드래곤 탑승시에만 사용가능합니다.
Available only on the dragon.
20130807 to 20130814
[창]을 장착한 상태여야 합니다.
~ [Windows] must be equipped with.
*/
	MSG_USESKILL_FAIL_DRAGON = 0x748,
/*20101214 to 20180523
본 서버에 접속할 수 있는 정원이 초과되어 진입이 불가능 합니다.
Unable to proceed due to exceeding capacity.
20130807 to 20130814
드래곤 탑승시에만 사용가능합니다.
Available only on the dragon.
*/
	MSG_OVER_CONNECT_USER = 0x749,
#endif
#if PACKETVER >= 20101228
/*20101228 to 20180523
실명 인증이 되지 않았습니다. 실명인증 사이트로 이동합니다
Real name has not been verified. Go to name verification site.
20130807 to 20130814
본 서버에 접속할 수 있는 정원이 초과되어 진입이 불가능 합니다.
Unable to proceed due to exceeding capacity.
*/
	MSG_AUTHENTICATE = 0x74a,
#endif
#if PACKETVER >= 20110104
/*20110104 to 20180523
저장 할 슬롯을 선택 해 주세요
Please select slot you are going to save.
20130807 to 20130814
실명 인증이 되지 않았습니다. 실명인증 사이트로 이동합니다
Real name has not been verified. Go to name verification site.
*/
	MSG_SELECT_SAVESLOT = 0x74b,
#endif
#if PACKETVER >= 20110111
/*20110111 to 20180523
%s, 축하드립니다. '%s' 를 얻으셨습니다!
Congratulation %s,  Acquired '%s' !
20130807 to 20130814
저장 할 슬롯을 선택 해 주세요
Please select slot you are going to save.
*/
	MSG_BROADCASTING_SPECIAL_ITEM_OBTAIN2 = 0x74c,
#endif
#if PACKETVER >= 20110118
/*20110118 to 20180523
그루미상태에서는 사용할 수 없습니다
Unable to use in gloomy state
20130807 to 20130814
%s, 축하드립니다. '%s' 를 얻으셨습니다!
Congratulation %s,  Acquired '%s' !
*/
	MSG_NOTUSE_GROOMY = 0x74d,
#endif
#if PACKETVER >= 20110210
/*20110210 to 20180523
구매물품의 합계금액이 케릭터가 소지할 수 있는 최대 금액을 초과하였습니다
Purchased products has exceeded the total price.
20130807 to 20130814
그루미상태에서는 사용할 수 없습니다
Unable to use in gloomy state
*/
	MSG_BUYINGSTORE_OVERFLOW_MONEY = 0x74e,
#endif
#if PACKETVER >= 20110215
/*20110215 to 20180523
현재 맵에서는 파티 가입이 불가능합니다.
Cannot join a party in this map.
20130807 to 20130814
구매물품의 합계금액이 케릭터가 소지할 수 있는 최대 금액을 초과하였습니다
Purchased products has exceeded the total price.
*/
	MSG_PREVENT_PARTY_JOIN = 0x74f,
/*20110215 to 20180523
현재 맵에서는 파티 탈퇴가 불가능합니다.
Cannot leave a party in this map.
20130807 to 20130814
현재 맵에서는 파티 가입이 불가능합니다.
Cannot join a party in this map.
*/
	MSG_PREVENT_PARTY_LEAVE = 0x750,
/*20110215 to 20180523
현재 맵에서는 파티 추방이 불가능합니다.
Cannot withdraw/break the party in this map.
20130807 to 20130814
현재 맵에서는 파티 탈퇴가 불가능합니다.
Cannot leave a party in this map.
*/
	MSG_PREVENT_PARTY_EXPEL = 0x751,
/*20110215 to 20180523
실제 성명
Real Name
20130807 to 20130814
현재 맵에서는 파티 추방이 불가능합니다.
Cannot withdraw/break the party in this map.
*/
	MSG_SDO_REALNAME = 0x752,
/*20110215 to 20180523
신분증 번호
ID Number
20130807 to 20130814
실제 성명
Real Name
*/
	MSG_SDO_ID_NUMBER = 0x753,
/*20110215 to 20180523
이메일
E-mail
20130807 to 20130814
신분증 번호
ID Number
*/
	MSG_SDO_EMAIL = 0x754,
/*20110215 to 20180523
입력이 올바르지 않습니다
Invalid input
20130807 to 20130814
이메일
E-mail
*/
	MSG_SDO_WRONG_VALUE = 0x755,
#endif
#if PACKETVER >= 20110222
/*20110222 to 20130508
상대방에게 제니 지급에 실패했습니다.
20130515 to 20180523
상대 캐릭터가 최대 보유제니량을 초과하여 거래가 불가능합니다.
Failed to send the zeny 
20130807 to 20130814
입력이 올바르지 않습니다
Invalid input
*/
	MSG_MCSTORE_FAIL_SELLER_MONEY_GIVE = 0x756,
/*20110222 to 20180523
해당 직업이 아닙니다.
This is not a relevant job
20130807 to 20130814
상대 캐릭터가 최대 보유제니량을 초과하여 거래가 불가능합니다.
Failed to send the zeny 
*/
	MSG_INVALID_CLASS = 0x757,
/*20110222 to 20180523
해당 성별이 아닙니다.
This is not a relevant gender
20130807 to 20130814
해당 직업이 아닙니다.
This is not a relevant job
*/
	MSG_INVALID_GENDER = 0x758,
/*20110222 to 20180523
유저님의 정보가 인증에 성공했습니다.
User information identification was successful.
20130807 to 20130814
해당 성별이 아닙니다.
This is not a relevant gender
*/
	MSG_SUCCESS_AUTHENTICATE = 0x759,
/*20110222 to 20180523
이름이 일치하지 않습니다. 재작성 해주세요.
Name does not match. Please retry.
20130807 to 20130814
유저님의 정보가 인증에 성공했습니다.
User information identification was successful.
*/
	MSG_INVALID_REALNAME = 0x75a,
/*20110222 to 20180523
신분증 번호가 일치하지 않습니다. 재작성 해주세요.
ID number does not match. Please retry.
20130807 to 20130814
이름이 일치하지 않습니다. 재작성 해주세요.
Name does not match. Please retry.
*/
	MSG_INVALID_IDNUMBER = 0x75b,
/*20110222 to 20180523
현재 서비스에 이상이 있으니 잠시 후 재시도 해주세요.
Service is currently unavailable. Please try again later.
20130807 to 20130814
신분증 번호가 일치하지 않습니다. 재작성 해주세요.
ID number does not match. Please retry.
*/
	MSG_INVALID_AUTHENTICATE = 0x75c,
#endif
#if PACKETVER >= 20110224
/*20110224 to 20180523
 탑승 상태에서는 공격을 할 수 없습니다.
Unable to attack while riding.
20130807 to 20130814
현재 서비스에 이상이 있으니 잠시 후 재시도 해주세요.
Service is currently unavailable. Please try again later.
*/
	MSG_CANNOT_ATTACK_IN_RIDING_STATE = 0x75d,
/*20110224 to 20180523
 탑승 상태에서는 스킬 시전을 할 수 없습니다.
Unable to cast the skill while riding.
20130807 to 20130814
 탑승 상태에서는 공격을 할 수 없습니다.
Unable to attack while riding.
*/
	MSG_CANNOT_USE_SKILL_IN_RIDING_STATE = 0x75e,
#endif
#if PACKETVER >= 20110228
/*20110228 to 20110228
비밀번호는 4자리 이상 6자리이하여야만 합니다.
20110308 to 20180523
비밀번호는 4자리이하여야만 합니다.
Pin number should be 4~6 characters.
20130807 to 20130814
 탑승 상태에서는 스킬 시전을 할 수 없습니다.
Unable to cast the skill while riding.
*/
	MSG_STORE_PASSWORD_4_6 = 0x75f,
/*20110228 to 20110228
로그인에 성공했습니다.
20110308 to 20180523
보안 인증에 성공했습니다.
Secured authentication is successful.
20130807 to 20130814
비밀번호는 4자리이하여야만 합니다.
Pin number should be 4~6 characters.
*/
	MSG_SECOND_PASSWORD_LOGIN_SUCCESS = 0x760,
/*20110228 to 20110228
세컨드 패스워드의 생성에 성공했습니다.
20110308 to 20180523
보안 패스워드의 생성에 성공했습니다.
Succeeded in creating 2nd password.
20130807 to 20130814
보안 인증에 성공했습니다.
Secured authentication is successful.
*/
	MSG_SECOND_PASSWORD_MAKE_SUCCESS = 0x761,
/*20110228 to 20110228
세컨드 패스워드를 삭제했습니다.
20110308 to 20180523
보안 패스워드를 삭제했습니다.
2nd password has been deleted.
20130807 to 20130814
보안 패스워드의 생성에 성공했습니다.
Succeeded in creating 2nd password.
*/
	MSG_SECOND_PASSWORD_DEL_SUCCESS = 0x762,
/*20110228 to 20110228
세컨드 패스워드를 수정했습니다.
20110308 to 20180523
보안 패스워드를 수정했습니다.
2nd password has been corrected.
20130807 to 20130814
보안 패스워드를 삭제했습니다.
2nd password has been deleted.
*/
	MSG_SECOND_PASSWORD_EDIT_SUCCESS = 0x763,
/*20110228 to 20110228
로그인에 실패했습니다.
20110308 to 20180523
잘못된 패스워드입니다.(%d회남음)
Password is incorrect.
20130807 to 20130814
보안 패스워드를 수정했습니다.
2nd password has been corrected.
*/
	MSG_SECOND_PASSWORD_LOGIN_FAILED = 0x764,
/*20110228 to 20110228
세컨드 패스워드의 생성에 실패했습니다.
20110308 to 20180523
보안 패스워드의 생성에 실패했습니다.
Failed to create 2nd password.
20130807 to 20130814
잘못된 패스워드입니다.(%d회남음)
Password is incorrect.
*/
	MSG_SECOND_PASSWORD_MAKE_FAILED = 0x765,
/*20110228 to 20110228
세컨드 패스워드 삭제에 실패했습니다.
20110308 to 20180523
보안 패스워드 삭제에 실패했습니다.
Failed to delete 2nd password.
20130807 to 20130814
보안 패스워드의 생성에 실패했습니다.
Failed to create 2nd password.
*/
	MSG_SECOND_PASSWORD_DEL_FAILED = 0x766,
/*20110228 to 20110228
세컨드 패스워드의 수정에 실패했습니다.
20110308 to 20180523
보안 패스워드의 수정에 실패했습니다.
Failed to correct 2nd password.
20130807 to 20130814
보안 패스워드 삭제에 실패했습니다.
Failed to delete 2nd password.
*/
	MSG_SECOND_PASSWORD_EDIT_FAILED = 0x767,
/*20110228 to 20110228
세컨드 비밀번호에는 제한된 번호를 사용할수 없습니다.
20110308 to 20180523
입력하신패스워드는 사용하실수없습니다.
Unable to use restricted number in 2nd password.
20130807 to 20130814
보안 패스워드의 수정에 실패했습니다.
Failed to correct 2nd password.
*/
	MSG_SECOND_PASSWORD_EDIT_RESTRICT_PW = 0x768,
/*20110228 to 20180523
주민등록번호는 사용할수없습니다.
Unable to use your KSSN number.
20130807 to 20130814
입력하신패스워드는 사용하실수없습니다.
Unable to use restricted number in 2nd password.
*/
	MSG_SECOND_PASSWORD_EDIT_PERSONALNUM_PW = 0x769,
/*20110228 to 20110228
보안번호
20110308 to 20180523
이미 패스워드가 존재합니다.
~There is already a password.
20130807 to 20130814
주민등록번호는 사용할수없습니다.
Unable to use your KSSN number.
*/
	MSG_SECOND_PASSWORD_MAKE_DUPLICATED_PW = 0x76a,
/*20110228 to 20110228
비밀번호 입력 (4~6자리)
20110308 to 20180523
보안 패스워드
Security Code
20130807 to 20130814
이미 패스워드가 존재합니다.
~There is already a password.
*/
	MSG_SECOND_PASSWORD = 0x76b,
/*20110228 to 20110228
ITEM
20110308 to 20180523
계정보안을 위하여 추가적인 패스워드 설정을 권장합니다.
Account for the additional password security settings are recommended.
20130807 to 20130814
보안 패스워드
Security Code
*/
	MSG_SECOND_PASSWORD_INPUT = 0x76c,
/*20110228 to 20110228
SKILL
20110308 to 20180523
보안 패스워드 사용을 하지 않습니다.
Do not use secure password.
20130807 to 20130814
계정보안을 위하여 추가적인 패스워드 설정을 권장합니다.
Account for the additional password security settings are recommended.
*/
	MSG_SECOND_PASSWDRD_NOT_AVAILABLE_SUCCESS = 0x76d,
/*20110228 to 20110228
TACTIC
20110308 to 20180523
보안 패스워드 사용설정에 실패했습니다.
Use the set security password failed.
20130807 to 20130814
보안 패스워드 사용을 하지 않습니다.
Do not use secure password.
*/
	MSG_SECOND_PASSWDRD_NOT_AVAILABLE_FAILED = 0x76e,
/*20110228 to 20110228
ETC
20110308 to 20180523
보안 패스워드를 사용합니다. 다음로그인부터 적용됩니다.
Use secure passwords. Will be applied to your next login.
20130807 to 20130814
보안 패스워드 사용설정에 실패했습니다.
Use the set security password failed.
*/
	MSG_SECOND_PASSWDRD_AVAILABLE_SUCCESS = 0x76f,
/*20110228 to 20110228
COMBAT
20110308 to 20180523
보안 패스워드 사용 설정에 실패했습니다.
Use the set security password failed.
20130807 to 20130814
보안 패스워드를 사용합니다. 다음로그인부터 적용됩니다.
Use secure passwords. Will be applied to your next login.
*/
	MSG_SECOND_PASSWDRD_AVAILABLE_FAILED = 0x770,
/*20110228 to 20110228
NON-COMBAT
20110308 to 20180523
계정보안을 위하여 추가적인 패스워드를 설정합니다.
Added to the security of your account password is set.
20130807 to 20130814
보안 패스워드 사용 설정에 실패했습니다.
Use the set security password failed.
*/
	MSG_SECOND_PASSWORD_INFO_1 = 0x771,
/*20110228 to 20110228
BUFF
20110308 to 20180523
아래의 숫자버튼을 마우스를 이용하여 4자리를 클릭하세요.
Use the mouse to enter the 4-digit password below.
20130807 to 20130814
계정보안을 위하여 추가적인 패스워드를 설정합니다.
Added to the security of your account password is set.
*/
	MSG_SECOND_PASSWORD_INFO_2 = 0x772,
/*20110228 to 20110228
AUTO EQUIPED
20110308 to 20180523
3회이상 잘못된패스워드 입력으로, 종료됩니다.
Typing an incorrect password 3 times will shut down the client.
20130807 to 20130814
아래의 숫자버튼을 마우스를 이용하여 4자리를 클릭하세요.
Use the mouse to enter the 4-digit password below.
*/
	MSG_SECOND_PASSWORD_INFO_3 = 0x773,
/*20110228 to 20110228
1st. ATTACK
20110308 to 20180523
ITEM
20130807 to 20130814
3회이상 잘못된패스워드 입력으로, 종료됩니다.
Typing an incorrect password 3 times will shut down the client.
*/
	MSG_MACRO_ITEM = 0x774,
/*20110228 to 20110228
ATTACK
20110308 to 20180523
SKILL
20130807 to 20130814
ITEM
*/
	MSG_MACRO_SKILL = 0x775,
/*20110228 to 20110228
Next attack time : 
Next attack time: 
20110308 to 20180523
TACTIC
20130807 to 20130814
SKILL
*/
	MSG_MACRO_TACTIC = 0x776,
/*20110228 to 20110228
When died
20110308 to 20180523
ETC
20130807 to 20130814
TACTIC
*/
	MSG_MACRO_ETC = 0x777,
/*20110228 to 20110228
When invited to a party
20110308 to 20180523
COMBAT
20130807 to 20130814
ETC
*/
	MSG_MACRO_COMBAT = 0x778,
/*20110228 to 20110228
Pickup Item
20110308 to 20180523
NON-COMBAT
20130807 to 20130814
COMBAT
*/
	MSG_MACRO_NON_COMBAT = 0x779,
/*20110228 to 20110228
Over 85% Weight
20110308 to 20180523
BUFF
20130807 to 20130814
NON-COMBAT
*/
	MSG_MACRO_BUFF = 0x77a,
#endif
#if PACKETVER >= 20110308
/*20110308 to 20180523
AUTO EQUIPED
20130807 to 20130814
BUFF
*/
	MSG_MACRO_AUTO_EQUIPED = 0x77b,
/*20110308 to 20180523
1st. ATTACK
20130807 to 20130814
AUTO EQUIPED
*/
	MSG_MACRO_1ST_ATTACK = 0x77c,
/*20110308 to 20180523
ATTACK
20130807 to 20130814
1st. ATTACK
*/
	MSG_MACRO_ATTACK = 0x77d,
/*20110308 to 20180523
Next attack time : 
Next attack time: 
20130807 to 20130814
ATTACK
*/
	MSG_MACRO_NEXT_ATK_TIME = 0x77e,
/*20110308 to 20180523
When died
20130807 to 20130814
Next attack time : 
Next attack time: 
*/
	MSG_MACRO_WHEN_DIED = 0x77f,
/*20110308 to 20180523
When invited to a party
20130807 to 20130814
When died
*/
	MSG_MACRO_WHEN_INVITED_PARTY = 0x780,
/*20110308 to 20180523
Pickup Item
20130807 to 20130814
When invited to a party
*/
	MSG_MACRO_PICKUP_ITEM = 0x781,
/*20110308 to 20180523
Over 85% Weight
20130807 to 20130814
Pickup Item
*/
	MSG_MACRO_OVERWEIGHT = 0x782,
/*20110308 to 20180523
진행중이던 작업(NPC대화,제조...)을 종료후에 다시 시도하세요.
Any work in progress (NPC dialog, manufacturing ...) quit and try again.
20130807 to 20130814
Over 85% Weight
*/
	MSG_BUSY = 0x783,
/*20110308 to 20180523
 몬스터 사냥을 통해 얻을 수 있는 Job경험치가 %d분간 %.2f배로 증가합니다.
Monster Job hunting experience that you can get through the doubling of %d is %.2f minutes.
20130807 to 20130814
진행중이던 작업(NPC대화,제조...)을 종료후에 다시 시도하세요.
Any work in progress (NPC dialog, manufacturing ...) quit and try again.
*/
	MSG_PLUSONLYJOBEXP2 = 0x784,
#endif
#if PACKETVER >= 20110315
/*20110315 to 20110405
ExMacro_SaveData%d
20110412 to 20180523
SaveData_ExMacro%d
SaveData_ExMacro %d
20130807 to 20130814
 몬스터 사냥을 통해 얻을 수 있는 Job경험치가 %d분간 %.2f배로 증가합니다.
Monster Job hunting experience that you can get through the doubling of %d is %.2f minutes.
*/
	MSG_MACRO_SAVE = 0x785,
/*20110315 to 20180523
 설정한 내용이 [%s]에 저장됩니다.
Settings for [%s] are stored in.
20130807 to 20130814
SaveData_ExMacro%d
SaveData_ExMacro %d
*/
	MSG_MACRO_SAVE_DATA2 = 0x786,
#endif
#if PACKETVER >= 20110322
/*20110322 to 20180523
보안레벨
Security level
20130807 to 20130814
 설정한 내용이 [%s]에 저장됩니다.
Settings for [%s] are stored in.
*/
	MSG_SECOND_PASSWORD_LEVEL = 0x787,
#endif
#if PACKETVER >= 20110412
/*20110412 to 20180523
현재 캐릭터는 파티 또는 길드에 가입되어 있어서 삭제가 불가능합니다.
The current character is a party or join the guild can not be deleted.
20130807 to 20130814
보안레벨
Security level
*/
	MSG_RESULT_FAIL_CHAR_DELETE = 0x788,
#endif
#if PACKETVER >= 20110523
/*20110523 to 20180523
벽이나 물체 근처에서만 사용 할 수 있습니다.
Objects can be used only near the wall.
20130807 to 20130814
현재 캐릭터는 파티 또는 길드에 가입되어 있어서 삭제가 불가능합니다.
The current character is a party or join the guild can not be deleted.
*/
	MSG_USESKILL_FAIL_NEER_WALL = 0x789,
#endif
#if PACKETVER >= 20110531
/*20110531 to 20180523
%s : 레벨 %d %s 파티구합니다.
%s: Level %d %s party to obtain level.
20130807 to 20130814
벽이나 물체 근처에서만 사용 할 수 있습니다.
Objects can be used only near the wall.
*/
	MSG_SEEK_PARTY_SET = 0x78a,
/*20110531 to 20180523
탑승 중인 상태에서는 고삐 아이템을 사용할 수 없습니다.
While boarding reins is not available for items.
20130807 to 20130814
%s : 레벨 %d %s 파티구합니다.
%s: Level %d %s party to obtain level.
*/
	MSG_FAIELD_RIDING_OVERLAPPED = 0x78b,
#endif
#if PACKETVER >= 20110620
/*20110620 to 20180523
이 스킬은 1%의 경험치가 필요합니다.
This skill requires 1% experience.
20130807 to 20130814
탑승 중인 상태에서는 고삐 아이템을 사용할 수 없습니다.
While boarding reins is not available for items.
*/
	MSG_USESKILL_FAIL_NEED_EXP_1PERCENT = 0x78c,
#endif
#if PACKETVER >= 20110627
/*20110627 to 20180523
경   험   치 : 
Experience value: 
20130807 to 20130814
이 스킬은 1%의 경험치가 필요합니다.
This skill requires 1% experience.
*/
	MSG_EXP_MSG = 0x78d,
/*20110627 to 20180523
드   롭   율 : 
Drop rate: 
20130807 to 20130814
경   험   치 : 
Experience value: 
*/
	MSG_DROP_MSG = 0x78e,
/*20110627 to 20180523
사망페널티 : 
Death Penalty: 
20130807 to 20130814
드   롭   율 : 
Drop rate: 
*/
	MSG_DEATH_MSG = 0x78f,
/*20110627 to 20110711
%d%% (PC방 %d%% + 프리미엄 %d%% + %s서버 %d%%)
20110713 to 20180523
%d%% (PC방 %d%% + TPLUS %d%% + 프리미엄 %d%% + %s서버 %d%%)
%d%% (PCroom %d%% + TPLUS %d%% + Premium %d%% + %s Server %d%%)
20130807 to 20130814
사망페널티 : 
Death Penalty: 
*/
	MSG_BASIC_EXP_MSG = 0x790,
/*20110627 to 20180523
 합창스킬을 시전할 파티원의 SP량이 부족합니다.
Amount of party members to cast the skill Chorus SP is low.
20130807 to 20130814
%d%% (PC방 %d%% + TPLUS %d%% + 프리미엄 %d%% + %s서버 %d%%)
%d%% (PCroom %d%% + TPLUS %d%% + Premium %d%% + %s Server %d%%)
*/
	MSG_USESKILL_FAIL_CHORUS_SP_INSUFFICIENT = 0x791,
#endif
#if PACKETVER >= 20110705
/*20110705 to 20180523
상대 캐릭터의 소지 아이템 종류의 한계량 초과로 거래가 불가능합니다.
Relative character that has possession of the items can not trade because amount is exceeded.
20130807 to 20130814
 합창스킬을 시전할 파티원의 SP량이 부족합니다.
Amount of party members to cast the skill Chorus SP is low.
*/
	MSG_CHARACTER_IS_OVER_COUNT = 0x792,
/*20110705 to 20180523
상대 캐릭터의 해당 아이템의 소지 한계량 초과로 거래가 불가능합니다.
Relative character that has possession of the item amount which exceeds makes it impossible to trade.
20130807 to 20130814
상대 캐릭터의 소지 아이템 종류의 한계량 초과로 거래가 불가능합니다.
Relative character that has possession of the items can not trade because amount is exceeded.
*/
	MSG_CHARACTER_IS_EACHITEM_OVER_COUNT = 0x793,
/*20110705 to 20180523
해당 아이템의 소지 한계량 초과로 구입이 불가능합니다.
Amounts are exceeded the possession of the item is not available for purchase.
20130807 to 20130814
상대 캐릭터의 해당 아이템의 소지 한계량 초과로 거래가 불가능합니다.
Relative character that has possession of the item amount which exceeds makes it impossible to trade.
*/
	MSG_PURCHASE_FAIL_EACHITEM_COUNT = 0x794,
/*20110705 to 20110705
잠시후에 다시 시도해주세요.
20110711 to 20180523
광고 등록 대기중입니다.
Advertising is pending registration.
20130807 to 20130814
해당 아이템의 소지 한계량 초과로 구입이 불가능합니다.
Amounts are exceeded the possession of the item is not available for purchase.
*/
	MSG_PARTY_FAILED_TIMEOUT = 0x795,
/*20110705 to 20180523
아래의 파일과 텍스트내용을 함께
라그나로크 공식홈페이지 -> 고객센터 -> 문의하기를
이용하여 보내주시기 바랍니다.
With the following files and text content Ragnarok Official Website -> Support -> Contact Us to submit your comments by:
20130807 to 20130814
광고 등록 대기중입니다.
Advertising is pending registration.
*/
	MSG_UNEXCEPTION_MSG1ST = 0x796,
#endif
#if PACKETVER >= 20110718
/*20110718 to 20180523
빌링시스템에 오류가 발생햇습니다(%d)
Has caused an error in billing system(%d)
20130807 to 20130814
아래의 파일과 텍스트내용을 함께
라그나로크 공식홈페이지 -> 고객센터 -> 문의하기를
이용하여 보내주시기 바랍니다.
With the following files and text content Ragnarok Official Website -> Support -> Contact Us to submit your comments by:
*/
	MSG_INGAMBA_BILLING_ZSVR_ERROR = 0x797,
/*20110718 to 20180523
룬 아이템 소유 개수가 초과 되어 구매가 실패 하였습니다.
Failed purchase of runes, items exceed the maximum number that can be held.
20130807 to 20130814
빌링시스템에 오류가 발생햇습니다(%d)
Has caused an error in billing system(%d)
*/
	MSG_CASH_FAILED_RUNE_OVERCOUNT = 0x798,
/*20110718 to 20180523
개별 아이템 개수가 초과 되어 구매가 실패 하였습니다.
Exceeded the number of individual items, purchase failed.
20130807 to 20130814
룬 아이템 소유 개수가 초과 되어 구매가 실패 하였습니다.
Failed purchase of runes, items exceed the maximum number that can be held.
*/
	MSG_CASH_FAILED_EACHITEM_OVERCOUNT = 0x799,
/*20110718 to 20180523
알 수 없는 오류가 발생하여 구매가 실패 하였습니다.
Purchase failed due to an unknown error.
20130807 to 20130814
개별 아이템 개수가 초과 되어 구매가 실패 하였습니다.
Exceeded the number of individual items, purchase failed.
*/
	MSG_CASH_FAILED_UNKOWN = 0x79a,
/*20110718 to 20180523
잠시 후 다시 시도해 주십시오.
Please try again later.
20130807 to 20130814
알 수 없는 오류가 발생하여 구매가 실패 하였습니다.
Purchase failed due to an unknown error.
*/
	MSG_CASH_FAILED_BUSY = 0x79b,
/*20110718 to 20180523
 쿠나이 아이템을 장착 한 상태에서만 사용 가능합니다.
Kunai must be equipped to use this skill.
20130807 to 20130814
잠시 후 다시 시도해 주십시오.
Please try again later.
*/
	MSG_USESKILL_FAIL_NEED_EQUIPMENT_KUNAI = 0x79c,
#endif
#if PACKETVER >= 20110726
/*20110726 to 20180523
모집할 최소레벨값을 입력해주세요.
Please enter the value of the minimum level to be recruited.
20130807 to 20130814
 쿠나이 아이템을 장착 한 상태에서만 사용 가능합니다.
Kunai must be equipped to use this skill.
*/
	MSG_SEEK_PARTY_LEVEL_HELP = 0x79d,
#endif
#if PACKETVER >= 20110802
/*20110802 to 20180523
존다기획사NPC 에게 아이템이 수령이 불가능합니다. 소지창의 여유공간을 확보해주세요.
Jonda agency receipt of the item to the NPC is not possible. Gaining possession of the free space of the window.
20130807 to 20130814
모집할 최소레벨값을 입력해주세요.
Please enter the value of the minimum level to be recruited.
*/
	MSG_FAILED_GET_ITEM_FROM_ZONEDA = 0x79e,
#endif
#if PACKETVER >= 20110809
/*20110809 to 20180523
이 스킬은 공성전에서만 사용 가능합니다.
This skill is only available in the siege.
20130807 to 20130814
존다기획사NPC 에게 아이템이 수령이 불가능합니다. 소지창의 여유공간을 확보해주세요.
Jonda agency receipt of the item to the NPC is not possible. Gaining possession of the free space of the window.
*/
	MSG_USESKILL_FAIL_SIZE = 0x79f,
/*20110809 to 20180523
이 스킬은 플레이어에게만 사용 가능합니다.
This skill is available only to the player.
20130807 to 20130814
이 스킬은 공성전에서만 사용 가능합니다.
This skill is only available in the siege.
*/
	MSG_USESKILL_FAIL_TOTARGET_PLAYER = 0x7a0,
/*20110809 to 20180523
착용이 금지 된 상태로 착용 할 수 없습니다.
Forbidden to wear the state can not be worn.
20130807 to 20130814
이 스킬은 플레이어에게만 사용 가능합니다.
This skill is available only to the player.
*/
	MSG_CAN_NOT_EQUIP_ITEM_FORBID = 0x7a1,
/*20110809 to 20180523
현재 위치에서는 상점 및 채팅방의 생성이 불가능합니다.
Current location of the shop and chat room creation is disabled.
20130807 to 20130814
착용이 금지 된 상태로 착용 할 수 없습니다.
Forbidden to wear the state can not be worn.
*/
	MSG_USESKILL_FAIL_THERE_ARE_NPC_AROUND = 0x7a2,
#endif
#if PACKETVER >= 20110816
/*20110816 to 20180523
Elapsed time: %d:%d:%d / %d:%d:%d
20130807 to 20130814
현재 위치에서는 상점 및 채팅방의 생성이 불가능합니다.
Current location of the shop and chat room creation is disabled.
*/
	MSG_REPLAY_ELAPSEDTIME = 0x7a3,
/*20110816 to 20180523
Speed : X 1/4 
Speed: X 1/4
20130807 to 20130814
Elapsed time: %d:%d:%d / %d:%d:%d
*/
	MSG_REPLAY_SPEED1_4 = 0x7a4,
/*20110816 to 20180523
Speed : X 1/2 
Speed: X 1/2
20130807 to 20130814
Speed : X 1/4 
Speed: X 1/4
*/
	MSG_REPLAY_SPEED1_2 = 0x7a5,
/*20110816 to 20180523
Speed : X 1   
Speed: X 1  
20130807 to 20130814
Speed : X 1/2 
Speed: X 1/2
*/
	MSG_REPLAY_SPEED1 = 0x7a6,
/*20110816 to 20180523
Speed : X 2   
Speed: X 2  
20130807 to 20130814
Speed : X 1   
Speed: X 1  
*/
	MSG_REPLAY_SPEED2 = 0x7a7,
/*20110816 to 20180523
Speed : X 4   
Speed: X 4  
20130807 to 20130814
Speed : X 2   
Speed: X 2  
*/
	MSG_REPLAY_SPEED4 = 0x7a8,
/*20110816 to 20180523
Speed : X 8   
Speed: X 8  
20130807 to 20130814
Speed : X 4   
Speed: X 4  
*/
	MSG_REPLAY_SPEED8 = 0x7a9,
/*20110816 to 20180523
Speed : X 16  
Speed: X 16 
20130807 to 20130814
Speed : X 8   
Speed: X 8  
*/
	MSG_REPLAY_SPEED16 = 0x7aa,
/*20110816 to 20180523
Speed : 알수없음
Speed: Unknown
20130807 to 20130814
Speed : X 16  
Speed: X 16 
*/
	MSG_REPLAY_SPEEDUNKNOWN = 0x7ab,
/*20110816 to 20180523
Service Info : %s
Service Info: %s
20130807 to 20130814
Speed : 알수없음
Speed: Unknown
*/
	MSG_REPLAY_CHRVICEINFO = 0x7ac,
/*20110816 to 20180523
Character Name : %s
Character Name: %s
20130807 to 20130814
Service Info : %s
Service Info: %s
*/
	MSG_REPLAY_CHARACTERNAME = 0x7ad,
/*20110816 to 20180523
Map Name : %s
Map Name: %s
20130807 to 20130814
Character Name : %s
Character Name: %s
*/
	MSG_REPLAY_MAPNAME = 0x7ae,
/*20110816 to 20180523
Record Time: %d-%01d-%01d %d: %02d: %02d
20130807 to 20130814
Map Name : %s
Map Name: %s
*/
	MSG_REPLAY_RECORDTIME = 0x7af,
/*20110816 to 20180523
Play Time: %02d: %02d: %02d
20130807 to 20130814
Record Time: %d-%01d-%01d %d: %02d: %02d
*/
	MSG_REPLAY_PLAYTIME = 0x7b0,
/*20110816 to 20180523
No Replay File.
20130807 to 20130814
Play Time: %02d: %02d: %02d
*/
	MSG_REPLAY_NOREPLAYFILE = 0x7b1,
/*20110816 to 20180523
Server No Matching
20130807 to 20130814
No Replay File.
*/
	MSG_REPLAY_SERVERNOMATCH = 0x7b2,
/*20110816 to 20180523
Replay Option Setting
20130807 to 20130814
Server No Matching
*/
	MSG_REPLAY_REPLAYOPTIONSETTING = 0x7b3,
/*20110816 to 20180523
파일 이름을 입력하세요.
Enter File Name
20130807 to 20130814
Replay Option Setting
*/
	MSG_REPLAY_ENTERTHEFILENAME = 0x7b4,
/*20110816 to 20180523
Set Replay Save Data
20130807 to 20130814
파일 이름을 입력하세요.
Enter File Name
*/
	MSG_REPLAY_SETREPLAYSAVEDATA = 0x7b5,
/*20110816 to 20180523
Set Rec Option
20130807 to 20130814
Set Replay Save Data
*/
	MSG_REPLAY_SETRECOPTION = 0x7b6,
/*20110816 to 20180523
%.1f %% Pos☞:%d:%d:%d
%.1f % Pos->:%d:%d:%d
20130807 to 20130814
Set Rec Option
*/
	MSG_REPLAY_GAGEPOS1 = 0x7b7,
/*20110816 to 20180523
%.1f %% Pos☞:이동불가
%.1f % Pos->:cannot move
20130807 to 20130814
%.1f %% Pos☞:%d:%d:%d
%.1f % Pos->:%d:%d:%d
*/
	MSG_REPLAY_GAGEPOS2 = 0x7b8,
/*20110816 to 20180523
Start
20130807 to 20130814
%.1f %% Pos☞:이동불가
%.1f % Pos->:cannot move
*/
	MSG_REPLAY_START = 0x7b9,
/*20110816 to 20180523
Stop
20130807 to 20130814
Start
*/
	MSG_REPLAY_STOP = 0x7ba,
/*20110816 to 20180523
Input FileName -> Start
20130807 to 20130814
Stop
*/
	MSG_REPLAY_START2 = 0x7bb,
/*20110816 to 20180523
Open Option
20130807 to 20130814
Input FileName -> Start
*/
	MSG_REPLAY_OPENOPTION = 0x7bc,
/*20110816 to 20180523
Close Option
20130807 to 20130814
Open Option
*/
	MSG_REPLAY_CLOSEOPION = 0x7bd,
/*20110816 to 20180523
End
20130807 to 20130814
Close Option
*/
	MSG_REPLAY_END = 0x7be,
/*20110816 to 20180523
Time
20130807 to 20130814
End
*/
	MSG_REPLAY_TIME = 0x7bf,
/*20110816 to 20180523
파티&친구
Party & Friends
20130807 to 20130814
Time
*/
	MSG_REPLAY_PARTYFRIEND = 0x7c0,
/*20110816 to 20180523
채팅
Chat
20130807 to 20130814
파티&친구
Party & Friends
*/
	MSG_REPLAY_CHAT = 0x7c1,
/*20110816 to 20180523
단축키
Shortcuts
20130807 to 20130814
채팅
Chat
*/
	MSG_REPLAY_SHORTCUTS = 0x7c2,
/*20110816 to 20180523
자동 파일명 생성
Automatic filename generation
20130807 to 20130814
단축키
Shortcuts
*/
	MSG_REPLAY_AUTOMATICFILENAME = 0x7c3,
/*20110816 to 20180523
파일 중복 채크
Checking for duplicate files
20130807 to 20130814
자동 파일명 생성
Automatic filename generation
*/
	MSG_REPLAY_CHECKINGFILE = 0x7c4,
/*20110816 to 20180523
동일한 파일이 존재 합니다.
The same file exists already.
20130807 to 20130814
파일 중복 채크
Checking for duplicate files
*/
	MSG_REPLAY_THESAMEFILEEXISTS = 0x7c5,
/*20110816 to 20180523
Record Start
20130807 to 20130814
동일한 파일이 존재 합니다.
The same file exists already.
*/
	MSG_REPLAY_RECORDSTART = 0x7c6,
/*20110816 to 20180523
 is Saved.
20130807 to 20130814
Record Start
*/
	MSG_REPLAY_RECORDEND = 0x7c7,
#endif
#if PACKETVER >= 20110823
/*20110823 to 20180523
Weight : %3d / %3d
Weight: %3d / %3d
20130807 to 20130814
 is Saved.
*/
	MSG_WEIGHT = 0x7c8,
/*20110823 to 20180523
Total : %s C
Total: %s C
20130807 to 20130814
Weight : %3d / %3d
Weight: %3d / %3d
*/
	MSG_TOTAL = 0x7c9,
/*20110823 to 20180523
[수리검]을 장착한 상태여야 합니다.
[Shuriken] must be equipped.
20130807 to 20130814
Total : %s C
Total: %s C
*/
	MSG_FAIL_NEED_EQUIPPED_SYURIKEN = 0x7ca,
#endif
#if PACKETVER >= 20110831
/*20110831 to 20180523
Base Lv. %d
20130807 to 20130814
[수리검]을 장착한 상태여야 합니다.
[Shuriken] must be equipped.
*/
	MSG__BASIC_MSG_BASE = 0x7cb,
/*20110831 to 20180523
Job Lv. %d
20130807 to 20130814
Base Lv. %d
*/
	MSG__BASIC_MSG_JOB = 0x7cc,
/*20110831 to 20180523
Zeny : %s
Zeny: %s
20130807 to 20130814
Job Lv. %d
*/
	MSG_BASIC_MSG_ZENY = 0x7cd,
/*20110831 to 20180523
Trilinear
20130807 to 20130814
Zeny : %s
Zeny: %s
*/
	MSG_GRAPHIC_MSG_TRILINEAR = 0x7ce,
/*20110831 to 20180523
attack
20130807 to 20130814
Trilinear
*/
	MSG_GRAPHIC_MSG_ATTACK = 0x7cf,
/*20110831 to 20180523
skill
20130807 to 20130814
attack
*/
	MSG_GRAPHIC_MSG_SKILL = 0x7d0,
/*20110831 to 20180523
item
20130807 to 20130814
skill
*/
	MSG_GRAPHIC_MSG_ITEM = 0x7d1,
/*20110831 to 20180523
NoCtrl
20130807 to 20130814
item
*/
	MSG_GRAPHIC_MSG_NOCTRL = 0x7d2,
/*20110831 to 20180523
전장
More
20130807 to 20130814
NoCtrl
*/
	MSG_GRAPHIC_MSG_BATTLE = 0x7d3,
/*20110831 to 20180523
(Character/Total Slot)
20130807 to 20130814
전장
More
*/
	MSG_CHARACTER_MSG_CHARACTERTOTALSLOT = 0x7d4,
/*20110831 to 20180523
Premium Service
VIP Service
20130807 to 20130814
(Character/Total Slot)
*/
	MSG_CHARACTER_MSG_PREMIUMSERVICE = 0x7d5,
/*20110831 to 20180523
Premium 
VIP 
20130807 to 20130814
Premium Service
VIP Service
*/
	MSG_CHARACTER_MSG_PREMIUM = 0x7d6,
/*20110831 to 20180523
Service
20130807 to 20130814
Premium 
VIP 
*/
	MSG_CHARACTER_MSG_SERVICE = 0x7d7,
/*20110831 to 20180523
Billing Service
VIP
20130807 to 20130814
Service
*/
	MSG_CHARACTER_MSG_BILLINGSERVICE = 0x7d8,
/*20110831 to 20180523
Billing 
VIP 
20130807 to 20130814
Billing Service
VIP
*/
	MSG_CHARACTER_MSG_BILLING = 0x7d9,
/*20110831 to 20180523
Command List
20130807 to 20130814
Billing 
VIP 
*/
	MSG_MSG_COMMANDLIST = 0x7da,
/*20110831 to 20180523
LEVEL
20130807 to 20130814
Command List
*/
	MSG_SEEK_PARTY_LEVEL = 0x7db,
/*20110831 to 20180523
MAP
20130807 to 20130814
LEVEL
*/
	MSG_SEEK_PARTY_MAP = 0x7dc,
/*20110831 to 20180523
JOB
20130807 to 20130814
MAP
*/
	MSG_SEEK_PARTY_JOB = 0x7dd,
#endif
#if PACKETVER >= 20110906
/*20110906 to 20180523
Not Available
20130807 to 20130814
JOB
*/
	MSG_MSG_NOTAVAILABLE = 0x7de,
#endif
#if PACKETVER >= 20110920
/*20110920 to 20110929
[수호 천사의 보호] 스킬은 만렙일 경우, 경험치 100% 이상일 때는 사용할 수 없습니다.
20111004 to 20180523
[수호 천사의 보호] 만렙일 경우 사용할 수 없습니다.
[Protection of Guardian Angel] You can't use it when you reach the highest level.
20130807 to 20130814
Not Available
*/
	MSG_MSG_SUPERNOVICE_CHOPOKGI_CAPPEDLEVEL = 0x7df,
#endif
#if PACKETVER >= 20110928
/*20110928 to 20180523
정말 이동하시겠습니까?
Do you really want to move?
20130807 to 20130814
[수호 천사의 보호] 만렙일 경우 사용할 수 없습니다.
[Protection of Guardian Angel] You can't use it when you reach the highest level.
*/
	MSG_CHANGE_CHARACTER_SLOT = 0x7e0,
/*20110928 to 20180523
캐릭터 슬롯 이동에 실패했습니다.
Failed to move Char slot.
20130807 to 20130814
정말 이동하시겠습니까?
Do you really want to move?
*/
	MSG_CHANGE_CHARACTER_SLOT_FAILED = 0x7e1,
#endif
#if PACKETVER >= 20111004
/*20111004 to 20180523
캐릭터 이름이 잘못 되었습니다.
Character name is invalid.
20130807 to 20130814
캐릭터 슬롯 이동에 실패했습니다.
Failed to move Char slot.
*/
	MSG_CHARACTERNAME_ERROR = 0x7e2,
/*20111004 to 20180523
퀘스트보기창
Show Quest
20130807 to 20130814
캐릭터 이름이 잘못 되었습니다.
Character name is invalid.
*/
	MSG_QUEST_DISPLAY_ONOFF = 0x7e3,
#endif
#if PACKETVER >= 20111017
/*20111017 to 20111021
정말 탭을 제거하시겠습니까?
20111025 to 20111116
청소년 보호법에 따라, 잠시 후 0시 부터 6시 까지 ^ff0000만 16세 미만 고객님들의 게임 이용이 제한^000000됩니다.
20111122 to 20180523
 청소년 보호법에 따라, 잠시 후 0시 부터 6시 까지 만 16세 미만 고객님들의 게임 이용이 제한됩니다.
Depending on the protection of youth, and 0:00 to 6:00 while under the age of 16 of your game use is limited.
20130807 to 20130814
퀘스트보기창
Show Quest
*/
	MSG_SHUTDOWN_ALERT_MSG = 0x7e4,
/*20111017 to 20111021
더이상 탭을 제거할 수 없습니다.
20111025 to 20180523
청소년 보호법에 따라, 0시 부터 6시 까지 ^ff0000만 16세 미만 고객님들의 게임 이용이 제한^000000되며, 게임을 종료합니다.
Depending on the protection of youth, 0:00 to 6:00 ^ff0000 under the age of 16 ^000000 limit your use of the game and the game ends.
20130807 to 20130814
 청소년 보호법에 따라, 잠시 후 0시 부터 6시 까지 만 16세 미만 고객님들의 게임 이용이 제한됩니다.
Depending on the protection of youth, and 0:00 to 6:00 while under the age of 16 of your game use is limited.
*/
	MSG_BAN_SHUTDOWN_TEENAGER = 0x7e5,
/*20111017 to 20111021
더이상 탭을 추가할 수 없습니다.
20111025 to 20180523
캐릭터 이름을 변경하기 위해서는 길드에서 탈퇴 해야 합니다.
In order to change the character name, you must leave the guild.
20130807 to 20130814
청소년 보호법에 따라, 0시 부터 6시 까지 ^ff0000만 16세 미만 고객님들의 게임 이용이 제한^000000되며, 게임을 종료합니다.
Depending on the protection of youth, 0:00 to 6:00 ^ff0000 under the age of 16 ^000000 limit your use of the game and the game ends.
*/
	MSG_FAILED_RENAME_BELONGS_TO_GUILD = 0x7e6,
#endif
#if PACKETVER >= 20111025
/*20111025 to 20180523
캐릭터 이름을 변경하기 위해서는 파티에서 탈퇴 해야 합니다.
In order to change the character name, you must leave the party.
20130807 to 20130814
캐릭터 이름을 변경하기 위해서는 길드에서 탈퇴 해야 합니다.
In order to change the character name, you must leave the guild.
*/
	MSG_FAILED_RENAME_BELONGS_TO_PARTY = 0x7e7,
/*20111025 to 20180523
알 수 없는 오류로 캐릭터 이름 변경이 실패 하였습니다.
Character name change failed, due an unknown error.
20130807 to 20130814
캐릭터 이름을 변경하기 위해서는 파티에서 탈퇴 해야 합니다.
In order to change the character name, you must leave the party.
*/
	MSG_FAILED_RENAME_UNKOWN = 0x7e8,
#endif
#if PACKETVER >= 20111101
/*20111101 to 20180523
이미 캐릭터 슬롯변경이 가능한 상태입니다.(%d)
Ready to change character slot in.(%d)
20130807 to 20130814
알 수 없는 오류로 캐릭터 이름 변경이 실패 하였습니다.
Character name change failed, due an unknown error.
*/
	MSG_CHARSLOT_CHANGE_DUPLICATE = 0x7e9,
/*20111101 to 20180523
이미 캐릭터 이름변경이 가능한 상태입니다.(%d)
Ready to change character name in.(%d)
20130807 to 20130814
이미 캐릭터 슬롯변경이 가능한 상태입니다.(%d)
Ready to change character slot in.(%d)
*/
	MSG_CHARNAME_CHANGE_DUPLICATE = 0x7ea,
/*20111101 to 20180523
변경하려는 이름의 길이가 최대크기를 초과하여 캐릭터 이름 변경이 실패 하였습니다.
Length exceeds the maximum size of the character name you want to change.
20130807 to 20130814
이미 캐릭터 이름변경이 가능한 상태입니다.(%d)
Ready to change character name in.(%d)
*/
	MSG_FAILED_RENAME_OVER_LENGTH = 0x7eb,
/*20111101 to 20180523
사용할 수 없는 단어가 포함되어 캐릭터 이름 변경이 실패 하였습니다.
Name contains invalid characters. Character name change failed.
20130807 to 20130814
변경하려는 이름의 길이가 최대크기를 초과하여 캐릭터 이름 변경이 실패 하였습니다.
Length exceeds the maximum size of the character name you want to change.
*/
	MSG_FAILED_RENAME_PREVENTNAM = 0x7ec,
/*20111101 to 20180523
이름 변경이 금지된 상태이므로 캐릭터 이름 변경이 실패 하였습니다.
The name change is prohibited. Character name change failed.
20130807 to 20130814
사용할 수 없는 단어가 포함되어 캐릭터 이름 변경이 실패 하였습니다.
Name contains invalid characters. Character name change failed.
*/
	MSG_FAILED_RENAME_FORBIDDEN = 0x7ed,
#endif
#if PACKETVER >= 20111108
/*20111108 to 20180523
완료
Complete
20130807 to 20130814
이름 변경이 금지된 상태이므로 캐릭터 이름 변경이 실패 하였습니다.
The name change is prohibited. Character name change failed.
*/
	MSG_COMPLETE_HUNTING_QUEST = 0x7ee,
#endif
#if PACKETVER >= 20111114
/*20111114 to 20111116
 몬스터 사냥을 통해 얻을 수 있는 경험치가 %d분간 %d%% 증가합니다.
20111122 to 20180523
 %d분간 얻을 수 있는 경험치가 %d%% 증가합니다.
During %d minutes your Exp will increase by %d%%.
20130807 to 20130814
완료
Complete
*/
	MSG_PLUSEXP_VALUE = 0x7ef,
/*20111114 to 20180523
소환까지 %02d초남았습니다.
%02d seconds left until summon.
20130807 to 20130814
 %d분간 얻을 수 있는 경험치가 %d%% 증가합니다.
During %d minutes your Exp will increase by %d%%.
*/
	MSG_PARTY_RECALL_TIME = 0x7f0,
/*20111114 to 20180523
파티장이 당신을 %s (%s) 로 소환합니다.소환시 %d zeny가 소모됩니다.
Your party leader summons you to %s (%s). Warp costs %d Zeny.
20130807 to 20130814
소환까지 %02d초남았습니다.
%02d seconds left until summon.
*/
	MSG_PARTY_RECALL_INFO = 0x7f1,
/*20111114 to 20180523
소환대상
Summon target
20130807 to 20130814
파티장이 당신을 %s (%s) 로 소환합니다.소환시 %d zeny가 소모됩니다.
Your party leader summons you to %s (%s). Warp costs %d Zeny.
*/
	MSG_RECALL_TARGET = 0x7f2,
/*20111114 to 20180523
차단목록
Block List
20130807 to 20130814
소환대상
Summon target
*/
	MSG_PARTY_BLACKLIST = 0x7f3,
/*20111114 to 20120209
파티 광고를 등록하기 위해 1000제니가 소모됩니다.
20120214 to 20180523
파티 광고를 등록하기 위해 %d제니가 소모됩니다.
%d Zeny will be spent for making party ad.
20130807 to 20130814
차단목록
Block List
*/
	MSG_PARTY_CF_PAY = 0x7f4,
/*20111114 to 20180523
파티 광고를 하기 위한 제니가 부족합니다.
Insufficient Zeny for making party ad.
20130807 to 20130814
파티 광고를 등록하기 위해 %d제니가 소모됩니다.
%d Zeny will be spent for making party ad.
*/
	MSG_PARTY_CF_PAY_SHORTAGE_COST = 0x7f5,
/*20111114 to 20180523
)님 파티 가입승인
) party: accept invitation
20130807 to 20130814
파티 광고를 하기 위한 제니가 부족합니다.
Insufficient Zeny for making party ad.
*/
	MSG_PARTY_ADD_OK = 0x7f6,
/*20111114 to 20180523
)님 파티 가입거부
) party: decline invitation
20130807 to 20130814
)님 파티 가입승인
) party: accept invitation
*/
	MSG_PARTY_ADD_REFUSES = 0x7f7,
/*20111114 to 20180523
)님 장비창보기
) party: show equipment window
20130807 to 20130814
)님 파티 가입거부
) party: decline invitation
*/
	MSG_PARTY_ITEM_VIEW = 0x7f8,
/*20111114 to 20180523
한글18글자,영문36글자 입력가능
Up to 36 english letters can be entered
20130807 to 20130814
)님 장비창보기
) party: show equipment window
*/
	MSG_SEEK_PARTY_MEMO_HELP = 0x7f9,
/*20111114 to 20180523
지원하기
Enter
20130807 to 20130814
한글18글자,영문36글자 입력가능
Up to 36 english letters can be entered
*/
	MSG_PARTY_REQUEST = 0x7fa,
/*20111114 to 20180523
1:1대화하기
1:1 Chat
20130807 to 20130814
지원하기
Enter
*/
	MSG_DIRECT_CHAT = 0x7fb,
/*20111114 to 20180523
차단하기
Block
20130807 to 20130814
1:1대화하기
1:1 Chat
*/
	MSG_ADD_BLACKLIST = 0x7fc,
#endif
#if PACKETVER >= 20111122
/*20111122 to 20180523
파티장에게 소환되기 위한 제니가 부족합니다.
Insufficient Zeny for recall.
20130807 to 20130814
차단하기
Block
*/
	MSG_PARTY_RECRUIT_NOT_RECALL_PAY = 0x7fd,
/*20111122 to 20180523
메모란에 파티광고를 써주세요.
Input your party ad.
20130807 to 20130814
파티장에게 소환되기 위한 제니가 부족합니다.
Insufficient Zeny for recall.
*/
	MSG_PARTY_RECRUIT_MEMO_ERROR = 0x7fe,
/*20111122 to 20180523
파티장만이 파티광고를 등록할수있습니다.
Only party leader can register party ad.
20130807 to 20130814
메모란에 파티광고를 써주세요.
Input your party ad.
*/
	MSG_PARTY_RECRUIT_ERROR = 0x7ff,
/*20111122 to 20180523
이미 지원한 파티광고입니다.
You have already accepted this ad.
20130807 to 20130814
파티장만이 파티광고를 등록할수있습니다.
Only party leader can register party ad.
*/
	MSG_PARTY_REFUSE_ERROR = 0x800,
/*20111122 to 20180523
내용
For
20130807 to 20130814
이미 지원한 파티광고입니다.
You have already accepted this ad.
*/
	MSG_PARTY_RECRUIT_INFO = 0x801,
/*20111122 to 20180523
장비
E
20130807 to 20130814
내용
For
*/
	MSG_INVENTORY_TABNAME_1 = 0x802,
/*20111122 to 20180523
개인
F
20130807 to 20130814
장비
E
*/
	MSG_INVENTORY_TABNAME_3 = 0x803,
/*20111122 to 20180523
 아이템 버리기 잠금
 Drop Lock: On/Off
20130807 to 20130814
개인
F
*/
	MSG_ITEM_DROP_LOCK = 0x804,
/*20111122 to 20180523
파티원 찾기 알람
Party Alarm
20130807 to 20130814
 아이템 버리기 잠금
 Drop Lock: On/Off
*/
	MSG_PARTY_RECRUIT_ALRAM = 0x805,
#endif
#if PACKETVER >= 20111207
/*20111207 to 20180523
파티결성
Create Party
20130807 to 20130814
파티원 찾기 알람
Party Alarm
*/
	MSG_CREATE_PARTY = 0x806,
/*20111207 to 20180523
파티탈퇴
Leave Party
20130807 to 20130814
파티결성
Create Party
*/
	MSG_WITHDRAW_PARTY = 0x807,
/*20111207 to 20180523
파티초대
Party Invitation
20130807 to 20130814
파티탈퇴
Leave Party
*/
	MSG_INVITE_PARTY = 0x808,
/*20111207 to 20180523
파티 이름 등록
Party Name:
20130807 to 20130814
파티초대
Party Invitation
*/
	MSG_PUT_PARTY_NAME_IN = 0x809,
/*20111207 to 20180523
초대할 캐릭터 이름
Player Name:
20130807 to 20130814
파티 이름 등록
Party Name:
*/
	MSG_PUT_PLAYER_NAME_IN = 0x80a,
/*20111207 to 20180523
님께 파티가입 요청을 보냈습니다.
 has recieved an invitation to join your party.
20130807 to 20130814
초대할 캐릭터 이름
Player Name:
*/
	MSG_CHARACTER_PARTY_INVITATION_TO_JOIN = 0x80b,
/*20111207 to 20180523
님께서 파티가입을 거절했습니다.
 rejected your party invitation.
20130807 to 20130814
님께 파티가입 요청을 보냈습니다.
 has recieved an invitation to join your party.
*/
	MSG_CHARACTER_REJECT_PARTY_INVITATION = 0x80c,
/*20111207 to 20180523
님께서 파티가입을 수락했습니다.
 accepted your party invitation.
20130807 to 20130814
님께서 파티가입을 거절했습니다.
 rejected your party invitation.
*/
	MSG_CHARACTER_ACCEPT_PARTY_INVITATION = 0x80d,
/*20111207 to 20180523
이미 파티모집중입니다.
Recruitment is already a party.
20130807 to 20130814
님께서 파티가입을 수락했습니다.
 accepted your party invitation.
*/
	MSG_PARTY_RECRUIT_ERROR1 = 0x80e,
/*20111207 to 20180523
이전 검색과 같은 조건입니다.
Same conditions such as the previous search.
20130807 to 20130814
이미 파티모집중입니다.
Recruitment is already a party.
*/
	MSG_PARTY_RECRUIT_ERROR2 = 0x80f,
/*20111207 to 20180523
길드 탈퇴 후 사용 가능합니다.
Guild after withdrwal.
20130807 to 20130814
이전 검색과 같은 조건입니다.
Same conditions such as the previous search.
*/
	MSG_CHARNAME_CHANGE_FILED_GUILDMEMBER = 0x810,
/*20111207 to 20180523
파티 탈퇴 후 사용 가능합니다.
Party after secession.
20130807 to 20130814
길드 탈퇴 후 사용 가능합니다.
Guild after withdrwal.
*/
	MSG_CHARNAME_CHANGE_FILED_PARTYMEMBER = 0x811,
/*20111207 to 20180523
소환 유저가 소환이 안되는 맵에 있습니다.
The player can not be summoned to this map.
20130807 to 20130814
파티 탈퇴 후 사용 가능합니다.
Party after secession.
*/
	MSG_PARTY_RECRUIT_RECALL_ERR1 = 0x812,
/*20111207 to 20120229
파티장이 있는 맵에서는 소환이 안됩니다.
20120307 to 20180523
현재 파티장이 있는 맵에서는 소환이 안됩니다.
Party Leader is on a map that is restricted to summon players.
20130807 to 20130814
소환 유저가 소환이 안되는 맵에 있습니다.
The player can not be summoned to this map.
*/
	MSG_PARTY_RECRUIT_RECALL_ERR2 = 0x813,
/*20111207 to 20180523
소환거부되었습니다.
Summon has been denied.
20130807 to 20130814
현재 파티장이 있는 맵에서는 소환이 안됩니다.
Party Leader is on a map that is restricted to summon players.
*/
	MSG_PARTY_RECRUIT_RECALL_ERR3 = 0x814,
/*20111207 to 20180523
소환을 할 수 없습니다.
Can not be summoned.
20130807 to 20130814
소환거부되었습니다.
Summon has been denied.
*/
	MSG_PARTY_RECRUIT_RECALL_ERR4 = 0x815,
/*20111207 to 20180523
파티초대는 파티장만 가능합니다.
Only the leader can invite.
20130807 to 20130814
소환을 할 수 없습니다.
Can not be summoned.
*/
	MSG_YOU_ARE_NOT_PARTYMASTER = 0x816,
#endif
#if PACKETVER >= 20111213
/*20111213 to 20180523
검색할 아이템명 입력 :
Search item:
20130807 to 20130814
파티초대는 파티장만 가능합니다.
Only the leader can invite.
*/
	MSG_NC_ITEM_SEARCH = 0x817,
/*20111213 to 20180523
캐릭터명을 입력하셔야 합니다.
You must enter a character name.
20130807 to 20130814
검색할 아이템명 입력 :
Search item:
*/
	MSG_PLEASE_PUT_CHARACTER_NAME_IN = 0x818,
/*20111213 to 20180523
파티이름을 입력하셔야 합니다.
You must enter the name of the party.
20130807 to 20130814
캐릭터명을 입력하셔야 합니다.
You must enter a character name.
*/
	MSG_PLEASE_PUT_PARTY_NAME_IN = 0x819,
#endif
#if PACKETVER >= 20111220
/*20111220 to 20180523
길드 도우미
Guild Creation Window
20130807 to 20130814
파티이름을 입력하셔야 합니다.
You must enter the name of the party.
*/
	MSG_GUILD_HELPER = 0x81a,
/*20111220 to 20180523
가입되어 있는 길드가 없습니다.
Join a guild or start your own!
20130807 to 20130814
길드 도우미
Guild Creation Window
*/
	MSG_NO_GUILD_CURRENTLY_PARTICIPATED_IN = 0x81b,
/*20111220 to 20180523
길드 결성
Create Guild
20130807 to 20130814
가입되어 있는 길드가 없습니다.
Join a guild or start your own!
*/
	MSG_CREATE_GUILD = 0x81c,
/*20111220 to 20180523
생성할 길드 이름
Guild Name
20130807 to 20130814
길드 결성
Create Guild
*/
	MIS_PUT_GUILD_NAME_IN = 0x81d,
/*20111220 to 20180523
길드 결성 도움말
Guild System
20130807 to 20130814
생성할 길드 이름
Guild Name
*/
	MIS_GUILD_TIP = 0x81e,
/*20111220 to 20180523
길드 시스템이란
What is the guild system
20130807 to 20130814
길드 결성 도움말
Guild System
*/
	MIS_GUILD_SYSTEM = 0x81f,
/*20111220 to 20180523
길드이름을 입력하셔야 합니다.
You must enter the name of your guild.
20130807 to 20130814
길드 시스템이란
What is the guild system
*/
	MSG_PLEASE_PUT_GUILD_NAME_IN = 0x820,
#endif
#if PACKETVER >= 20111227
/*20111227 to 20180523
지원한 파티에서 거부당했습니다.
Supported at the party was rejected.
20130807 to 20130814
길드이름을 입력하셔야 합니다.
You must enter the name of your guild.
*/
	MSG_PARTY_RECRUIT_REFUSE_VOLUNTEER = 0x821,
#endif
#if PACKETVER >= 20120103
/*20120103 to 20180523
서비스 선택.
Select Service:
20130807 to 20130814
지원한 파티에서 거부당했습니다.
Supported at the party was rejected.
*/
	MSG_SERVICESELECT = 0x822,
/*20120103 to 20180523
탈출 가능한 지역.
Possible escape area.
20130807 to 20130814
서비스 선택.
Select Service:
*/
	MSG_SHOW_MAPNAMETITLE = 0x823,
/*20120103 to 20180523
Replay File List
20130807 to 20130814
탈출 가능한 지역.
Possible escape area.
*/
	MSG_REPLAY_STR_REPLAYFILELIST = 0x824,
/*20120103 to 20180523
File info
20130807 to 20130814
Replay File List
*/
	MSG_REPLAY_STR_FILEINFO = 0x825,
/*20120103 to 20180523
File List
20130807 to 20130814
File info
*/
	MSG_REPLAY_STR_FILELIST = 0x826,
#endif
#if PACKETVER >= 20120117
/*20120117 to 20180523
%s 아이템은 거래가 불가능 합니다.
%s Item deal not possible.
20130807 to 20130814
File List
*/
	MSG_NOT_MOVEABLE_TRADE = 0x827,
#endif
#if PACKETVER >= 20120207
/*20120207 to 20180523
길드해체
Disband the Guild
20130807 to 20130814
%s 아이템은 거래가 불가능 합니다.
%s Item deal not possible.
*/
	MSG_GUILD_DISBAND = 0x828,
/*20120207 to 20180523
해체할 길드 이름
Enter Guild Name
20130807 to 20130814
길드해체
Disband the Guild
*/
	MSG_PUT_DISBAND_GUILDNAME = 0x829,
#endif
#if PACKETVER >= 20120214
/*20120214 to 20180523
접속하지 않았거나 존재하지 않는 캐릭터입니다.
The character is not online or does not exist.
20130807 to 20130814
해체할 길드 이름
Enter Guild Name
*/
	MSG_JOINGUILD_NOTEXIST_USER = 0x82a,
#endif
#if PACKETVER >= 20120228
/*20120228 to 20180523
팔콘 호출에 실패하였습니다.
Failed to call Falcon.
20130807 to 20130814
접속하지 않았거나 존재하지 않는 캐릭터입니다.
The character is not online or does not exist.
*/
	MSG_FAILED_SET_EFFECT_BIRD = 0x82b,
#endif
#if PACKETVER >= 20120307
/*20120307 to 20120320
%d%% ( 프리미엄 %d%% + %s서버 %d%% )
20120328 to 20180523
%d%% ( 기본 100%% + 프리미엄 %d%% + %s서버 %d%% )
%d%%(default 100%%+ Premium%d%%+%s Server%d%%)
20130807 to 20130814
팔콘 호출에 실패하였습니다.
Failed to call Falcon.
*/
	MSG_BASIC_EXP_MSG_BRZ = 0x82c,
/*20120307 to 20180523
해당 유저는 현재 공성전에 참가하고 있습니다.
This user is currently participating in the siege.
20130807 to 20130814
%d%% ( 기본 100%% + 프리미엄 %d%% + %s서버 %d%% )
%d%%(default 100%%+ Premium%d%%+%s Server%d%%)
*/
	MSG_JOINGUILD_TARGET_USER_IN_SIEGEMAP = 0x82d,
/*20120307 to 20180523
동일한 맵에서만 파티장 변경이 가능합니다.
It is only possible to change the party leader while on the same map.
20130807 to 20130814
해당 유저는 현재 공성전에 참가하고 있습니다.
This user is currently participating in the siege.
*/
	MSG_PARTY_MASTER_CHANGE_SAME_MAP = 0x82e,
/*20120307 to 20180523
현재 지역에서는 파티장 변경이 불가능합니다.
In the current region it is not possible to change the party.
20130807 to 20130814
동일한 맵에서만 파티장 변경이 가능합니다.
It is only possible to change the party leader while on the same map.
*/
	MSG_CANNOT_PARTY_MASTER_CHANGE_IN_MAP = 0x82f,
/*20120307 to 20180523
그리폰 내리기
Gryphon making
20130807 to 20130814
현재 지역에서는 파티장 변경이 불가능합니다.
In the current region it is not possible to change the party.
*/
	MSG_ROYAL_CHIKENOFF = 0x830,
/*20120307 to 20120307
현재 공성전에 참여 중이므로 길드초대를 하실 수 없습니다.
You can't invite characters in WoE maps.
20120314 to 20180523
%d월 %d일 %d시 %d분 %d초
Delete: %d/%d - %d:%d:%d
20130807 to 20130814
그리폰 내리기
Gryphon making
*/
	MSG_TIME_TYPE3 = 0x831,
#endif
#if PACKETVER >= 20120314
/*20120314 to 20180523
현재 공성전에 참여 중이므로 길드초대를 하실 수 없습니다.
You can't invite characters in WoE maps.
20130807 to 20130814
%d월 %d일 %d시 %d분 %d초
Delete: %d/%d - %d:%d:%d
*/
	MSG_JOINGUILD_REQ_USER_IN_SIEGEMAP = 0x832,
/*20120314 to 20180523
전장에 입장 대기를 신청하셨습니다.
You are now in the battlefield queue.
20130807 to 20130814
현재 공성전에 참여 중이므로 길드초대를 하실 수 없습니다.
You can't invite characters in WoE maps.
*/
	MSG_BATTLEFIELD_MSG_REQUEST_JOINWAIT = 0x833,
/*20120314 to 20180523
인원이 가득 찼습니다.
Queuing has finished.
20130807 to 20130814
전장에 입장 대기를 신청하셨습니다.
You are now in the battlefield queue.
*/
	MSG_BATTLEFIELD_MSG_FULL = 0x834,
/*20120314 to 20180523
확인되지 않은 전장명입니다.
Invalid name of the battlefield.
20130807 to 20130814
인원이 가득 찼습니다.
Queuing has finished.
*/
	MSG_BATTLEFIELD_MSG_UNKNOWN_NAME = 0x835,
/*20120314 to 20180523
확인되지 않은 신청타입입니다.
Invalid type of application.
20130807 to 20130814
확인되지 않은 전장명입니다.
Invalid name of the battlefield.
*/
	MSG_BATTLEFIELD_MSG_UNKNOWN_TYPE = 0x836,
/*20120314 to 20180523
최대 인원을 초과하였습니다.
People count exceeded.
20130807 to 20130814
확인되지 않은 신청타입입니다.
Invalid type of application.
*/
	MSG_BATTLEFIELD_MSG_MAXOVER = 0x837,
/*20120314 to 20180523
입장 레벨이 맞지 않습니다.
Your level doesn't fit this battlefield rules.
20130807 to 20130814
최대 인원을 초과하였습니다.
People count exceeded.
*/
	MSG_BATTLEFIELD_MSG_JOIN_NOTLEVEL = 0x838,
/*20120314 to 20180523
중복 신청하셨습니다.
Duplicate application.
20130807 to 20130814
입장 레벨이 맞지 않습니다.
Your level doesn't fit this battlefield rules.
*/
	MSG_BATTLEFIELD_MSG_JOIN_OVERLAP = 0x839,
/*20120314 to 20180523
재접속후 다시 신청하여 주시기 바랍니다.
After reconnecting, please re-apply.
20130807 to 20130814
중복 신청하셨습니다.
Duplicate application.
*/
	MSG_BATTLEFIELD_MSG_RESTART = 0x83a,
/*20120314 to 20180523
직업이 맞지 않습니다.
Your class can't participate in this battlefield.
20130807 to 20130814
재접속후 다시 신청하여 주시기 바랍니다.
After reconnecting, please re-apply.
*/
	MSG_BATTLEFIELD_MSG_NOTJOB = 0x83b,
/*20120314 to 20180523
파티장이나 길드장만이 신청할 수 있습니다.
Only party leader / guild master can apply.
20130807 to 20130814
직업이 맞지 않습니다.
Your class can't participate in this battlefield.
*/
	MSG_BATTLEFIELD_MSG_JOIN_ONLYBOSS = 0x83c,
/*20120314 to 20180523
전장을 이용 중인 팀원이 있어 신청이 불가능 합니다.
You can't apply while your team member is already on a battlefield.
20130807 to 20130814
파티장이나 길드장만이 신청할 수 있습니다.
Only party leader / guild master can apply.
*/
	MSG_BATTLEFIELD_MSG_BUSY_PARTYMEMBER = 0x83d,
/*20120314 to 20180523
전장 입장 대기가 취소되었습니다.
You have left the battlefield queue.
20130807 to 20130814
전장을 이용 중인 팀원이 있어 신청이 불가능 합니다.
You can't apply while your team member is already on a battlefield.
*/
	MSG_BATTLEFIELD_MSG_CANCEL_JOINWAIT = 0x83e,
/*20120314 to 20180523
잘못된 전장명 입니다.
Wrong battlefield name.
20130807 to 20130814
전장 입장 대기가 취소되었습니다.
You have left the battlefield queue.
*/
	MSG_BATTLEFIELD_MSG_WRONG_NAME = 0x83f,
/*20120314 to 20180523
전장 입장 대기 순위에 없습니다.
You are not in the battlefield queue list
20130807 to 20130814
잘못된 전장명 입니다.
Wrong battlefield name.
*/
	MSG_BATTLEFIELD_MSG_NOTRANK = 0x840,
/*20120314 to 20180523
선택하신 전장은 현재 이용하실 수 없으므로 대기가 취소됩니다.
The selected arena is unavailable; your application has been cancelled
20130807 to 20130814
전장 입장 대기 순위에 없습니다.
You are not in the battlefield queue list
*/
	MSG_BATTLEFIELD_MSG_FAIL_CHOICE = 0x841,
/*20120314 to 20180523
전장 입장을 취소하였습니다.
You have left the queue
20130807 to 20130814
선택하신 전장은 현재 이용하실 수 없으므로 대기가 취소됩니다.
The selected arena is unavailable; your application has been cancelled
*/
	MSG_BATTLEFIELD_MSG_CANCEL_JOIN = 0x842,
/*20120314 to 20180523
전장에 입장하시겠습니까?
Are you sure you want to join a battleground?
20130807 to 20130814
전장 입장을 취소하였습니다.
You have left the queue
*/
	MSG_BATTLEFIELD_MSG_DOYOU_JOIN = 0x843,
/*20120314 to 20180523
전장 입장 신청 시스템
[Battlefield application rules]
20130807 to 20130814
전장에 입장하시겠습니까?
Are you sure you want to join a battleground?
*/
	MSG_BATTLEFIELD_HELP1 = 0x844,
/*20120314 to 20180523
입장 신청 및 전장으로의 공간이동 불가 상황
Application and position into the battlefield cannot be applied under this circumtances
20130807 to 20130814
전장 입장 신청 시스템
[Battlefield application rules]
*/
	MSG_BATTLEFIELD_HELP2 = 0x845,
/*20120314 to 20180523
1. 여러 종류의 전장을 동시에 신청할 수 없습니다.
1. Different types of battle can not be applied simultaneously.
20130807 to 20130814
입장 신청 및 전장으로의 공간이동 불가 상황
Application and position into the battlefield cannot be applied under this circumtances
*/
	MSG_BATTLEFIELD_HELP3 = 0x846,
/*20120314 to 20180523
2. 개인 / 파티 / 길드 전장을 동시에 신청할 수 없습니다.
2. Personal / party / guild battle can not be applied simultaneously.
20130807 to 20130814
1. 여러 종류의 전장을 동시에 신청할 수 없습니다.
1. Different types of battle can not be applied simultaneously.
*/
	MSG_BATTLEFIELD_HELP4 = 0x847,
/*20120314 to 20180523
3. 파티 전장 신청은 파티장만 신청할 수 있으며,
3. Parties can only be applied by their party leaders.
20130807 to 20130814
2. 개인 / 파티 / 길드 전장을 동시에 신청할 수 없습니다.
2. Personal / party / guild battle can not be applied simultaneously.
*/
	MSG_BATTLEFIELD_HELP5 = 0x848,
/*20120314 to 20180523
오프라인중이거나 오프라인 된 파티원은 대기열에서 누락됩니다.
Offline party members won't proceed to the queue.
20130807 to 20130814
3. 파티 전장 신청은 파티장만 신청할 수 있으며,
3. Parties can only be applied by their party leaders.
*/
	MSG_BATTLEFIELD_HELP6 = 0x849,
/*20120314 to 20180523
4. 전장 신청은 전장 맵을 제외한 모든 곳에서 신청 가능하나,
4. You can add request to enter the arena from any map except for those who don't allow teleport/warp.
20130807 to 20130814
오프라인중이거나 오프라인 된 파티원은 대기열에서 누락됩니다.
Offline party members won't proceed to the queue.
*/
	MSG_BATTLEFIELD_HELP7 = 0x84a,
/*20120314 to 20180523
입장한 위치가 마을, 필드, 일반 던전이 아닐 경우 복귀 시 캐릭터 저장 좌표로 이동 됩니다.
When the battle is finished your character will be returned to the current spot or (if it's not possible) to the save point.
20130807 to 20130814
4. 전장 신청은 전장 맵을 제외한 모든 곳에서 신청 가능하나,
4. You can add request to enter the arena from any map except for those who don't allow teleport/warp.
*/
	MSG_BATTLEFIELD_HELP8 = 0x84b,
/*20120314 to 20180523
5. 전장의 보상 및 기타 서비스는 각 마을에 위치한 전장 모병관을 통해 전장 대기실에서 이용해 주십시오.
5. You can view and choose rewards in the arena waiting room.
20130807 to 20130814
입장한 위치가 마을, 필드, 일반 던전이 아닐 경우 복귀 시 캐릭터 저장 좌표로 이동 됩니다.
When the battle is finished your character will be returned to the current spot or (if it's not possible) to the save point.
*/
	MSG_BATTLEFIELD_HELP9 = 0x84c,
/*20120314 to 20180523
전장 입장 신청 도움말
Request help battle position
20130807 to 20130814
5. 전장의 보상 및 기타 서비스는 각 마을에 위치한 전장 모병관을 통해 전장 대기실에서 이용해 주십시오.
5. You can view and choose rewards in the arena waiting room.
*/
	MSG_BATTLEFIELD_HELP10 = 0x84d,
/*20120314 to 20180523
%s 전장이 시작됩니다.
%s battle begins.
20130807 to 20130814
전장 입장 신청 도움말
Request help battle position
*/
	MSG_BATTLEFIELD_START = 0x84e,
/*20120314 to 20180523
전장으로 이동하시겠습니까?
Do you want to enter the arena?
20130807 to 20130814
%s 전장이 시작됩니다.
%s battle begins.
*/
	MSG_BATTLEFIELD_DOYOU_MOVE = 0x84f,
/*20120314 to 20180523
[주의]
[Note]
20130807 to 20130814
전장으로 이동하시겠습니까?
Do you want to enter the arena?
*/
	MSG_BATTLEFIELD_WARNINGMSG1 = 0x850,
/*20120314 to 20180523
현재 위치가 마을, 필드 혹은 일반던전이
When the battle is finished your character will
20130807 to 20130814
[주의]
[Note]
*/
	MSG_BATTLEFIELD_WARNINGMSG2 = 0x851,
/*20120314 to 20180523
아닐 경우 전장 종료 후 저장된 위치로
be returned to the current spot or (if it's not
20130807 to 20130814
현재 위치가 마을, 필드 혹은 일반던전이
When the battle is finished your character will
*/
	MSG_BATTLEFIELD_WARNINGMSG3 = 0x852,
/*20120314 to 20180523
되돌아가게 됩니다.
possible) to the save point.
20130807 to 20130814
아닐 경우 전장 종료 후 저장된 위치로
be returned to the current spot or (if it's not
*/
	MSG_BATTLEFIELD_WARNINGMSG4 = 0x853,
/*20120314 to 20180523
다른 이의 요청 결과를 기다리고 있습니다.
Waiting for the opponents.
20130807 to 20130814
되돌아가게 됩니다.
possible) to the save point.
*/
	MSG_BATTLEFIELD_WAIT_PLAYER = 0x854,
/*20120314 to 20180523
전장 입장 요청
Battlefield position request
20130807 to 20130814
다른 이의 요청 결과를 기다리고 있습니다.
Waiting for the opponents.
*/
	MSG_BATTLEFIELD_REQUEST_JOIN = 0x855,
/*20120314 to 20180523
수락대기시간:%d초
Accept standby time:%d seconds
20130807 to 20130814
전장 입장 요청
Battlefield position request
*/
	MSG_BATTLEFIELD_WAITTIME_D = 0x856,
/*20120314 to 20180523
입장 대기 상태
Standby position
20130807 to 20130814
수락대기시간:%d초
Accept standby time:%d seconds
*/
	MSG_BATTLEFIELD_STATE_JOINWAIT = 0x857,
/*20120314 to 20180523
전장 명칭: %s
Battlefield name:%s
20130807 to 20130814
입장 대기 상태
Standby position
*/
	MSG_BATTLEFIELD_NAME_S = 0x858,
/*20120314 to 20180523
전장 필요 인원: %d
Persons required:%d
20130807 to 20130814
전장 명칭: %s
Battlefield name:%s
*/
	MSG_BATTLEFIELD_MEMBER_D = 0x859,
/*20120314 to 20180523
내 대기순번: %d
Your position:%d
20130807 to 20130814
전장 필요 인원: %d
Persons required:%d
*/
	MSG_BATTLEFIELD_MYRANK_D = 0x85a,
/*20120314 to 20180523
명칭 :
Name:
20130807 to 20130814
내 대기순번: %d
Your position:%d
*/
	MSG_BATTLEFIELD_DP_TITLE = 0x85b,
/*20120314 to 20180523
목표 :
Goal:
20130807 to 20130814
명칭 :
Name:
*/
	MSG_BATTLEFIELD_DP_AIM = 0x85c,
/*20120314 to 20180523
전장의 인원 구성 :
Format:
20130807 to 20130814
목표 :
Goal:
*/
	MSG_BATTLEFIELD_DP_MEMBER = 0x85d,
/*20120314 to 20180523
참여조건 :
Level:
20130807 to 20130814
전장의 인원 구성 :
Format:
*/
	MSG_BATTLEFIELD_DP_REQUIRED = 0x85e,
/*20120314 to 20180523
보상(승) :
Win:
20130807 to 20130814
참여조건 :
Level:
*/
	MSG_BATTLEFIELD_DP_WIN = 0x85f,
/*20120314 to 20180523
보상(무) :
Draw:
20130807 to 20130814
보상(승) :
Win:
*/
	MSG_BATTLEFIELD_DP_DRAW = 0x860,
/*20120314 to 20180523
보상(패) :
Loss:
20130807 to 20130814
보상(무) :
Draw:
*/
	MSG_BATTLEFIELD_DP_LOSS = 0x861,
/*20120314 to 20180523
전장을 개인으로 신청 하셨습니다. 맞습니까?
Do you want to participate in the individuals battle?
20130807 to 20130814
보상(패) :
Loss:
*/
	MSG_BATTLEFIELD_DOYOU_SINGLE = 0x862,
/*20120314 to 20180523
전장을 파티로 신청 하셨습니다. 맞습니까?
Do you want to participate in the parties battle?
20130807 to 20130814
전장을 개인으로 신청 하셨습니다. 맞습니까?
Do you want to participate in the individuals battle?
*/
	MSG_BATTLEFIELD_DOYOU_PALTY = 0x863,
/*20120314 to 20180523
전장을 길드로 신청 하셨습니다. 맞습니까?
Do you want to participate in the guilds battle?
20130807 to 20130814
전장을 파티로 신청 하셨습니다. 맞습니까?
Do you want to participate in the parties battle?
*/
	MSG_BATTLEFIELD_DOYOU_GUILD = 0x864,
/*20120314 to 20180523
전장 목록
Battleground List
20130807 to 20130814
전장을 길드로 신청 하셨습니다. 맞습니까?
Do you want to participate in the guilds battle?
*/
	MSG_BATTLEFIELD_LIST2 = 0x865,
/*20120314 to 20180523
%d VS %d
20130807 to 20130814
전장 목록
Battleground List
*/
	MSG_BATTLEFIELD_D_VS_D = 0x866,
/*20120314 to 20180523
Base LV %d 이하
LV %d and lower
20130807 to 20130814
%d VS %d
*/
	MSG_BATTLEFIELD_LEVELDOWN_D = 0x867,
/*20120314 to 20180523
Base LV %d 이상
LV %d and higher
20130807 to 20130814
Base LV %d 이하
LV %d and lower
*/
	MSG_BATTLEFIELD_LEVELUP_D = 0x868,
/*20120314 to 20180523
Base LV %d ~ %d
LV %d ~ %d
20130807 to 20130814
Base LV %d 이상
LV %d and higher
*/
	MSG_BATTLEFIELD_LEVEL_D_D = 0x869,
/*20120314 to 20180523
제한 없음
No restrictions
20130807 to 20130814
Base LV %d ~ %d
LV %d ~ %d
*/
	MSG_BATTLEFIELD_LIMITLESS = 0x86a,
/*20120314 to 20180523
[해당 맵에서는 신청하실 수 없습니다.]
[You can't apply on this map.]
20130807 to 20130814
제한 없음
No restrictions
*/
	MSG_BATTLEFIELD_MSG_NOT_JOINMAP = 0x86b,
/*20120314 to 20180523
[전장 재신청까지 약 1분의 대기시간을 필요로 합니다.]
[You must wait about 1 minute to apply.]
20130807 to 20130814
[해당 맵에서는 신청하실 수 없습니다.]
[You can't apply on this map.]
*/
	MSG_BATTLEFIELD_MSG_WAIT_1MM = 0x86c,
/*20120314 to 20180523
[파티에 먼저 가입하셔야 합니다.]
[You must be in a party.]
20130807 to 20130814
[전장 재신청까지 약 1분의 대기시간을 필요로 합니다.]
[You must wait about 1 minute to apply.]
*/
	MSG_BATTLEFIELD_MSG_PLZ_PALTYJOIN = 0x86d,
/*20120314 to 20180523
[파티장만 신청 가능합니다.]
[Only party leader can apply.]
20130807 to 20130814
[파티에 먼저 가입하셔야 합니다.]
[You must be in a party.]
*/
	MSG_BATTLEFIELD_MSG_NOT_PALTYBOSS = 0x86e,
/*20120314 to 20180523
[접속되어있는 파티인원수가 많습니다.]
[Too many party members online.]
20130807 to 20130814
[파티장만 신청 가능합니다.]
[Only party leader can apply.]
*/
	MSG_BATTLEFIELD_MSG_OVER_PARTYMEMBER = 0x86f,
/*20120314 to 20180523
[길드에 먼저 가입하셔야 합니다.]
[You must be in a guild.]
20130807 to 20130814
[접속되어있는 파티인원수가 많습니다.]
[Too many party members online.]
*/
	MSG_BATTLEFIELD_MSG_PLZ_GUILDJOIN = 0x870,
/*20120314 to 20180523
[길드장만 신청 가능합니다.]
[Only guild master can apply.]
20130807 to 20130814
[길드에 먼저 가입하셔야 합니다.]
[You must be in a guild.]
*/
	MSG_BATTLEFIELD_MSG_NOT_GUILDBOSS = 0x871,
/*20120314 to 20180523
[접속되어있는 길드인원수가 많습니다.]
[Too many guild members online.]
20130807 to 20130814
[길드장만 신청 가능합니다.]
[Only guild master can apply.]
*/
	MSG_BATTLEFIELD_MSG_OVER_GUILDMEMBER = 0x872,
/*20120314 to 20120314
아이템 합치기
20120320 to 20180523
이동예약
Moving Book
20130807 to 20130814
[접속되어있는 길드인원수가 많습니다.]
[Too many guild members online.]
*/
	MSG_RESERVE_CHANGE_CHARACTER_SLOT = 0x873,
/*20120314 to 20120314
같은 종류의 아이템을 2개 이상 선택해주세요.
Two or more of the same type. Please select an item.
20120320 to 20180523
이동
Move
20130807 to 20130814
이동예약
Moving Book
*/
	MSG_CHARACTER_SLOT_CHANGE = 0x874,
/*20120314 to 20120314
아이템 합치기에 성공했습니다.
Item merge is successful.
20120320 to 20180523
이름변경
Rename
20130807 to 20130814
이동
Move
*/
	MSG_CHANGE_CHARACTER_NAME = 0x875,
/*20120314 to 20120314
아이템 합치기는 한번에 1종류씩만 가능합니다.
Combining items will be only one kind at a time.
20120320 to 20180523
Make Character
20130807 to 20130814
이름변경
Rename
*/
	MSG_MSG_MAKECHARCTER = 0x876,
/*20120314 to 20120314
아이템의 개수가 30000개 초과 했습니다.
You cannot have more than 30,000 stacked items.
20120320 to 20180523
http://ro.game.gnjoy.com/
20130807 to 20130814
Make Character
*/
	MSG_UAE_URL = 0x877,
#endif
#if PACKETVER >= 20120320
/*20120320 to 20180523
(%s) Server
20130807 to 20130814
http://ro.game.gnjoy.com/
*/
	MSG_UAE_SERVERSTR = 0x878,
/*20120320 to 20120328
아이템 합치기
20120404 to 20180523
아이템 병합(모두선택 Ctrl+클릭)
Item Merge
20130807 to 20130814
(%s) Server
*/
	MSG_MERGE_ITEM = 0x879,
/*20120320 to 20180523
같은 종류의 아이템을 2개 이상 선택해주세요.
Two or more of the same type. Please select an item.
20130807 to 20130814
아이템 병합(모두선택 Ctrl+클릭)
Item Merge
*/
	MSG_SELECT_ITEM_TO_MERGE = 0x87a,
/*20120320 to 20180523
아이템 합치기에 성공했습니다.
Item merge is successful.
20130807 to 20130814
같은 종류의 아이템을 2개 이상 선택해주세요.
Two or more of the same type. Please select an item.
*/
	MSG_MERGE_ITEM_SUCCESS = 0x87b,
/*20120320 to 20180523
아이템 합치기는 한번에 1종류씩만 가능합니다.
Combining items will be only one kind at a time.
20130807 to 20130814
아이템 합치기에 성공했습니다.
Item merge is successful.
*/
	MSG_MERGE_ITEM_FAILED_NOT_MERGE = 0x87c,
/*20120320 to 20180523
아이템의 개수가 30000개 초과 했습니다.
You cannot have more than 30,000 stacked items.
20130807 to 20130814
아이템 합치기는 한번에 1종류씩만 가능합니다.
Combining items will be only one kind at a time.
*/
	MSG_MERGE_ITEM_FAILED_MAX_COUNT = 0x87d,
#endif
#if PACKETVER >= 20120328
/*20120328 to 20180523
좌로 회전
Rotate left
20130807 to 20130814
아이템의 개수가 30000개 초과 했습니다.
You cannot have more than 30,000 stacked items.
*/
	MSG_CHARACTER_LEFT_ROLL = 0x87e,
/*20120328 to 20180523
우로 회전
Rotate right
20130807 to 20130814
좌로 회전
Rotate left
*/
	MSG_CHARACTER_RIGHT_ROLL = 0x87f,
/*20120328 to 20180523
(%s)님의 이전서버 정보보기
(%s) to view the old server information
20130807 to 20130814
우로 회전
Rotate right
*/
	MSG_VIEW_BEFORE_WORLDINFO = 0x880,
/*20120328 to 20180523
기존 서버 정보
Existing server information
20130807 to 20130814
(%s)님의 이전서버 정보보기
(%s) to view the old server information
*/
	MSG_VIEW_BEFORE_WORLDINFO_TITLE = 0x881,
/*20120328 to 20180523
^ff0000기존 서버 : ^0000ff
^ff0000Existing server: ^0000ff
20130807 to 20130814
기존 서버 정보
Existing server information
*/
	MSG_VIEW_BEFORE_SERVERINFO = 0x882,
/*20120328 to 20180523
^ff0000기존 캐릭명 : ^0000ff
^ff0000Existing character: ^0000ff
20130807 to 20130814
^ff0000기존 서버 : ^0000ff
^ff0000Existing server: ^0000ff
*/
	MSG_VIEW_BEFORE_CHARNAME = 0x883,
/*20120328 to 20180523
공격한 몬스터의 HP가 표시됩니다.
Show monster HP bar when attacking.
20130807 to 20130814
^ff0000기존 캐릭명 : ^0000ff
^ff0000Existing character: ^0000ff
*/
	MSG_MONSTER_HP_ON = 0x884,
/*20120328 to 20120328
공격한 몬스터의 HP가 표시되지 않습니다..
20120404 to 20180523
공격한 몬스터의 HP가 표시되지 않습니다.
Hide monster HP bar when attacking.
20130807 to 20130814
공격한 몬스터의 HP가 표시됩니다.
Show monster HP bar when attacking.
*/
	MSG_MONSTER_HP_OFF = 0x885,
#endif
#if PACKETVER >= 20120404
/*20120404 to 20180523
병합 가능한 아이템이 존재하지 않습니다
Merge does not exist as an item
20130807 to 20130814
공격한 몬스터의 HP가 표시되지 않습니다.
Hide monster HP bar when attacking.
*/
	MSG_MERGE_ITEM_FAILED_NOT_EXIST = 0x886,
/*20120404 to 20180523
병합 가능한 아이템이 존재하지 않습니다.
Merge items available does not exist.
20130807 to 20130814
병합 가능한 아이템이 존재하지 않습니다
Merge does not exist as an item
*/
	MSG_NOT_EXIST_MERGE_ITEM = 0x887,
/*20120404 to 20180523
진행중
Act
20130807 to 20130814
병합 가능한 아이템이 존재하지 않습니다.
Merge items available does not exist.
*/
	MSG_QUESTUI_TAB_PROCESS = 0x888,
/*20120404 to 20180523
보류중
Pen
20130807 to 20130814
진행중
Act
*/
	MSG_QUESTUI_TAB_HOLD = 0x889,
/*20120404 to 20180523
추천
Rec
20130807 to 20130814
보류중
Pen
*/
	MSG_QUESTUI_TAB_BEST = 0x88a,
/*20120404 to 20180523
에피소드
Episode
20130807 to 20130814
추천
Rec
*/
	MSG_QUESTUI_TAB_EPISODE = 0x88b,
/*20120404 to 20180523
로컬
Loc
20130807 to 20130814
에피소드
Episode
*/
	MSG_QUESTUI_TAB_LOCAL = 0x88c,
/*20120404 to 20180523
이벤트
Evt
20130807 to 20130814
로컬
Loc
*/
	MSG_QUESTUI_TAB_EVENT = 0x88d,
/*20120404 to 20180523
신규
New
20130807 to 20130814
이벤트
Evt
*/
	MSG_QUESTUI_TAB_NEW = 0x88e,
/*20120404 to 20180523
사냥몬스터
Monsters to kill
20130807 to 20130814
신규
New
*/
	MSG_QUESTUI_HUNTMONSTER = 0x88f,
/*20120404 to 20180523
보상아이템
Rewards
20130807 to 20130814
사냥몬스터
Monsters to kill
*/
	MSG_QUESTUI_REWARDITEM = 0x890,
/*20120404 to 20180523
필요아이템
Required Items
20130807 to 20130814
보상아이템
Rewards
*/
	MSG_QUESTUI_NEEDITEM = 0x891,
/*20120404 to 20180523
제한시간
Time Limit
20130807 to 20130814
필요아이템
Required Items
*/
	MSG_QUESTUI_TIMELIMIT = 0x892,
/*20120404 to 20180523
마감시간
Deadline
20130807 to 20130814
제한시간
Time Limit
*/
	MSG_QUESTUI_CLOSINGTIME = 0x893,
#endif
#if PACKETVER >= 20120417
/*20120417 to 20180523
검색
Search
20130807 to 20130814
마감시간
Deadline
*/
	MSG_NAVIGATION_SEARCH = 0x894,
/*20120417 to 20180523
목표로 안내
Navigation
20130807 to 20130814
검색
Search
*/
	MSG_NAVIGATION_TARGETGO = 0x895,
/*20120417 to 20180523
길 정보
Back to Navigation
20130807 to 20130814
목표로 안내
Navigation
*/
	MSG_NAVIGATION_ROUTEINFO = 0x896,
/*20120417 to 20180523
검색 정보
Find Information
20130807 to 20130814
길 정보
Back to Navigation
*/
	MSG_NAVIGATION_SEARCHINFO = 0x897,
/*20120417 to 20180523
보기 모드 변경
Toggle Minimap
20130807 to 20130814
검색 정보
Find Information
*/
	MSG_NAVIGATION_VIEWCHANGE = 0x898,
/*20120417 to 20130109
안내 지시 색상 변경
20130115 to 20180523
외부 길정보 파일 읽기
Read Information from External File
20130807 to 20130814
보기 모드 변경
Toggle Minimap
*/
	MSG_NAVIGATION_LIGHTCHANGE = 0x899,
/*20120417 to 20180523
종료
Exit
20130807 to 20130814
외부 길정보 파일 읽기
Read Information from External File
*/
	MSG_NAVIGATION_END = 0x89a,
/*20120417 to 20180523
기본 UI로 변경
Change the Default UI
20130807 to 20130814
종료
Exit
*/
	MSG_NAVIGATION_BASE = 0x89b,
/*20120417 to 20180523
간편 UI로 변경
Change to Default UI
20130807 to 20130814
기본 UI로 변경
Change the Default UI
*/
	MSG_NAVIGATION_MINI = 0x89c,
/*20120417 to 20180523
도움말
Help
20130807 to 20130814
간편 UI로 변경
Change to Default UI
*/
	MSG_NAVIGATION_HELP = 0x89d,
/*20120417 to 20180523
ALL
All
20130807 to 20130814
도움말
Help
*/
	MSG_NAVIGATION_ALL = 0x89e,
/*20120417 to 20180523
Map
20130807 to 20130814
ALL
All
*/
	MSG_NAVIGATION_MAP = 0x89f,
/*20120417 to 20180523
Npc
20130807 to 20130814
Map
*/
	MSG_NAVIGATION_NPC = 0x8a0,
/*20120417 to 20180523
Mob
20130807 to 20130814
Npc
*/
	MSG_NAVIGATION_MOB = 0x8a1,
/*20120417 to 20180523
검색 단어 설정 (Ex: 단어 단어 ...
Enter search string... (Ex: word word ...)
20130807 to 20130814
Mob
*/
	MSG_NAVIGATION_SETSTRING = 0x8a2,
/*20120417 to 20180523
Scroll
20130807 to 20130814
검색 단어 설정 (Ex: 단어 단어 ...
Enter search string... (Ex: word word ...)
*/
	MSG_NAVIGATION_SCROLL = 0x8a3,
/*20120417 to 20180523
던전이동 스크롤 사용 적용
Use Scroll?
20130807 to 20130814
Scroll
*/
	MSG_NAVIGATION_USESCROLL = 0x8a4,
/*20120417 to 20180523
Service
20130807 to 20130814
던전이동 스크롤 사용 적용
Use Scroll?
*/
	MSG_NAVIGATION_SERVICE = 0x8a5,
/*20120417 to 20180523
위치 이동 서비스 허용
Use Kafra Warp?
20130807 to 20130814
Service
*/
	MSG_NAVIGATION_USESERVICE = 0x8a6,
/*20120417 to 20180523
Plane
20130807 to 20130814
위치 이동 서비스 허용
Use Kafra Warp?
*/
	MSG_NAVIGATION_PLANE = 0x8a7,
/*20120417 to 20180523
비공정 이동 적용
Use Airship?
20130807 to 20130814
Plane
*/
	MSG_NAVIGATION_USEPLANE = 0x8a8,
/*20120417 to 20180523
>> 목표 정보를 읽지 못함!
>> Failed to read the target information.
20130807 to 20130814
비공정 이동 적용
Use Airship?
*/
	MSG_NAVIGATION_TARGETUNKNOWN = 0x8a9,
/*20120417 to 20180523
<< 안내중 >>
>> Destination <<
20130807 to 20130814
>> 목표 정보를 읽지 못함!
>> Failed to read the target information.
*/
	MSG_NAVIGATION_GOING = 0x8aa,
/*20120417 to 20180523
<< 검색중... >>
<<   Goal   >>
20130807 to 20130814
<< 안내중 >>
>> Destination <<
*/
	MSG_NAVIGATION_SEARCHING = 0x8ab,
/*20120417 to 20180523
-----------
20130807 to 20130814
<< 검색중... >>
<<   Goal   >>
*/
	MSG_NAVIGATION_UN = 0x8ac,
/*20120417 to 20180523
Navigation
20130807 to 20130814
-----------
*/
	MSG_NAVIGATION_NAVI = 0x8ad,
/*20120417 to 20180523
== 검색 결과(%d)==
= Found (%d) ==
20130807 to 20130814
Navigation
*/
	MSG_NAVIGATION_SEARCHRESULT_D = 0x8ae,
/*20120417 to 20180523
Npc)%s:%s
20130807 to 20130814
== 검색 결과(%d)==
= Found (%d) ==
*/
	MSG_NAVIGATION_NPC_S_S = 0x8af,
/*20120417 to 20180523
Mob)%s:%s
20130807 to 20130814
Npc)%s:%s
*/
	MSG_NAVIGATION_MOB_S_S = 0x8b0,
/*20120417 to 20180523
Map)%s
20130807 to 20130814
Mob)%s:%s
*/
	MSG_NAVIGATION_MAP_S = 0x8b1,
/*20120417 to 20180523
======== 결과 정보 ==========
======== Results ==========
20130807 to 20130814
Map)%s
*/
	MSG_NAVIGATION_RESULTINFO = 0x8b2,
/*20120417 to 20180523
거리   : %d Sell %d WarpMove
Dist  %d Cell %d WarpMove
20130807 to 20130814
======== 결과 정보 ==========
======== Results ==========
*/
	MSG_NAVIGATION_LENGTH = 0x8b3,
/*20120417 to 20180523
목표맵: %s(%s)
Coords %s(%s)
20130807 to 20130814
거리   : %d Sell %d WarpMove
Dist  %d Cell %d WarpMove
*/
	MSG_NAVIGATION_TARGETMAP_S_S = 0x8b4,
/*20120417 to 20180523
목표   : %s(%d, %d)
Goal:%s (%d,%d)
20130807 to 20130814
목표맵: %s(%s)
Coords %s(%s)
*/
	MSG_NAVIGATION_TARGET_S_D_D = 0x8b5,
/*20120417 to 20180523
보스
Boss
20130807 to 20130814
목표   : %s(%d, %d)
Goal:%s (%d,%d)
*/
	MSG_NAVIGATION_BOSS = 0x8b6,
/*20120417 to 20180523
일반
General
20130807 to 20130814
보스
Boss
*/
	MSG_NAVIGATION_NORMAL = 0x8b7,
/*20120417 to 20180523
목표   : %s(%s)
Goal:
20130807 to 20130814
일반
General
*/
	MSG_NAVIGATION_TARGET_S_S = 0x8b8,
/*20120417 to 20180523
목표: (%d, %d)
Goal: (%d, %d)
20130807 to 20130814
목표   : %s(%s)
Goal:
*/
	MSG_NAVIGATION_TARGET_D_D = 0x8b9,
/*20120417 to 20180523
======= 길 안내 정보 =======
======= Guidance =======
20130807 to 20130814
목표: (%d, %d)
Goal: (%d, %d)
*/
	MSG_NAVIGATION_GOINFO = 0x8ba,
/*20120417 to 20180523
%2d) Item:%s => %s 사용!
%2d) Item:%s => %s Use!
20130807 to 20130814
======= 길 안내 정보 =======
======= Guidance =======
*/
	MSG_NAVIGATION_ITEM_S_S = 0x8bb,
/*20120417 to 20180523
%2d) %s(%d,%d)=>(%d,%d)
20130807 to 20130814
%2d) Item:%s => %s 사용!
%2d) Item:%s => %s Use!
*/
	MSG_NAVIGATION_D_S_D_D_D_D = 0x8bc,
/*20120417 to 20180523
E%2d) %s(%d,%d)=>(%d,%d)
20130807 to 20130814
%2d) %s(%d,%d)=>(%d,%d)
*/
	MSG_NAVIGATION_E_D_S_D_D_D_D = 0x8bd,
/*20120417 to 20180523
E%2d) %s
20130807 to 20130814
E%2d) %s(%d,%d)=>(%d,%d)
*/
	MSG_NAVIGATION_E_D_S = 0x8be,
/*20120417 to 20180523
안내중 입니다! 종료 하시겠습니까?
Do you want to cancel navigation?
20130807 to 20130814
E%2d) %s
*/
	MSG_NAVIGATION_GOEXIT = 0x8bf,
/*20120417 to 20180523
내비게이션 도움말
How to Use Navigation
20130807 to 20130814
안내중 입니다! 종료 하시겠습니까?
Do you want to cancel navigation?
*/
	MSG_NAVIGATION_HELPTITLE = 0x8c0,
/*20120417 to 20180523
------------------- 명령어 --------------------
------------------- Instruction --------------------
20130807 to 20130814
내비게이션 도움말
How to Use Navigation
*/
	MSG_NAVIGATION_HELP1 = 0x8c1,
/*20120417 to 20180523
1. /navigation      /navi
1) /Navigation or /navi
20130807 to 20130814
------------------- 명령어 --------------------
------------------- Instruction --------------------
*/
	MSG_NAVIGATION_HELP2 = 0x8c2,
/*20120417 to 20120417
  ex)/navi prontera 100 100 -> 맵이름, 100, 100
20120424 to 20180523
  ex)/navi prontera 100/100 -> 맵이름, 100/100
ex) /navi prontera 100 100 -> /navi "MAPNAME", 100, 100
20130807 to 20130814
1. /navigation      /navi
1) /Navigation or /navi
*/
	MSG_NAVIGATION_HELP3 = 0x8c3,
/*20120417 to 20120417
2. /navigation2      /navi2
ex) /navi2 prontera 100 111
20120424 to 20180523
  기본 명령어는 제니, 비공정 검색을 기본으로 합니다.
2) /Navigation2 or /navi2 
20130807 to 20130814
  ex)/navi prontera 100/100 -> 맵이름, 100/100
ex) /navi prontera 100 100 -> /navi "MAPNAME", 100, 100
*/
	MSG_NAVIGATION_HELP4 = 0x8c4,
/*20120417 to 20120417
  ex) /navi2 prontera 100090 111
20120424 to 20180523
2. /navigation2      /navi2
ex) /navi2 prontera 100 111
20130807 to 20130814
  기본 명령어는 제니, 비공정 검색을 기본으로 합니다.
2) /Navigation2 or /navi2 
*/
	MSG_NAVIGATION_HELP5 = 0x8c5,
/*20120417 to 20120417
-> 맵이름, 위치(100 90), scrool/ zeny/ plane (1:사용함 0: 사용안함)
20120424 to 20180523
  ex) /navi2 prontera 100/100 1/1/1
-> MAPNAME location (100 90), Scroll | Zeny | Plane (1: Enable or 0: Disable)
20130807 to 20130814
2. /navigation2      /navi2
ex) /navi2 prontera 100 111
*/
	MSG_NAVIGATION_HELP6 = 0x8c6,
/*20120417 to 20120417
※ /navi2 의 경우 반드시 위치 좌표를 붙여서 3 자리로 적어야 한다
20120424 to 20180523
-> 맵이름, 위치(100/100), scrool/zeny/plane (1:사용함 0: 사용안함)
-> /navi2 goes with the case with location coordinates. They must be no less than 3 characters 
20130807 to 20130814
  ex) /navi2 prontera 100/100 1/1/1
-> MAPNAME location (100 90), Scroll | Zeny | Plane (1: Enable or 0: Disable)
*/
	MSG_NAVIGATION_HELP7 = 0x8c7,
/*20120417 to 20120417
3. /$$all   모든 항목 출력 (Type 구분 항목으로 출력 종류 구분 가능.)
20120424 to 20180523
3. $$all   모든 항목 출력 (Type 구분 항목으로 출력 종류 구분 가능.)
3) /$$ Output all the items (Can take a while...) 
20130807 to 20130814
-> 맵이름, 위치(100/100), scrool/zeny/plane (1:사용함 0: 사용안함)
-> /navi2 goes with the case with location coordinates. They must be no less than 3 characters 
*/
	MSG_NAVIGATION_HELP8 = 0x8c8,
/*20120417 to 20120417
4. /$$lv30   해당 레벨의 몬스터 출력
20120424 to 20180523
4. $$lv30   해당 레벨의 몬스터 출력
4) /$$ Lv30 monsters are placed in the output 
20130807 to 20130814
3. $$all   모든 항목 출력 (Type 구분 항목으로 출력 종류 구분 가능.)
3) /$$ Output all the items (Can take a while...) 
*/
	MSG_NAVIGATION_HELP9 = 0x8c9,
/*20120417 to 20120417
5. /$$lv20~30   해당 레벨 범위의 몬스터 출력
20120424 to 20180523
5. $$lv20~30   해당 레벨 범위의 몬스터 출력
5) /$$ Lv20~30 monsters in that level range are placed in the output 
20130807 to 20130814
4. $$lv30   해당 레벨의 몬스터 출력
4) /$$ Lv30 monsters are placed in the output 
*/
	MSG_NAVIGATION_HELP10 = 0x8ca,
/*20120417 to 20180523
-------------------  설명  --------------------
-------------------  Description  --------------------
20130807 to 20130814
5. $$lv20~30   해당 레벨 범위의 몬스터 출력
5) /$$ Lv20~30 monsters in that level range are placed in the output 
*/
	MSG_NAVIGATION_HELP11 = 0x8cb,
/*20120417 to 20180523
1.검색 종류는 전체, 맵, Npc, 몬스터 으로 분류 된다.
1) One can search for monsters, npcs, maps, or all at once
20130807 to 20130814
-------------------  설명  --------------------
-------------------  Description  --------------------
*/
	MSG_NAVIGATION_HELP12 = 0x8cc,
/*20120417 to 20180523
2.명령어로 검색한다. 규칙은 검색 하려는 문자열이 모두 포함된 정보를 출력 한다.
2) You can press the search button to get results. It will out put the results depending on what rule you choose
20130807 to 20130814
1.검색 종류는 전체, 맵, Npc, 몬스터 으로 분류 된다.
1) One can search for monsters, npcs, maps, or all at once
*/
	MSG_NAVIGATION_HELP13 = 0x8cd,
/*20120417 to 20180523
  ex) 프론 카프 -> 검색 결과 프론테라의 카프라를 모두 출력 한다.
ex) Drop down box -> Select "Npc", then type in the box "Kafra". Results will now be displayed
20130807 to 20130814
2.명령어로 검색한다. 규칙은 검색 하려는 문자열이 모두 포함된 정보를 출력 한다.
2) You can press the search button to get results. It will out put the results depending on what rule you choose
*/
	MSG_NAVIGATION_HELP14 = 0x8ce,
/*20120417 to 20180523
3.리스트에서 항목을 선택하면 정보가 출력된다.
3) When you select an item from a list, information about it are displayed.
20130807 to 20130814
  ex) 프론 카프 -> 검색 결과 프론테라의 카프라를 모두 출력 한다.
ex) Drop down box -> Select "Npc", then type in the box "Kafra". Results will now be displayed
*/
	MSG_NAVIGATION_HELP15 = 0x8cf,
/*20120417 to 20180523
  출력 되고 있는 목표가 있을때 안내 버튼을 클릭하면 해당 목표로 길을 안내 한다.
-> When button is clicked, it will point you towards your destination if available
20130807 to 20130814
3.리스트에서 항목을 선택하면 정보가 출력된다.
3) When you select an item from a list, information about it are displayed.
*/
	MSG_NAVIGATION_HELP16 = 0x8d0,
/*20120417 to 20180523
4.scrool/ zeny/ plane 상자를 원하는 만큼 체크하여 더 빠른 경로를 안내 받을 수 있다.
4) Scroll | Zeny | Plane options can be checked to find a faster route
20130807 to 20130814
  출력 되고 있는 목표가 있을때 안내 버튼을 클릭하면 해당 목표로 길을 안내 한다.
-> When button is clicked, it will point you towards your destination if available
*/
	MSG_NAVIGATION_HELP17 = 0x8d1,
/*20120417 to 20180523
5.안내 버튼이 눌러지면 결과 리스트창은 길안내 리스트 장으로 변경 된다.
5) Guide button is pressed, the result list window displays where routes can change direction
20130807 to 20130814
4.scrool/ zeny/ plane 상자를 원하는 만큼 체크하여 더 빠른 경로를 안내 받을 수 있다.
4) Scroll | Zeny | Plane options can be checked to find a faster route
*/
	MSG_NAVIGATION_HELP18 = 0x8d2,
/*20120417 to 20180523
6.검색 리스트창 하단 버튼을 이용하여
6) Using the button below, search results can be found
20130807 to 20130814
5.안내 버튼이 눌러지면 결과 리스트창은 길안내 리스트 장으로 변경 된다.
5) Guide button is pressed, the result list window displays where routes can change direction
*/
	MSG_NAVIGATION_HELP19 = 0x8d3,
/*20120417 to 20180523
 [결과 리스트 창] <-> [길 안내 정보 창] 으로 보기 모드 변경 가능하다.
-> [Results List Window] <-> [View Modes can be switched]
20130807 to 20130814
6.검색 리스트창 하단 버튼을 이용하여
6) Using the button below, search results can be found
*/
	MSG_NAVIGATION_HELP20 = 0x8d4,
/*20120417 to 20180523
Level:%d (보스)
Level:%d (Boss)
20130807 to 20130814
 [결과 리스트 창] <-> [길 안내 정보 창] 으로 보기 모드 변경 가능하다.
-> [Results List Window] <-> [View Modes can be switched]
*/
	MSG_NAVIGATION_LEVEL_D_BOSS = 0x8d5,
/*20120417 to 20180523
Level:%d (일반)
Level:%d (Mob)
20130807 to 20130814
Level:%d (보스)
Level:%d (Boss)
*/
	MSG_NAVIGATION_LEVEL_D_NORMAL = 0x8d6,
/*20120417 to 20180523
수속성%d
Water %d
20130807 to 20130814
Level:%d (일반)
Level:%d (Mob)
*/
	MSG_NAVIGATION_PROPERTY1 = 0x8d7,
/*20120417 to 20180523
지속성%d
Earth %d
20130807 to 20130814
수속성%d
Water %d
*/
	MSG_NAVIGATION_PROPERTY2 = 0x8d8,
/*20120417 to 20180523
화속성%d
Fire %d
20130807 to 20130814
지속성%d
Earth %d
*/
	MSG_NAVIGATION_PROPERTY3 = 0x8d9,
/*20120417 to 20180523
풍속성%d
Wind %d
20130807 to 20130814
화속성%d
Fire %d
*/
	MSG_NAVIGATION_PROPERTY4 = 0x8da,
/*20120417 to 20180523
독속성%d
Poison %d
20130807 to 20130814
풍속성%d
Wind %d
*/
	MSG_NAVIGATION_PROPERTY5 = 0x8db,
/*20120417 to 20180523
성속성%d
Holy %d
20130807 to 20130814
독속성%d
Poison %d
*/
	MSG_NAVIGATION_PROPERTY6 = 0x8dc,
/*20120417 to 20180523
암속성%d
Shadow %d
20130807 to 20130814
성속성%d
Holy %d
*/
	MSG_NAVIGATION_PROPERTY7 = 0x8dd,
/*20120417 to 20180523
염속성%d
Ghost %d
20130807 to 20130814
암속성%d
Shadow %d
*/
	MSG_NAVIGATION_PROPERTY8 = 0x8de,
/*20120417 to 20180523
언데드%d
Undead %d
20130807 to 20130814
염속성%d
Ghost %d
*/
	MSG_NAVIGATION_PROPERTY9 = 0x8df,
/*20120417 to 20180523
무속성%d
Neutral %d
20130807 to 20130814
언데드%d
Undead %d
*/
	MSG_NAVIGATION_PROPERTY0 = 0x8e0,
/*20120417 to 20180523
중형
Medium
20130807 to 20130814
무속성%d
Neutral %d
*/
	MSG_NAVIGATION_SCALE1 = 0x8e1,
/*20120417 to 20180523
대형
Large
20130807 to 20130814
중형
Medium
*/
	MSG_NAVIGATION_SCALE2 = 0x8e2,
/*20120417 to 20180523
소형
Small
20130807 to 20130814
대형
Large
*/
	MSG_NAVIGATION_SCALE0 = 0x8e3,
/*20120417 to 20180523
불사형
Undead
20130807 to 20130814
소형
Small
*/
	MSG_NAVIGATION_RACE1 = 0x8e4,
/*20120417 to 20180523
동물형
Brute
20130807 to 20130814
불사형
Undead
*/
	MSG_NAVIGATION_RACE2 = 0x8e5,
/*20120417 to 20180523
식물형
Plant
20130807 to 20130814
동물형
Brute
*/
	MSG_NAVIGATION_RACE3 = 0x8e6,
/*20120417 to 20180523
곤충형
Insect
20130807 to 20130814
식물형
Plant
*/
	MSG_NAVIGATION_RACE4 = 0x8e7,
/*20120417 to 20180523
어패형
Fish
20130807 to 20130814
곤충형
Insect
*/
	MSG_NAVIGATION_RACE5 = 0x8e8,
/*20120417 to 20180523
악마형
Demon
20130807 to 20130814
어패형
Fish
*/
	MSG_NAVIGATION_RACE6 = 0x8e9,
/*20120417 to 20180523
인간형
Demi-Human
20130807 to 20130814
악마형
Demon
*/
	MSG_NAVIGATION_RACE7 = 0x8ea,
/*20120417 to 20180523
천사형
Angel
20130807 to 20130814
인간형
Demi-Human
*/
	MSG_NAVIGATION_RACE8 = 0x8eb,
/*20120417 to 20180523
용족
Dragon
20130807 to 20130814
천사형
Angel
*/
	MSG_NAVIGATION_RACE9 = 0x8ec,
/*20120417 to 20180523
무형
Formless
20130807 to 20130814
용족
Dragon
*/
	MSG_NAVIGATION_RACE0 = 0x8ed,
/*20120417 to 20180523
%s 이동 클릭
Click to move %s
20130807 to 20130814
무형
Formless
*/
	MSG_NAVIGATION_MOVECLICK = 0x8ee,
/*20120417 to 20180523
Npc 이동 서비스 이용
Move to the Kafra Service Npc
20130807 to 20130814
%s 이동 클릭
Click to move %s
*/
	MSG_NAVIGATION_NPCMOVE = 0x8ef,
/*20120417 to 20180523
NPC 클릭
Click the NPC
20130807 to 20130814
Npc 이동 서비스 이용
Move to the Kafra Service Npc
*/
	MSG_NAVIGATION_NPCCLICK = 0x8f0,
/*20120417 to 20180523
%s 이동
Move %s
20130807 to 20130814
NPC 클릭
Click the NPC
*/
	MSG_NAVIGATION_S_MOVE = 0x8f1,
/*20120417 to 20180523
비공정 이동
Move to the Airship Service
20130807 to 20130814
%s 이동
Move %s
*/
	MSG_NAVIGATION_PLANEMOVE = 0x8f2,
/*20120417 to 20180523
워프 이용
By Warp
20130807 to 20130814
비공정 이동
Move to the Airship Service
*/
	MSG_NAVIGATION_WARPUSE = 0x8f3,
/*20120417 to 20180523
도착점 : ( %d %d )
End Points: (%d %d)
20130807 to 20130814
워프 이용
By Warp
*/
	MSG_NAVIGATION_TARGETPOINT_D_D = 0x8f4,
/*20120417 to 20170517
네비게이션이 지원 되지 않는 지역 입니다.
20130807 to 20130814
도착점 : ( %d %d )
End Points: (%d %d)
20170524 to 20180523
내비게이션이 지원 되지 않는 지역 입니다.
That does not support the navigation area
*/
	MSG_NAVIGATION_UNKNOWNMAP = 0x8f5,
/*20120417 to 20180523
찾고자 하는 목적이 불분명 합니다.
The purpose is unclear
20130807 to 20130814
네비게이션이 지원 되지 않는 지역 입니다.
*/
	MSG_NAVIGATION_RS_UNKNOWN = 0x8f6,
/*20120417 to 20180523
매칭이 맞지 않는 맵이다.
Does not meet the map requirement
20130807 to 20130814
찾고자 하는 목적이 불분명 합니다.
The purpose is unclear
*/
	MSG_NAVIGATION_RS_NOTSAMEMAP = 0x8f7,
/*20120417 to 20180523
출발 지역에 대한 정보 설정 실패!
Information Failure | Change settings
20130807 to 20130814
매칭이 맞지 않는 맵이다.
Does not meet the map requirement
*/
	MSG_NAVIGATION_RS_FAILSTARTDATA = 0x8f8,
/*20120417 to 20180523
도착 지점에 대한 정보 설정 실패!
Failed to set info for location!
20130807 to 20130814
출발 지역에 대한 정보 설정 실패!
Information Failure | Change settings
*/
	MSG_NAVIGATION_RS_FAILTARGET = 0x8f9,
/*20120417 to 20180523
길 찾기 실패
Failed to find a path
20130807 to 20130814
도착 지점에 대한 정보 설정 실패!
Failed to set info for location!
*/
	MSG_NAVIGATION_RS_FAILROUTE = 0x8fa,
/*20120417 to 20180523
플레이어 위치 찾기 실패
Failed to find players 
20130807 to 20130814
길 찾기 실패
Failed to find a path
*/
	MSG_NAVIGATION_RS_FAILPLAYER = 0x8fb,
/*20120417 to 20180523
내비게이션에 정보가 없습니다.
No Information
20130807 to 20130814
플레이어 위치 찾기 실패
Failed to find players 
*/
	MSG_NAVIGATION_RS_NODATA = 0x8fc,
/*20120417 to 20180523
해당 맵은 길찾기가 지원 되지 않는 맵입니다.
Map doesn't support directions
20130807 to 20130814
내비게이션에 정보가 없습니다.
No Information
*/
	MSG_NAVIGATION_RS_MAPNOTNAVIGATION = 0x8fd,
/*20120417 to 20180523
목표를 지정 하시기 바랍니다.
Please specify target goals.
20130807 to 20130814
해당 맵은 길찾기가 지원 되지 않는 맵입니다.
Map doesn't support directions
*/
	MSG_NAVIGATION_RS_FAILTARGETROUTE = 0x8fe,
/*20120417 to 20180523
도착.
Found
20130807 to 20130814
목표를 지정 하시기 바랍니다.
Please specify target goals.
*/
	MSG_NAVIGATION_RS_SUCCESS = 0x8ff,
/*20120417 to 20180523
길 안내가 시작 되었습니다.
Directions were started
20130807 to 20130814
도착.
Found
*/
	MSG_NAVIGATION_RS_START = 0x900,
/*20120417 to 20180523
찾고자 하는 몬스터가 있는 맵 입니다.
Is the map that your looking for mob
20130807 to 20130814
길 안내가 시작 되었습니다.
Directions were started
*/
	MSG_NAVIGATION_RS_MOBTARGETMAP = 0x901,
/*20120417 to 20180523
찾고자 하는 맵이 해당 맵 입니다.
Map appears on the guide you are looking for
20130807 to 20130814
찾고자 하는 몬스터가 있는 맵 입니다.
Is the map that your looking for mob
*/
	MSG_NAVIGATION_RS_TARGETMAP = 0x902,
/*20120417 to 20180523
아이템을 사용하여 이동하여 주시기 바랍니다.
Please navigate using the item
20130807 to 20130814
찾고자 하는 맵이 해당 맵 입니다.
Map appears on the guide you are looking for
*/
	MSG_NAVIGATION_RS_SCROLL = 0x903,
/*20120417 to 20180523
안내하는 위치로 이동하시기 바랍니다.
Please follow the instruction to reach your destination.
20130807 to 20130814
아이템을 사용하여 이동하여 주시기 바랍니다.
Please navigate using the item
*/
	MSG_NAVIGATION_RS_ROUTE_SUCCESS = 0x904,
/*20120417 to 20180523
목표 맵에 도착하였습니다.
Arrived at the target map
20130807 to 20130814
안내하는 위치로 이동하시기 바랍니다.
Please follow the instruction to reach your destination.
*/
	MSG_NAVIGATION_RS_MAPTMAP_SUCCESS = 0x905,
/*20120417 to 20180523
찾고자 하는 Npc가 있는 맵에 도착 하였습니다. Npc로 이동하시기 바랍니다.
Arrived on the map that has the Npc your looking for. Go to that NPC
20130807 to 20130814
목표 맵에 도착하였습니다.
Arrived at the target map
*/
	MSG_NAVIGATION_RS_NPCTMAP_SUCCESS = 0x906,
/*20120417 to 20180523
찾고자 하는 Mob이 서식하는 맵에 도착 하였습니다.
You have arrived at the mob you were looking for
20130807 to 20130814
찾고자 하는 Npc가 있는 맵에 도착 하였습니다. Npc로 이동하시기 바랍니다.
Arrived on the map that has the Npc your looking for. Go to that NPC
*/
	MSG_NAVIGATION_RS_MOBTMAP_SUCCESS = 0x907,
/*20120417 to 20180523
이전과 동일한 목표 입니다.
You have reached your goal
20130807 to 20130814
찾고자 하는 Mob이 서식하는 맵에 도착 하였습니다.
You have arrived at the mob you were looking for
*/
	MSG_NAVIGATION_RS_POSTMAP_SUCCESS = 0x908,
/*20120417 to 20180523
가리키는 방향으로 가시기 바랍니다.
Please go to indicated direction.
20130807 to 20130814
이전과 동일한 목표 입니다.
You have reached your goal
*/
	MSG_NAVIGATION_RS_SAMETARGET = 0x909,
/*20120417 to 20180523
목표가 여기 입니다.
The goal has been reached
20130807 to 20130814
가리키는 방향으로 가시기 바랍니다.
Please go to indicated direction.
*/
	MSG_NAVIGATION_RS_HERE = 0x90a,
/*20120417 to 20180523
Navigation >: %s
20130807 to 20130814
목표가 여기 입니다.
The goal has been reached
*/
	MSG_NAVIGATION_PRINT_S = 0x90b,
/*20120417 to 20180523
Navigation >: 안내하는 %s(을)를 이용하여
Navigation >: Talk to Guide "%s" (A)
20130807 to 20130814
Navigation >: %s
*/
	MSG_NAVIGATION_PRINT_GO_S = 0x90c,
/*20120417 to 20180523
Navigation >: 맵(%s)으로 이동하시기 바랍니다
Navigation >: Move to (%s) map
20130807 to 20130814
Navigation >: 안내하는 %s(을)를 이용하여
Navigation >: Talk to Guide "%s" (A)
*/
	MSG_NAVIGATION_PRINT_MAP_S = 0x90d,
/*20120417 to 20180523
Navigation >: 맵(%s)을 선택하여 이동 하시기 바랍니다
Navigation >: Choose (%s) Map from Kafra
20130807 to 20130814
Navigation >: 맵(%s)으로 이동하시기 바랍니다
Navigation >: Move to (%s) map
*/
	MSG_NAVIGATION_PRINT_SELECTMAP_S = 0x90e,
/*20120417 to 20180523
Navigation >: 비공정으로 이동 하시기 바랍니다
Navigation >: Please go to the AirShip
20130807 to 20130814
Navigation >: 맵(%s)을 선택하여 이동 하시기 바랍니다
Navigation >: Choose (%s) Map from Kafra
*/
	MSG_NAVIGATION_PRINT_PLANE = 0x90f,
/*20120417 to 20180523
Navigation >: 워프를 이용하여 다음 지역으로 이동하시기 바랍니다.
Navigation >: Get to your destination by using WarpPortal
20130807 to 20130814
Navigation >: 비공정으로 이동 하시기 바랍니다
Navigation >: Please go to the AirShip
*/
	MSG_NAVIGATION_PRINT_WARP = 0x910,
/*20120417 to 20180523
Item: 
20130807 to 20130814
Navigation >: 워프를 이용하여 다음 지역으로 이동하시기 바랍니다.
Navigation >: Get to your destination by using WarpPortal
*/
	MSG_NAVIGATION_PRINT_ITEM = 0x911,
/*20120417 to 20180523
$$
20130807 to 20130814
Item: 
*/
	MSG_NAVIGATION_ZZ = 0x912,
/*20120417 to 20180523
$$lv
20130807 to 20130814
$$
*/
	MSG_NAVIGATION_ZZLV = 0x913,
/*20120417 to 20180523
~
20130807 to 20130814
$$lv
*/
	MSG_NAVIGATION_ZZLIMIT = 0x914,
/*20120417 to 20180523
$$all
20130807 to 20130814
~
*/
	MSG_NAVIGATION_ZZALL = 0x915,
#endif
#if PACKETVER >= 20120424
/*20120424 to 20180523
구매 확인서
Confirm Deal
20130807 to 20130814
$$all
*/
	MSG_SHOP_ITEM_BAY_TITLE = 0x916,
/*20120424 to 20180523
구입하려는 아이템들의 총가격은
Below is the total cost:
20130807 to 20130814
구매 확인서
Confirm Deal
*/
	MSG_SHOP_ITEM_BAY_MAG1 = 0x917,
/*20120424 to 20180523
Zeny 입니다.
 Zeny to complete the transaction.
20130807 to 20130814
구입하려는 아이템들의 총가격은
Below is the total cost:
*/
	MSG_SHOP_ITEM_BAY_MAG2 = 0x918,
/*20120424 to 20180523
구입하시겠습니까?
Press buy to confirm.
20130807 to 20130814
Zeny 입니다.
 Zeny to complete the transaction.
*/
	MSG_SHOP_ITEM_BAY_MAG3 = 0x919,
#endif
#if PACKETVER >= 20120503
/*20120503 to 20120529
%.3f%% (PC방 %.3f%% + TPLUS %.3f%% + 프리미엄 %.3f%% + %s서버 %.3f%%)
20120604 to 20180523
%.1f%% (PC방 %.1f%% + TPLUS %.1f%% + 프리미엄 %.1f%% + %s서버 %.1f%%)
%.1f% (PCRoom %.1f% + TPLUS %.1f% + Premium %.1f% + %sServer %.1f%)
20130807 to 20130814
구입하시겠습니까?
Press buy to confirm.
*/
	MSG_BASIC_EXP_MSG2 = 0x91a,
#endif
#if PACKETVER >= 20120508
/*20120508 to 20180523
카드 북
Card Book
20130807 to 20130814
%.1f%% (PC방 %.1f%% + TPLUS %.1f%% + 프리미엄 %.1f%% + %s서버 %.1f%%)
%.1f% (PCRoom %.1f% + TPLUS %.1f% + Premium %.1f% + %sServer %.1f%)
*/
	MSG_CARDWIN = 0x91b,
#endif
#if PACKETVER >= 20120515
/*20120515 to 20180523
%d%% [ ( 기본 100%% + %s서버 %d%% ) * 활성 %.1f ]
%d%% [ ( Basic 100%% + %sServer %d%% ) * Active %.1f ]
20130807 to 20130814
카드 북
Card Book
*/
	MSG_PERSONAL_INFORMATION_MSG_CHN = 0x91c,
/*20120515 to 20180523
%d%% [ 기본 100%% + %s서버 %d%% ]
%d%% [ Basic 100%% + %sServer %d%% ]
20130807 to 20130814
%d%% [ ( 기본 100%% + %s서버 %d%% ) * 활성 %.1f ]
%d%% [ ( Basic 100%% + %sServer %d%% ) * Active %.1f ]
*/
	MSG_PERSONAL_INFORMATION_MSG_CHN_DEATH = 0x91d,
#endif
#if PACKETVER >= 20120522
/*20120522 to 20180523
이곳은 PK 지역입니다. 미성년자는 자발적으로 떠나주시기 바랍니다.
This is PK region. Minors,Please leave immediately.
20130807 to 20130814
%d%% [ 기본 100%% + %s서버 %d%% ]
%d%% [ Basic 100%% + %sServer %d%% ]
*/
	MSG_CAUTION_PKZONE = 0x91e,
/*20120522 to 20180523
피로도
Fatigue
20130807 to 20130814
이곳은 PK 지역입니다. 미성년자는 자발적으로 떠나주시기 바랍니다.
This is PK region. Minors,Please leave immediately.
*/
	MSG_FATIGUE = 0x91f,
/*20120522 to 20120529
건강상태 이며 게임수익은 100%%입니다.
20120604 to 20180523
건강상태 이며 게임수익은 100%입니다.
Health and gaming revenue is 100%%.
20130807 to 20130814
피로도
Fatigue
*/
	MSG_FATIGUE_LEVEL_ZERO = 0x920,
/*20120522 to 20120529
지금은 피로상태이므로 손님의 게임수익은 50%% 떨어집니다. 건강을 위하여 적당한 휴식 바랍니다.
20120604 to 20180523
지금은 피로상태이므로 손님의 게임수익은 50% 떨어집니다. 건강을 위하여 적당한 휴식 바랍니다.
Fatigue because it is now a guest of the gaming revenue is down 50 percent.Hope for the proper health
20130807 to 20130814
건강상태 이며 게임수익은 100%입니다.
Health and gaming revenue is 100%%.
*/
	MSG_FATIGUE_LEVEL_HALF = 0x921,
/*20120522 to 20120529
지금은 비건강상태이므로 손님의 건강을 위하여 게임오프라인을 원합니다. 계속 온라인상태에 있으면 건강에 손상을 주므로 게임 수익은 0%%으로 떨어지며 게임 오프라인 5시간후에 다시 회복됩니다.
20120604 to 20180523
지금은 비건강상태이므로 손님의 건강을 위하여 게임오프라인을 원합니다. 계속 온라인상태에 있으면 건강에 손상을 주므로 게임 수익은 0%으로 떨어지며 게임 오프라인 5시간후에 다시 회복됩니다.
Now because it is a non-health to the health of the guests want to offline games. If you still are online gaming revenue because the damage to the health of the game falls to 0% again after 5 hours will be restored offline.
20130807 to 20130814
지금은 피로상태이므로 손님의 게임수익은 50% 떨어집니다. 건강을 위하여 적당한 휴식 바랍니다.
Fatigue because it is now a guest of the gaming revenue is down 50 percent.Hope for the proper health
*/
	MSG_FATIGUE_LEVEL_FULL = 0x922,
/*20120522 to 20180523
접속시간 %d 분이 되었습니다.
Online since %d minutes
20130807 to 20130814
지금은 비건강상태이므로 손님의 건강을 위하여 게임오프라인을 원합니다. 계속 온라인상태에 있으면 건강에 손상을 주므로 게임 수익은 0%으로 떨어지며 게임 오프라인 5시간후에 다시 회복됩니다.
Now because it is a non-health to the health of the guests want to offline games. If you still are online gaming revenue because the damage to the health of the game falls to 0% again after 5 hours will be restored offline.
*/
	MSG_FATIGUE_MESSAGE0 = 0x923,
/*20120522 to 20180523
접속시간 %d 시간이 되었습니다.
Online Time: %d
20130807 to 20130814
접속시간 %d 분이 되었습니다.
Online since %d minutes
*/
	MSG_FATIGUE_MESSAGE1 = 0x924,
/*20120522 to 20180523
접속시간 %d 시간 %d 분이 되었습니다.
Online since %d hours and %d minutes
20130807 to 20130814
접속시간 %d 시간이 되었습니다.
Online Time: %d
*/
	MSG_FATIGUE_MESSAGE2 = 0x925,
/*20120522 to 20180523
/monsterhp : 공격한 몬스터의 HP정보를 표시합니다. On Off
/monsterhp: Show the hp of attacked monster. On off
20130807 to 20130814
접속시간 %d 시간 %d 분이 되었습니다.
Online since %d hours and %d minutes
*/
	MSG_EXPLAIN_MONSTERHP = 0x926,
#endif
#if PACKETVER >= 20120529
/*20120529 to 20180523
스킬포인트 : 
Skill Points: 
20130807 to 20130814
/monsterhp : 공격한 몬스터의 HP정보를 표시합니다. On Off
/monsterhp: Show the hp of attacked monster. On off
*/
	MSG_SKILLPOINT2 = 0x927,
#endif
#if PACKETVER >= 20120604
/*20120604 to 20180523
인증서버로 부터의 응답이 없습니다. 다시 시도해 주세요
There is no response from the authentification server. Please try again
20130807 to 20130814
스킬포인트 : 
Skill Points: 
*/
	MSG_BAN_BILLING_SERVER_ERROR = 0x928,
#endif
#if PACKETVER >= 20120612
/*20120612 to 20180523
암호를 변경하여 주시기 바랍니다.
Please change your password
20130807 to 20130814
인증서버로 부터의 응답이 없습니다. 다시 시도해 주세요
There is no response from the authentification server. Please try again
*/
	MSG_REFUSE_CHANGE_PASSWD_FORCE = 0x929,
/*20120612 to 20180523
http://www.ragnarok.co.kr
20130807 to 20130814
암호를 변경하여 주시기 바랍니다.
Please change your password
*/
	MSG_REFUSE_CHANGE_PASSWD_SITE = 0x92a,
/*20120612 to 20180523
고객님께서는 현재 접속금지 시간입니다.
Guest access is prohibited
20130807 to 20130814
http://www.ragnarok.co.kr
*/
	MSG_PLANNED_TIME_SHUTDOWN = 0x92b,
/*20120612 to 20180523
셧다운제도에 의해 고객님의 게임제한 시간은 %1.2d-%1.2d-%1.2d %1.2d:%1.2d:%1.2d에 게임이 종료될 예정입니다.
Your System is been Shutdown, %1.2d-%1.2d-%1.2d %1.2d:%1.2d:%1.2d is the end time.
20130807 to 20130814
고객님께서는 현재 접속금지 시간입니다.
Guest access is prohibited
*/
	MSG_SHOUTDOWN_TIME = 0x92c,
#endif
#if PACKETVER >= 20120626
/*20120626 to 20180523
고객님의 계정은 선택적 셧다운이 적용된 계정이며, 잔여시간은 %1.2d시간 %1.2d분입니다. 게임 이용에 참고해주시기 바랍니다.
Selected System Shutdown is activated in your account,Time Left: %1.2d hours %1.2d minutes.
20130807 to 20130814
셧다운제도에 의해 고객님의 게임제한 시간은 %1.2d-%1.2d-%1.2d %1.2d:%1.2d:%1.2d에 게임이 종료될 예정입니다.
Your System is been Shutdown, %1.2d-%1.2d-%1.2d %1.2d:%1.2d:%1.2d is the end time.
*/
	MSG_PARTIAL_SHOUTDOWN_TIME = 0x92d,
#endif
#if PACKETVER >= 20120702
/*20120702 to 20180523
리플레이
Replay
20130807 to 20130814
고객님의 계정은 선택적 셧다운이 적용된 계정이며, 잔여시간은 %1.2d시간 %1.2d분입니다. 게임 이용에 참고해주시기 바랍니다.
Selected System Shutdown is activated in your account,Time Left: %1.2d hours %1.2d minutes.
*/
	MSG_MENU_REPLAYWND = 0x92e,
/*20120702 to 20180523
매크로
Macro
20130807 to 20130814
리플레이
Replay
*/
	MSG_MENU_MACROWND = 0x92f,
/*20120702 to 20180523
Webbrowser
20130807 to 20130814
매크로
Macro
*/
	MSG_MENU_WEBBROWSERWND = 0x930,
/*20120702 to 20170517
네비게이션
20130807 to 20130814
Webbrowser
20170524 to 20180523
내비게이션
Navigation
*/
	MSG_MENU_NAVIGATIONWND = 0x931,
/*20120702 to 20180523
UAEURL
20130807 to 20130814
네비게이션
*/
	MSG_MENU_UAEURLWND = 0x932,
/*20120702 to 20180523
 클랜정보 
Clan Information
20130807 to 20130814
UAEURL
*/
	MSG_CLAN_INFOMANAGE = 0x933,
/*20120702 to 20180523
클랜레벨
Clan Level
20130807 to 20130814
 클랜정보 
Clan Information
*/
	MSG_CLAN_LEVEL = 0x934,
/*20120702 to 20180523
클랜명
Clan Name
20130807 to 20130814
클랜레벨
Clan Level
*/
	MSG_CLAN_NAME = 0x935,
/*20120702 to 20180523
클랜마크
Clan Mark
20130807 to 20130814
클랜명
Clan Name
*/
	MSG_CLAN_MARK = 0x936,
/*20120702 to 20180523
동맹클랜
Ally Clan
20130807 to 20130814
클랜마크
Clan Mark
*/
	MSG_ALLY_CLAN = 0x937,
/*20120702 to 20130529
적대길드
Antagonists
20130605 to 20180523
적대클랜
Antagonist Clan
20130807 to 20130814
동맹클랜
Ally Clan
*/
	MSG_HOSTILITY_CLAN = 0x938,
/*20120702 to 20180523
클랜에게 보냄
Send to Clan
20130807 to 20130814
적대클랜
Antagonist Clan
*/
	MSG_SEND_TO_CLAN = 0x939,
/*20120702 to 20180523
마스터이름
ClanMaster Name
20130807 to 20130814
클랜에게 보냄
Send to Clan
*/
	MSG_CLAN_MASTER_NAME = 0x93a,
/*20120702 to 20180523
조합원수
Number of Members
20130807 to 20130814
마스터이름
ClanMaster Name
*/
	MSG_CLAN_NUM_MEMBER = 0x93b,
/*20120702 to 20120702
조합원 평균레벨
Avg.lvl of Guildsmen
20120710 to 20180523
관리영지
Castles Owned
20130807 to 20130814
조합원수
Number of Members
*/
	MSG_CLAN_MANAGE_LAND = 0x93c,
/*20120702 to 20130814
관리영지
Castles Owned
20120716 to 20180523
클랜 채팅 메시지 표시
Clan Chat Messages
*/
	MSG_VIEW_CLAN_MSG = 0x93d,
#endif
#if PACKETVER >= 20120716
/*20120716 to 20180523
충전 페이지로 이동합니다.
Go to Page Charged.
20130807 to 20130814
클랜 채팅 메시지 표시
Clan Chat Messages
*/
	MSG_TWWAB_WARRING = 0x93e,
/*20120716 to 20120716
http://ro.game.gnjoy.com/
20120724 to 20180523
https://gfb.gameflier.com/Billing/ingame/index_new.asp?
20130807 to 20130814
충전 페이지로 이동합니다.
Go to Page Charged.
*/
	MSG_TWWAB_URL = 0x93f,
#endif
#if PACKETVER >= 20120724
/*20120724 to 20180523
캐릭터 만들기
Create char
20130807 to 20130814
https://gfb.gameflier.com/Billing/ingame/index_new.asp?
*/
	MSG_STR_MAKECHARACTER = 0x940,
/*20120724 to 20180523
캐릭명이 일치하지 않습니다.
Name does not match
20130807 to 20130814
캐릭터 만들기
Create char
*/
	MSG_CHR_DELETE_RESERVED_FAIL_CHARNAME = 0x941,
/*20120724 to 20180523
캐릭터명을 입력하세요
Enter the name of character
20130807 to 20130814
캐릭명이 일치하지 않습니다.
Name does not match
*/
	MSG_CHR_DELETE_RESERVED_INPUTCONFIRMSTR_WND_TITLE = 0x942,
/*20120724 to 20120822
/bufftimer : 버프에 쿨타이머를 표시합니다. On Off
20120830 to 20180523
성별 선택 창
Sex Selection Window
20130807 to 20130814
캐릭터명을 입력하세요
Enter the name of character
*/
	MSG_SELECT_SEX = 0x943,
/*20120724 to 20120822
버프에 쿨타이머가 표시됩니다.
20120830 to 20180523
파일의 위변조가 감지 되었습니다.
Editing of the File Detected
20130807 to 20130814
성별 선택 창
Sex Selection Window
*/
	MSG_SPRITE_ALTER = 0x944,
/*20120724 to 20120822
버프에 쿨타이머가 표시되지 않습니다.
20120830 to 20180523
해당 아이템을 개봉하여 획득되는 아이템들은 캐릭터 귀속 아이템 (창고이동 불가능) 입니다. 본 캐릭터에 사용하시는 것이 맞으신지 확인해주시기 바랍니다. 상자를 개봉하시겠습니까?
Items obtained by opening the item is character bounded (can not move to storage). Do you want to open the box?
20130807 to 20130814
파일의 위변조가 감지 되었습니다.
Editing of the File Detected
*/
	MSG_CONFIRM_TO_OPEN_EVENT_ITEM = 0x945,
#endif
#if PACKETVER >= 20120808
/*20120808 to 20120822
성별 선택 창
Sex Selection Window
20120925 to 20180523
게임 설정
Game Settings
20130807 to 20130814
해당 아이템을 개봉하여 획득되는 아이템들은 캐릭터 귀속 아이템 (창고이동 불가능) 입니다. 본 캐릭터에 사용하시는 것이 맞으신지 확인해주시기 바랍니다. 상자를 개봉하시겠습니까?
Items obtained by opening the item is character bounded (can not move to storage). Do you want to open the box?
*/
	MSG_GAME_SETTING = 0x946,
#endif
#if PACKETVER >= 20120822
/*20120822 to 20120822
파일의 위변조가 감지 되었습니다.
Editing of the File Detected
20120925 to 20180523
게임 시스템
Game System
20130807 to 20130814
게임 설정
Game Settings
*/
	MSG_SYSTEM_SETTING = 0x947,
#endif
#if PACKETVER >= 20120925
/*20120925 to 20180523
게임 커맨드
Game Commands
20130807 to 20130814
게임 시스템
Game System
*/
	MSG_COMMAND_SETTING = 0x948,
/*20120925 to 20120926
게임 커맨드 리스트
20121010 to 20180523
게임 커맨드 ON/OFF
Game Command ON/OFF
20130807 to 20130814
게임 커맨드
Game Commands
*/
	MSG_COMMAND_LIST = 0x949,
/*20120925 to 20180523
매크로
Macro
20130807 to 20130814
게임 커맨드 ON/OFF
Game Command ON/OFF
*/
	MSG_MACRO_LIST = 0x94a,
/*20120925 to 20180523
이지역은 아이템교환이 금지 되어 있습니다
Trading is prohibited in this Map
20130807 to 20130814
매크로
Macro
*/
	MSG_EXCHANGEITEM_DENY_MAP = 0x94b,
/*20120925 to 20180523
이지역은 카트이용이 금지 되어 있습니다
Vending is prohibited in this Map
20130807 to 20130814
이지역은 아이템교환이 금지 되어 있습니다
Trading is prohibited in this Map
*/
	MSG_CART_USE_DENY_MAP = 0x94c,
#endif
#if PACKETVER >= 20121010
/*20121010 to 20180523
이지역은 태양과달과별의 기적 효과가 발생하지 않습니다.
In this Map,Effect of Mirace of Sun and Moon is nullified.
20130807 to 20130814
이지역은 카트이용이 금지 되어 있습니다
Vending is prohibited in this Map
*/
	MSG_BLOCK_SUNMOONSTAR_MIRACLE = 0x94d,
/*20121010 to 20180523
랭킹 보드
Ranking Board
20130807 to 20130814
이지역은 태양과달과별의 기적 효과가 발생하지 않습니다.
In this Map,Effect of Mirace of Sun and Moon is nullified.
*/
	MSG_RANKING_BOARD = 0x94e,
/*20121010 to 20180523
순위
Rank
20130807 to 20130814
랭킹 보드
Ranking Board
*/
	MSG_RANKING_NUMBER = 0x94f,
/*20121010 to 20180523
이름
Name
20130807 to 20130814
순위
Rank
*/
	MSG_RANKING_NAME = 0x950,
/*20121010 to 20180523
포인트
Points
20130807 to 20130814
이름
Name
*/
	MSG_RANKING_POINT = 0x951,
/*20121010 to 20180523
BlackSmith
20130807 to 20130814
포인트
Points
*/
	MSG_RANKING_BLACKSMITH = 0x952,
/*20121010 to 20180523
Alchemist
20130807 to 20130814
BlackSmith
*/
	MSG_RANKING_ALCHEMIST = 0x953,
/*20121010 to 20180523
Taekwon
20130807 to 20130814
Alchemist
*/
	MSG_RANKING_TAEKWON = 0x954,
/*20121010 to 20180523
Killer
20130807 to 20130814
Taekwon
*/
	MSG_RANKING_KILLER = 0x955,
/*20121010 to 20121010
Munak
20121017 to 20121107
1 vs 1
20121114 to 20180523
7 vs 7
20130807 to 20130814
Killer
*/
	MSG_RANKING_BATTLE_7VS7_ALL = 0x956,
/*20121010 to 20121010
DeathKnight
20121017 to 20130814
7 vs 7
20121114 to 20180523
RuneKnight
*/
	MSG_RANKING_RUNE_KNIGHT = 0x957,
/*20121010 to 20121010
Collector
20121017 to 20121107
Select Ranking Type
20121114 to 20180523
Warlock
20130807 to 20130814
RuneKnight
*/
	MSG_RANKING_WARLOCK = 0x958,
/*20121010 to 20121010
Select Ranking Type
20121017 to 20121107
Ranking Type
20121114 to 20180523
Ranger
20130807 to 20130814
Warlock
*/
	MSG_RANKING_RANGER = 0x959,
/*20121010 to 20121010
Ranking Type
20121114 to 20180523
Mechanic
20130807 to 20130814
Ranger
*/
	MSG_RANKING_MECHANIC = 0x95a,
#endif
#if PACKETVER >= 20121114
/*20121114 to 20180523
GuillotineCross
20130807 to 20130814
Mechanic
*/
	MSG_RANKING_GUILLOTINE_CROSS = 0x95b,
/*20121114 to 20180523
Archbishop
20130807 to 20130814
GuillotineCross
*/
	MSG_RANKING_ARCHBISHOP = 0x95c,
/*20121114 to 20180523
RoyalGuard
20130807 to 20130814
Archbishop
*/
	MSG_RANKING_ROYAL_GUARD = 0x95d,
/*20121114 to 20180523
Sorcerer
20130807 to 20130814
RoyalGuard
*/
	MSG_RANKING_SORCERER = 0x95e,
/*20121114 to 20180523
Minstrel
20130807 to 20130814
Sorcerer
*/
	MSG_RANKING_MINSTREL = 0x95f,
/*20121114 to 20180523
Wanderer
20130807 to 20130814
Minstrel
*/
	MSG_RANKING_WANDERER = 0x960,
/*20121114 to 20180523
Genetic
20130807 to 20130814
Wanderer
*/
	MSG_RANKING_GENETIC = 0x961,
/*20121114 to 20180523
ShadowChaser
20130807 to 20130814
Genetic
*/
	MSG_RANKING_SHADOW_CHASER = 0x962,
/*20121114 to 20180523
Sura
20130807 to 20130814
ShadowChaser
*/
	MSG_RANKING_SURA = 0x963,
/*20121114 to 20180523
Kagerou
20130807 to 20130814
Sura
*/
	MSG_RANKING_KAGEROU = 0x964,
/*20121114 to 20180523
Oboro
20130807 to 20130814
Kagerou
*/
	MSG_RANKING_OBORO = 0x965,
/*20121114 to 20180523
Select Ranking Type
20130807 to 20130814
Oboro
*/
	MSG_RANKING_SELECT = 0x966,
/*20121114 to 20180523
Ranking Type
20130807 to 20130814
Select Ranking Type
*/
	MSG_RANKING_TYPE = 0x967,
/*20121114 to 20180523
현재 접속 인원이 가득 찼습니다.           ^0000ff현재 대기순위 : %d                    예상 대기시간 : %d초
Currently,Server is full.           ^0000ffPeople Currently Waiting: %d                    Expected Waiting Time: %dSeconds
20130807 to 20130814
Ranking Type
*/
	MSG_WAITING_FOR_ENTER_TO_CHARACTER_SEVER_IN_SEC = 0x968,
/*20121114 to 20180523
현재 접속 인원이 가득 찼습니다.           ^0000ff현재 대기순위 : %d                    예상 대기시간 : %d분 %d초
Currently,Server is full.           ^0000ffPeople Currently Waiting: %d                    Expected Waiting Time: %dMinutes %d Seconds
20130807 to 20130814
현재 접속 인원이 가득 찼습니다.           ^0000ff현재 대기순위 : %d                    예상 대기시간 : %d초
Currently,Server is full.           ^0000ffPeople Currently Waiting: %d                    Expected Waiting Time: %dSeconds
*/
	MSG_WAITING_FOR_ENTER_TO_CHARACTER_SEVER_IN_MIN = 0x969,
/*20121114 to 20180523
CBT 초청 유저가 아닙니다
CBT is not an invited user
20130807 to 20130814
현재 접속 인원이 가득 찼습니다.           ^0000ff현재 대기순위 : %d                    예상 대기시간 : %d분 %d초
Currently,Server is full.           ^0000ffPeople Currently Waiting: %d                    Expected Waiting Time: %dMinutes %d Seconds
*/
	MSG_CBT_ACTIVE_USER_CHECK = 0x96a,
#endif
#if PACKETVER >= 20121128
/*20121128 to 20180523
 -------------- Navigation 명령어 --------------
------------------- Instruction --------------------
20130807 to 20130814
CBT 초청 유저가 아닙니다
CBT is not an invited user
*/
	MSG_NAVIGATION_HELP_1 = 0x96b,
/*20121128 to 20180523
/navigation    /navi  :  /navi yuno 100/100           ->> 맵이름, 위치(100/100)
1) /Navigation or /navi ex) /navi prontera 100 100 -> /navi "MAPNAME", 100, 100
20130807 to 20130814
 -------------- Navigation 명령어 --------------
------------------- Instruction --------------------
*/
	MSG_NAVIGATION_HELP_2 = 0x96c,
/*20121128 to 20180523
/navigation2  /navi2 :  /navi2 yuno 100/100 1/1/1 ->> 맵이름, 위치(100/100), scrool/zeny/plane (1:사용함 0: 사용안함)
2) /Navigation2 or /navi2 ex) /navi2 prontera 100 111 -> MAPNAME location (100 90), Scroll | Zeny | Plane (1: Enable or 0: Disable)
20130807 to 20130814
/navigation    /navi  :  /navi yuno 100/100           ->> 맵이름, 위치(100/100)
1) /Navigation or /navi ex) /navi prontera 100 100 -> /navi "MAPNAME", 100, 100
*/
	MSG_NAVIGATION_HELP_3 = 0x96d,
/*20121128 to 20180523
 -------------- Navigation 검색창 명령어 -------
-> /navi2 goes with the case with location coordinates. They must be no less than 3 characters 
20130807 to 20130814
/navigation2  /navi2 :  /navi2 yuno 100/100 1/1/1 ->> 맵이름, 위치(100/100), scrool/zeny/plane (1:사용함 0: 사용안함)
2) /Navigation2 or /navi2 ex) /navi2 prontera 100 111 -> MAPNAME location (100 90), Scroll | Zeny | Plane (1: Enable or 0: Disable)
*/
	MSG_NAVIGATION_HELP_4 = 0x96e,
/*20121128 to 20180523
$$all         : 모든 항목 출력 (Type 구분자에서 출력 종류를 나눌수 있다.)
3) $$all Output all the items (Can take a while...) 
20130807 to 20130814
 -------------- Navigation 검색창 명령어 -------
-> /navi2 goes with the case with location coordinates. They must be no less than 3 characters 
*/
	MSG_NAVIGATION_HELP_5 = 0x96f,
/*20121128 to 20180523
$$lv30       : 해당 레벨의 몬스터 출력 (숫자는 변경 가능)
4) $$lv30 monsters are placed in the output 
20130807 to 20130814
$$all         : 모든 항목 출력 (Type 구분자에서 출력 종류를 나눌수 있다.)
3) $$all Output all the items (Can take a while...) 
*/
	MSG_NAVIGATION_HELP_6 = 0x970,
/*20121128 to 20180523
$$lv20~30  : 해당 레벨 범위의 몬스터 출력 (숫자는 변경 가능)
5) $$lv20~30 monsters in that level range are placed in the output 
20130807 to 20130814
$$lv30       : 해당 레벨의 몬스터 출력 (숫자는 변경 가능)
4) $$lv30 monsters are placed in the output 
*/
	MSG_NAVIGATION_HELP_7 = 0x971,
/*20121128 to 20180523
1 vs 1
20130807 to 20130814
$$lv20~30  : 해당 레벨 범위의 몬스터 출력 (숫자는 변경 가능)
5) $$lv20~30 monsters in that level range are placed in the output 
*/
	MSG_RANKING_BATTLE_1VS1_ALL = 0x972,
#endif
#if PACKETVER >= 20121205
/*20121205 to 20180523
특수 장비
Special Gear
20130807 to 20130814
1 vs 1
*/
	MSG_SHADOW_EQUIPMENT = 0x973,
#endif
#if PACKETVER >= 20130109
/*20130109 to 20180523
%d 번째 캐릭터의 직업 정보가 이상합니다. 고객센터로 문의 부탁 드립니다. ErrorCode(%d)
%d First character of the profession is more than information. Please contact the Customer Care Center. ErrorCode(%d)
20130807 to 20130814
특수 장비
Special Gear
*/
	MSG_CHARACTERERROR_JOB = 0x974,
#endif
#if PACKETVER >= 20130115
/*20130115 to 20180523
(%s) %d / %d
20130807 to 20130814
%d 번째 캐릭터의 직업 정보가 이상합니다. 고객센터로 문의 부탁 드립니다. ErrorCode(%d)
%d First character of the profession is more than information. Please contact the Customer Care Center. ErrorCode(%d)
*/
	MSG_NAVIGATION_ALL_S = 0x975,
/*20130115 to 20180523
%s-%s(%d/%d)
20130807 to 20130814
(%s) %d / %d
*/
	MSG_NAVIGATION_ALL_SD = 0x976,
#endif
#if PACKETVER >= 20130121
/*20130121 to 20180523
접속자 수 초과로 서버에 더이상 접속할 수 없습니다.
Server Exceeded the maximum number of users,Cannot Connect anymore users.
20130807 to 20130814
%s-%s(%d/%d)
*/
	MSG_REFUSE_OVER_USERLIMIT = 0x977,
/*20130121 to 20180523
서버접속 실패 (%d)
Server Connection Failed (%d)
20130807 to 20130814
접속자 수 초과로 서버에 더이상 접속할 수 없습니다.
Server Exceeded the maximum number of users,Cannot Connect anymore users.
*/
	MSG_REFUSE_ERRORCODE = 0x978,
/*20130121 to 20180523
로그인 허용시간 초과
Login Timeout Permitted
20130807 to 20130814
서버접속 실패 (%d)
Server Connection Failed (%d)
*/
	MSG_REFUSE_DISCONNECT_KEEP_TIME = 0x979,
/*20130121 to 20180523
로그인 중 인증서버로부터 인증이 실패하였습니다.
Login Authentication Failed from Authentication Server.
20130807 to 20130814
로그인 허용시간 초과
Login Timeout Permitted
*/
	MSG_REFUSE_WEB_AUTH_FAILED = 0x97a,
#endif
#if PACKETVER >= 20130206
/*20130206 to 20180523
길드이름에 공백문자를 사용할 수 없습니다.
Guild Cannot use Space in the name.
20130807 to 20130814
로그인 중 인증서버로부터 인증이 실패하였습니다.
Login Authentication Failed from Authentication Server.
*/
	MSG_GUILDNAME_CHECK = 0x97b,
#endif
#if PACKETVER >= 20130215
/*20130215 to 20180523
고객님 안녕하세요!
Hey,Hello There
20130807 to 20130814
길드이름에 공백문자를 사용할 수 없습니다.
Guild Cannot use Space in the name.
*/
	MSG_BILLING_CHN_1 = 0x97c,
/*20130215 to 20180523
고객님의 이용 시간은 %d년 %d 월 %d일 %d:%d 에 종료됩니다.
Available Time will End on %d month %d hour %d:%d
20130807 to 20130814
고객님 안녕하세요!
Hey,Hello There
*/
	MSG_BILLING_CHN_2 = 0x97d,
/*20130215 to 20180523
고객님의 이용 시간은 아직 많이 남았으니 안심하고 플레이하세요!
You've lot of time,Play in Peace.
20130807 to 20130814
고객님의 이용 시간은 %d년 %d 월 %d일 %d:%d 에 종료됩니다.
Available Time will End on %d month %d hour %d:%d
*/
	MSG_BILLING_CHN_3 = 0x97e,
/*20130215 to 20180523
고객님의 이용 시간은 이번 주 내로 종료 됩니다. 종료 전에 충전을 하시기 바랍니다.
Your hours will be terminated within this week. Please Charge before termination.
20130807 to 20130814
고객님의 이용 시간은 아직 많이 남았으니 안심하고 플레이하세요!
You've lot of time,Play in Peace.
*/
	MSG_BILLING_CHN_4 = 0x97f,
/*20130215 to 20180523
고객님의 이용 시간은 24시간 내에 종료됩니다. 빨리 충전하시기 바랍니다.
Your hours will be terminated within 24 hours.Please Charge Quickly.
20130807 to 20130814
고객님의 이용 시간은 이번 주 내로 종료 됩니다. 종료 전에 충전을 하시기 바랍니다.
Your hours will be terminated within this week. Please Charge before termination.
*/
	MSG_BILLING_CHN_5 = 0x980,
/*20130215 to 20180523
현재 고객님의 이용 시간은 %d시간 남았습니다. 정상적인 게임 이용을 위해 충전을 하시기 바랍니다.
Current Time Left:%d hours.Charge the game for uninterrupted play.
20130807 to 20130814
고객님의 이용 시간은 24시간 내에 종료됩니다. 빨리 충전하시기 바랍니다.
Your hours will be terminated within 24 hours.Please Charge Quickly.
*/
	MSG_BILLING_CHN_6 = 0x981,
/*20130215 to 20180523
현재 고객님의 이용 시간은 %d분 남았습니다. 이용시간이 끝난 후 강제적으로 종료됩니다. 정상적인 게임 이용을 위해 충전을 하시기 바랍니다.
Current Time Left:%d minutes.Charge the game for uninterrupted play.
20130807 to 20130814
현재 고객님의 이용 시간은 %d시간 남았습니다. 정상적인 게임 이용을 위해 충전을 하시기 바랍니다.
Current Time Left:%d hours.Charge the game for uninterrupted play.
*/
	MSG_BILLING_CHN_7 = 0x982,
/*20130215 to 20180523
고객님의 이용 시간은 %d시간 %d분 남았습니다.
Time Left: %d hours %d minutes
20130807 to 20130814
현재 고객님의 이용 시간은 %d분 남았습니다. 이용시간이 끝난 후 강제적으로 종료됩니다. 정상적인 게임 이용을 위해 충전을 하시기 바랍니다.
Current Time Left:%d minutes.Charge the game for uninterrupted play.
*/
	MSG_BILLING_CHN_8 = 0x983,
/*20130215 to 20180523
%d%% ( 기본 100%% + PC방 %d%% + 프리미엄 %d%% + %s서버 %d%% )
%d%% ( Basic 100%% + PCRoom %d%% + Premium %d%% + %sServer %d%% )
20130807 to 20130814
고객님의 이용 시간은 %d시간 %d분 남았습니다.
Time Left: %d hours %d minutes
*/
	MSG_BASIC_EXP_MSG_THAI = 0x984,
/*20130215 to 20180523
고객님의 이용 시간은 %d시간 %d분 후에 종료됩니다.
After %d hours %d minutes, your game will be terminated.
20130807 to 20130814
%d%% ( 기본 100%% + PC방 %d%% + 프리미엄 %d%% + %s서버 %d%% )
%d%% ( Basic 100%% + PCRoom %d%% + Premium %d%% + %sServer %d%% )
*/
	MSG_CHN_BILLING_EXPIRE_TIME = 0x985,
#endif
#if PACKETVER >= 20130220
/*20130220 to 20180523
유저님의 계정은 영구 접속금지 되였습니다
This Account is permanently Banned.
20130807 to 20130814
고객님의 이용 시간은 %d시간 %d분 후에 종료됩니다.
After %d hours %d minutes, your game will be terminated.
*/
	MSG_CHN_BLOCK_FOREVER = 0x986,
/*20130220 to 20180523
유저님의 계정은 접속금지 되였습니다
 해지 시간 : %04d-%02d-%02d %02d:%02d
This Account is banned.
Termination Time:%04d-%02d-%02d %02d:%02d 
20130807 to 20130814
유저님의 계정은 영구 접속금지 되였습니다
This Account is permanently Banned.
*/
	MSG_CHN_BLOCK = 0x987,
#endif
#if PACKETVER >= 20130227
/*20130227 to 20180523
몬스터(Tab)
Monster(Tab)
20130807 to 20130814
유저님의 계정은 접속금지 되였습니다
 해지 시간 : %04d-%02d-%02d %02d:%02d
This Account is banned.
Termination Time:%04d-%02d-%02d %02d:%02d 
*/
	MSG_WORLDMAP_MSG1 = 0x988,
/*20130227 to 20180523
맵(Alt)
Map(Alt)
20130807 to 20130814
몬스터(Tab)
Monster(Tab)
*/
	MSG_WORLDMAP_MSG2 = 0x989,
/*20130227 to 20180523
안내 정보
Product Information
20130807 to 20130814
맵(Alt)
Map(Alt)
*/
	MSG_WORLDMAP_MSG3 = 0x98a,
/*20130227 to 20180523
검색 정보
Find Information
20130807 to 20130814
안내 정보
Product Information
*/
	MSG_WORLDMAP_MSG4 = 0x98b,
/*20130227 to 20180523
비공정
AirShip
20130807 to 20130814
검색 정보
Find Information
*/
	MSG_WORLDMAP_MSG5 = 0x98c,
/*20130227 to 20180523
카프라
Kafra
20130807 to 20130814
비공정
AirShip
*/
	MSG_WORLDMAP_MSG6 = 0x98d,
/*20130227 to 20180523
(도착)
(Arrival)
20130807 to 20130814
카프라
Kafra
*/
	MSG_WORLDMAP_MSG7 = 0x98e,
#endif
#if PACKETVER >= 20130313
/*20130313 to 20180523
Mob)%s:%s(%s)
20130807 to 20130814
(도착)
(Arrival)
*/
	MSG_NAVIGATION_MOB_S_S_S = 0x98f,
/*20130313 to 20180523
분포도:%s
Distribution:%s
20130807 to 20130814
Mob)%s:%s(%s)
*/
	MSG_NAVIGATION_NUM = 0x990,
/*20130313 to 20180523
매우많음
Very Plenty
20130807 to 20130814
분포도:%s
Distribution:%s
*/
	MSG_NAVIGATION_NUM1 = 0x991,
/*20130313 to 20180523
많음
Plenty
20130807 to 20130814
매우많음
Very Plenty
*/
	MSG_NAVIGATION_NUM2 = 0x992,
/*20130313 to 20180523
보통
Normal
20130807 to 20130814
많음
Plenty
*/
	MSG_NAVIGATION_NUM3 = 0x993,
/*20130313 to 20180523
적음
Low
20130807 to 20130814
보통
Normal
*/
	MSG_NAVIGATION_NUM4 = 0x994,
/*20130313 to 20180523
매우적음
Very Low
20130807 to 20130814
적음
Low
*/
	MSG_NAVIGATION_NUM5 = 0x995,
#endif
#if PACKETVER >= 20130320
/*20130320 to 20180523
은행을 이용할 수 없습니다. 잠시 후 다시 시도하세요.
The bank is not available. Please try again in a few minutes.
20130807 to 20130814
매우적음
Very Low
*/
	MSG_BANK_SYSTEM_ERROR = 0x996,
/*20130320 to 20180523
은행 잔고가 부족합니다.
Bank balance is low.
20130807 to 20130814
은행을 이용할 수 없습니다. 잠시 후 다시 시도하세요.
The bank is not available. Please try again in a few minutes.
*/
	MSG_BANK_WITHDRAW_NO_MONEY = 0x997,
#endif
#if PACKETVER >= 20130327
/*20130327 to 20180523
보유한 Zeny 가 부족해서 입금할 수 없습니다.
You don't have enough zeny
20130807 to 20130814
은행 잔고가 부족합니다.
Bank balance is low.
*/
	MSG_BANK_DEPOSIT_NO_MONEY = 0x998,
/*20130327 to 20180523
1 Zeny 이상 입금 가능합니다.
Minimum Deposit Amount: 1 zeny
20130807 to 20130814
보유한 Zeny 가 부족해서 입금할 수 없습니다.
You don't have enough zeny
*/
	MSG_BANK_DEPOSIT_ZERO = 0x999,
/*20130327 to 20180523
1 Zeny 이상 출금 가능합니다.
Minimum Withdrawal Amount: 1 zeny
20130807 to 20130814
1 Zeny 이상 입금 가능합니다.
Minimum Deposit Amount: 1 zeny
*/
	MSG_BANK_WITHDRAW_ZERO = 0x99a,
/*20130327 to 20130605
보유 Zeny 는 21 억을 넘을 수 없습니다.
20130605 to 20180523
보유 Zeny 는 2,147,483,647 Zeny를 넘을 수 없습니다.
You cannot hold more than 2,147,483,647 Zeny
20130807 to 20130814
1 Zeny 이상 출금 가능합니다.
Minimum Withdrawal Amount: 1 zeny
*/
	MSG_BANK_OVER_INT_MAX = 0x99b,
/*20130327 to 20180523
your account is lock by mobil otp
your account is lock by mobile otp
20130807 to 20130814
보유 Zeny 는 2,147,483,647 Zeny를 넘을 수 없습니다.
You cannot hold more than 2,147,483,647 Zeny
*/
	MSG_REFUSE_MOTP_LOCK = 0x99c,
/*20130327 to 20180523
MOTP auth fail
20130807 to 20130814
your account is lock by mobil otp
your account is lock by mobile otp
*/
	MSG_REFUSE_MOTP_AUTH_FAIL = 0x99d,
/*20130327 to 20180523
%d분간 몬스터에게 얻을 수 있는 Job경험치가 %d%% 증가합니다.
For %d minutes,Job Experience obtained from monster is increased by %d%%
20130807 to 20130814
MOTP auth fail
*/
	MSG_JOBPLUSEXP_VALUE = 0x99e,
#endif
#if PACKETVER >= 20130410
/*20130410 to 20130410
소지 Zeny : %d Zeny
20130417 to 20180523
소지 Zeny : %s Zeny
Current Zeny: %s Zeny
20130807 to 20130814
%d분간 몬스터에게 얻을 수 있는 Job경험치가 %d%% 증가합니다.
For %d minutes,Job Experience obtained from monster is increased by %d%%
*/
	MSG_BANK_MY_ZENY = 0x99f,
/*20130410 to 20180523
Zeny
20130807 to 20130814
소지 Zeny : %s Zeny
Current Zeny: %s Zeny
*/
	MSG_BANK_ZENY = 0x9a0,
/*20130410 to 20130515
* 최대 21억 Zeny까지만 보관이 가능합니다.
20130522 to 20130605
최대 2,147,483,647억 Zeny까지만 보관이 가능합니다.
20130605 to 20130605
최대 2,147,483,647 Zeny까지만 보관이 가능합니다.
20130612 to 20180523
최대 2,147,483,647 Zeny 까지만 보관이 가능합니다.
The Maximum amount is 2,147,483,647 Zeny
20130807 to 20130814
Zeny
*/
	MSG_BANK_WARNING = 0x9a1,
#endif
#if PACKETVER >= 20130515
/*20130515 to 20180523
총알이 부족합니다.
Insufficient bullet
20130807 to 20130814
최대 2,147,483,647 Zeny 까지만 보관이 가능합니다.
The Maximum amount is 2,147,483,647 Zeny
*/
	MSG_NEED_MORE_BULLET = 0x9a2,
/*20130515 to 20180523
10억제니 이상 입력하셔도 가격은 10억 제니로 판매됩니다.
You entered more than 1 Billion Zeny, the price will be set to 1 Billion Zeny.
20130807 to 20130814
총알이 부족합니다.
Insufficient bullet
*/
	MSG_OVERPRICE_MAX = 0x9a3,
#endif
#if PACKETVER >= 20130605
/*20130605 to 20180523
AuthTicket is Not Vaild
AuthTicket is Not Valid
20130807 to 20130814
10억제니 이상 입력하셔도 가격은 10억 제니로 판매됩니다.
You entered more than 1 Billion Zeny, the price will be set to 1 Billion Zeny.
*/
	MSG_NOT_VALID_AUTH_TICKET = 0x9a4,
/*20130605 to 20130605
ErrorCode : %d, ErrorValue : %d
20130612 to 20180523
ErrorCategory : %d, ErrorCode : %d (%d,%d,%d,%d)
ErrorCategory: %d, ErrorCode: %d (%d,%d,%d,%d)
20130807 to 20130814
AuthTicket is Not Vaild
AuthTicket is Not Valid
*/
	MSG_STEAMAGENCY_ERROR = 0x9a5,
#endif
#if PACKETVER >= 20130618
/*20130618 to 20130618
%d%% ( Primary 100%% + Premium %d%% + PCCafe %d%% + %s Server %d%% )
20130626 to 20180523
%d%% ( Basic 100%% + Premium %d%% + PCCafe %d%% + %s Server %d%% )
%d%% ( Basic 100%% + Premium %d%% + Internet cafe %d%% + %s Server %d%% )
20130807 to 20130814
ErrorCategory : %d, ErrorCode : %d (%d,%d,%d,%d)
ErrorCategory: %d, ErrorCode: %d (%d,%d,%d,%d)
*/
	MSG_BASIC_EXP_MSG_INDONESIA = 0x9a6,
/*20130618 to 20130925
 몬스터 사냥을 통해 얻을 수 있는 기본 아이템의 드롭률이 %d분간 %d배로 증가합니다.
20130807 to 20130814
%d%% ( Basic 100%% + Premium %d%% + PCCafe %d%% + %s Server %d%% )
%d%% ( Basic 100%% + Premium %d%% + Internet cafe %d%% + %s Server %d%% )
20130925 to 20180523
 %d분간 몬스터 사냥을 통해 얻을 수 있는 기본 아이템의 드롭률이 %d%%로 증가합니다.
Basic item drop rate from monster hunting is increased for %dmins by %dtimes.
*/
	MSG_RECEIVEITEM_VALUE = 0x9a7,
/*20130618 to 20130925
 몬스터 사냥을 통해 얻을 수 있는 기본 아이템의 드롭률이 %d시 %.2d분간 %d배로 증가합니다.
20130807 to 20130814
 몬스터 사냥을 통해 얻을 수 있는 기본 아이템의 드롭률이 %d분간 %d배로 증가합니다.
20130925 to 20180523
 %d시 %.2d분간 몬스터 사냥을 통해 얻을 수 있는 기본 아이템의 드롭률이 %d%%로 증가합니다.
Basic item drop rate from monster hunting is increased for %dhour %.2dmins  by %dtimes.
*/
	MSG_RECEIVEITEM_VALUE_1 = 0x9a8,
#endif
#if PACKETVER >= 20130626
/*20130626 to 20180523
%s 의 가격이
The price of^0000FF %s^000000
20130807 to 20130814
 몬스터 사냥을 통해 얻을 수 있는 기본 아이템의 드롭률이 %d시 %.2d분간 %d배로 증가합니다.
*/
	MSG_WARNING_PRICE1 = 0x9a9,
/*20130626 to 20180523
100000000
1000000000
20130807 to 20130814
%s 의 가격이
The price of^0000FF %s^000000
*/
	MSG_WARNING_PRICE2 = 0x9aa,
/*20130626 to 20180523
 ^ff0000%d^0000ff억
 is over ^FF0000%d^0000FF Billion^000000 Zeny and
20130807 to 20130814
100000000
1000000000
*/
	MSG_WARNING_PRICE3 = 0x9ab,
/*20130626 to 20180523
10000000
20130807 to 20130814
 ^ff0000%d^0000ff억
 is over ^FF0000%d^0000FF Billion^000000 Zeny and
*/
	MSG_WARNING_PRICE4 = 0x9ac,
/*20130626 to 20180523
 ^ff0000%d^0000ff천만
 more than^FF0000 %d0^0000FF Million^000000 Zeny
20130807 to 20130814
10000000
*/
	MSG_WARNING_PRICE5 = 0x9ad,
/*20130626 to 20180523
^0000ffZeny 이상^000000입니다.
입력금액이 맞습니까?
. Is this correct?
20130807 to 20130814
 ^ff0000%d^0000ff천만
 more than^FF0000 %d0^0000FF Million^000000 Zeny
*/
	MSG_WARNING_PRICE6 = 0x9ae,
/*20130626 to 20180523
천만Zeny이상 안전확인
Safety check for more than 10m Zeny
20130807 to 20130814
^0000ffZeny 이상^000000입니다.
입력금액이 맞습니까?
. Is this correct?
*/
	MSG_WARNING_PRICE7 = 0x9af,
/*20130626 to 20180523
https://www.warpportal.com/account/login.aspx?ReturnUrl=%2faccount%2fpayment.aspx
20130807 to 20130814
천만Zeny이상 안전확인
Safety check for more than 10m Zeny
*/
	MSG_AMERICA_CASHSHOP_URL = 0x9b0,
/*20130626 to 20131023
https://kepler.warpportal.com/steam/purchase/?step=1&steamid=76561198071003044&game=rose&accountname=khanhtest111&lang=en
20130807 to 20130814
https://www.warpportal.com/account/login.aspx?ReturnUrl=%2faccount%2fpayment.aspx
20131030 to 20180523
https://kepler.warpportal.com/ro1/purchase/?step=1&steamid=%lld&accountname=
https://kepler.warpportal.com/ror/purchase/?step=1&steamid=%lld&accountname=
*/
	MSG_AMERICA_CASHSHOP_URL_STEAM = 0x9b1,
/*20130626 to 20180523
지상의 끝, 스플랑디드와 부유대륙 알프헤임을 잇는 다리, 비프로스트에 생겨난 거대한 균열, 그리고 근원을 알 수 없는 미궁숲. 
A giant crevice appeared in Bifrost, the bridge between Splendide, the end of the world and the floating continent of Alfheim, and you do not know the source of the labyrinth forest.
20130807 to 20130814
https://kepler.warpportal.com/steam/purchase/?step=1&steamid=76561198071003044&game=rose&accountname=khanhtest111&lang=en
*/
	MSG_QUEST_INFO_01 = 0x9b2,
/*20130626 to 20180523
이것은 여행의 끝을 알리는 표식인가, 새로운 세계를 여는 지표인가! 수호자는 노랫말 같은 유혹에 점차 넋을 잃어가고 있었다. 
This is a marker indicating the end of the trip, a new world is opening indicators! Guardian, such as the lyrics to the temptation was gradually losing the soul.
20130807 to 20130814
지상의 끝, 스플랑디드와 부유대륙 알프헤임을 잇는 다리, 비프로스트에 생겨난 거대한 균열, 그리고 근원을 알 수 없는 미궁숲. 
A giant crevice appeared in Bifrost, the bridge between Splendide, the end of the world and the floating continent of Alfheim, and you do not know the source of the labyrinth forest.
*/
	MSG_QUEST_INFO_02 = 0x9b3,
/*20130626 to 20180523
수천 년의 세월이 흐르는 동안, 그 스스로가 홀로 안간힘을 쓰며 지켜낸 것이 무엇이었는지, 봉인 되어 긴 시간을 갇혀버린 것은 오히려 자신이 아니었는지 혼란을 느끼고 있었다. 
For thousands of years, a mysterious melody has mesmerized the guardian. After a millennia of slumber, the guardian became confused about what he had been protecting all these years, and began to suspect that he might be the one who has been sealed and hidden away.
20130807 to 20130814
이것은 여행의 끝을 알리는 표식인가, 새로운 세계를 여는 지표인가! 수호자는 노랫말 같은 유혹에 점차 넋을 잃어가고 있었다. 
This is a marker indicating the end of the trip, a new world is opening indicators! Guardian, such as the lyrics to the temptation was gradually losing the soul.
*/
	MSG_QUEST_INFO_03 = 0x9b4,
/*20130626 to 20180523
유혹의 노랫말이 최고조에 이르렀을 때, 지상의 끝 스플랑디드와 부유대륙 알프헤임을 잇는 다리, 비프로스트에 거대한 균열이 생겨났고, 그로 인해 두 세계간의 왕래가 끊기면서 사람들은 큰 불편을 겪게 되었다. 
When the melody reached its peak, a giant crevice appeared in Bifrost, the bridge between Splendide, the end of the world and the floating continent of Alfheim. As a result, the two worlds were cut off from each other, causing a big problem for the people.
20130807 to 20130814
수천 년의 세월이 흐르는 동안, 그 스스로가 홀로 안간힘을 쓰며 지켜낸 것이 무엇이었는지, 봉인 되어 긴 시간을 갇혀버린 것은 오히려 자신이 아니었는지 혼란을 느끼고 있었다. 
For thousands of years, a mysterious melody has mesmerized the guardian. After a millennia of slumber, the guardian became confused about what he had been protecting all these years, and began to suspect that he might be the one who has been sealed and hidden away.
*/
	MSG_QUEST_INFO_04 = 0x9b5,
/*20130626 to 20180523
비프로스트의 통로는 이제 미궁숲 뿐. 근원조차 알 수 없는 그곳을 무사히 통과 한 사람은 지금까지 아무도 없었다. 
Now, the only way to get to Bifrost is through the Labyrinth Forest. Nobody knows how the forest came to exist, and nobody has ever come out of it alive...
20130807 to 20130814
유혹의 노랫말이 최고조에 이르렀을 때, 지상의 끝 스플랑디드와 부유대륙 알프헤임을 잇는 다리, 비프로스트에 거대한 균열이 생겨났고, 그로 인해 두 세계간의 왕래가 끊기면서 사람들은 큰 불편을 겪게 되었다. 
When the melody reached its peak, a giant crevice appeared in Bifrost, the bridge between Splendide, the end of the world and the floating continent of Alfheim. As a result, the two worlds were cut off from each other, causing a big problem for the people.
*/
	MSG_QUEST_INFO_05 = 0x9b6,
/*20130626 to 20180523
숱한 모험가들을 집어 삼킨 혼돈의 지옥, 미궁숲은 그 속을 방황하는 이름 모를 여인의 마음처럼 더욱 깊고 혼란스럽게 확장되고 있었다.
Swallowed countless adventurers to put a hell of confusion, wandering in the forest labyrinth of nowhere, like the heart of a woman was being extend deeper confusion.
20130807 to 20130814
비프로스트의 통로는 이제 미궁숲 뿐. 근원조차 알 수 없는 그곳을 무사히 통과 한 사람은 지금까지 아무도 없었다. 
Now, the only way to get to Bifrost is through the Labyrinth Forest. Nobody knows how the forest came to exist, and nobody has ever come out of it alive...
*/
	MSG_QUEST_INFO_06 = 0x9b7,
#endif
#if PACKETVER >= 20130717
/*20130717 to 20180523
숫자만 입력 가능합니다.
You can enter only numbers.
20130807 to 20130814
숱한 모험가들을 집어 삼킨 혼돈의 지옥, 미궁숲은 그 속을 방황하는 이름 모를 여인의 마음처럼 더욱 깊고 혼란스럽게 확장되고 있었다.
Swallowed countless adventurers to put a hell of confusion, wandering in the forest labyrinth of nowhere, like the heart of a woman was being extend deeper confusion.
*/
	MSG_BANK_CHECK_NUM = 0x9b8,
#endif
#if PACKETVER >= 20130724
/*20130724 to 20180523
교환창 또는 상점이 활성화 된 상태에서는 입출금을 하실수 없습니다.
Exchange or store window is active and can not register the withdrawal.
20130807 to 20130814
숫자만 입력 가능합니다.
You can enter only numbers.
*/
	MSG_BANK_PROHIBIT = 0x9b9,
#endif
#if PACKETVER >= 20130731
/*20130731 to 20180523
바로가기
Go to
20130807 to 20130814
교환창 또는 상점이 활성화 된 상태에서는 입출금을 하실수 없습니다.
Exchange or store window is active and can not register the withdrawal.
*/
	MSG_QUEST_INFO_00 = 0x9ba,
/*20130731 to 20180523
아이템 비교
Item Compare
20130807 to 20130814
바로가기
Go to
*/
	MSG_ITEM_COMPARISON = 0x9bb,
#endif
#if PACKETVER >= 20130807
/*20130807 to 20130814
아이템 비교
Item Compare
20130821 to 20180523
현재 장착하려고 하는 총기가 장착하고 있는 탄환에 맞지 않습니다
Now you are trying to mount the gun equipped with bullet does not meet
*/
	MSG_WRONG_GUN = 0x9bc,
/*20130807 to 20130814
현재 장착하려고 하는 총기가 장착하고 있는 탄환에 맞지 않습니다
Now you are trying to mount the gun equipped with bullet does not meet
20130821 to 20180523
현재 장착하려고 하는 탄환이 장착하고 있는 총기와 맞지 않습니다
Now you are trying to mount the guns and bullets will not fit mounted
*/
	MSG_WRONG_BULLET = 0x9bd,
/*20130807 to 20130814
현재 장착하려고 하는 탄환이 장착하고 있는 총기와 맞지 않습니다
Now you are trying to mount the guns and bullets will not fit mounted
20130821 to 20180523
판매할 아이템을 등록하지 않았습니다. 판매하실 아이템을 등록해 주세요
Has not registered to sell the item. Please register to sell the item
*/
	MSG_BUYINGSTORE_MAKEWND_ADD_GOODS = 0x9be,
#endif
#if PACKETVER >= 20130821
/*20130821 to 20180523
ITEM
*/
	MSG_ITEM_IN_MAIL_SYSTEM = 0x9bf,
#endif
#if PACKETVER >= 20130828
/*20130828 to 20130911
길드 창고를 이용할 수 없습니다. 잠시 후 이용해주세요.
20130917 to 20180523
길드 창고를 이용할 수 없습니다.
Guild storage is not available.
*/
	MSG_GUILD_STORAGE_OPEN_ERROR = 0x9c0,
/*20130828 to 20180523
길드에 가입되어 있지 않습니다. 가입 후 이용해주세요.
Guild is not subscribed to. After signing up, please use 
*/
	MSG_GUILD_STORAGE_OPEN_NO_JOIN_GUILD = 0x9c1,
/*20130828 to 20180523
다른 길드원이 사용중입니다. 잠시 후 이용해주세요.
Two other guild members are in use. Please use it after a while.
*/
	MSG_GUILD_STORAGE_WARNING_USING_ANOTHER_MEMBER = 0x9c2,
/*20130828 to 20180523
창고권한
Storage Permission
*/
	MSG_GUILD_STORAGE_PERMISSON = 0x9c3,
/*20130828 to 20180523
길드창고
Guild Storage
*/
	MSG_GUILD_STORAGE_TITLE = 0x9c4,
/*20130828 to 20130828
길드창고의 사용 권한이 없습니다. 길드 마스터에게 요청하세요.
20130904 to 20180523
길드창고의 사용 권한이 없습니다.
You do not have permission to use guild storage.
*/
	MSG_GUILD_STORAGE_PERMISSON_WARNING_MSG = 0x9c5,
#endif
#if PACKETVER >= 20130917
/*20130917 to 20180523
한정판매 등록창
Limited Sale Registration Window
*/
	MSG_BARGAINSALE_TOOLWND_TITLE = 0x9c6,
/*20130917 to 20180523
아이템 DB명
Item DB Name
*/
	MSG_BARGAINSALE_TOOLWND_DB_NAME = 0x9c7,
/*20130917 to 20180523
아이템 DB번호
Item DB Number
*/
	MSG_BARGAINSALE_TOOLWND_DB_NUMBER = 0x9c8,
/*20130917 to 20180523
판매 갯수
Number of Sale
*/
	MSG_BARGAINSALE_TOOLWND_SELL_COUNT = 0x9c9,
/*20130917 to 20180523
판매 시작시간
Sale Start Time
*/
	MSG_BARGAINSALE_TOOLWND_SELL_STARTTIME = 0x9ca,
/*20130917 to 20180523
판매할 시간
Time to sell
*/
	MSG_BARGAINSALE_TOOLWND_SELL_PERIODTIME = 0x9cb,
/*20130917 to 20180523
판매할 갯수를 입력해 주세요
Please enter number you want to sell
*/
	MSG_BARGAINSALE_TOOLWND_INPUT_COUNT_MSG = 0x9cc,
/*20130917 to 20180523
판매 시작시간을 입력해 주세요
Enter start time of sale
*/
	MSG_BARGAINSALE_TOOLWND_INPUT_STARTTIME_MSG = 0x9cd,
/*20130917 to 20180523
판매 시작시간의 범위가 맞지 않습니다
Start time does not match the scope of sales.
*/
	MSG_BARGAINSALE_TOOLWND_WRONG_RANGE_MSG = 0x9ce,
/*20130917 to 20180523
판매할 시간을 입력해 주세요
Please enter the time
*/
	MSG_BARGAINSALE_TOOLWND_INPUT_PERIODTIME_MSG = 0x9cf,
/*20130917 to 20180523
Item DB Name을 입력해 주세요
Please enter the Item DB Name
*/
	MSG_BARGAINSALE_TOOLWND_INPUT_ITEMDBNAME_MSG = 0x9d0,
/*20130917 to 20180523
Item ID 조회에 실패하였습니다. 확인 후 다시 시도해 주시기 바랍니다
Item ID lookup failed. Please try again later
*/
	MSG_BARGAINSALE_TOOLWND_ITEMID_CHECK_FAILED_MSG = 0x9d1,
/*20130917 to 20180523
>> ItemName : %s / Price : %dc / 수량 : %d / 판매기간 : %d월:%d일:%d시:%d분 ~ %d월:%d일:%d시:%d분
>> ItemName: %s / Price: %dc / Quantity: %d / TimeOfSale: %dMonth:%dDay:%dMinute:%dSecond ~ %dMonth:%dDay:%dMinute:%dSecond
*/
	MSG_BARGAINSALE_TOOLWND_RESULT_FORMAT = 0x9d2,
/*20130917 to 20180523
등록에 성공하였습니다
Registration successful
*/
	MSG_BARGAINSALE_TOOLWND_APPLY_SUCCESS_MSG = 0x9d3,
/*20130917 to 20180523
등록에 실패하였습니다. 다시 시도해 주시기 바랍니다.
Registration failure. Please try again later.
*/
	MSG_BARGAINSALE_TOOLWND_APPLY_FAILED_MSG = 0x9d4,
/*20130917 to 20180523
이미 등록된 아이템이 있습니다. 다시 시도해 주시기 바랍니다.
Item has already been registered. Please try again later.
*/
	MSG_BARGAINSALE_TOOLWND_ALREADY_REGISTERED_MSG = 0x9d5,
/*20130917 to 20180523
아이템 삭제에 실패 하였습니다. 다시 시도해 주시기 바랍니다.
Failed to delete the item. Please try again later.
*/
	MSG_BARGAINSALE_TOOLWND_DELETE_FAILED_MSG = 0x9d6,
/*20130917 to 20180523
%s 아이템이 삭제되었습니다.
%s item has been deleted.
*/
	MSG_BARGAINSALE_TOOLWND_DELETE_SUCCESS_MSG = 0x9d7,
/*20130917 to 20180523
특가
Special
*/
	MSG_BARGAINSALE_CASHSHOP_TAB_NAME = 0x9d8,
/*20130917 to 20180523
한정판매 아이템 판매수량 갱신
Sales limited sale item update
*/
	MSG_BARGAINSALE_CASHSHOP_REFRESH_BTN_TOOLTIP = 0x9d9,
/*20130917 to 20180523
판매종료
Discontinued
*/
	MSG_BARGAINSALE_CASHSHOP_TIMER = 0x9da,
/*20130917 to 20180523
수량갱신이 필요합니다
Quantity update is required 
*/
	MSG_BARGAINSALE_CASHSHOP_REFRESH_MSG = 0x9db,
/*20130917 to 20180523
재고가 부족하여 %d 개 만큼만 구입합니다
The %d is out of stock or to buy as much as
*/
	MSG_BARGAINSALE_CASHSHOP_CHECK_COUNT_MSG = 0x9dc,
/*20130917 to 20180523
%s 아이템의 특가판매가 시작되었습니다
%s Items are on sale
*/
	MSG_BARGAINSALE_START_MSG = 0x9dd,
/*20130917 to 20180523
%s 아이템의 매진 또는 판매시간만료로 인해 한정판매가 종료되었습니다
%s time-out or sale of the items sold has been shut down due to the limited sales 
*/
	MSG_BARGAINSALE_CLOSE_MSG = 0x9de,
/*20130917 to 20180523
/한정판매
/limitedsale
*/
	MSG_BARGAINSALE_TOOLWND_CALL = 0x9df,
#endif
#if PACKETVER >= 20131002
/*20131002 to 20180523
http://www.ragnarokeurope.com/news/home-r70.html
*/
	MSG_FRANCE_CASHSHOP_URL = 0x9e0,
/*20131002 to 20180523
http://www.ragnarokeurope.com/index.php?rubrique=70&Steam
*/
	MSG_FRANCE_CASHSHOP_URL_STEAM = 0x9e1,
#endif
#if PACKETVER >= 20131016
/*20131016 to 20180523
구입에 성공한 품목
Item purchase successful
*/
	MSG_PARA_RESULT_TITLE = 0x9e2,
/*20131016 to 20180523
주문량이 재고량을 초과하였습니다.
You do not have enough items.
*/
	MSG_PARA_WRONG_PURCHASE_COUNT_MSG = 0x9e3,
/*20131016 to 20180523
초대할수 없는 케릭터 이름입니다.
Name of the character that cannot be invited.
*/
	MSG_PARTY_INVITE = 0x9e4,
/*20131016 to 20180523
길드초대할수  없는 케릭터 이름입니다.
You cannot invite the character to the guild.
*/
	MSG_GUILD_INVITE = 0x9e5,
/*20131016 to 20180523
일부 품목은 이미 판매되어 구입에 실패하였습니다.
Item already Sold,Purchase Failed.
*/
	MSG_PARA_PURCHASE_ITEM_FAIL = 0x9e6,
#endif
#if PACKETVER >= 20131030
/*20131030 to 20180523
현재 위치에서 워프 장소를 기억 할 수 없습니다.
The warp spot cannot be memorized in current position.
*/
	MSG_NOWARPSKILL2 = 0x9e7,
/*20131030 to 20180523
무게가 초과되어 아이템을 구매할 수 없습니다.
Cannot purchase item, You exceeded the weight.
*/
	MSG_PARA_PURCHASE_ITEM_WEIGHT = 0x9e8,
/*20131030 to 20180523
No.
*/
	MSG_GUILD_STORAGE_NUMBER = 0x9e9,
/*20131030 to 20180523
아이템
Item
*/
	MSG_GUILD_STORAGE_ITEM = 0x9ea,
/*20131030 to 20180523
개수
Number
*/
	MSG_GUILD_STORAGE_ITEM_COUNT = 0x9eb,
/*20131030 to 20180523
이름
Name
*/
	MSG_GUILD_STORAGE_USER_NAME = 0x9ec,
/*20131030 to 20180523
시간
Time
*/
	MSG_GUILD_STORAGE_LOG_TIME = 0x9ed,
/*20131030 to 20180523
입/출
Input/Output
*/
	MSG_GUILD_STORAGE_ITEM_IN_OUT = 0x9ee,
/*20131030 to 20180523
로그가 존재하지 않습니다.
Log does not exist.
*/
	MSG_GUILD_STORAGE_LOG_FINISH = 0x9ef,
/*20131030 to 20180523
전 체
Entire
*/
	MSG_GUILD_STORAGE_LOG_ALL = 0x9f0,
/*20131030 to 20180523
넣 기
Insert Symbol
*/
	MSG_GUILD_STORAGE_LOG_IN = 0x9f1,
/*20131030 to 20180523
빼 기
Remaining Time
*/
	MSG_GUILD_STORAGE_LOG_OUT = 0x9f2,
#endif
#if PACKETVER >= 20131106
/*20131106 to 20180523
길드 창고 내역
Guild Storage Logs
*/
	MSG_GUILD_STORAGE_LOG_WND_NAME = 0x9f3,
/*20131106 to 20180523
내역은 최근 100개만 표시됩니다.
100 entries are displayed.
*/
	MSG_GUILD_STORAGE_LOG_CAUTION = 0x9f4,
#endif
#if PACKETVER >= 20131120
/*20131120 to 20131120
%s : +%d
20131127 to 20180523
길드창고의 사용 시간 2분이 경과되어 자동으로 종료됩니다.
Guild Storage is open only for 2 minutes, and will close automatically.
*/
	MSG_GUILD_STORAGE_CLOSE_TIMEOUT = 0x9f5,
#endif
#if PACKETVER >= 20131204
/*20131204 to 20180523
Incorrect GameSamba ID. Please Try Again.
*/
	MSG_INCORRECT_GAMESAMBEID = 0x9f6,
/*20131204 to 20180523
%s [%d옵션] : %d 개
%s [%d Option]: %d Quantity
*/
	MSG_EA5 = 0x9f7,
#endif
#if PACKETVER >= 20131211
/*20131211 to 20180523
코인이 필요합니다.
Requires a Coin.
*/
	MSG_USESKILL_FAIL_COINTS = 0x9f8,
/*20131211 to 20180523
코인이 %d 개가 필요합니다.
%d Coins are required.
*/
	MSG_USESKILL_FAIL_COINTS_NUM = 0x9f9,
/*20131211 to 20180523
개틀링건 계열의 총기류를 장착한 상태여야 합니다.
Gatling Gun should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_GATLING = 0x9fa,
/*20131211 to 20180523
샷건 계열의 총기류를 장착한 상태여야 합니다.
Shotguns should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_SHOTGUN = 0x9fb,
/*20131211 to 20180523
라이플 계열의 총기류를 장착한 상태여야 합니다.
Rifle should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_RIFLE = 0x9fc,
/*20131211 to 20180523
리볼버 계열의 총기류를 장착한 상태여야 합니다.
Pair of Revolver should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_HANDGUN = 0x9fd,
/*20131211 to 20180523
성속성 블릿을 장착해야 합니다
[Silver Bullet] weapon class must be equipped.
*/
	MSG_FAIL_NEED_EQUIPPED_PROPERTY_SAINT_BULLET = 0x9fe,
/*20131211 to 20180523
아이템 판매 내역
Item Sell History
*/
	MSG_MERCHANT_SOLD_ITEM_LOG = 0x9ff,
/*20131211 to 20180523
아이템 구매 내역
Item Purchase History
*/
	MSG_MERCHANT_ITEM_BUY_LOG = 0xa00,
#endif
#if PACKETVER >= 20131218
/*20131218 to 20180523
그레네이드런쳐 계열의 총기류를 장착한 상태여야 합니다.
Grenade Launcher should be equipped with bullets.
*/
	MSG_FAIL_NEED_EQUIPPED_GUN_GRANADE = 0xa01,
/*20131218 to 20180523
[히트배럴],[매드니스 캔슬러],[플래티넘 알터] 의 효과들은 중첩하여 사용할 수 없습니다.
[Heat barrel],[Last Stand],[Platinum Alter] cannot be used while sitting.
*/
	MSG_FAIL_DUPLICATE_HEAT_BARREL_GS_MADNESSCANCEL_P_ALTER = 0xa02,
#endif
#if PACKETVER >= 20131223
/*20131223 to 20180523
현재 맵에서는 사용할 수 없는 스킬입니다.
Cannot use skill in this map.
*/
	MSG_USESKILL_FAIL_MAP = 0xa03,
#endif
#if PACKETVER >= 20140108
/*20140108 to 20180523
길드 창고를 이용중인 경우 창고의 모든 아이템이 사라지게 됩니다.
If you are using a guild storage, all items inside it will disappear.
*/
	MSG_GUILD_STORAGE_WARNING = 0xa04,
#endif
#if PACKETVER >= 20140115
/*20140115 to 20180523
http://ragnarok.gamesamba.com/paytest.html
http://ragnarok.gamesamba.com/
*/
	MSG_AMERICA_CASHSHOP_URL_GAMESAMBA = 0xa05,
/*20140115 to 20180523
로그인을 위해 패스워드를 입력해주세요.
Please enter a password to login.
*/
	MSG_SECOND_PASSWORD_INFO_4 = 0xa06,
#endif
#if PACKETVER >= 20140129
/*20140129 to 20180523
펫 진화
Pet Evolution
*/
	MSG_PET_EVOLUTION = 0xa07,
/*20140129 to 20180523
진화 - %s
Evolution - %s
*/
	MSG_PET_EVOLUTION_WITH_PET_NAME = 0xa08,
/*20140129 to 20180523
진화에는 다음의 재료가 필요합니다.
Evolution requires the following ingredients:
*/
	MSG_PET_EVOLUTION_NEED_ITEM = 0xa09,
/*20140129 to 20180523
진화 하시겠습니까?
Are you sure you want to evolve your pet?
*/
	MSG_DO_YOU_WANT_TO_EVOLVE_PET = 0xa0a,
/*20140129 to 20180523
알 수 없는 오류
Unknown Error
*/
	MSG_PET_EVOLUTION_FAIL_UNKNOWN = 0xa0b,
/*20140129 to 20180523
소환된펫을 갖고 있지 않습니다.
Pet Cannot be hatched.
*/
	MSG_PET_EVOLUTION_FAIL_NOTEXIST_CALLPET = 0xa0c,
/*20140129 to 20180523
요청한 것이 펫알이 아닙니다.
It is not requested petal.
*/
	MSG_PET_EVOLUTION_FAIL_NOT_PETEGG = 0xa0d,
/*20140129 to 20140205
진화가 불가능한 요청입니다.
20140212 to 20180523
진화 재료가 부족합니다.
Evolution material is low.
*/
	MSG_PET_EVOLUTION_FAIL_RECIPE = 0xa0e,
/*20140129 to 20180523
진화에 필요한 재료가 부족합니다.
Insufficient materials for evolution.
*/
	MSG_PET_EVOLUTION_FAIL_MATERIAL = 0xa0f,
/*20140129 to 20180523
친밀도가 절친인 상태에서만 진화가 가능합니다.
Loyal Intimacy is required to evolve.
*/
	MSG_PET_EVOLUTION_FAIL_RG_FAMILIAR = 0xa10,
#endif
#if PACKETVER >= 20140212
/*20140212 to 20170830
자동 먹이 주기
20170906 to 20180523
펫 자동 먹이 주기
Automatic feeding
*/
	MSG_PET_AUTO_FEEDING = 0xa11,
/*20140212 to 20180523
펫에게 먹이를 주었습니다. '%s' 잔여량 %d개
Feeding the pet. %d '%d' remaining
*/
	MSG_PET_AUTO_FEEDING_REST = 0xa12,
/*20140212 to 20170830
자동 먹이 주기 활성화 On
20170906 to 20180523
펫 자동 먹이 주기 활성화 On
Automatic feeding turned On
*/
	MSG_PET_AUTO_FEEDING_ON = 0xa13,
/*20140212 to 20170830
자동 먹이 주기 활성화 Off
20170906 to 20180523
펫 자동 먹이 주기 활성화 Off
Automatic feeding turned Off
*/
	MSG_PET_AUTO_FEEDING_OFF = 0xa14,
/*20140212 to 20180523
갱신
Update
*/
	MSG_REFRESH = 0xa15,
/*20140212 to 20140702
%d 분전
20140709 to 20180523
%d 분 전
%d minutes ago
*/
	MSG_TIME_LINE_MINUTE = 0xa16,
/*20140212 to 20140702
%d 시간전
20140709 to 20180523
%d 시간 전
%d hours ago
*/
	MSG_TIME_LINE_HOUR = 0xa17,
/*20140212 to 20140702
%d 일전
20140709 to 20180523
%d 일 전
%d days ago
*/
	MSG_TIME_LINE_DAY = 0xa18,
#endif
#if PACKETVER >= 20140319
/*20140319 to 20180523
%d%% ( Premium %d%% + %s Server )
%d%%% ( Premium %d%%% + %s Server )
*/
	MSG_BASIC_EXP_MSG_PH = 0xa19,
#endif
#if PACKETVER >= 20140326
/*20140326 to 20180523
우편 발송
Mailed
*/
	MSG_SEND_MAIL = 0xa1a,
/*20140326 to 20180523
메일이 전송되었습니다.
Your mail has been sent.
*/
	MSG_MAIL_SENT = 0xa1b,
/*20140326 to 20180523
아이템이 인벤토리로 이동되었습니다.
This item has been moved to the inventory.
*/
	MSG_GET_ITEMS_FROM_MAIL_SUCCEED = 0xa1c,
/*20140326 to 20180523
아이템 받기가 실패하였습니다.
Failed to get items.
*/
	MSG_GET_ITEMS_FROM_MAIL_FAILED = 0xa1d,
/*20140326 to 20180523
인벤토리를 비워주세요
Please empty your inventory.
*/
	MSG_GET_ITEMS_FROM_MAIL_OVERWEIGHT = 0xa1e,
/*20140326 to 20180523
제니를 받았습니다.
Zeny received.
*/
	MSG_GET_ZENY_FROM_MAIL_SUCCEED = 0xa1f,
/*20140326 to 20180523
제니 받기가 실패하였습니다.
Failed to get zeny.
*/
	MSG_GET_ZENY_FROM_MAIL_FAILED = 0xa20,
/*20140326 to 20180523
제니의 한계치를 넘었습니다.
Exceeded the limits of zenny.
*/
	MSG_GET_ZENY_FROM_MAIL_OVERAMOUNT = 0xa21,
/*20140326 to 20180523
아이템 첨부 성공
Items attached success
*/
	MSG_SET_ITEMS_TO_MAIL_SUCCEED = 0xa22,
/*20140326 to 20180523
받는 사람의 이름이 반드시 들어가야 합니다.
The name of the recipient must be included.
*/
	MSG_INVALID_MAIL_RECIEVER_INFO = 0xa23,
/*20140326 to 20140416
제목의 길이는 4자이상 이어야 합니다.
20140423 to 20141001
제목의 길이는 4자이상 16자 이하여야 합니다.
20141008 to 20180523
제목의 길이는 한글 2자~25자, 영문 4자~50자 이어야 합니다.
The length of the title must be 4 to 50 characters long.
*/
	MSG_INVALID_MAIL_TITLE_INFO = 0xa24,
/*20140326 to 20180523
메일 전송이 실패하였습니다.
Mail delivery failed.
*/
	MSG_FAILED_SEND_MAIL = 0xa25,
/*20140326 to 20180523
적절하지 못한 아이템으로 전송 실패하였습니다.
Transmission has failed to inappropriate items.
*/
	MSG_FAILED_SEND_MAIL_ITEM = 0xa26,
/*20140326 to 20180523
받는 사람의 정보가 존재하지 않습니다.
Information of the recipient does not exist.
*/
	MSG_FAIELD_SEND_MAIL_TO = 0xa27,
#endif
#if PACKETVER >= 20140402
/*20140402 to 20180523
%s [%d옵션]
%s [%d Option]
*/
	MSG_EA6 = 0xa28,
/*20140402 to 20180523
레벨은 1~%d 사이의 숫자를 입력해 주세요.
Level, enter a number between 1 and %d.
*/
	MSG_PARTY_BOOKING_ERR5R2 = 0xa29,
#endif
#if PACKETVER >= 20140409
/*20140409 to 20180523
소지창의 여유공간을 확보해주세요.
Please free the window possessing space.
*/
	MSG_ITEM_WND_OVERFULL = 0xa2a,
/*20140409 to 20140416
수신자의 메일 보관 용량이 초과되었습니다.
20140423 to 20180523
메일 보내기 횟수가 초과되었습니다.
Sending mail count exceeded.
*/
	MSG_FAILED_MAIL_LIMIT_CNT = 0xa2b,
#endif
#if PACKETVER >= 20140416
/*20140416 to 20180523
메일을 열 수 없습니다.
You can not open the mail.
*/
	MSG_FAILED_TO_WRITE_MAIL = 0xa2c,
/*20140416 to 20180523
You are currently joined in CLan !!
You are currently joined in Clan !!
*/
	MSG_JOINED_IN_CLAN = 0xa2d,
/*20140416 to 20180523
골드 PC방 마일리지 정보
Gold PC rooms mileage information
*/
	MSG_GOLDPCCAFE_MILEAGE = 0xa2e,
#endif
#if PACKETVER >= 20140423
/*20140423 to 20180523
펫 액세서리를 해제해야 진화가 가능합니다.
Unequip pet accessories first to start evolution
*/
	MSG_PET_EVOLUTION_FAIL_PET_ACC_OFF = 0xa2f,
/*20140423 to 20140430
 / %d 분후
20140508 to 20140702
%d 분후
20140709 to 20180523
%d 분 후
%d minutes later
*/
	MSG_TIME_LINE_MINUTE2 = 0xa30,
/*20140423 to 20140430
 / %d 시간후
20140508 to 20140702
%d 시간후
20140709 to 20180523
%d 시간 후
%d hours later
*/
	MSG_TIME_LINE_HOUR2 = 0xa31,
/*20140423 to 20140430
 / %d 일후
20140508 to 20140702
%d 일후
20140709 to 20180523
%d 일 후
%d days later
*/
	MSG_TIME_LINE_DAY2 = 0xa32,
/*20140423 to 20180523
확인 버튼을 눌러 C-CODE를 확인하세요.
Press the OK button to confirm the C-CODE.
*/
	MSG_INVALID_CCODE_INFO = 0xa33,
/*20140423 to 20180523
첨부된 물품을 획득 후 삭제가 가능합니다.
After obtaining the attached article can be deleted.
*/
	MSG_FAILED_DELETE_MAIL = 0xa34,
/*20140423 to 20180523
현재 보유 제니 보다 많은 제니를 보낼 수 없습니다.
You can not send any more zeny.
*/
	MSG_FAILED_SEND_MAIL_ZENY = 0xa35,
/*20140423 to 20180523
수수료 : %s Zeny
Fee: %s Zeny
*/
	MSG_SEND_MAIL_COMMISSION = 0xa36,
/*20140423 to 20180523
받는 사람의 이름이 존재하지 않습니다.
The recipient's name does not exist.
*/
	MSG_FAILE_MAIL_RECIEVER_INFO = 0xa37,
#endif
#if PACKETVER >= 20140430
/*20140430 to 20180523
E X P : %.1f%% ( basic %.1f%% premium %.1f%% + %s %.1f%%)
EXP  : %.1f%% (Basic %.1f%% Premium %.1f%% + %s %.1f%%)
*/
	MSG_TAIWAN_PERSONALINFO_EXPMSG = 0xa38,
/*20140430 to 20180523
DROP  : %.1f%% ( basic %.1f%% premium %.1f%% + %s %.1f%%)
DROP : %.1f%% (Basic %.1f%% Premium %.1f%% + %s %.1f%%)
*/
	MSG_TAIWAN_PERSONALINFO_DROPMSG = 0xa39,
/*20140430 to 20180523
DEATH : %.1f%% ( basic %.1f%% premium %.1f%% + %s %.1f%%)
DEATH: %.1f%% (Basic %.1f%% Premium %.1f%% + %s %.1f%%)
*/
	MSG_TAIWAN_PERSONALINFO_DEATHMSG = 0xa3a,
#endif
#if PACKETVER >= 20140514
/*20140514 to 20140528
보유 가능한 최대 마일리지 : %d 
20140605 to 20180523
골드 PC방 마일리지는 최대 %d점까지 모을 수 있습니다.
You can accumulate points of PC Gold-club up to %d points maximum.
*/
	MSG_MILEAGE_HELP = 0xa3b,
#endif
#if PACKETVER >= 20140521
/*20140521 to 20140521
아이템 버리기가 불 가능한 서버 입니다.
Items discard is imposible in server.
20140528 to 20180523
해당 서버에서 사용 할 수 없는 기능 입니다
This function can not be used on the server.
*/
	MSG_RESTRAINT_OF_TRADE_1 = 0xa3c,
/*20140521 to 20180523
수래 이용이 불 가능한 서버 입니다.
Imposible to use in server.
*/
	MSG_RESTRAINT_OF_TRADE_2 = 0xa3d,
/*20140521 to 20180523
옥션 이용이 불 가능한 서버 입니다.
The auction is not available in server.
*/
	MSG_RESTRAINT_OF_TRADE_3 = 0xa3e,
/*20140521 to 20180523
거래가 불 가능한 서버 입니다.
The deal is imposible in server.
*/
	MSG_RESTRAINT_OF_TRADE_4 = 0xa3f,
/*20140521 to 20140521
아이템 편지 보내기가 불 가능한 서버 입니다.
20140528 to 20180523
아이템 버리기가 불 가능한 서버 입니다.
Items discard is imposible in server.
*/
	MSG_RESTRAINT_OF_TRADE_5 = 0xa40,
/*20140521 to 20180523
상점 판매 기능을 사용할수 없습니다.
Stores selling features are not available.
*/
	MSG_RESTRAINT_OF_TRADE_6 = 0xa41,
/*20140521 to 20180523
소환물의 SP가 부족합니다.
The SP's summoned enough.
*/
	MSG_USESKILL_FAIL_SUMMON_SP_INSUFFICIENT = 0xa42,
#endif
#if PACKETVER >= 20140528
/*20140528 to 20140702
Weight : %s/%s
20140709 to 20180523
%s/%s
*/
	MSG_SEND_MAIL_WEIGHT = 0xa43,
/*20140528 to 20180523
메일 내용의 최대 길이는 1K 이하 입니다.
The maximum length of the message content is 1K.
*/
	MSG_INVALID_MAIL_CONTENTS_INFO = 0xa44,
/*20140528 to 20180523
아이템 첨부 실패
Failed to attach an item.
*/
	MSG_SET_ITEMS_TO_MAIL_FAILED = 0xa45,
/*20140528 to 20180523
메일에 첨부할수 있는 아이템의 무게가 초과되었습니다.
The weight of the items that can be attached to mail has been exceeded.
*/
	MSG_SET_ITEMS_TO_MAIL_OVER_WEIGHT = 0xa46,
#endif
#if PACKETVER >= 20140611
/*20140611 to 20180523
이미 서비스 중입니다. 잠시 후 다시 시도해 주세요.
Is already in service. Please try again in a few minutes.
*/
	MSG_DYNAMICNPC_FAIL_DUPLICATENAME = 0xa47,
#endif
#if PACKETVER >= 20140618
/*20140618 to 20140924
환상의 룰렛창을 열 수 없습니다.
20141001 to 20180523
행운의 룰렛창을 열 수 없습니다.
Unable to open the window of Lucky Roulette.
*/
	MSG_FAILED_OPEN_ROULLETTE = 0xa48,
/*20140618 to 20140924
환상의 룰렛창을 닫을 수 없습니다.
20141001 to 20180523
행운의 룰렛창을 닫을 수 없습니다.
Unable to close the window of the Lucky Roulette.
*/
	MSG_FAILED_CLOSE_ROULLETTE = 0xa49,
/*20140618 to 20140924
환상의 룰렛을 시작 할 수 없습니다.
20141001 to 20180523
행운의 룰렛을 시작 할 수 없습니다.
You can not start a roulette wheel of fortune.
*/
	MSG_FAILED_GENERATE_ROULLETTE = 0xa4a,
/*20140618 to 20140924
환상의 룰렛을 시작하기 위해서는 포인트가 필요합니다.
20141001 to 20180523
행운의 룰렛을 시작하기 위해서는 포인트가 필요합니다.
Points is required to play Lucky Roulette.
*/
	MSG_NOT_ENOUGH_ROULLETTE_POINT = 0xa4b,
/*20140618 to 20180523
당첨된 아이템을 수령할 수 없습니다.
You can not receive a winning items.
*/
	MSG_FAILED_RECV_ITEM = 0xa4c,
#endif
#if PACKETVER >= 20140625
/*20140625 to 20180523
인벤토리에 아이템 개수가 초과되었습니다.
The number of items in the inventory has been exceeded. 
*/
	MSG_FAILED_RECV_ITEM_OVERCOUNT = 0xa4d,
/*20140625 to 20180523
무게가 초과하였습니다. 소지창의 여유공간을 확보해주세요.
The weight has been exceeded. Please free up the possesion window.
*/
	MSG_FAILED_RECV_ITEM_OVERWEIGHT = 0xa4e,
/*20140625 to 20180523
노점 개설 실패.
Failed to open stalls.
*/
	MSG_MERCHANTSHOP_MAKING_FAIL = 0xa4f,
/*20140625 to 20180523
룰렛이 돌고 있습니다. 경품을 확인 후에 다시 시도해주세요.
The roulette wheel is spinning. Please try again after checking with prizes.
*/
	MSG_FAILED_CLOSE_ROULLETTEWND = 0xa50,
#endif
#if PACKETVER >= 20140702
/*20140702 to 20140917
환상의 룰렛
20140924 to 20180523
행운의 룰렛
Lucky Roulette
*/
	MSG_ROULLETTE_WND = 0xa51,
/*20140702 to 20180523
아이템 판매 시 소리로 알림
Notify when item sell out
*/
	MSG_SOUNDEFFECT_ITEMSELLWND = 0xa52,
#endif
#if PACKETVER >= 20140709
/*20140709 to 20180523
수수료를 확인해주세요.
Please check the fees.
*/
	MSG_FAILED_SEND_MAIL_ITEMS = 0xa53,
/*20140709 to 20140716
유저이름확인
20140723 to 20180523
유저이름 확인
Verify user name
*/
	MSG_CHECK_USER_NAME = 0xa54,
/*20140709 to 20180523
삭제 예정
Schedule deletion
*/
	MSG_DELETE_DUE_DATE = 0xa55,
#endif
#if PACKETVER >= 20140723
/*20140723 to 20180523
달성과제
Achievable challenge
*/
	MSG_ACHIEVEMENT_SYSTEM = 0xa56,
/*20140723 to 20180523
달성총점
Achieve overall
*/
	MSG_ACHIEVEMENT_TOTAL_SCORE = 0xa57,
/*20140723 to 20180523
달성등급
Achieve rank
*/
	MSG_ACHIEVEMENT_GRADE = 0xa58,
/*20140723 to 20150217
다음 보상박스까지 [%5d]점
20150225 to 20180523
다음 달성등급까지 [%5d]점
The following compensation box until [% 5d] point
*/
	MSG_ACHIEVEMENT_SCORE_REQUIRED_TO_REWARD = 0xa59,
/*20140723 to 20140723
개요
Overview
20140730 to 20180523
진척상황
Progress
*/
	MSG_ACHIEVEMENT_SUMMARY_TITLE = 0xa5a,
/*20140723 to 20140723
일반
General
20140730 to 20180523
최근 달성 업적
Recent Achievements
*/
	MSG_ACHIEVEMENT_RECENT_ACHIEVEMENT = 0xa5b,
/*20140723 to 20140723
캐릭터
Role
20140730 to 20140924
개다래 열매 품목
20141001 to 20180523
仙貝 품목
Cracker  Item
*/
	MSG_CASH_GEDARE1 = 0xa5c,
/*20140723 to 20140723
행동
Action
20140730 to 20140924
개다래 열매 : %d / %d GD
20141001 to 20180523
仙貝 : %d / %d 
Cracker  : %d / %d 
*/
	MSG_CASH_GEDARE2 = 0xa5d,
/*20140723 to 20140723
전투
Battle
20140730 to 20140924
개다래 열매가 부족합니다.
20141001 to 20180523
仙貝가 부족합니다.
Cracker  is low.
*/
	MSG_CASH_GEDARE_FAIL_MONEY = 0xa5e,
/*20140723 to 20140723
모험
Adventure
20140730 to 20140924
%s GD
20141001 to 20180523
%s 
%s
*/
	MSG_CASH_GEDARE_MONEY = 0xa5f,
/*20140723 to 20140723
결투
Duel
20140813 to 20180523
개요
Overview
*/
	MSG_ACHIEVEMENT_TAB_SUMMARY = 0xa60,
/*20140723 to 20140723
수련
Lily
20140813 to 20180523
일반
General
*/
	MSG_ACHIEVEMENT_TAB_GENERAL = 0xa61,
/*20140723 to 20140723
퀘스트
Quest
20140813 to 20180523
캐릭터
Role
*/
	MSG_ACHIEVEMENT_TAB_GENERAL_CHARACTER = 0xa62,
/*20140723 to 20140723
에피소드
Episode
20140813 to 20180523
행동
Action
*/
	MSG_ACHIEVEMENT_TAB_GENERAL_ACTION = 0xa63,
/*20140723 to 20140723
이벤트
Evt
20140813 to 20180523
기타
Other
*/
	MSG_ACHIEVEMENT_TAB_GENERAL_REST = 0xa64,
/*20140723 to 20140723
활동
20140813 to 20180523
모험
Adventure
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE = 0xa65,
/*20140723 to 20140723
커뮤니티
20140813 to 20180523
룬미드가츠
Rune Midgarts
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_RUNEMIDGARTS = 0xa66,
/*20140723 to 20140723
제련
Refining
20140813 to 20180523
슈발츠발드
Schwartzvald
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_SCHWARZWALD = 0xa67,
/*20140723 to 20140723
경제
20140813 to 20180523
아루나펠츠
Arunafeltz
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_ARUNAFELTZ = 0xa68,
/*20140723 to 20140723
생활
20140813 to 20180523
이계
Commandment
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_ANOTHERWORLD = 0xa69,
/*20140723 to 20140723
축제
20140813 to 20180523
로컬라이징
Localizing
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_LOCALIZING = 0xa6a,
/*20140723 to 20140723
위업
Feat
20140813 to 20180523
던전
Dungeon
*/
	MSG_ACHIEVEMENT_TAB_ADVENTURE_DUNGEON = 0xa6b,
/*20140723 to 20140723
달성한 과제
Achieved challenge
20140813 to 20180523
전투
Battle
*/
	MSG_ACHIEVEMENT_TAB_BATTLE = 0xa6c,
/*20140723 to 20140723
진척상황
Progress
20140813 to 20180523
결투
Duel
*/
	MSG_ACHIEVEMENT_TAB_BATTLE_PVP = 0xa6d,
/*20140723 to 20140723
최근 달성 업적
Recent Achievements
20140813 to 20180523
수련
Lily
*/
	MSG_ACHIEVEMENT_TAB_BATTLE_TRAINING = 0xa6e,
#endif
#if PACKETVER >= 20140813
/*20140813 to 20180523
퀘스트
Quest
*/
	MSG_ACHIEVEMENT_TAB_QUEST = 0xa6f,
/*20140813 to 20180523
에피소드
Episode
*/
	MSG_ACHIEVEMENT_TAB_QUEST_EPISODE = 0xa70,
/*20140813 to 20180523
일반
General
*/
	MSG_ACHIEVEMENT_TAB_QUEST_GENERAL = 0xa71,
/*20140813 to 20180523
메모리얼
Memorial
*/
	MSG_ACHIEVEMENT_TAB_MEMORIAL = 0xa72,
/*20140813 to 20180523
미드가르드
Midgard
*/
	MSG_ACHIEVEMENT_TAB_MEMORIAL_MIDGARD = 0xa73,
/*20140813 to 20180523
이계
Commandment
*/
	MSG_ACHIEVEMENT_TAB_MEMORIAL_ANOTHERWORLD = 0xa74,
/*20140813 to 20180523
기타
Other
*/
	MSG_ACHIEVEMENT_TAB_MEMORIAL_REST = 0xa75,
/*20140813 to 20180523
위업
Feat
*/
	MSG_ACHIEVEMENT_TAB_ACHIEVEMENT = 0xa76,
/*20140813 to 20180523
달성한 과제
Achieved challenge
*/
	MSG_ACHIEVEMENT_TAB_TOTAL = 0xa77,
/*20140813 to 20180523
더 이상 추가할 수 없습니다.
You cannot add anymore.
*/
	MSG_FAIL_ADD_ACHIEVEMENT_TRACING = 0xa78,
/*20140813 to 20180523
< %s > 달성하였습니다.
< %S > achieved.
*/
	MSG_NOTICE_COMPLETE_ACHIEVEMENT = 0xa79,
#endif
#if PACKETVER >= 20140827
/*20140827 to 20180523
only otp user login allow
Only OTP users are allowed
*/
	MSG_OTPUSER_ONLY = 0xa7a,
#endif
#if PACKETVER >= 20140917
/*20140917 to 20180523
이 버튼을 누를 시, 지정된 상품을 받게되며 룰렛은 초기화 됩니다.
When this button pressed, you will receive a specified initialized roulette item.
*/
	MSG_GET_ROULLETE_PRIZE = 0xa7b,
/*20140917 to 20180523
이 버튼을 누를 시, 깜빡이는 화살표의 라인부터 룰렛을 시작 합니다.
When this button pressed, the flashing arrows from the lines of the roulette wheel begins.
*/
	MSG_NOTICE_NEXT_ROULLETE_STAGE = 0xa7c,
/*20140917 to 20180523
칭호
Style
*/
	MSG_TITLE_EQUIPMENT = 0xa7d,
/*20140917 to 20180523
칭호 해제
Title release
*/
	MSG_TAKEOFF_TITLE = 0xa7e,
/*20140917 to 20180523
길드 생성을 할 수 없는 지역입니다.
Can't create a Guild in this area.
*/
	MSG_GUILD_MAKE_GUILD_NOT_PERMITTED_MAP = 0xa7f,
/*20140917 to 20180523
길드 해체를 할 수 없는 지역입니다.
Can't disband a Guild in this area.
*/
	MSG_GUILD_DISORGANIZE_GUILD_NOT_PERMITTED_MAP = 0xa80,
/*20140917 to 20180523
길드 가입을 할 수 없는 지역입니다.
Can't join a Guild in this area.
*/
	MSG_GUILD_JOIN_GUILD_NOT_PERMITTED_MAP = 0xa81,
/*20140917 to 20180523
길드 탈퇴를 할 수 없는 지역입니다.
Can't leave a Guild in this area.
*/
	MSG_GUILD_LEAVE_GUILD_NOT_PERMITTED_MAP = 0xa82,
/*20140917 to 20180523
길드원 추방을 할 수 없는 지역입니다.
Can't deport a Guild in this area.
*/
	MSG_GUILD_EXPEL_GUILD_NOT_PERMITTED_MAP = 0xa83,
/*20140917 to 20180523
길드직위 변경을 할 수 없는 지역입니다.
Can't change a Guild title in this area
*/
	MSG_GUILD_POSITION_CHANGE_NOT_PERMITTED_MAP = 0xa84,
/*20140917 to 20180523
아이템 소지량을 5칸이상 비워주세요
Please empty at least 5 amount of possession in item window.
*/
	MSG_NOT_ENOUGH_SPACE_IN_ITEM_BODY = 0xa85,
/*20140917 to 20180523
E X P : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%%)
EXP   : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%% )
*/
	MSG_JPN_PERSONALINFO_EXPMSG = 0xa86,
/*20140917 to 20180523
DROP  : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%%)
DROP  : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%% )
*/
	MSG_JPN_PERSONALINFO_DROPMSG = 0xa87,
/*20140917 to 20180523
DEATH : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%%)
DEATH : %.1f%% ( basic 100.0%% pccafe %.1f%% + %s %.1f%% )
*/
	MSG_JPN_PERSONALINFO_DEATHMSG = 0xa88,
/*20140917 to 20180523
첨부할 수 있는 아이템의 갯수가 초과되었습니다.
The number of items that can be attached is exceeded.
*/
	MSG_SET_ITEMS_TO_MAIL_OVERCOUNT = 0xa89,
/*20140917 to 20180523
아이템 구매 시 소리로 알림
Notify when item purchased
*/
	MSG_SOUNDEFFECT_ITEMBUYWND = 0xa8a,
#endif
#if PACKETVER >= 20140924
/*20140924 to 20180523
첨부할 수 없는 아이템입니다.
Unable to attach the items.
*/
	MSG_ID_A8B = 0xa8b,
#endif
#if PACKETVER >= 20141001
/*20141001 to 20180523
꽝에 당첨되었으므로 다음 상위 단계의 룰렛을 돌리실 수 없습니다.
Because you can not win a slam room and turn the roulette of the next higher step.
*/
	MSG_ID_A8C = 0xa8c,
/*20141001 to 20180523
답장쓰기
Replying
*/
	MSG_ID_A8D = 0xa8d,
/*20141001 to 20180523
내용읽기
Read more
*/
	MSG_ID_A8E = 0xa8e,
/*20141001 to 20180523
메일삭제
Delete message
*/
	MSG_ID_A8F = 0xa8f,
/*20141001 to 20180523
仙貝 : %d
Crackers  : %d
*/
	MSG_ID_A90 = 0xa90,
/*20141001 to 20180523
%s %s 仙貝
%s %s crackers 
*/
	MSG_ID_A91 = 0xa91,
/*20141001 to 20180523
仙貝
Crackers 
*/
	MSG_ID_A92 = 0xa92,
/*20141001 to 20180523
Total : %d 仙貝
Total : %d Crackers 
*/
	MSG_ID_A93 = 0xa93,
/*20141001 to 20180523
%d -> %s 仙貝
%d -> %s Crackers 
*/
	MSG_ID_A94 = 0xa94,
/*20141001 to 20180523
%s 仙貝
%s Crackers 
*/
	MSG_ID_A95 = 0xa95,
/*20141001 to 20180523
                                          Current 仙貝 : %s
                                          Current Crackers : %s
*/
	MSG_ID_A96 = 0xa96,
/*20141001 to 20180523
    %s  :  %s  仙貝
    %s  :  %s  Crackers
*/
	MSG_ID_A97 = 0xa97,
/*20141001 to 20180523
%10s 仙貝
%10s Crackers
*/
	MSG_ID_A98 = 0xa98,
/*20141001 to 20180523
Total : %s 仙貝
Total : %s Crackers
*/
	MSG_ID_A99 = 0xa99,
/*20141001 to 20180523
※수수료 3% / 최소 1仙貝의 수수료 차감 
* Commission 3% / Minimum 1 Crackers comission deducted
*/
	MSG_ID_A9A = 0xa9a,
/*20141001 to 20180523
仙貝 입니다.
The Crackers.
*/
	MSG_ID_A9B = 0xa9b,
/*20141001 to 20180523
^0000ff仙貝 이상^000000입니다.
입력금액이 맞습니까?
^0000ff more than crackers^000000Did you enter the correct amount?
*/
	MSG_ID_A9C = 0xa9c,
/*20141001 to 20180523
10억仙貝이상 안전 확인
Over than 10billions secure check
*/
	MSG_ID_A9D = 0xa9d,
/*20141001 to 20180523
10억 仙貝 이상 입력하셔도 가격은 10억 仙貝로 판매됩니다.
If you fill over 1 billion, the price will be automatically set as 10 billion Xianbei.
*/
	MSG_ID_A9E = 0xa9e,
/*20141001 to 20180523
9,999仙貝 이상 입력하셔도 가격은 9,999仙貝로 판매됩니다.
If you fill over 9,999 Xianbei, the price will automatically set as 9,999 Xianbei.
*/
	MSG_ID_A9F = 0xa9f,
/*20141001 to 20180523
가격이 0 仙貝인 아이템이 존재 합니다. 상점을 열수 없습니다!
There are items priced 0 Xianbei. You cannot open vending.
*/
	MSG_ID_AA0 = 0xaa0,
/*20141001 to 20180523
상대 캐릭터가 최대 보유 仙貝량을 초과하여 거래가 불가능 합니다.
The opponent is over the Xianbei limit. Trade failed.
*/
	MSG_ID_AA1 = 0xaa1,
/*20141001 to 20180523
%s 아이템의 가격을 10억仙貝 이하로 입력해 주세요.
Please fill out %s item price less than 1 billion Xianbei.
*/
	MSG_ID_AA2 = 0xaa2,
/*20141001 to 20180523
%s  :  %s  仙貝 => %s EA
%s:  %s  Xianbei => %s ea
*/
	MSG_ID_AA3 = 0xaa3,
/*20141001 to 20180523
제한 금액 : %s 仙貝
Limited price: %s Xianbei
*/
	MSG_ID_AA4 = 0xaa4,
/*20141001 to 20180523
%s %s 仙貝 %d 개
%s %s %d Xianbei
*/
	MSG_ID_AA5 = 0xaa5,
/*20141001 to 20180523
%s %d개를 %d 仙貝에 판매 하였습니다. 수수료는 3%% 입니다.
%d %s are sold. In total %d Xianbei. 3%% charge will be imposed.
*/
	MSG_ID_AA6 = 0xaa6,
#endif
#if PACKETVER >= 20141008
/*20141008 to 20180523
RODEX
*/
	MSG_ID_AA7 = 0xaa7,
/*20141008 to 20180523
SEND
*/
	MSG_ID_AA8 = 0xaa8,
/*20141008 to 20180523
RECEIVE
*/
	MSG_ID_AA9 = 0xaa9,
#endif
#if PACKETVER >= 20141015
/*20141015 to 20180523
메일 작성창을 닫아주세요.
Please close the mail compose window.
*/
	MSG_ID_AAA = 0xaaa,
#endif
#if PACKETVER >= 20141022
/*20141022 to 20180523
서버접근거부(A)
Server access denied(A)
*/
	MSG_ID_AAB = 0xaab,
/*20141022 to 20180523
서버접근거부(B)
Server access denied(B)
*/
	MSG_ID_AAC = 0xaac,
#endif
#if PACKETVER >= 20141112
/*20141112 to 20180523
장착된 화살/탄환 을 해제해야합니다.
Unequipped Arrow/Ammunition.
*/
	MSG_ID_AAD = 0xaad,
/*20141112 to 20180523
인벤토리의 아이템이 소모되어 로덱스 쓰기창을 닫습니다.
Consuming item in inventory will close mail compose window.
*/
	MSG_ID_AAE = 0xaae,
#endif
#if PACKETVER >= 20141119
/*20141119 to 20180523
소지하신 돋보기가 없습니다.
Do not have Magnifier.
*/
	MSG_ID_AAF = 0xaaf,
#endif
#if PACKETVER >= 20141210
/*20141210 to 20180523
아이템을 버릴려면 메일 쓰기창을 닫아주세요.
Close email window if you want to discard item.
*/
	MSG_ID_AB0 = 0xab0,
/*20141210 to 20180523
상대방이 친구 요청중입니다
The opponent has already requested you to be a friend.
*/
	MSG_ID_AB1 = 0xab1,
#endif
#if PACKETVER >= 20141217
/*20141217 to 20180523
SCRIPT ERROR AID
*/
	MSG_ID_AB2 = 0xab2,
/*20141217 to 20141231

Errorfile : %s
ErrorLine : %d 줄
ErrorContext: %s
20150107 to 20180523

Errorfile : %s
ErrorLine : %d 줄
ErrorContent: 
*이전 줄 : %s 
*Errorline : %s 
*다음 줄:
 %s

Errorfile : %s
ErrorLine : %d item
ErrorContext: %s
*/
	MSG_ID_AB3 = 0xab3,
#endif
#if PACKETVER >= 20141224
/*20141224 to 20180523
 ^ff0000해당 아이템을 구매 하시겠습니까? %d포인트 및 %d 仙貝가 차감 됩니다.
^ff0000Are you sure want to purchase the item? after confirmation will consume %d point and %d crackers.
*/
	MSG_ID_AB4 = 0xab4,
/*20141224 to 20180523
닫기
Close
*/
	MSG_ID_AB5 = 0xab5,
/*20141224 to 20180523
퀘스트
Quest
*/
	MSG_ID_AB6 = 0xab6,
/*20141224 to 20180523
퀘스트 아이콘 보기
View Quest icon
*/
	MSG_ID_AB7 = 0xab7,
/*20141224 to 20180523
편의시설
Facility
*/
	MSG_ID_AB8 = 0xab8,
/*20141224 to 20180523
편의시설 아이콘 보기
View Facility icon
*/
	MSG_ID_AB9 = 0xab9,
/*20141224 to 20180523
길드원/파티원
Guild/Party
*/
	MSG_ID_ABA = 0xaba,
/*20141224 to 20150311
길드원/파티원 표시
20150318 to 20180523
길드원/파티원 보기
Show Guild/Party
*/
	MSG_ID_ABB = 0xabb,
/*20141224 to 20180523
기록하기
Record
*/
	MSG_ID_ABC = 0xabc,
/*20141224 to 20180523
보스몬스터
Boss Monster
*/
	MSG_ID_ABD = 0xabd,
/*20141224 to 20180523
나
I
*/
	MSG_ID_ABE = 0xabe,
/*20141224 to 20180523
삭제 하시겠습니까?
Are you sure want to delete it?
*/
	MSG_ID_ABF = 0xabf,
/*20141224 to 20180523
퀘스트 NPC
Quest NPC
*/
	MSG_ID_AC0 = 0xac0,
/*20141224 to 20180523
메모할 내용을 기록합니다
Record content
*/
	MSG_ID_AC1 = 0xac1,
/*20141224 to 20180523
저장하기
Store
*/
	MSG_ID_AC2 = 0xac2,
/*20141224 to 20180523
메모하기
Record
*/
	MSG_ID_AC3 = 0xac3,
#endif
#if PACKETVER >= 20141231
/*20141231 to 20180523
%s [%d옵션] %d개
%s [%d Property] %d ea
*/
	MSG_ID_AC4 = 0xac4,
/*20141231 to 20180523
%s [%d옵션] %s Zeny
%s [%d Property] %s Zeny
*/
	MSG_ID_AC5 = 0xac5,
/*20141231 to 20180523
%s [%d옵션] %d %s %d -> %s %s
%s [%d Property] %d %s %d -> %s %s
*/
	MSG_ID_AC6 = 0xac6,
/*20141231 to 20180523
%s [%d옵션] %d %s %s %s
%s [%d Property] %d %s %s %s
*/
	MSG_ID_AC7 = 0xac7,
/*20141231 to 20180523
%s [%d옵션] %d -> %s %s
%s [%d Property] %d -> %s %s
*/
	MSG_ID_AC8 = 0xac8,
/*20141231 to 20180523
%s [%d옵션] %s %s
%s [%d Property] %s %s
*/
	MSG_ID_AC9 = 0xac9,
#endif
#if PACKETVER >= 20150107
/*20150107 to 20180523
최소 거래 단위 100 仙貝 이상으로 설정 하셔야 합니다.
The minimum trading unit must be 100 crackers or more.
*/
	MSG_ID_ACA = 0xaca,
#endif
#if PACKETVER >= 20150114
/*20150114 to 20180523
머리 색
Hair color
*/
	MSG_ID_ACB = 0xacb,
/*20150114 to 20180523
머리 모양
Hair style
*/
	MSG_ID_ACC = 0xacc,
/*20150114 to 20180523
옷 색
Cloth color
*/
	MSG_ID_ACD = 0xacd,
/*20150114 to 20180523
옷 모양
Cloth pattern
*/
	MSG_ID_ACE = 0xace,
#endif
#if PACKETVER >= 20150217
/*20150217 to 20180523
지원되지 않는 맵 입니다.
Unsupported Map.
*/
	MSG_ID_ACF = 0xacf,
#endif
#if PACKETVER >= 20150304
/*20150304 to 20150325
2147483647 Zeny 이하로 입력 하십시오.
20150401 to 20180523
2,147,483,647 Zeny 이하로 입력 하십시오.
Enter Zeny Below 2,147,483,647.
*/
	MSG_ID_AD0 = 0xad0,
/*20150304 to 20180523
1 Zeny 이상 입력 하십시오.
Please Enter atleast 1 zeny.
*/
	MSG_ID_AD1 = 0xad1,
/*20150304 to 20180523
보유한 Zeny 가 없습니다.
You do not hold any zeny.
*/
	MSG_ID_AD2 = 0xad2,
/*20150304 to 20180523
제니 창고
Zeny Storage
*/
	MSG_ID_AD3 = 0xad3,
/*20150304 to 20180523
창고보유액
in Bank
*/
	MSG_ID_AD4 = 0xad4,
/*20150304 to 20180523
소지금
on hand
*/
	MSG_ID_AD5 = 0xad5,
/*20150304 to 20180523
입금
Deposit
*/
	MSG_ID_AD6 = 0xad6,
/*20150304 to 20180523
출금
Withdraw
*/
	MSG_ID_AD7 = 0xad7,
/*20150304 to 20180523
1 z UP
1z UP
*/
	MSG_ID_AD8 = 0xad8,
/*20150304 to 20180523
1 z Down
1z Down
*/
	MSG_ID_AD9 = 0xad9,
/*20150304 to 20180523
Max
*/
	MSG_ID_ADA = 0xada,
/*20150304 to 20180523
입력값이 없습니다
There is no Input value
*/
	MSG_ID_ADB = 0xadb,
/*20150304 to 20180523
보유 Zeny 부족
Not enough zeny
*/
	MSG_ID_ADC = 0xadc,
/*20150304 to 20180523
입력값 필요
Input Required
*/
	MSG_ID_ADD = 0xadd,
/*20150304 to 20180523
문자 입력 불가
Numbers only
*/
	MSG_ID_ADE = 0xade,
/*20150304 to 20180523
최대 입력 초과
Exceeded max input
*/
	MSG_ID_ADF = 0xadf,
/*20150304 to 20180523
최소 입력 미만
Below Minimum Input
*/
	MSG_ID_AE0 = 0xae0,
/*20150304 to 20180523
보유 Zeny 부족
Not enough zeny
*/
	MSG_ID_AE1 = 0xae1,
/*20150304 to 20180523
은행 잔고 부족
Insufficient funds
*/
	MSG_ID_AE2 = 0xae2,
/*20150304 to 20180523
최대 보유 Zeny 초과
Exceeded max zeny
*/
	MSG_ID_AE3 = 0xae3,
#endif
#if PACKETVER >= 20150311
/*20150311 to 20180523
드롭 X
Drop X
*/
	MSG_ID_AE4 = 0xae4,
/*20150311 to 20180523
창고 X
Storage X
*/
	MSG_ID_AE5 = 0xae5,
/*20150311 to 20180523
카트 X
Cart X
*/
	MSG_ID_AE6 = 0xae6,
/*20150311 to 20180523
메일 X
Mail X
*/
	MSG_ID_AE7 = 0xae7,
/*20150311 to 20180523
교환창 X
Trade X
*/
	MSG_ID_AE8 = 0xae8,
/*20150311 to 20180523
경매장 X
Auction X
*/
	MSG_ID_AE9 = 0xae9,
/*20150311 to 20180523
길드창고 X
Guild Storage X
*/
	MSG_ID_AEA = 0xaea,
/*20150311 to 20180523
NPC에게 판매 X
Sell to NPC X
*/
	MSG_ID_AEB = 0xaeb,
/*20150311 to 20180523
이동제한이 있는 아이템입니다.
Item moves restriction.
*/
	MSG_ID_AEC = 0xaec,
#endif
#if PACKETVER >= 20150401
/*20150401 to 20180523
캐릭터를 생성해주세요!
Please Create a Character!
*/
	MSG_ID_AED = 0xaed,
#endif
#if PACKETVER >= 20150415
/*20150415 to 20180523
장착된 투사체 아이템을 해제해야 합니다.
You need to disarm the equipped projectiles.
*/
	MSG_ID_AEE = 0xaee,
#endif
#if PACKETVER >= 20150513
/*20150513 to 20180523
인원 초과로 메모리얼 던전에 입장 할 수 없습니다
You cannot enter Memorial Dungeon with excess members
*/
	MSG_ID_AEF = 0xaef,
/*20150513 to 20180523
인원수 초과로 인해  메모리얼 던전 입장이 거부되었습니다
Memorial Dungeon Access was denied due to exceeding number of players
*/
	MSG_ID_AF0 = 0xaf0,
#endif
#if PACKETVER >= 20150603
/*20150603 to 20180523
%.1f%% ( %s Server: %.1f%% + Premium:%.1f%% )
*/
	MSG_ID_AF1 = 0xaf1,
/*20150603 to 20180523
%.1f%% ( %s Server: %.1f%% + Premium:%.1f%% )
*/
	MSG_ID_AF2 = 0xaf2,
/*20150603 to 20180523
중복된 아이템이 존재하여 사용이 불가능 합니다.
Consuming Item denied due to multiple same item.
*/
	MSG_ID_AF3 = 0xaf3,
/*20150603 to 20180523
중복된 효과가 존재하여 사용이 불가능 합니다.
Consuming Item denied due to effect of same consumed item.
*/
	MSG_ID_AF4 = 0xaf4,
#endif
#if PACKETVER >= 20150701
/*20150701 to 20180523
화면 흔들림 효과 ON
Flicker Effect ON
*/
	MSG_ID_AF5 = 0xaf5,
/*20150701 to 20180523
화면 흔들림 효과 OFF
Flicker Effect OFF
*/
	MSG_ID_AF6 = 0xaf6,
#endif
#if PACKETVER >= 20150702
/*20150702 to 20180523
불법 프로그램  발견되었습니다
Illegal Programs has been detected
*/
	MSG_ID_AF7 = 0xaf7,
#endif
#if PACKETVER >= 20150722
/*20150722 to 20180523
메일 보내기
Send Mail
*/
	MSG_ID_AF8 = 0xaf8,
#endif
#if PACKETVER >= 20150729
/*20150729 to 20180523
E X P : %.1f%% ( basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
E X P: %.1f%% (Basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
*/
	MSG_ID_AF9 = 0xaf9,
/*20150729 to 20180523
DROP  : %.1f%% ( basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
DROP : %.1f%% (Basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
*/
	MSG_ID_AFA = 0xafa,
/*20150729 to 20180523
DEATH : %.1f%% ( basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
DEATH: %.1f%% (Basic 100.0%% VIP Bonus %.1f%% + %s %.1f%%)
*/
	MSG_ID_AFB = 0xafb,
#endif
#if PACKETVER >= 20150826
/*20150826 to 20180523
 해당 태그는 이름으로 사용하실 수 없습니다.
Name with this tag cannot be used.
*/
	MSG_ID_AFC = 0xafc,
#endif
#if PACKETVER >= 20150916
/*20150916 to 20180523
???? bdbac5b8c0cfb8b52098de
Style Shop
*/
	MSG_ID_AFD = 0xafd,
#endif
#if PACKETVER >= 20151028
/*20151028 to 20151125
쿠폰 없음, 상점에서 구매해야해요.
20151202 to 20180523
쿠폰 없음. Cash Shop에서 아이템을 구매해 주세요.
No serial number, Please visit the store to buy.
*/
	MSG_ID_AFE = 0xafe,
/*20151028 to 20151125
아이템창의 쿠폰 상자를 열어주세요
20151202 to 20180523
인벤토리에서 아이템 쿠폰 상자를 열어주세요.
Please turn on Serial item number window box.
*/
	MSG_ID_AFF = 0xaff,
/*20151028 to 20151125
은행
Bank
20151202 to 20180523
해당 스타일 정보를 삭제하시겠습니까?
Bank
*/
	MSG_ID_B00 = 0xb00,
/*20151028 to 20151125
슬롯이 꽉 찼습니다. 캐릭터를 삭제 후 사용해 주시기 바랍니다
20151202 to 20180523
슬롯이 꽉 찼습니다. 내 스타일에서 캐릭터 삭제 후 사용해 주십시오.
Slot is full, please delete a character.
*/
	MSG_ID_B01 = 0xb01,
/*20151028 to 20151125
사용하신 아이템은 되돌릴 수 없습니다. 적용하시겠습니까?
20151202 to 20180523
비용을 지불하고 현재 스타일을 적용하시겠습니까?
(※ 비용은 반환되지 않습니다.)
Item cannot be restored, are you sure want to apply it?
*/
	MSG_ID_B02 = 0xb02,
#endif
#if PACKETVER >= 20151104
/*20151104 to 20151125
관심 스타일로 등록되었습니다
20151202 to 20180523
현재 스타일을 저장하였습니다.
Registered as the following style.
*/
	MSG_ID_B03 = 0xb03,
/*20151104 to 20151125
은행에 충분한 제니가 있습니다. 먼저 은행으로 가세요.
20151202 to 20180523
보유 Zeny 부족. 은행에 충분한 Zeny가 있습니다.
There are plenty of golds in the bank, Please go to the bank now.
*/
	MSG_ID_B04 = 0xb04,
#endif
#if PACKETVER >= 20151118
/*20151118 to 20180523
으로 이동합니다.
moving...
*/
	MSG_ID_B05 = 0xb05,
/*20151118 to 20180523
해당 국가의 영공통과에 대한 허가가 나지 않았습니다.
You are not allowed to fly over the sovereign airspace of the country.
*/
	MSG_ID_B06 = 0xb06,
/*20151118 to 20180523
마나로 대기불안정이 계속되어 비공정 운행이 불가능합니다.
Airship flight is temporarily unavailable due to atmospheric instability caused by magic.
*/
	MSG_ID_B07 = 0xb07,
/*20151118 to 20180523
개인 비공정
Private airship
*/
	MSG_ID_B08 = 0xb08,
/*20151118 to 20180523
잠시 후 다시 시도해주세요.
Please try again in a moment.
*/
	MSG_ID_B09 = 0xb09,
/*20151118 to 20180523
개인 비공정 이용에 필요한 제니가 부족합니다.
Not enough Zeny to use the private airship.
*/
	MSG_ID_B0A = 0xb0a,
/*20151118 to 20170920
개인 비공정 이용에 필요한 통조림이 부족합니다.
20170927 to 20180523
개인 비공정 이용에 필요한 아이템이 부족합니다.
Not enough Cans to use the private airship.
*/
	MSG_ID_B0B = 0xb0b,
/*20151118 to 20180523
개인 비공정을 이용할 수 있는 레벨이 아닙니다.
You cannot meet the level to use the private airship.
*/
	MSG_ID_B0C = 0xb0c,
/*20151118 to 20180523
선택한 지점으론 개인비공정이 이동할 수 없습니다.
You cannot move to the selected point by the private airship.
*/
	MSG_ID_B0D = 0xb0d,
/*20151118 to 20180523
현 지점에선 개인비공정을 이용할 수 없습니다.
You cannot use the private airship where you are now.
*/
	MSG_ID_B0E = 0xb0e,
#endif
#if PACKETVER >= 20151125
/*20151125 to 20151125
악세사리
Accessory
20151202 to 20180523
액세서리
Accessory
*/
	MSG_ID_B0F = 0xb0f,
/*20151125 to 20180523
세컨드코스튬
Second costume
*/
	MSG_ID_B10 = 0xb10,
/*20151125 to 20151125
즐겨찾기
20151202 to 20180523
내 스타일 
Wardrobe
*/
	MSG_ID_B11 = 0xb11,
/*20151125 to 20151125
염색을 할 수 없는 머리스타일입니다.
20151202 to 20180523
염색할 수 없는 헤어스타일입니다.
This hairstyle cannot be dyed.
*/
	MSG_ID_B12 = 0xb12,
/*20151125 to 20151125
화살표를 눌러 마음에 드는 스타일을 선택할 수 있어요.
20151202 to 20180523
화살표를 눌러 마음에 드는 스타일을 선택해 보세요.
Press an arrow to choose the style you want.
*/
	MSG_ID_B13 = 0xb13,
#endif
#if PACKETVER >= 20151202
/*20151202 to 20151202
스타일 새로운 스타일을 확인해 보세요.
(※ 액세서리 구매 시 RODEX로 발송됩니다.)
20151209 to 20180523
새로운 스타일을 확인해 보세요.
(※ 액세서리 구매 시 RODEX로 발송됩니다.)
Come and see the new styles.
(Purchased accessories will be sent via RODEX.)
*/
	MSG_ID_B14 = 0xb14,
#endif
#if PACKETVER >= 20151223
/*20151223 to 20180523
기본 스타일
Basic style
*/
	MSG_ID_B15 = 0xb15,
#endif
#if PACKETVER >= 20160106
/*20160106 to 20180523
 해당 스킬은 BaseLv %d 이상부터 스킬 포인트 투자가 가능합니다.
You can level up the skill from the base Lv. %d.
*/
	MSG_ID_B16 = 0xb16,
#endif
#if PACKETVER >= 20160113
/*20160113 to 20180523
해당 특수기호는 이름에 사용하실 수 없습니다.
Special symbol can't be used in name
*/
	MSG_ID_B17 = 0xb17,
/*20160113 to 20180523
MHP가 너무 낮아, 해당 스킬을 사용할 수 없습니다
MaxHP is to low to use this skill
*/
	MSG_ID_B18 = 0xb18,
/*20160113 to 20180523
MSP가 너무 낮아, 해당 스킬을 사용할 수 없습니다
MaxSP is to low to use this skill
*/
	MSG_ID_B19 = 0xb19,
#endif
#if PACKETVER >= 20160203
/*20160203 to 20180523
아이템 비교하기
Compare items
*/
	MSG_ID_B1A = 0xb1a,
/*20160203 to 20180523
아이템 버리기 잠금
Drop lock
*/
	MSG_ID_B1B = 0xb1b,
#endif
#if PACKETVER >= 20160224
/*20160224 to 20180523
스크린샷 파일이 첨부 되지 않았습니다.
Screenshots are not attached
*/
	MSG_ID_B1C = 0xb1c,
/*20160224 to 20160511
SNS통신
20160518 to 20160817
TWITTER
20160824 to 20180523
Twitter
TWITTER
*/
	MSG_ID_B1D = 0xb1d,
/*20160224 to 20180523
일반
General
*/
	MSG_ID_B1E = 0xb1e,
/*20160224 to 20180523
공지
Notice
*/
	MSG_ID_B1F = 0xb1f,
/*20160224 to 20180523
반송
Clear
*/
	MSG_ID_B20 = 0xb20,
/*20160224 to 20180523
새로고침
Refresh
*/
	MSG_ID_B21 = 0xb21,
/*20160224 to 20180523
%d분
%d minute
*/
	MSG_ID_B22 = 0xb22,
/*20160224 to 20180523
%d시간
%d hour
*/
	MSG_ID_B23 = 0xb23,
/*20160224 to 20180523
%d일
%d day
*/
	MSG_ID_B24 = 0xb24,
/*20160224 to 20180523
반송됨
Returned
*/
	MSG_ID_B25 = 0xb25,
/*20160224 to 20180523
선택한 메일을 삭제하시겠습니까?
Do you want to delete the message?
*/
	MSG_ID_B26 = 0xb26,
#endif
#if PACKETVER >= 20160302
/*20160302 to 20180523
위치표시
Show information
*/
	MSG_ID_B27 = 0xb27,
/*20160302 to 20180523
확대
Zoom In
*/
	MSG_ID_B28 = 0xb28,
/*20160302 to 20180523
축소
Zoom Out
*/
	MSG_ID_B29 = 0xb29,
/*20160302 to 20180523
맵보기
Maximize
*/
	MSG_ID_B2A = 0xb2a,
/*20160302 to 20180523
월드보기
Show world map
*/
	MSG_ID_B2B = 0xb2b,
/*20160302 to 20180523
아이템 소지 종류수
Total possession item type
*/
	MSG_ID_B2C = 0xb2c,
#endif
#if PACKETVER >= 20160309
/*20160309 to 20180523
/minimap
*/
	MSG_ID_B2D = 0xb2d,
/*20160309 to 20180523
미니맵 버튼을 표시합니다
Show minimap buttons
*/
	MSG_ID_B2E = 0xb2e,
/*20160309 to 20180523
미니맵 버튼을 표시하지 않습니다
Hide minimap buttons
*/
	MSG_ID_B2F = 0xb2f,
/*20160309 to 20180523
길드 접속자 정렬
Show guild member login status
*/
	MSG_ID_B30 = 0xb30,
#endif
#if PACKETVER >= 20160323
/*20160323 to 20180523
친밀도 : %s
Intimacy: %s
*/
	MSG_ID_B31 = 0xb31,
/*20160323 to 20180523
확인 전
Confirmation
*/
	MSG_ID_B32 = 0xb32,
#endif
#if PACKETVER >= 20160330
/*20160330 to 20180523
파티 이름
Team name
*/
	MSG_ID_B33 = 0xb33,
/*20160330 to 20180523
파티장
Leader
*/
	MSG_ID_B34 = 0xb34,
/*20160330 to 20180523
제한 시간 초과. 클라이언트를 종료합니다.
Time limit exceeded. Closing the client
*/
	MSG_ID_B35 = 0xb35,
/*20160330 to 20180523
잘못된 입력입니다. 클라이언트를 종료합니다.
Input error. Closing the client
*/
	MSG_ID_B36 = 0xb36,
/*20160330 to 20180523
정답 입니다. 보상으로 소정의 버프가 주어집니다.
Incorrect input. A small buff has given to you
*/
	MSG_ID_B37 = 0xb37,
/*20160330 to 20180523
영문 4자, 한글 2자 이상으로 입력해야 합니다.
Enter 4 english words and 2 chinese words
*/
	MSG_ID_B38 = 0xb38,
/*20160330 to 20180523
입력한 답이 [%s]가 맞습니까?
Your entered answer is [%s]. Is it right?
*/
	MSG_ID_B39 = 0xb39,
/*20160330 to 20180523
선택된 이미지가 없습니다.
Icon is unchecked
*/
	MSG_ID_B3A = 0xb3a,
/*20160330 to 20180523
잘못된 입력입니다. (남은 기회 %d번)
Incorrect input (Remaining chance: %d)
*/
	MSG_ID_B3B = 0xb3b,
/*20160330 to 20180523
총 %d명의 유저를 신고하시겠습니까?
Do you want to announce %d to player?
*/
	MSG_ID_B3C = 0xb3c,
/*20160330 to 20180523
유저에게 메시지를 보냈습니다.
Message has been sent to player
*/
	MSG_ID_B3D = 0xb3d,
/*20160330 to 20180523
불법 프로그램 단속에 필요한 데이터가 미등록 상태입니다.
Needed Data for Query illegal software are not signed.
*/
	MSG_ID_B3E = 0xb3e,
/*20160330 to 20180523
이미 매크로 감시중인 유저입니다.
The player is being monitored.
*/
	MSG_ID_B3F = 0xb3f,
/*20160330 to 20180523
매크로가 등록되었습니다..
Already signed in investigation system.
*/
	MSG_ID_B40 = 0xb40,
/*20160330 to 20180523
이미지 등록에 실패하였습니다.
Failed to store icon.
*/
	MSG_ID_B41 = 0xb41,
/*20160330 to 20180523
정답 등록에 실패하였습니다.
Failed to store replied answer.
*/
	MSG_ID_B42 = 0xb42,
/*20160330 to 20180523
안녕하세요. 불법프로그램 단속중입니다.
Hello, illegal software is being monitored.
*/
	MSG_ID_B43 = 0xb43,
/*20160330 to 20180523
지정된 시간내에 아래의 문자를 입력해주세요.
Please enter the text below within the specified time.
*/
	MSG_ID_B44 = 0xb44,
/*20160330 to 20180523
3회 오류시 운영정책에 의거하여 영구블록됩니다.
According to game regulation, when you enter the wrong text three times, you will get banned.
*/
	MSG_ID_B45 = 0xb45,
/*20160330 to 20180523
남은 횟수 : %d
Remaining chance : %d
*/
	MSG_ID_B46 = 0xb46,
/*20160330 to 20180523
캐릭터
Role
*/
	MSG_ID_B47 = 0xb47,
/*20160330 to 20180523
범위
Range
*/
	MSG_ID_B48 = 0xb48,
/*20160330 to 20180523
캐릭터 선택은 좌클릭으로 합니다.
You use the left mouse button to specify the role
*/
	MSG_ID_B49 = 0xb49,
/*20160330 to 20180523
범위 선택은 우클릭으로 합니다.
You use the left mouse button to specify the range
*/
	MSG_ID_B4A = 0xb4a,
/*20160330 to 20180523
범위 크기를 지정하기 위해서는 엔터를 입력해주세요
Not a valid range, please press Enter
*/
	MSG_ID_B4B = 0xb4b,
/*20160330 to 20180523
E X P : %.1f%% ( basic %.1f%% %s %.1f%%)
*/
	MSG_ID_B4C = 0xb4c,
/*20160330 to 20180523
DROP  : %.1f%% ( basic %.1f%% %s %.1f%%)
*/
	MSG_ID_B4D = 0xb4d,
/*20160330 to 20180523
DEATH : %.1f%% ( basic %.1f%% %s %.1f%%)
*/
	MSG_ID_B4E = 0xb4e,
/*20160330 to 20160330
변경된 캐릭명 %s 로 전송했습니다. 확인 바랍니다
20160406 to 20180523
변경된 캐릭명으로 발송했습니다. 변경된 캐릭명 : %s 
The role name will be sent: %s 
*/
	MSG_ID_B4F = 0xb4f,
#endif
#if PACKETVER >= 20160427
/*20160427 to 20180523
합성에 필요한 재료
Synthesis of the required materials
*/
	MSG_ID_B50 = 0xb50,
/*20160427 to 20180523
조합 재료가 부족해서 조합할 수 없습니다.
Insufficient synthesis materials
*/
	MSG_ID_B51 = 0xb51,
#endif
#if PACKETVER >= 20160504
/*20160504 to 20180523
해당 재료는 %d개가 필요합니다.
Required material %d ea.
*/
	MSG_ID_B52 = 0xb52,
/*20160504 to 20180523
제련도가 낮아서 조합할 수 없습니다.
Refine value is to low for synthesis
*/
	MSG_ID_B53 = 0xb53,
/*20160504 to 20180523
모험가중개소에 등록 하시겠습니까?
Do you want to sign in to the adventurers?
*/
	MSG_ID_B54 = 0xb54,
#endif
#if PACKETVER >= 20160511
/*20160511 to 20180523
자유롭게 코멘트를 남겨보세요.
Please leave a message
*/
	MSG_ID_B55 = 0xb55,
#endif
#if PACKETVER >= 20160518
/*20160518 to 20180523
그림에 보이는 문자를 입력해주세요.
Please enter the text on the graph
*/
	MSG_ID_B56 = 0xb56,
/*20160518 to 20180523
%d초 남았습니다
%d second left
*/
	MSG_ID_B57 = 0xb57,
/*20160518 to 20180523
OTP 인증번호 6자리를 입력해 주세요
Please enter your 6 identification number.
*/
	MSG_ID_B58 = 0xb58,
/*20160518 to 20180523
인증번호
Identification number.
*/
	MSG_ID_B59 = 0xb59,
/*20160518 to 20180523
6자리의 숫자가 아닙니다. 다시 확인해 주세요
It's not a 6 identification number. Please try again
*/
	MSG_ID_B5A = 0xb5a,
#endif
#if PACKETVER >= 20160608
/*20160608 to 20180523
이미 삭제된 메일입니다.
The message has been deleted
*/
	MSG_ID_B5B = 0xb5b,
#endif
#if PACKETVER >= 20160615
/*20160615 to 20180523
개인 비공정으로 이동할 지역을 선택해주세요.
Please select the area where the private airship will move
*/
	MSG_ID_B5C = 0xb5c,
/*20160615 to 20180523
E X P : %d%% ( basic 100.0%% %s %d%%)
*/
	MSG_ID_B5D = 0xb5d,
/*20160615 to 20180523
DROP  : %d%% ( basic 100.0%% %s %d%%)
*/
	MSG_ID_B5E = 0xb5e,
/*20160615 to 20180523
DEATH : %d%% ( basic 100.0%% %s %d%%)
*/
	MSG_ID_B5F = 0xb5f,
/*20160615 to 20180523
목적지로 이동중입니다.
Move to the destination
*/
	MSG_ID_B60 = 0xb60,
#endif
#if PACKETVER >= 20160629
/*20160629 to 20180523
[%s] 파일이 존재하지 않아 default AI 로 동작합니다
The [%s] is not present, the default AI will be used instead.
*/
	MSG_ID_B61 = 0xb61,
/*20160629 to 20160630
 %.1f%% ( Premium %.1f%% + %s %.1f%%)
20160706 to 20180523
 %.1f%% ( Basic 100.0%% + Premium %.1f%% + %s %.1f%%)
%.1f%% ( Basic 100.0%% + Premium %.1f%% + %s %.1f%%)
*/
	MSG_ID_B62 = 0xb62,
#endif
#if PACKETVER >= 20160706
/*20160706 to 20180523
이 자리에 노점을 세우시겠습니까?
Would you like to open a shop at this location?
*/
	MSG_ID_B63 = 0xb63,
#endif
#if PACKETVER >= 20160713
/*20160713 to 20180523
도람족은 해당 의상을 입을 수 없습니다.
Doram race can't wear this clothes
*/
	MSG_ID_B64 = 0xb64,
/*20160713 to 20160727
구입한 물건이 로덱스로 배송되었습니다.
20160803 to 20180523
판매 노점에서 거래한 아이템이 로덱스로 배송되었습니다.
Props open-air store sales will be traded in RODEX
*/
	MSG_ID_B65 = 0xb65,
/*20160713 to 20180523
30,000 z
*/
	MSG_ID_B66 = 0xb66,
/*20160713 to 20180523
말랑도 특산 통조림 100개
Malangdo Special Can 100 pc
*/
	MSG_ID_B67 = 0xb67,
#endif
#if PACKETVER >= 20160720
/*20160720 to 20180523
무게가 80%를 초과하여 진행할 수 없습니다.
Cannot carry anymore because weight limit over 80%
*/
	MSG_ID_B68 = 0xb68,
/*20160720 to 20180523
판매되지 못한 상품이 로덱스로 배송되었습니다.
Unsold items are sent to RODEX
*/
	MSG_ID_B69 = 0xb69,
#endif
#if PACKETVER >= 20160727
/*20160727 to 20180523
장착 모습
Preview
*/
	MSG_ID_B6A = 0xb6a,
/*20160727 to 20180523
길드마스터 위임
Assign Guild Leader
*/
	MSG_ID_B6B = 0xb6b,
/*20160727 to 20180523
정말로 %s님께 길드마스터를 위임하시겠습니까? 위임 후 당신의 지위는 %s님과 지위가 바뀌게 됩니다.
Are sure want to assign %s as guild leader? After assigned your position will become %s
*/
	MSG_ID_B6C = 0xb6c,
/*20160727 to 20180523
철회
Cancel
*/
	MSG_ID_B6D = 0xb6d,
/*20160727 to 20180523
노점을 철수하시겠습니까?
Do you want to close the shop?
*/
	MSG_ID_B6E = 0xb6e,
/*20160727 to 20180523
%02d일 %02d시간 %02d분 %02d초
%02d day %02d hour %02d minute %02d second
*/
	MSG_ID_B6F = 0xb6f,
/*20160727 to 20180523
접속불가
Unable to sign in
*/
	MSG_ID_B70 = 0xb70,
/*20160727 to 20180523
접속가능인원을 초과하여 접속이 불가능 합니다.
Unable to sign in because the maximum number of sign-in is exceeded
*/
	MSG_ID_B71 = 0xb71,
/*20160727 to 20180523
노점을 설치할 위치를 선택해주세요.
Please select a location for your shop
*/
	MSG_ID_B72 = 0xb72,
/*20160727 to 20180523
펫 이름을 ^0000ff^0000ff %s^000000^000000 로 수정합니다. 계속 하시겠습니까?
Pet name will be changed to ^0000ff^0000ff %s^000000^000000, do you want to continue?
*/
	MSG_ID_B73 = 0xb73,
#endif
#if PACKETVER >= 20160803
/*20160803 to 20160803
판매 일시 : 
20160810 to 20180523
거래 일시 : 
Trade date : 
*/
	MSG_ID_B74 = 0xb74,
/*20160803 to 20160803
판매 아이템 : 
20160810 to 20180523
거래 아이템 : 
Trade item : 
*/
	MSG_ID_B75 = 0xb75,
/*20160803 to 20160803
판매 수량 : 
20160810 to 20180523
거래 수량 : 
Trade quantity : 
*/
	MSG_ID_B76 = 0xb76,
/*20160803 to 20160803
판매 단가 : 
20160810 to 20180523
거래 단가 : 
Trade price : 
*/
	MSG_ID_B77 = 0xb77,
/*20160803 to 20160803
판매 금액 : 
20160810 to 20180523
거래 금액 : 
Total trade : 
*/
	MSG_ID_B78 = 0xb78,
/*20160803 to 20180523
노점 판매 아이템
Open vending sales agent
*/
	MSG_ID_B79 = 0xb79,
/*20160803 to 20180523
노점 구매 아이템
Open vending purchase agent
*/
	MSG_ID_B7A = 0xb7a,
/*20160803 to 20180523
판매 노점 아르바이트 종료
Close vending sales agent
*/
	MSG_ID_B7B = 0xb7b,
/*20160803 to 20180523
구매 노점 아르바이트 종료
Close vending purchase agent
*/
	MSG_ID_B7C = 0xb7c,
/*20160803 to 20180523
남은 금액:
Balance: 
*/
	MSG_ID_B7D = 0xb7d,
/*20160803 to 20180523
아이템 리스트:
Item list: 
*/
	MSG_ID_B7E = 0xb7e,
/*20160803 to 20180523
노점 아르바이트생
Vending agent
*/
	MSG_ID_B7F = 0xb7f,
/*20160803 to 20180523
반환 아이템:
Returned item: 
*/
	MSG_ID_B80 = 0xb80,
/*20160803 to 20180523
반환 수량:
Returned quantity: 
*/
	MSG_ID_B81 = 0xb81,
/*20160803 to 20180523
반환 일시:
Returned date: 
*/
	MSG_ID_B82 = 0xb82,
/*20160803 to 20180523
구매 노점에서 거래한 금액이 로덱스로 배송되었습니다
Total trade will be sent to RODEX 
*/
	MSG_ID_B83 = 0xb83,
/*20160803 to 20180523
사용할 수 없는 이름입니다.
Name isn't available
*/
	MSG_ID_B84 = 0xb84,
#endif
#if PACKETVER >= 20160817
/*20160817 to 20180523
상품이 도착했습니다.
Item has been delivered
*/
	MSG_ID_B85 = 0xb85,
/*20160817 to 20180523
구입해주셔서 감사합니다.
Thank you for purchasing
*/
	MSG_ID_B86 = 0xb86,
#endif
#if PACKETVER >= 20160824
/*20160824 to 20180523
NPC에게 아이템을 판매하지 않습니다.
Press again to unlock
*/
	MSG_ID_B87 = 0xb87,
/*20160824 to 20180523
아이템 판매 잠금
Lock from NPC selling
*/
	MSG_ID_B88 = 0xb88,
/*20160824 to 20180523
근처에서 소환가능 위치를 찾을수 없습니다.
There is no callable location nearby
*/
	MSG_ID_B89 = 0xb89,
/*20160824 to 20180523
전체 화면 캡쳐
Capture full screens
*/
	MSG_ID_B8A = 0xb8a,
/*20160824 to 20180523
부분 화면 캡쳐
Capture part of screen
*/
	MSG_ID_B8B = 0xb8b,
/*20160824 to 20180523
보내기
Send
*/
	MSG_ID_B8C = 0xb8c,
/*20160824 to 20180523
가족 분과 담당자
Family Affairs agent
*/
	MSG_ID_B8D = 0xb8d,
/*20160824 to 20180523
가족 사항 변동 안내
Acknowledgement of family member registrations.
*/
	MSG_ID_B8E = 0xb8e,
/*20160824 to 20180523
안녕하십니까.

금일 "%s"님과 "%s"님의 자녀인 "%s"님이 독립하여 단독 세대를 구성하였습니다.

이에 서면으로 안내를 드립니다.

가족 관계 확인을 원하시는 분은 프론테라 동사무소의 담당 직원에게 문의하시기 바랍니다.

감사합니다.
Dear whom it may concern. 

 Today, \"%s\" and \"%s\" 's son/daughter \"%s\" has fully separated and independent from your member of family.

Hereat, we inform you in writing.

Please contact to Prontera Family Affairs if you have any enquiries.

Thank you.
*/
	MSG_ID_B8F = 0xb8f,
#endif
#if PACKETVER >= 20160831
/*20160831 to 20180523
장착
Equip
*/
	MSG_ID_B90 = 0xb90,
/*20160831 to 20180523
이미지 없음
No image
*/
	MSG_ID_B91 = 0xb91,
#endif
#if PACKETVER >= 20160907
/*20160907 to 20160921
%s은(는) 현재 호출을 차단한 상태입니다.
20160928 to 20180523
[%s]은(는) 현재 호출을 차단한 상태입니다.
[%s] is blocking Call Massage.
*/
	MSG_ID_B92 = 0xb92,
#endif
#if PACKETVER >= 20160913
/*20160913 to 20180523
현재 공성전이 진행중이므로, 길드마스터를 위임 할 수 없습니다.
Currently in WoE hours, unable to delegate Guild leader
*/
	MSG_ID_B93 = 0xb93,
/*20160913 to 20180523
현재 길드장 위임을 받은지 만 하루가 지나지 않아, 길드장을 위임할 수 없습니다.
You have to wait for one day before delegating a new Guild leader
*/
	MSG_ID_B94 = 0xb94,
/*20160913 to 20180523
아이가 되면 전승을 할 수 없고 스텟의 제한이 있으며 HP와 SP가 줄어듭니다.
그래도 괜찮습니까?
When adopted, character will not able to transcend, maximum stats will be limited, MaxHP and MaxSP will be reduced.
Are you sure you want to continue?
*/
	MSG_ID_B95 = 0xb95,
/*20160913 to 20180523
제련
Refining
*/
	MSG_ID_B96 = 0xb96,
/*20160913 to 20180523
대장장이의 축복을 사용중입니다.
Use Blacksmith's Blessing
*/
	MSG_ID_B97 = 0xb97,
/*20160913 to 20180523
제니가 부족합니다.
Insufficient zeny
*/
	MSG_ID_B98 = 0xb98,
/*20160913 to 20180523
대장장이의 축복 개수가 부족합니다.
Not enough Blacksmith's Blessing
*/
	MSG_ID_B99 = 0xb99,
/*20160913 to 20180523
해당 장비는 제련이 불가능합니다.
This equipment can not be refined
*/
	MSG_ID_B9A = 0xb9a,
/*20160913 to 20170621
제련 성공!
20170628 to 20180523
제련 성공
Upgrade success!
*/
	MSG_ID_B9B = 0xb9b,
/*20160913 to 20170621
제련 실패!
20170628 to 20180523
제련 실패
Upgrade failed!
*/
	MSG_ID_B9C = 0xb9c,
/*20160913 to 20180523
돌아가기
Back
*/
	MSG_ID_B9D = 0xb9d,
/*20160913 to 20180523
성공
Success
*/
	MSG_ID_B9E = 0xb9e,
/*20160913 to 20180523
원래대로
Return
*/
	MSG_ID_B9F = 0xb9f,
#endif
#if PACKETVER >= 20160921
/*20160921 to 20180523
씨와의 
With Mr/Miss
*/
	MSG_ID_BA0 = 0xba0,
/*20160921 to 20180523
호문클루스의 이름을 ^0000ff^0000ff %s^000000^000000 로 수정합니다. 계속 하시겠습니까?
The Homunculus's name will be changed to^0000ff^0000ff %s^000000^000000, Are you sure?
*/
	MSG_ID_BA1 = 0xba1,
#endif
#if PACKETVER >= 20160928
/*20160928 to 20180523
호출이 허용된 상태입니다. (호출 기능 ON)
Call function is ON
*/
	MSG_ID_BA2 = 0xba2,
/*20160928 to 20180523
호출이 차단된 상태입니다. (호출 기능 OFF)
Call function is OFF
*/
	MSG_ID_BA3 = 0xba3,
/*20160928 to 20180523
호출 메시지 표시
Display Call messages
*/
	MSG_ID_BA4 = 0xba4,
/*20160928 to 20180523
해당 캐릭터가 현재 노점 아이템을 사용 중이므로 삭제할 수 없습니다.
This character is currently opening a shop and can't be deleted
*/
	MSG_ID_BA5 = 0xba5,
/*20160928 to 20180523
이미 동일한 노점 NPC가 설치 중입니다.
The same vend shop NPC has been set up
*/
	MSG_ID_BA6 = 0xba6,
/*20160928 to 20180523
노점을 설치할 수 없는 위치입니다.
Opening shop is not allowed on this location
*/
	MSG_ID_BA7 = 0xba7,
/*20160928 to 20180523
다른 캐릭터가 있는 위치에는 노점을 설치할 수 없습니다.
Opening shop is not allowed when there is other character
*/
	MSG_ID_BA8 = 0xba8,
#endif
#if PACKETVER >= 20161005
/*20161005 to 20180523
펫 먹이주기가 실패했습니다. 로덱스 작성창을 닫아주세요.
Failed to feed pet, please close RODEX window
*/
	MSG_ID_BA9 = 0xba9,
/*20161005 to 20180523
장비 세트 설정
Set item setting
*/
	MSG_ID_BAA = 0xbaa,
/*20161005 to 20180523
장착 하기
Equip
*/
	MSG_ID_BAB = 0xbab,
#endif
#if PACKETVER >= 20161019
/*20161019 to 20180523
제련 실패시 장비가 사라집니다.
Equipment will dissapear when refine fails
*/
	MSG_ID_BAC = 0xbac,
/*20161019 to 20180523
제련 실패시 장비의 제련도가 내려갑니다.
Equipment's refine level will decreased when refine fails
*/
	MSG_ID_BAD = 0xbad,
/*20161019 to 20180523
제련 실패시 장비의 제련도가 내려가거나 사라질 수 있습니다.
Equipment will dissapear or refine level will decreased when refine fails
*/
	MSG_ID_BAE = 0xbae,
#endif
#if PACKETVER >= 20161026
/*20161026 to 20180523
제련 중에는 로덱스를 사용할 수 없습니다. 로덱스를 강제 종료하였습니다.
You cannot use RODEX while refining. RODEX has closed.
*/
	MSG_ID_BAF = 0xbaf,
/*20161026 to 20180523
제련 중에는 로덱스를 사용할 수 없습니다.
You cannot use RODEX while refining.
*/
	MSG_ID_BB0 = 0xbb0,
/*20161026 to 20180523
제련을 진행하려면 다른 창을 닫아주세요.
Please close other windows to continue.
*/
	MSG_ID_BB1 = 0xbb1,
/*20161026 to 20180523
오오라가 정상적으로 표시됩니다 [오오라 ON]
Turn On Aura [Aura ON]
*/
	MSG_ID_BB2 = 0xbb2,
/*20161026 to 20180523
오오라가 표시되지 않습니다 [오오라 OFF]
Turn Off Aura [Auta OFF]
*/
	MSG_ID_BB3 = 0xbb3,
/*20161026 to 20180523
오오라가 Off 상태입니다. Off 를 해제하고 시도해 주세요
Aura is turned off. Please turn it on and try again
*/
	MSG_ID_BB4 = 0xbb4,
/*20161026 to 20180523
스킬 발동시 최소 %d개의 탄알이 필요합니다.
You need %d bullet(s) to activate the skill.
*/
	MSG_ID_BB5 = 0xbb5,
/*20161026 to 20180523
장비 세트를 변경하시겠습니까?
Do you want to change the equipment set?
*/
	MSG_ID_BB6 = 0xbb6,
/*20161026 to 20180523
죽은 상태에서는 할 수 없습니다
You can not do it while you are dead.
*/
	MSG_ID_BB7 = 0xbb7,
/*20161026 to 20180523
캐스팅 도중에는 할 수 없습니다
You can not do it while casting
*/
	MSG_ID_BB8 = 0xbb8,
/*20161026 to 20180523
거래 도중에는 할 수 없습니다
You can not do it while trading
*/
	MSG_ID_BB9 = 0xbb9,
/*20161026 to 20180523
노점 개설 도중에는 할 수 없습니다
You can not do it while opening vendor
*/
	MSG_ID_BBA = 0xbba,
/*20161026 to 20180523
NPC 이용중에는 할 수 없습니다
You can not do it while using NPC
*/
	MSG_ID_BBB = 0xbbb,
/*20161026 to 20180523
채팅방 이용중에는 할 수 없습니다
You can not do it while using chatting room
*/
	MSG_ID_BBC = 0xbbc,
/*20161026 to 20180523
파티원 전원이 접속 상태가 아닙니다.
Party members are not connected.
*/
	MSG_ID_BBD = 0xbbd,
/*20161026 to 20180523
스킬 발동시 최소 %d개의 화살이 필요합니다.
You need %d arrow(s) to activate the skill.
*/
	MSG_ID_BBE = 0xbbe,
#endif
#if PACKETVER >= 20161102
/*20161102 to 20180523
아이템 정렬
Align items
*/
	MSG_ID_BBF = 0xbbf,
/*20161102 to 20180523
아이템을 버리려면 장비 설정 창을 닫아주세요.
Please close item setting window to dump item.
*/
	MSG_ID_BC0 = 0xbc0,
#endif
#if PACKETVER >= 20161109
/*20161109 to 20180523
교체 할 수 있는 아이템이 없습니다.
There is no item to replace.
*/
	MSG_ID_BC1 = 0xbc1,
/*20161109 to 20180523
삭제된 캐릭터
Deleted character
*/
	MSG_ID_BC2 = 0xbc2,
#endif
#if PACKETVER >= 20161116
/*20161116 to 20180523
%Y.%m.%d
*/
	MSG_ID_BC3 = 0xbc3,
/*20161116 to 20180523
접속일: %s
Access date: %s
*/
	MSG_ID_BC4 = 0xbc4,
/*20161116 to 20180523
제련 중에는 은행을 사용할 수 없습니다. 은행을 강제 종료하였습니다.
You can not use bank while refining. Bank has closed.
*/
	MSG_ID_BC5 = 0xbc5,
/*20161116 to 20180523
제련 중에는 은행을 사용할 수 없습니다.
You can not use bank while refining.
*/
	MSG_ID_BC6 = 0xbc6,
/*20161116 to 20180523
장비 세트 설정 중인 아이템입니다.
The item has bind to set equipment.
*/
	MSG_ID_BC7 = 0xbc7,
#endif
#if PACKETVER >= 20161123
/*20161123 to 20180523
인간
Human
*/
	MSG_ID_BC8 = 0xbc8,
/*20161123 to 20180523
검사, 법사, 상인, 복사, 도둑, 궁수
Swordman, Mage, Merchant, Acolyte, Thief, Archer
*/
	MSG_ID_BC9 = 0xbc9,
/*20161123 to 20180523
도람
Doram
*/
	MSG_ID_BCA = 0xbca,
/*20161123 to 20180523
소환사
Summoner
*/
	MSG_ID_BCB = 0xbcb,
/*20161123 to 20180523
미드가르드 대륙의 대표 종족. 무한한 잠재력과 뛰어난 적응력으로 문제 해결에 탁월한 것이 특징이다.
Delegate race of Midgard. Very talented race to solve a problem with inifite potential and great adaptability.
*/
	MSG_ID_BCC = 0xbcc,
/*20161123 to 20180523
파-스타 대륙의 대표적인 종족 중 하나로, 선천적으로 호기심이 강하고 발랄한 성격을 지녔다.
One of delegate race of Far-star continent with natural born curiosity and sparky character.
*/
	MSG_ID_BCD = 0xbcd,
/*20161123 to 20180523
소지 한계량이 70%를 초과하거나, 인벤토리에 10칸 이상의 여유 공간이 부족한 상태입니다.
Weight limit has reached toover 70%. Or less then 10 invenrory space.
*/
	MSG_ID_BCE = 0xbce,
/*20161123 to 20180523
C
*/
	MSG_ID_BCF = 0xbcf,
/*20161123 to 20180523
C
*/
	MSG_ID_BD0 = 0xbd0,
/*20161123 to 20180523
다른 일을 하는 중입니다.
Doing in other activity.
*/
	MSG_ID_BD1 = 0xbd1,
/*20161123 to 20180523
오버히트 리미트 : %d
Overheat limit : %d
*/
	MSG_ID_BD2 = 0xbd2,
#endif
#if PACKETVER >= 20161130
/*20161130 to 20180523
메모리얼 던전 이용 중엔 초대 및 탈퇴가 되지 않습니다.
You cannot invite or withdraw while in memorial dungeon.
*/
	MSG_ID_BD3 = 0xbd3,
/*20161130 to 20180523
비속어가 포함되어있습니다.
다시 한번 확인해주세요.
Expletive has detected.
Please check again.
*/
	MSG_ID_BD4 = 0xbd4,
#endif
#if PACKETVER >= 20161207
/*20161207 to 20180523
아이디는 %d자 이상 입력해주세요. 사용자 계정이 없으신분들은 왼쪽 하단의 [신청] 버튼을 눌러 계정을 만드시기 바랍니다.
Please enter over %d characters. If you don't have user account, please click [Register] button on the bottom left.
*/
	MSG_ID_BD5 = 0xbd5,
/*20161207 to 20180523
비밀번호는 %d자 이상 입력해주세요.
Please enter the password over %d characters.
*/
	MSG_ID_BD6 = 0xbd6,
/*20161207 to 20180523
진행중이던 작업을 종료후 다시 시도하세요.
Please finish your current work and try it again.
*/
	MSG_ID_BD7 = 0xbd7,
/*20161207 to 20180523
%.1f%% (PC방 %.1f%% + TPLUS %.1f%% + %s서버 %.1f%%)
%.1f%% (Internet-Cafe %.1f%% + TPLUS %.1f%% + %sServer %.1f%%)
*/
	MSG_ID_BD8 = 0xbd8,
/*20161207 to 20180523
아이템을 등록할 수 없습니다
The item cannot be registered.
*/
	MSG_ID_BD9 = 0xbd9,
#endif
#if PACKETVER >= 20161214
/*20161214 to 20180523
/100
/300
*/
	MSG_ID_BDA = 0xbda,
/*20161214 to 20180523
/2000
/4000
*/
	MSG_ID_BDB = 0xbdb,
/*20161214 to 20180523
https://member.gnjoy.com.tw/mRO_SecPwd.aspx
*/
	MSG_ID_BDC = 0xbdc,
/*20161214 to 20180523
등록할 emblem이 존재하지 않습니다. emblem 폴더에 파일을 넣고 시도해 주세요
The emblem you want to register does not exist. Insert it in the emblem file and try again
*/
	MSG_ID_BDD = 0xbdd,
/*20161214 to 20170315
#라그나로크 #Ragnarok
20170322 to 20180523
라그나로크 
Ragnarok Ragnarok
*/
	MSG_ID_BDE = 0xbde,
/*20161214 to 20161214
스크린샷에 자신 이외의 캐리터명이 표시되는 경우나 채팅창에 자신 이외의 캐릭터 대화가 표시되는 경우, 해당 사용자에게 반드시 양해를 구한 후 사용 해 주시기 바랍니다.
20161221 to 20180523
스크린샷에 자신 이외의 캐릭터명이 표시되는 경우나 채팅창에 자신 이외의 캐릭터 대화가 표시되는 경우, 해당 사용자에게 반드시 양해를 구한 후 사용 해 주시기 바랍니다.
If your screenshot or chat box includes other users besides yourself, first ask permission from the other users before using it.
*/
	MSG_ID_BDF = 0xbdf,
#endif
#if PACKETVER >= 20161221
/*20161221 to 20180523
현재 상태에선 장비를 교체할 수 없습니다
You cannot change equipment in current condition
*/
	MSG_ID_BE0 = 0xbe0,
/*20161221 to 20180523
해당 유저의 이름을 가져오고 있습니다
Getting the user's name
*/
	MSG_ID_BE1 = 0xbe1,
/*20161221 to 20180523
해당 메시지는 사용 할 수 없는 내용을 포함하고 있습니다.
This message includes contents you are not able to use.
*/
	MSG_ID_BE2 = 0xbe2,
/*20161221 to 20180523
아이템 구입에 실패하였습니다.
Failed to purchase item.
*/
	MSG_ID_BE3 = 0xbe3,
/*20161221 to 20180523
신분증번호 하위 7자리가 일치하지 않습니다.
The lower numbers of the identification number does not match.
*/
	MSG_ID_BE4 = 0xbe4,
#endif
#if PACKETVER >= 20161228
/*20161228 to 20180523
닫기
Close
*/
	MSG_ID_BE5 = 0xbe5,
/*20161228 to 20180523
규칙
Rule
*/
	MSG_ID_BE6 = 0xbe6,
/*20161228 to 20180523
1회 구매
Purchase 1x
*/
	MSG_ID_BE7 = 0xbe7,
/*20161228 to 20180523
10회 구매
Purchase 10x
*/
	MSG_ID_BE8 = 0xbe8,
/*20161228 to 20180523
100회 구매
Purchase 100x
*/
	MSG_ID_BE9 = 0xbe9,
/*20161228 to 20180523
1등 당첨
Win 1st prize
*/
	MSG_ID_BEA = 0xbea,
/*20161228 to 20180523
2등 당첨
Win 2nd prize
*/
	MSG_ID_BEB = 0xbeb,
/*20161228 to 20180523
3등 당첨
Win 3rd prize
*/
	MSG_ID_BEC = 0xbec,
/*20161228 to 20170111
복권 구매 금액
Lottery purchase amount
20170118 to 20180523
현재 사용하지 않음
Currently not in use
*/
	MSG_ID_BED = 0xbed,
/*20161228 to 20170111
참여 캐릭터
Participating character
20170118 to 20180523
현재 사용하지 않음
Currently not in use
*/
	MSG_ID_BEE = 0xbee,
/*20161228 to 20180523
제니 로또 당첨자
Zeny Lottery winner
*/
	MSG_ID_BEF = 0xbef,
/*20161228 to 20170111
복권 진행일
20170118 to 20180523
복권 구매 금액
Lottery purchase amount
*/
	MSG_ID_BF0 = 0xbf0,
/*20161228 to 20180523
참여 캐릭터
Participating character
*/
	MSG_ID_BF1 = 0xbf1,
/*20161228 to 20180523
1등
1st Price
*/
	MSG_ID_BF2 = 0xbf2,
/*20161228 to 20180523
2등
2nd Price
*/
	MSG_ID_BF3 = 0xbf3,
/*20161228 to 20180523
3등
3rd Price
*/
	MSG_ID_BF4 = 0xbf4,
/*20161228 to 20180523
구매 보상 아이템
Purchase Reward Item
*/
	MSG_ID_BF5 = 0xbf5,
/*20161228 to 20180523
^1a1a1a복권 ^b%d개^/b를
^4435b2%dZeny^1a1a1a로
구매하시겠습니까?
^1a1a1a Do you want to purchase ^b%d lottery tickets for 
^4435b2%dZeny^1a1a1a?
*/
	MSG_ID_BF6 = 0xbf6,
/*20161228 to 20180523
복권을 성공적으로 구매하였습니다.
You have successfully purchased the lottery ticket.
*/
	MSG_ID_BF7 = 0xbf7,
/*20161228 to 20180523
소지 제니가 부족하여 복권을 구매 할 수 없습니다.
Not enough Zeny to purchase lottey ticket.
*/
	MSG_ID_BF8 = 0xbf8,
/*20161228 to 20180523
최대 복권 구매 횟수는 1000회를 초과 할 수 없습니다.
You are only able to purchase the tickets upto 1000 times.
*/
	MSG_ID_BF9 = 0xbf9,
/*20161228 to 20180523
예
Yes
*/
	MSG_ID_BFA = 0xbfa,
/*20161228 to 20180523
아니요
No
*/
	MSG_ID_BFB = 0xbfb,
/*20161228 to 20180523
HP
*/
	MSG_ID_BFC = 0xbfc,
/*20161228 to 20180523
SP
*/
	MSG_ID_BFD = 0xbfd,
/*20161228 to 20180523
Lv
*/
	MSG_ID_BFE = 0xbfe,
/*20161228 to 20180523
Lv
*/
	MSG_ID_BFF = 0xbff,
/*20161228 to 20180523
Exp
*/
	MSG_ID_C00 = 0xc00,
/*20161228 to 20180523
 all on
*/
	MSG_ID_C01 = 0xc01,
/*20161228 to 20180523
Play Replay Flie
*/
	MSG_ID_C02 = 0xc02,
/*20161228 to 20180523
P
*/
	MSG_ID_C03 = 0xc03,
/*20161228 to 20180523
Total
*/
	MSG_ID_C04 = 0xc04,
/*20161228 to 20180523
Basicinfo
*/
	MSG_ID_C05 = 0xc05,
/*20161228 to 20180523
Equip
*/
	MSG_ID_C06 = 0xc06,
/*20161228 to 20180523
Item
*/
	MSG_ID_C07 = 0xc07,
/*20161228 to 20180523
Skill
*/
	MSG_ID_C08 = 0xc08,
/*20161228 to 20180523
Guild
*/
	MSG_ID_C09 = 0xc09,
/*20161228 to 20180523
Party
*/
	MSG_ID_C0A = 0xc0a,
/*20161228 to 20180523
Chatting
*/
	MSG_ID_C0B = 0xc0b,
/*20161228 to 20180523
Shortcut
*/
	MSG_ID_C0C = 0xc0c,
/*20161228 to 20180523
Status
*/
	MSG_ID_C0D = 0xc0d,
/*20161228 to 20180523
ALL
All
*/
	MSG_ID_C0E = 0xc0e,
/*20161228 to 20180523
User Defined File Name
*/
	MSG_ID_C0F = 0xc0f,
/*20161228 to 20180523
Repeated File Check
*/
	MSG_ID_C10 = 0xc10,
/*20161228 to 20180523
on
*/
	MSG_ID_C11 = 0xc11,
/*20161228 to 20180523
<Basic Skin>
*/
	MSG_ID_C12 = 0xc12,
/*20161228 to 20180523
Select Skin
*/
	MSG_ID_C13 = 0xc13,
#endif
#if PACKETVER >= 20170111
/*20170111 to 20180523
현재 복권에 참여 중이라 삭제할 수 없습니다
You cannot delete it because you are currently participating in the lottery
*/
	MSG_ID_C14 = 0xc14,
/*20170111 to 20180523
/achievement
*/
	MSG_ID_C15 = 0xc15,
/*20170111 to 20180523
제니 복권
Zeny Lottery ticket
*/
	MSG_ID_C16 = 0xc16,
/*20170111 to 20180523
제니 복권 %d등 당첨 보상
Zenyy Lottery %dprize reward
*/
	MSG_ID_C17 = 0xc17,
/*20170111 to 20180523
%d등 당첨 보상: %s
%dprize reward: %s
*/
	MSG_ID_C18 = 0xc18,
/*20170111 to 20180523
제니 복권 누적 구매 보상
Zeny Lottery Cumulative purchase reward
*/
	MSG_ID_C19 = 0xc19,
/*20170111 to 20180523
누적 %d회 보상: %s
Cumulative %d times reward: %s
*/
	MSG_ID_C1A = 0xc1a,
/*20170111 to 20180523
제니 복권 구매 환불
Zeny Lottery Refund
*/
	MSG_ID_C1B = 0xc1b,
/*20170111 to 20170111
환불 금액: %d Zeny
환불 사유: 서버 내 복권 추첨 달성 실패
20170118 to 20180523
환불 금액: %d Zeny
환불 사유: 서버 내 복권 추첨 달성 실패
Refund amount: %d Zeny
Reason for Refund: Failed to draw lottery in the server
*/
	MSG_ID_C1C = 0xc1c,
/*20170111 to 20180523
미니 파티창 추가
Add Mini Party Chat
*/
	MSG_ID_C1D = 0xc1d,
/*20170111 to 20180523
미니 파티창 삭제
Delete Mini Party Chat
*/
	MSG_ID_C1E = 0xc1e,
#endif
#if PACKETVER >= 20170118
/*20170118 to 20180523
복권 추첨이 모두 종료 되었습니다! 당첨자를 확인해주세요
The lottery draw had ended! Check the winner!
*/
	MSG_ID_C1F = 0xc1f,
/*20170118 to 20180523
%d월 %d일
%dMonth %dDay
*/
	MSG_ID_C20 = 0xc20,
/*20170118 to 20180523
다음 등급까지
Till the next grade
*/
	MSG_ID_C21 = 0xc21,
/*20170118 to 20180523
전체
All
*/
	MSG_ID_C22 = 0xc22,
/*20170118 to 20180523
미완료
Incomplete
*/
	MSG_ID_C23 = 0xc23,
/*20170118 to 20180523
(달성!)
(Accomplished!)
*/
	MSG_ID_C24 = 0xc24,
/*20170118 to 20180523
(미달성)
(Not Accomplished)
*/
	MSG_ID_C25 = 0xc25,
#endif
#if PACKETVER >= 20170208
/*20170208 to 20180523
장비 교체
Change equipment
*/
	MSG_ID_C26 = 0xc26,
/*20170208 to 20180523
CHANGE
*/
	MSG_ID_C27 = 0xc27,
/*20170208 to 20180523
힘 파라메터
 ^cc0000근접 물리 공격력^ffffff, 소지무게
Power Parameter
 ^cc0000Melee PhysicalAttack^ffffff, Carrying Weight
*/
	MSG_ID_C28 = 0xc28,
/*20170208 to 20180523
민첩성 파라메터
^cc0000공격 속도^ffffff, 회피율, 물리 방어력
Agility Parameter
^cc0000Attack Speed^ffffff, Dodge, Physical Defense
*/
	MSG_ID_C29 = 0xc29,
/*20170208 to 20180523
체력 파라메터
^cc0000최대 체력^ffffff, 물리 방어력, 마법 방어력
HP Parameter
^cc0000Max HP^ffffff, Physical Defense, Magic Defense
*/
	MSG_ID_C2A = 0xc2a,
/*20170208 to 20180523
지력 파라메터
^cc0000마법 공격력^ffffff, 캐스팅 시간, 마법 방어력
Intellect Parameter
^cc0000Magic Attack^ffffff, Casting Time, Magic Defense
*/
	MSG_ID_C2B = 0xc2b,
/*20170208 to 20180523
손재주 파라메터
^cc0000원거리 물리 공격력^ffffff, 명중률, 캐스팅 시간, 마법 공격력
Handcraft Parameter
^cc0000Long Range Physical Attack^ffffff, Accuracy, Casting Time, Magic Attack
*/
	MSG_ID_C2C = 0xc2c,
/*20170208 to 20180523
운 파라메터
^cc0000치명타율^ffffff, 명중률, 물리공격력, 마법공격력, 회피율
Moon Parameter
^cc0000Critical Rate^ffffff, Accuracy, Physical Attack, Magic Attack, Dodge
*/
	MSG_ID_C2D = 0xc2d,
/*20170208 to 20180523
물리 공격력
Physical Attack
*/
	MSG_ID_C2E = 0xc2e,
/*20170208 to 20180523
물리 방어력
Physical Defense
*/
	MSG_ID_C2F = 0xc2f,
/*20170208 to 20180523
명중률
Accuracy
*/
	MSG_ID_C30 = 0xc30,
/*20170208 to 20180523
치명타율
Critical Rate
*/
	MSG_ID_C31 = 0xc31,
/*20170208 to 20180523
소속길드
Affiliated Guild
*/
	MSG_ID_C32 = 0xc32,
/*20170208 to 20180523
각 파라메터 레벨업에 사용되는 포인트
Points to level up each Parameter
*/
	MSG_ID_C33 = 0xc33,
/*20170208 to 20180523
마법공격력
Magic Attack
*/
	MSG_ID_C34 = 0xc34,
/*20170208 to 20180523
마법방어력
Magic Defense
*/
	MSG_ID_C35 = 0xc35,
/*20170208 to 20180523
회피율
Dodge
*/
	MSG_ID_C36 = 0xc36,
/*20170208 to 20180523
공격 속도
Attack Speed
*/
	MSG_ID_C37 = 0xc37,
#endif
#if PACKETVER >= 20170215
/*20170215 to 20180523
단축키 안내
Shortcut
*/
	MSG_ID_C38 = 0xc38,
/*20170215 to 20180523
옵션
Option
*/
	MSG_ID_C39 = 0xc39,
/*20170215 to 20180523
스킬 단축키 (F1 ~ F9)
Skill Shortcut Key (F1 ~ F9)
*/
	MSG_ID_C3A = 0xc3a,
/*20170215 to 20180523
이미지 캡쳐
Capture Image
*/
	MSG_ID_C3B = 0xc3b,
/*20170215 to 20180523
확대
Zoom In
*/
	MSG_ID_C3C = 0xc3c,
/*20170215 to 20180523
축소
Zoom Out
*/
	MSG_ID_C3D = 0xc3d,
/*20170215 to 20180523
길드
Guild
*/
	MSG_ID_C3E = 0xc3e,
/*20170215 to 20180523
은행
Bank
*/
	MSG_ID_C3F = 0xc3f,
/*20170215 to 20180523
우편
Mail
*/
	MSG_ID_C40 = 0xc40,
/*20170215 to 20180523
캐시 상점
Cash Shop
*/
	MSG_ID_C41 = 0xc41,
/*20170215 to 20180523
앉기
Sit
*/
	MSG_ID_C42 = 0xc42,
/*20170215 to 20180523
이동
Move
*/
	MSG_ID_C43 = 0xc43,
/*20170215 to 20180523
회전
Rotate
*/
	MSG_ID_C44 = 0xc44,
/*20170215 to 20180523
파티장은 파티장을 다른 파티원에게 위임 후 탈퇴 가능합니다.
The Party Leader can be dropped out only after another party member becomes a Party Leader.
*/
	MSG_ID_C45 = 0xc45,
/*20170215 to 20180523
이 동영상을 그만 보시겠습니까?
Do you want to stop viewing this video?
*/
	MSG_ID_C46 = 0xc46,
/*20170215 to 20180523
 장비가 장비 교체 창에 장착 되었습니다.
 gear has been equipped in the gear equipment pop-up.
*/
	MSG_ID_C47 = 0xc47,
/*20170215 to 20180523
 장비가 장비 교체 창에서 해제 되었습니다.
 gear has been removed in the gear equipment pop-up.
*/
	MSG_ID_C48 = 0xc48,
#endif
#if PACKETVER >= 20170222
/*20170222 to 20180523
현재가 마지막 라인입니다.
This is the last line.
*/
	MSG_ID_C49 = 0xc49,
/*20170222 to 20180523
%.1f%% ( 기본 100%% + 프리미엄 %.1f%%+ %s서버 %.1f%% )
%.1f%% ( Base 100%% + Premium %.1f%%+ %sServer %.1f%% )
*/
	MSG_ID_C4A = 0xc4a,
#endif
#if PACKETVER >= 20170228
/*20170228 to 20180523
한자
Chinese character
*/
	MSG_ID_C4B = 0xc4b,
/*20170228 to 20180523
단축키 설정
Shortcut Settings
*/
	MSG_ID_C4C = 0xc4c,
#endif
#if PACKETVER >= 20170308
/*20170308 to 20180523
당신의 정액제 기간은 %s에 종료됩니다.
Your subscription will be ended on%s.
*/
	MSG_ID_C4D = 0xc4d,
/*20170308 to 20180523
리플레이 파일을 찾지 못하였습니다.
Cannot find the replay file.
*/
	MSG_ID_C4E = 0xc4e,
/*20170308 to 20170801
신발
Head
20170809 to 20180523
의상
Shoes
*/
	MSG_ID_C4F = 0xc4f,
/*20170308 to 20170801
머리
Costume
20170809 to 20180523
신발
Head
*/
	MSG_ID_C50 = 0xc50,
/*20170308 to 20180523
갑옷
Armor
*/
	MSG_ID_C51 = 0xc51,
/*20170308 to 20180523
어깨
Shoulders
*/
	MSG_ID_C52 = 0xc52,
/*20170308 to 20180523
악세
Accessory
*/
	MSG_ID_C53 = 0xc53,
/*20170308 to 20170801
의상
Shoes
20170809 to 20180523
머리
Costume
*/
	MSG_ID_C54 = 0xc54,
/*20170308 to 20180523
차순정렬
Sort Order
*/
	MSG_ID_C55 = 0xc55,
/*20170308 to 20170308

Current admission application state.
20170315 to 20180523
일반 장비
Normal Gear
*/
	MSG_ID_C56 = 0xc56,
/*20170308 to 20170308

Current admission application state.
20170315 to 20180523
특수 장비
Special Gear
*/
	MSG_ID_C57 = 0xc57,
/*20170308 to 20170308

Current admission application state.
20170315 to 20180523
칭호
Style
*/
	MSG_ID_C58 = 0xc58,
#endif
#if PACKETVER >= 20170315
/*20170315 to 20180523
/quake : 화면 흔들림 효과 On/Off
/quake : Screen Shaking Effect On/Off
*/
	MSG_ID_C59 = 0xc59,
/*20170315 to 20180523
/aura2 : 오오라를 완전히 Off 시킬 수 있습니다 On Off
/aura2 : You can completely turn off the aurora On/Off
*/
	MSG_ID_C5A = 0xc5a,
/*20170315 to 20180523
기본 설정
Default Settings
*/
	MSG_ID_C5B = 0xc5b,
/*20170315 to 20180523
고급 설정
Advanced Settings
*/
	MSG_ID_C5C = 0xc5c,
/*20170315 to 20180523
기본설정값이 적용됩니다. 
The Default Settings will be applied. 
*/
	MSG_ID_C5D = 0xc5d,
/*20170315 to 20180523
기본 설정값이 적용됩니다. 동의하십니까?
The Default Settings will be applied. Do you agree?
*/
	MSG_ID_C5E = 0xc5e,
/*20170315 to 20180523
설정값이 적용됩니다. 동의하십니까?
The settings will be applied. Do you agree?
*/
	MSG_ID_C5F = 0xc5f,
/*20170315 to 20180523
설정값을 적용하려면 재시작이 필요합니다. 동의하십니까?
Need to restart to apply the settings. Do you agree?
*/
	MSG_ID_C60 = 0xc60,
/*20170315 to 20180523
안개
Fog
*/
	MSG_ID_C61 = 0xc61,
/*20170315 to 20180523
오오라 간략화
Simplified aurora
*/
	MSG_ID_C62 = 0xc62,
/*20170315 to 20180523
오오라켜기
Turn on aurora
*/
	MSG_ID_C63 = 0xc63,
/*20170315 to 20180523
이펙트 표시
Show Effect
*/
	MSG_ID_C64 = 0xc64,
/*20170315 to 20180523
음영 표시
Show Shadows
*/
	MSG_ID_C65 = 0xc65,
/*20170315 to 20180523
No Shift
*/
	MSG_ID_C66 = 0xc66,
/*20170315 to 20180523
하드웨어 T&L 가속기능을 선택합니다
Select Hardware T&L Acceleration Function
*/
	MSG_ID_C67 = 0xc67,
/*20170315 to 20180523
게임의 해상도를 선택합니다
Select Game Resolution
*/
	MSG_ID_C68 = 0xc68,
/*20170315 to 20180523
전체화면 사용
Use full screen
*/
	MSG_ID_C69 = 0xc69,
/*20170315 to 20180523
마우스 고정
Fix mouse
*/
	MSG_ID_C6A = 0xc6a,
/*20170315 to 20180523
이펙트 설정
Effect Settings
*/
	MSG_ID_C6B = 0xc6b,
/*20170315 to 20180523
Control 설정
Control Settings
*/
	MSG_ID_C6C = 0xc6c,
/*20170315 to 20180523
그래픽 장치 설정
Graphic Device Settings
*/
	MSG_ID_C6D = 0xc6d,
/*20170315 to 20180523
그래픽 해상도 설정
Graphic Resolution Settings
*/
	MSG_ID_C6E = 0xc6e,
/*20170315 to 20180523
전체 화면 유무 설정
Full Screen Settings
*/
	MSG_ID_C6F = 0xc6f,
/*20170315 to 20180523
마우스 고정 여부 설정
Fix mouse Settings
*/
	MSG_ID_C70 = 0xc70,
/*20170315 to 20180523
수수료 : 
Commission : 
*/
	MSG_ID_C71 = 0xc71,
/*20170315 to 20180523
수수료 총액 : 
Total commission amount : 
*/
	MSG_ID_C72 = 0xc72,
/*20170315 to 20180523
수신인 설정
Select receiver
*/
	MSG_ID_C73 = 0xc73,
/*20170315 to 20180523
수신그룹 설정
Select receiving group
*/
	MSG_ID_C74 = 0xc74,
/*20170315 to 20180523
크기 변경(F10)
Change size(F10)
*/
	MSG_ID_C75 = 0xc75,
/*20170315 to 20180523
메일함을 불러오는 중 입니다.
불필요한 메일은 ^c92114삭제^000000해 주세요~!!
Loading the mailbox.
^c92114Delete^000000unnecessary emails!!
*/
	MSG_ID_C76 = 0xc76,
/*20170315 to 20180523
NOW LOADING..
*/
	MSG_ID_C77 = 0xc77,
/*20170315 to 20180523
제목
Title
*/
	MSG_ID_C78 = 0xc78,
/*20170315 to 20180523
보낸이
Sender
*/
	MSG_ID_C79 = 0xc79,
#endif
#if PACKETVER >= 20170322
/*20170322 to 20180523
라그나로크 클라이언트와 동시에 실행이 불가능 합니다. setup을 종료합니다
*/
	MSG_ID_C7A = 0xc7a,
/*20170322 to 20180523
추가 기능 설정
*/
	MSG_ID_C7B = 0xc7b,
/*20170322 to 20180523
This account does not exist.
*/
	MSG_ID_C7C = 0xc7c,
/*20170322 to 20180523
Passwords do not match.
*/
	MSG_ID_C7D = 0xc7d,
/*20170322 to 20180523
Failed to pass IP authentication
*/
	MSG_ID_C7E = 0xc7e,
/*20170322 to 20180523
No identification number, supplement your registration information
*/
	MSG_ID_C7F = 0xc7f,
/*20170322 to 20180523
Account block
*/
	MSG_ID_C80 = 0xc80,
/*20170322 to 20180523
System error
*/
	MSG_ID_C81 = 0xc81,
/*20170322 to 20180523
unknown error found.
*/
	MSG_ID_C82 = 0xc82,
#endif
#if PACKETVER >= 20170329
/*20170329 to 20180523
길안내 아이콘 설정
*/
	MSG_ID_C83 = 0xc83,
/*20170329 to 20180523
길 안내 정보 UI
*/
	MSG_ID_C84 = 0xc84,
/*20170329 to 20180523
길 안내 정보 열기
*/
	MSG_ID_C85 = 0xc85,
/*20170329 to 20180523
현재 위치 공유
*/
	MSG_ID_C86 = 0xc86,
/*20170329 to 20180523
검색결과[0]
*/
	MSG_ID_C87 = 0xc87,
/*20170329 to 20180523
검색&안내
*/
	MSG_ID_C88 = 0xc88,
/*20170329 to 20170329
위치 값은 음수 값이 들어 올 수 없습니다.
20170405 to 20180523
위치가 올바르지 않습니다.
*/
	MSG_ID_C89 = 0xc89,
/*20170329 to 20180523
검색결과[%d]
*/
	MSG_ID_C8A = 0xc8a,
/*20170329 to 20180523
길안내 표시를 위한 아이콘 설정
*/
	MSG_ID_C8B = 0xc8b,
/*20170329 to 20180523
길 찾기에 zeny 허용
*/
	MSG_ID_C8C = 0xc8c,
/*20170329 to 20180523
내비게이션 도킹 해제
*/
	MSG_ID_C8D = 0xc8d,
/*20170329 to 20180523
활성화 하지 않은 계정입니다.
*/
	MSG_ID_C8E = 0xc8e,
#endif
#if PACKETVER >= 20170405
/*20170405 to 20180523
클릭한 위치가 채팅창에 공유 됩니다.
*/
	MSG_ID_C8F = 0xc8f,
/*20170405 to 20180523
4. Service 항목을 선택하면 Zeny&비공정 이용을 고려하여 안내 한다.
*/
	MSG_ID_C90 = 0xc90,
/*20170405 to 20180523
5. [<-] 버튼 : 길안내 모드 <-> 검색 모드를 바꾸거나
*/
	MSG_ID_C91 = 0xc91,
/*20170405 to 20180523
공유하기 모드 -> 서치 모드로 돌아갈때 사용 된다.
*/
	MSG_ID_C92 = 0xc92,
/*20170405 to 20180523
경험치 %lld 얻음
*/
	MSG_ID_C93 = 0xc93,
/*20170405 to 20180523
'%lld'의 경험치를 
*/
	MSG_ID_C94 = 0xc94,
/*20170405 to 20170517
^b- 노점 수수료 안내^/b
노점 설정 가격에 따라 일정 비율의 수수료가 부가됩니다.

	^b> 수수료 비율^/b
각 금액에 따른 수수료의 비율은 아래와 같습니다.

0 z ~ 10,000 z
 = 수수료율 : ^1567fe0%^000000
10,001 z ~ 100,000 z
 = 수수료율 : ^1567fe2%^000000
100,001 z ~ 1,000,000 z
 = 수수료율 : ^1567fe4%^000000
1,000,001 z ~ 10,000,000 z
	 = 수수료율 : ^1567fe6%^000000
10,000,001 z ~ 100,000,000 z
 = 수수료율 : ^1567fe8%^000000
100,000,001 z 이상
 = 수수료율 : ^1567fe10%^000000
20170524 to 20180523
^b- 노점 수수료 안내^/b
노점 설정 가격에 따라 일정 비율의 수수료가 부가됩니다.

	^b> 수수료 비율^/b
각 금액에 따른 수수료의 비율은 아래와 같습니다.

0 z ~ 10,000 z
 = 수수료율 : ^1567fe0%^000000
10,001 z ~ 100,000 z
 = 수수료율 : ^1567fe0%^000000
100,001 z ~ 1,000,000 z
 = 수수료율 : ^1567fe0%^000000
1,000,001 z ~ 10,000,000 z
	 = 수수료율 : ^1567fe0%^000000
10,000,001 z ~ 100,000,000 z
 = 수수료율 : ^1567fe5%^000000
100,000,001 z 이상
 = 수수료율 : ^1567fe5%^000000
*/
	MSG_ID_C95 = 0xc95,
/*20170405 to 20180523
실거래가 : 
*/
	MSG_ID_C96 = 0xc96,
/*20170405 to 20180523
※ 아이템 판매시, 실거래가만큼 제니를 획득합니다.
*/
	MSG_ID_C97 = 0xc97,
/*20170405 to 20180523
※ 아이템 구매시, 실거래가만큼 제니가 차감됩니다.
*/
	MSG_ID_C98 = 0xc98,
/*20170405 to 20180523
채팅방 개설
*/
	MSG_ID_C99 = 0xc99,
#endif
#if PACKETVER >= 20170412
/*20170412 to 20180523
해당 캐릭터는 파티가입이 가능하지 않은 레벨입니다.
*/
	MSG_ID_C9A = 0xc9a,
/*20170412 to 20180523
'%lld'의 잡경험치를 
*/
	MSG_ID_C9B = 0xc9b,
/*20170412 to 20180523
잡경험치 %lld 얻음
*/
	MSG_ID_C9C = 0xc9c,
#endif
#if PACKETVER >= 20170419
/*20170419 to 20180523
현재위치(대로)에는 노점을 개설할 수 없습니다.
*/
	MSG_ID_C9D = 0xc9d,
#endif
#if PACKETVER >= 20170426
/*20170426 to 20180523
초 후 가능합니다.
*/
	MSG_ID_C9E = 0xc9e,
#endif
#if PACKETVER >= 20170517
/*20170517 to 20180523
파티원
*/
	MSG_ID_C9F = 0xc9f,
/*20170517 to 20180523
SNS 전송실패(%d)
*/
	MSG_ID_CA0 = 0xca0,
/*20170517 to 20180523
SNS 서버 연결실패
*/
	MSG_ID_CA1 = 0xca1,
/*20170517 to 20180523
SNS 로그인 후 사용 가능합니다.
*/
	MSG_ID_CA2 = 0xca2,
/*20170517 to 20180523
접속 할 수 있는 주소가 존재하지 않습니다.
*/
	MSG_ID_CA3 = 0xca3,
#endif
#if PACKETVER >= 20170524
/*20170524 to 20180523
미니파티창이 겹쳐져 있어 사용하실 수 없습니다.
*/
	MSG_ID_CA4 = 0xca4,
#endif
#if PACKETVER >= 20170531
/*20170531 to 20180523
나의 판매노점
*/
	MSG_ID_CA5 = 0xca5,
#endif
#if PACKETVER >= 20170614
/*20170614 to 20180523
BOX
*/
	MSG_ID_CA6 = 0xca6,
/*20170614 to 20180523
팁박스
*/
	MSG_ID_CA7 = 0xca7,
#endif
#if PACKETVER >= 20170621
/*20170621 to 20180523
트윗을 성공했습니다.
*/
	MSG_ID_CA8 = 0xca8,
#endif
#if PACKETVER >= 20170628
/*20170628 to 20180523
다시하기
*/
	MSG_ID_CA9 = 0xca9,
/*20170628 to 20170809
제련재료가 변경되어 다시하기가 비활성화 되었습니다.
20170816 to 20180523
다시하기가 비활성화되었습니다. 제련 재료를 다시 선택해주세요.
*/
	MSG_ID_CAA = 0xcaa,
/*20170628 to 20180523
제련석이 부족하여 다시하기가 비활성화 되었습니다.
*/
	MSG_ID_CAB = 0xcab,
/*20170628 to 20180523
제니가 부족하여 다시하기가 비활성화 되었습니다.
*/
	MSG_ID_CAC = 0xcac,
/*20170628 to 20180523
대장장이의 축복이 부족하여 다시하기가 비활성화 되었습니다.
*/
	MSG_ID_CAD = 0xcad,
/*20170628 to 20180523
아이템이 파괴되었습니다.
*/
	MSG_ID_CAE = 0xcae,
/*20170628 to 20180523
모든 스테이터스가 감소되었습니다.
*/
	MSG_ID_CAF = 0xcaf,
/*20170628 to 20180523
모든 스테이터스 감소 효과가 해제되었습니다.
*/
	MSG_ID_CB0 = 0xcb0,
/*20170628 to 20180523
OTP 비밀번호는 8자리 입니다.
*/
	MSG_ID_CB1 = 0xcb1,
#endif
#if PACKETVER >= 20170705
/*20170705 to 20180523
통합계정
*/
	MSG_ID_CB2 = 0xcb2,
/*20170705 to 20180523
라그나로크
*/
	MSG_ID_CB3 = 0xcb3,
/*20170705 to 20180523
서비스 점검 중입니다.
*/
	MSG_ID_CB4 = 0xcb4,
/*20170705 to 20180523
검색어를 입력해주세요
*/
	MSG_ID_CB5 = 0xcb5,
/*20170705 to 20180523
MOTP
*/
	MSG_ID_CB6 = 0xcb6,
/*20170705 to 20180523
인증번호
Identification number.
*/
	MSG_ID_CB7 = 0xcb7,
/*20170705 to 20180523
휴대폰에 다운받은 GNJOY MOTP를 실행하여 인증번호를 입력해 주세요.
*/
	MSG_ID_CB8 = 0xcb8,
#endif
#if PACKETVER >= 20170712
/*20170712 to 20180523
파티장을 위임할 파티원이 존재하지 않습니다. 파티를 해산하시겠습니까?
*/
	MSG_ID_CB9 = 0xcb9,
#endif
#if PACKETVER >= 20170719
/*20170719 to 20180523
 - 만18세이상
*/
	MSG_ID_CBA = 0xcba,
/*20170719 to 20180523
 - 유료서버
*/
	MSG_ID_CBB = 0xcbb,
/*20170719 to 20180523
 - 무료서버
*/
	MSG_ID_CBC = 0xcbc,
/*20170719 to 20180523
쾌적
*/
	MSG_ID_CBD = 0xcbd,
/*20170719 to 20180523
보통
Normal
*/
	MSG_ID_CBE = 0xcbe,
/*20170719 to 20180523
혼잡
*/
	MSG_ID_CBF = 0xcbf,
/*20170719 to 20180523
포화
*/
	MSG_ID_CC0 = 0xcc0,
/*20170719 to 20180523
map
*/
	MSG_ID_CC1 = 0xcc1,
/*20170719 to 20180523
월드창고는 인벤토리 아이템만 입출고 할 수 있습니다.
*/
	MSG_ID_CC2 = 0xcc2,
/*20170719 to 20180523
월드창고에는 펫알을 입고할 수 없습니다.
*/
	MSG_ID_CC3 = 0xcc3,
/*20170719 to 20180523
월드창고에는 제작아이템을 입고할 수 없습니다.
*/
	MSG_ID_CC4 = 0xcc4,
/*20170719 to 20180523
%s 에서는 출고 할 수 없는 아이템입니다.
*/
	MSG_ID_CC5 = 0xcc5,
#endif
#if PACKETVER >= 20170726
/*20170726 to 20180523
던전 파괴
*/
	MSG_ID_CC6 = 0xcc6,
/*20170726 to 20180523
[%s] 님이 제련을 성공하여, [+%d %s] 아이템을 획득하였습니다.
*/
	MSG_ID_CC7 = 0xcc7,
/*20170726 to 20180523
[%s] 님이 [+%d %s] 아이템의 제련에 실패하였습니다.
*/
	MSG_ID_CC8 = 0xcc8,
/*20170726 to 20180523
파티장을 위임한 이후에 탈퇴할 수 있습니다.
*/
	MSG_ID_CC9 = 0xcc9,
#endif
#if PACKETVER >= 20170809
/*20170809 to 20180523
오름
*/
	MSG_ID_CCA = 0xcca,
/*20170809 to 20180523
내림
*/
	MSG_ID_CCB = 0xccb,
/*20170809 to 20180523
기본
*/
	MSG_ID_CCC = 0xccc,
/*20170809 to 20180523
변조된 파일이 발견되었습니다. 게임을 다시 실행시켜주세요.
*/
	MSG_ID_CCD = 0xccd,
#endif
#if PACKETVER >= 20170823
/*20170823 to 20180523
%s 은(는) 이맵에서 이동이 제한된 아이템입니다.
*/
	MSG_ID_CCE = 0xcce,
#endif
#if PACKETVER >= 20170906
/*20170906 to 20180523
스스로
먹이먹기
*/
	MSG_ID_CCF = 0xccf,
/*20170906 to 20180523
로덱스 작성창이 열려있는 동안 호문클루스가 먹이를 먹지 못합니다.
*/
	MSG_ID_CD0 = 0xcd0,
/*20170906 to 20180523
호문클루스가 먹이를 먹었습니다. '%s' 잔여량 %d개
*/
	MSG_ID_CD1 = 0xcd1,
/*20170906 to 20180523
호문클루스 스스로 먹이 먹기 활성화 On
*/
	MSG_ID_CD2 = 0xcd2,
/*20170906 to 20180523
호문클루스 스스로 먹이 먹기 활성화 Off
*/
	MSG_ID_CD3 = 0xcd3,
/*20170906 to 20180523
호문클루스는 주인이 획득하는 경험치의
10%만큼을 자신의 경험치로 분배 받습니다.
*/
	MSG_ID_CD4 = 0xcd4,
/*20170906 to 20180523
확률 : %d%%
*/
	MSG_ID_CD5 = 0xcd5,
/*20170906 to 20180523
해당 대상은 호문의 공격대상이 아닙니다. 'Alt + 우클릭'을 통해 호문클루스의 공격대상을 지정해주세요.
*/
	MSG_ID_CD6 = 0xcd6,
/*20170906 to 20180523
호문의 공격대상이 존재하지 않습니다. 'Alt + 우클릭'을 통해 호문클루스의 공격대상을 지정해주세요.
*/
	MSG_ID_CD7 = 0xcd7,
#endif
#if PACKETVER >= 20170913
/*20170913 to 20180523
판매 리스트
*/
	MSG_ID_CD8 = 0xcd8,
/*20170913 to 20180523
구입 리스트
*/
	MSG_ID_CD9 = 0xcd9,
/*20170913 to 20180523
신규
New
*/
	MSG_ID_CDA = 0xcda,
/*20170913 to 20180523
인기
Headgears
*/
	MSG_ID_CDB = 0xcdb,
/*20170913 to 20180523
한정
Limited
*/
	MSG_ID_CDC = 0xcdc,
/*20170913 to 20180523
임대장비
Rental Items
*/
	MSG_ID_CDD = 0xcdd,
/*20170913 to 20180523
영구장비
Equipments
*/
	MSG_ID_CDE = 0xcde,
/*20170913 to 20180523
버프
Scrolls
*/
	MSG_ID_CDF = 0xcdf,
/*20170913 to 20180523
회복
Consumables
*/
	MSG_ID_CE0 = 0xce0,
/*20170913 to 20180523
기타
Other
*/
	MSG_ID_CE1 = 0xce1,
/*20170913 to 20180523
특가
Special
*/
	MSG_ID_CE2 = 0xce2,
/*20170913 to 20180523
충전하기
*/
	MSG_ID_CE3 = 0xce3,
/*20170913 to 20180523
구입하기
*/
	MSG_ID_CE4 = 0xce4,
/*20170913 to 20171206
https://payment.gnjoy.com/bill/login.grv
20171213 to 20180523
http://member.gnjoy.com/user/pay/chargelist.asp
*/
	MSG_ID_CE5 = 0xce5,
/*20170913 to 20180523
아이템 검색
*/
	MSG_ID_CE6 = 0xce6,
/*20170913 to 20180523
무료캐시
*/
	MSG_ID_CE7 = 0xce7,
/*20170913 to 20180523
무료캐시 사용
*/
	MSG_ID_CE8 = 0xce8,
/*20170913 to 20180523
소지캐시
*/
	MSG_ID_CE9 = 0xce9,
/*20170913 to 20180523
수량갱신
*/
	MSG_ID_CEA = 0xcea,
/*20170913 to 20180523
성제(여)
*/
	MSG_ID_CEB = 0xceb,
/*20170913 to 20180523
소울리퍼(여)
*/
	MSG_ID_CEC = 0xcec,
/*20170913 to 20180523
성제(남)
*/
	MSG_ID_CED = 0xced,
/*20170913 to 20180523
소울리퍼(남)
*/
	MSG_ID_CEE = 0xcee,
#endif
#if PACKETVER >= 20170920
/*20170920 to 20180523
무게가 %d 퍼센트 이상일때는 HP SP가 자연적으로 회복이 되지 않습니다.
*/
	MSG_ID_CEF = 0xcef,
/*20170920 to 20180523
한 번에 구입 가능한 아이템의 가짓수는 8개입니다.
*/
	MSG_ID_CF0 = 0xcf0,
/*20170920 to 20180523
http://gift.zhaouc.com/#/index
http://gift.zhaouc.com/
*/
	MSG_ID_CF1 = 0xcf1,
#endif
#if PACKETVER >= 20170927
/*20170927 to 20180523
UNKNOWN ERROR:%d
*/
	MSG_ID_CF2 = 0xcf2,
/*20170927 to 20180523
NOT USER
*/
	MSG_ID_CF3 = 0xcf3,
/*20170927 to 20180523
THIS ACCOUNT ID IS BLOCKED
*/
	MSG_ID_CF4 = 0xcf4,
/*20170927 to 20180523
COUNTRY REJECT (OR NOT AVALIABLE USER )
*/
	MSG_ID_CF5 = 0xcf5,
/*20170927 to 20180523
NOT MATCH PASSWORD
*/
	MSG_ID_CF6 = 0xcf6,
/*20170927 to 20180523
NOT EMAIL CERT
*/
	MSG_ID_CF7 = 0xcf7,
/*20170927 to 20180523
PAYPAL BLOCK
*/
	MSG_ID_CF8 = 0xcf8,
/*20170927 to 20180523
COUNTRY REJECT
*/
	MSG_ID_CF9 = 0xcf9,
/*20170927 to 20180523
PAYPAL BLOCK
*/
	MSG_ID_CFA = 0xcfa,
/*20170927 to 20180523
WEB BLOCK
*/
	MSG_ID_CFB = 0xcfb,
/*20170927 to 20180523
AGE LIMIT USER
*/
	MSG_ID_CFC = 0xcfc,
/*20170927 to 20180523
PASSWORD HAS NOT BEEN CHANGED FOR MORE THAN 90DAYS
*/
	MSG_ID_CFD = 0xcfd,
/*20170927 to 20180523
INPUT DATA ERROR
*/
	MSG_ID_CFE = 0xcfe,
/*20170927 to 20180523
ERROR DATABASE
*/
	MSG_ID_CFF = 0xcff,
/*20170927 to 20180523
ERROR SYSTEM
*/
	MSG_ID_D00 = 0xd00,
/*20170927 to 20171025
%s 지불
20171101 to 20180523
%s 소모
*/
	MSG_ID_D01 = 0xd01,
/*20170927 to 20180523
비용지불
*/
	MSG_ID_D02 = 0xd02,
/*20170927 to 20180523
출발 가능한 맵이 아닙니다.
*/
	MSG_ID_D03 = 0xd03,
/*20170927 to 20180523
이동 불가능한 맵입니다
*/
	MSG_ID_D04 = 0xd04,
/*20170927 to 20180523
아이템이 부족합니다.
*/
	MSG_ID_D05 = 0xd05,
/*20170927 to 20180523
줄 바꿈 없이 한 줄로 입력해주세요.
*/
	MSG_ID_D06 = 0xd06,
#endif
#if PACKETVER >= 20171011
/*20171011 to 20180523
불량 단어가 포함된 이름은 등록할 수 없습니다.
*/
	MSG_ID_D07 = 0xd07,
#endif
#if PACKETVER >= 20171018
/*20171018 to 20180523
회원 가입을 위해 공식 홈페이지로 이동됩니다.
*/
	MSG_ID_D08 = 0xd08,
#endif
#if PACKETVER >= 20171025
/*20171025 to 20180523
TokenAgency 서버 연결 실패
*/
	MSG_ID_D09 = 0xd09,
/*20171025 to 20180523
과금정보
*/
	MSG_ID_D0A = 0xd0a,
/*20171025 to 20180523
삭제예약
*/
	MSG_ID_D0B = 0xd0b,
/*20171025 to 20180523
예약취소
*/
	MSG_ID_D0C = 0xd0c,
/*20171025 to 20180523
게임시작
*/
	MSG_ID_D0D = 0xd0d,
/*20171025 to 20180523
삭제
*/
	MSG_ID_D0E = 0xd0e,
/*20171025 to 20180523
Character List
*/
	MSG_ID_D0F = 0xd0f,
/*20171025 to 20180523
공지
Notice
*/
	MSG_ID_D10 = 0xd10,
/*20171025 to 20180523
생성
*/
	MSG_ID_D11 = 0xd11,
/*20171025 to 20180523
Hair Style
*/
	MSG_ID_D12 = 0xd12,
/*20171025 to 20180523
Hair Color
*/
	MSG_ID_D13 = 0xd13,
/*20171025 to 20180523
중복확인
*/
	MSG_ID_D14 = 0xd14,
/*20171025 to 20180523
%d시 %d분 %d초
*/
	MSG_ID_D15 = 0xd15,
/*20171025 to 20180523
MOTP 입력 시간이 초과되었습니다. 처음부터 다시 로그인해주십시오.
*/
	MSG_ID_D16 = 0xd16,
/*20171025 to 20180523
뒤로가기
*/
	MSG_ID_D17 = 0xd17,
#endif
#if PACKETVER >= 20171101
/*20171101 to 20180523
아이템을 사용할 수 없습니다.
*/
	MSG_ID_D18 = 0xd18,
/*20171101 to 20180523
동일한 맵으로 이동할 수 없습니다.
*/
	MSG_ID_D19 = 0xd19,
/*20171101 to 20180523
사망시 이동이 불가능합니다.
*/
	MSG_ID_D1A = 0xd1a,
/*20171101 to 20180523
캐릭터 생성
*/
	MSG_ID_D1B = 0xd1b,
#endif
#if PACKETVER >= 20171108
/*20171108 to 20180523
모험가 중개소 등록
*/
	MSG_ID_D1C = 0xd1c,
/*20171108 to 20180523
모집 중단
*/
	MSG_ID_D1D = 0xd1d,
/*20171108 to 20180523
모험가 중개소 설정
*/
	MSG_ID_D1E = 0xd1e,
/*20171108 to 20180523
전 지역
*/
	MSG_ID_D1F = 0xd1f,
/*20171108 to 20180523
직접기재
*/
	MSG_ID_D20 = 0xd20,
/*20171108 to 20180523
검사계열
*/
	MSG_ID_D21 = 0xd21,
/*20171108 to 20180523
법사계열
*/
	MSG_ID_D22 = 0xd22,
/*20171108 to 20180523
궁수계열
*/
	MSG_ID_D23 = 0xd23,
/*20171108 to 20180523
복사계열
*/
	MSG_ID_D24 = 0xd24,
/*20171108 to 20180523
상인계열
*/
	MSG_ID_D25 = 0xd25,
/*20171108 to 20180523
도둑계열
*/
	MSG_ID_D26 = 0xd26,
/*20171108 to 20180523
태권계열
*/
	MSG_ID_D27 = 0xd27,
/*20171108 to 20180523
닌자계열
*/
	MSG_ID_D28 = 0xd28,
/*20171108 to 20180523
건슬링거계열
*/
	MSG_ID_D29 = 0xd29,
/*20171108 to 20180523
도람족계열
*/
	MSG_ID_D2A = 0xd2a,
/*20171108 to 20180523
지역명
*/
	MSG_ID_D2B = 0xd2b,
/*20171108 to 20180523
지역명 검색
*/
	MSG_ID_D2C = 0xd2c,
/*20171108 to 20180523
가입 요청하기
*/
	MSG_ID_D2D = 0xd2d,
/*20171108 to 20180523
신고하기
*/
	MSG_ID_D2E = 0xd2e,
/*20171108 to 20180523
파티 모집 중단
*/
	MSG_ID_D2F = 0xd2f,
/*20171108 to 20180523
지역명을 입력해주세요.
*/
	MSG_ID_D30 = 0xd30,
/*20171108 to 20180523
지역
*/
	MSG_ID_D31 = 0xd31,
/*20171108 to 20180523
전 직업
*/
	MSG_ID_D32 = 0xd32,
/*20171108 to 20180523
로그인
*/
	MSG_ID_D33 = 0xd33,
/*20171108 to 20180523
계정
*/
	MSG_ID_D34 = 0xd34,
/*20171108 to 20180523
종료
Exit
*/
	MSG_ID_D35 = 0xd35,
/*20171108 to 20180523
신청
*/
	MSG_ID_D36 = 0xd36,
/*20171108 to 20180523
접속
*/
	MSG_ID_D37 = 0xd37,
/*20171108 to 20180523
확인
*/
	MSG_ID_D38 = 0xd38,
/*20171108 to 20180523
휴대폰에 다운받은 GNJOY MOTP를
*/
	MSG_ID_D39 = 0xd39,
/*20171108 to 20180523
실행하여 인증번호를 입력해 주세요.
*/
	MSG_ID_D3A = 0xd3a,
/*20171108 to 20180523
NPC가 있는 맵의 랜덤 좌표로 이동 됩니다.
*/
	MSG_ID_D3B = 0xd3b,
/*20171108 to 20180523
태권
*/
	MSG_ID_D3C = 0xd3c,
#endif
#if PACKETVER >= 20171115
/*20171115 to 20171115
 님이 차단 상태로 설정되었습니다.
20171122 to 20180523
 에게 전체채팅 및 귓말 거부상태
*/
	MSG_ID_D3D = 0xd3d,
/*20171115 to 20171115
 님을 차단 상태로 설정하는데 실패하였습니다.
20171122 to 20180523
 에게 전체채팅 및 귓말 거부 요청 실패
*/
	MSG_ID_D3E = 0xd3e,
/*20171115 to 20171115
 님을 차단 상태로 설정하는데 실패하였습니다.(인원 초과)
20171122 to 20180523
 에게 전체채팅 및 귓말 거부 요청실패 (인원초과)
*/
	MSG_ID_D3F = 0xd3f,
/*20171115 to 20171115
 님이 차단 해제 되었습니다.
20171122 to 20180523
 에게 전체채팅 및 귓말 가능상태
*/
	MSG_ID_D40 = 0xd40,
/*20171115 to 20171115
 님을 차단 해제하는데 실패하였습니다.
20171122 to 20180523
 에게 전체채팅 및 귓말 가능 요청실패
*/
	MSG_ID_D41 = 0xd41,
/*20171115 to 20171115
 님을 차단 해제하는데 실패하였습니다.(인원 초과)
20171122 to 20180523
 에게 전체채팅 및 귓말 가능 요청실패 (인원초과)
*/
	MSG_ID_D42 = 0xd42,
/*20171115 to 20180523
차단 리스트가 없습니다
*/
	MSG_ID_D43 = 0xd43,
/*20171115 to 20180523
-차단 리스트-
*/
	MSG_ID_D44 = 0xd44,
/*20171115 to 20180523
진행중
Act
*/
	MSG_ID_D45 = 0xd45,
/*20171115 to 20180523
추천
Rec
*/
	MSG_ID_D46 = 0xd46,
/*20171115 to 20180523
보류중
Pen
*/
	MSG_ID_D47 = 0xd47,
/*20171115 to 20180523
QUEST
*/
	MSG_ID_D48 = 0xd48,
/*20171115 to 20180523
내용
For
*/
	MSG_ID_D49 = 0xd49,
/*20171115 to 20180523
몬스터
*/
	MSG_ID_D4A = 0xd4a,
/*20171115 to 20180523
보상
*/
	MSG_ID_D4B = 0xd4b,
/*20171115 to 20180523
EXP
*/
	MSG_ID_D4C = 0xd4c,
/*20171115 to 20180523
JEXP
*/
	MSG_ID_D4D = 0xd4d,
/*20171115 to 20180523
아이템
Item
*/
	MSG_ID_D4E = 0xd4e,
/*20171115 to 20180523
진행/보류
*/
	MSG_ID_D4F = 0xd4f,
/*20171115 to 20180523
하단으로 이동
*/
	MSG_ID_D50 = 0xd50,
/*20171115 to 20180523
간편 퀘스트창에 표시
*/
	MSG_ID_D51 = 0xd51,
/*20171115 to 20180523
입력시간
*/
	MSG_ID_D52 = 0xd52,
#endif
#if PACKETVER >= 20171122
/*20171122 to 20180523
아이디 저장
*/
	MSG_ID_D53 = 0xd53,
/*20171122 to 20180523
비밀번호
Password
*/
	MSG_ID_D54 = 0xd54,
/*20171122 to 20180523
아이디
*/
	MSG_ID_D55 = 0xd55,
/*20171122 to 20180523
회원가입
*/
	MSG_ID_D56 = 0xd56,
/*20171122 to 20180523
노비스계열
*/
	MSG_ID_D57 = 0xd57,
/*20171122 to 20180523
슈퍼노비스계열
*/
	MSG_ID_D58 = 0xd58,
/*20171122 to 20180523
모험가 중개소 등록에 실패했습니다.
*/
	MSG_ID_D59 = 0xd59,
/*20171122 to 20180523
모험가 중개소에 등록되었습니다.
*/
	MSG_ID_D5A = 0xd5a,
/*20171122 to 20180328
직업을 한 개 이상 선택해주세요.
20180404 to 20180523
모집을 희망하는 파티원의 직업을 한 개 이상 선택해 주세요.
*/
	MSG_ID_D5B = 0xd5b,
/*20171122 to 20180523
지역명을 두 글자 이상 입력해주세요.
*/
	MSG_ID_D5C = 0xd5c,
/*20171122 to 20180523
%.1f%% (+ %s서버 %.1f%%)
*/
	MSG_ID_D5D = 0xd5d,
/*20171122 to 20180523
/ex (캐릭터이름) or /차단 (캐릭터이름) : 해당 캐릭터에 대해 전체채팅 및 귓말 차단
*/
	MSG_ID_D5E = 0xd5e,
/*20171122 to 20180523
/in (캐릭터이름) or /해제 (캐릭터이름) : 해당 캐릭터에 대해 전체채팅 및 귓말 허용
*/
	MSG_ID_D5F = 0xd5f,
/*20171122 to 20180523
/ex or /차단 : 전체채팅 및 귓말 차단 캐릭터 리스트
*/
	MSG_ID_D60 = 0xd60,
/*20171122 to 20180523
/exall or /차단전부 : 모두에게 전체채팅 및 귓말 차단
*/
	MSG_ID_D61 = 0xd61,
/*20171122 to 20180523
/inall or /해제전부 : 모두에게 전체채팅 및 귓말 허용
*/
	MSG_ID_D62 = 0xd62,
/*20171122 to 20180523
모두에게 전체채팅 및 귓말 거부상태
*/
	MSG_ID_D63 = 0xd63,
/*20171122 to 20180523
모두에게 전체채팅 및 귓말 거부요청 실패
*/
	MSG_ID_D64 = 0xd64,
/*20171122 to 20180523
모두에게 전체채팅 및 귓말 가능상태
*/
	MSG_ID_D65 = 0xd65,
/*20171122 to 20180523
모두에게 전체채팅 및 귓말 가능요청 실패
*/
	MSG_ID_D66 = 0xd66,
/*20171122 to 20180523
오프닝
*/
	MSG_ID_D67 = 0xd67,
#endif
#if PACKETVER >= 20171206
/*20171206 to 20180523
로그인 화면으로 돌아가시겠습니까?
*/
	MSG_ID_D68 = 0xd68,
/*20171206 to 20180523
힘과 공격력이 강해졌습니다.
*/
	MSG_ID_D69 = 0xd69,
/*20171206 to 20180523
힘, 지능, 손재주 및 명중률이 증가하였습니다.
*/
	MSG_ID_D6A = 0xd6a,
/*20171206 to 20180523
방어력 및 HP가 증가되었습니다.
*/
	MSG_ID_D6B = 0xd6b,
/*20171206 to 20180523
젤스타
*/
	MSG_ID_D6C = 0xd6c,
/*20171206 to 20180523
계정버프
*/
	MSG_ID_D6D = 0xd6d,
/*20171206 to 20180523
정액서비스
*/
	MSG_ID_D6E = 0xd6e,
#endif
#if PACKETVER >= 20171213
/*20171213 to 20180523
현재 접속이 지연되고 있습니다. 순차적으로 접속이 가능하니 잠시 후 재접속 부탁드립니다.
*/
	MSG_ID_D6F = 0xd6f,
/*20171213 to 20180523
현재 접속이 지연되고 있으니 잠시 후 재접속 부탁드립니다.
*/
	MSG_ID_D70 = 0xd70,
/*20171213 to 20180523
불량 단어가 포함된 이름은 검색할 수 없습니다.
*/
	MSG_ID_D71 = 0xd71,
/*20171213 to 20180523
파티 마스터가 요청을 받을 수 없는 맵에 있습니다.
*/
	MSG_ID_D72 = 0xd72,
/*20171213 to 20180523
파티를 찾을 수 없습니다.
*/
	MSG_ID_D73 = 0xd73,
/*20171213 to 20180328
님의 파티요청입니다.
20180404 to 20180523
님의 파티 가입 요청입니다.
*/
	MSG_ID_D74 = 0xd74,
#endif
#if PACKETVER >= 20171220
/*20171220 to 20180523
http://ro.gnjoy.com
*/
	MSG_ID_D75 = 0xd75,
/*20171220 to 20180523
▲
*/
	MSG_ID_D76 = 0xd76,
/*20171220 to 20180523
▼
*/
	MSG_ID_D77 = 0xd77,
#endif
#if PACKETVER >= 20171227
/*20171227 to 20180523
이미 친구입니다
*/
	MSG_ID_D78 = 0xd78,
/*20171227 to 20180523
상대방을 찾을 수 없습니다
*/
	MSG_ID_D79 = 0xd79,
/*20171227 to 20180523
이미 다른 캐릭터가 친구 신청 중입니다.
*/
	MSG_ID_D7A = 0xd7a,
/*20171227 to 20180523
혼구슬 표시 ON
*/
	MSG_ID_D7B = 0xd7b,
/*20171227 to 20180523
혼구슬 표시 OFF
*/
	MSG_ID_D7C = 0xd7c,
#endif
#if PACKETVER >= 20180117
/*20180117 to 20180523
해당 계정은 2차 비밀번호 오입력으로 인해 게임내 접속이 제한된 상태입니다. 
 %02d시간 %02d분 후에 접속제한이 해제되며, 접속제한의 해제는 홈페이지 -> 개인정보변경 -> 2차 비밀번호 에서 본인인증 후 진행해주시기 바랍니다.
*/
	MSG_ID_D7D = 0xd7d,
/*20180117 to 20180523
보안패스워드를 3회이상 틀리셨습니다. 계정 보안을 위해 24시간동안 게임내 접속이 제한됩니다.
 접속제한의 해제는 홈페이지 -> 개인정보변경 -> 2차 비밀번호 에서 본인인증 후 진행해주시기 바랍니다.
*/
	MSG_ID_D7E = 0xd7e,
/*20180117 to 20180523
운영진
*/
	MSG_ID_D7F = 0xd7f,
/*20180117 to 20180523
%d일차 출석 보상이 지급되었습니다.
*/
	MSG_ID_D80 = 0xd80,
/*20180117 to 20180117
계정설정정보 받아오는데 실패 했습니다.( 재시도를 위해서는 재시작 해야 합니다. )
20180124 to 20180523
계정 설정 데이터를 불러오는 중에 오류가 발생했습니다. ( 재시도를 위해서는 재시작 해야 합니다. )
*/
	MSG_ID_D81 = 0xd81,
/*20180117 to 20180523
해당 스킬은 파티 상태에서 사용 가능합니다.
*/
	MSG_ID_D82 = 0xd82,
#endif
#if PACKETVER >= 20180124
/*20180124 to 20180523
파티 모집을 중단하였습니다.
*/
	MSG_ID_D83 = 0xd83,
/*20180124 to 20180523
길드 상납 경험치는 최대 %d%%까지 가능합니다.
*/
	MSG_ID_D84 = 0xd84,
/*20180124 to 20180523
길드 레벨이 최대여서 더 이상 경험치를 상납할 수 없습니다.
*/
	MSG_ID_D85 = 0xd85,
#endif
#if PACKETVER >= 20180207
/*20180207 to 20180523
계정보안을 위하여 MOTP미사용자는 홈페이지 로그인만 가능합니다.
홈페이지로 로그인을 시도해주시기 바랍니다.
*/
	MSG_ID_D86 = 0xd86,
/*20180207 to 20180523
물리 공격력과 마법 공격력이 향상되었습니다.
*/
	MSG_ID_D87 = 0xd87,
/*20180207 to 20180523
물리 공격력과 마법 공격력이 감소되었습니다.
*/
	MSG_ID_D88 = 0xd88,
/*20180207 to 20180523
%s 출석체크 보상
%s Attendance Check Reward
*/
	MSG_ID_D89 = 0xd89,
/*20180207 to 20180509
이벤트 기간 : %02d월 %02d일 ~ %2d월 %2d일 24:00까지
Event period : From %02d/%02d ~ Until %2d/%2d (Month/Day) 24:00
20180516 to 20180523
이벤트 기간 : %02d월 %02d일 ~ %02d월 %02d일 24:00까지
*/
	MSG_ID_D8A = 0xd8a,
/*20180207 to 20180523
%d일차
%d Day
*/
	MSG_ID_D8B = 0xd8b,
/*20180207 to 20180523
%d일차 출석체크
클릭해주세요~!
%d Day attendance check
Please click~!
*/
	MSG_ID_D8C = 0xd8c,
/*20180207 to 20180523
%d일차 출석 성공!
%d Day attendance success!
*/
	MSG_ID_D8D = 0xd8d,
/*20180207 to 20180523
D-day
*/
	MSG_ID_D8E = 0xd8e,
/*20180207 to 20180523
일
Day
*/
	MSG_ID_D8F = 0xd8f,
/*20180207 to 20180523
출석체크에 실패하였습니다. 다시 실행해주세요.
Attendance Check failed. Please run again.
*/
	MSG_ID_D90 = 0xd90,
/*20180207 to 20180523
출석체크
Attendance Check
*/
	MSG_ID_D91 = 0xd91,
/*20180207 to 20180523
현재 출석체크 이벤트 기간이 아닙니다
This is not the current attendance check event
*/
	MSG_ATTENDANCE_UNAVAILABLE = 0xd92,
/*20180207 to 20180328
길드 상납 경험치가 max에 도달하여, 더 이상 길드 경험치를 누적할 수 없습니다
20180404 to 20180523
길드 상납 경험치가 max에 도달하여, 더 이상 길드 경험치를 누적할 수 없습니다.
*/
	MSG_ID_D93 = 0xd93,
/*20180207 to 20180523
개인 상납 경험치가 max에 도달하여, 더 이상 길드 경험치를 누적할 수 없습니다.
*/
	MSG_ID_D94 = 0xd94,
#endif
#if PACKETVER >= 20180213
/*20180213 to 20180523
메시지
*/
	MSG_ID_D95 = 0xd95,
/*20180213 to 20180523
트위터에 메세지 전송을 실패 했습니다.
*/
	MSG_ID_D96 = 0xd96,
/*20180213 to 20180523
영문 4자, 한글 2자 이상으로 입력해야 합니다.
Enter 4 english words and 2 chinese words
*/
	MSG_ID_D97 = 0xd97,
#endif
#if PACKETVER >= 20180307
/*20180307 to 20180523
몬스터의 테이밍이 불가능한 지역입니다.
*/
	MSG_ID_D98 = 0xd98,
#endif
#if PACKETVER >= 20180321
/*20180321 to 20180523
순위를 가져오고 있습니다...
*/
	MSG_ID_D99 = 0xd99,
/*20180321 to 20180523
해당 스킬은 파티장일때만 사용 가능합니다.
*/
	MSG_ID_D9A = 0xd9a,
#endif
#if PACKETVER >= 20180404
/*20180404 to 20180523
파트너의 SP가 부족하거나, 스킬 사용 불가 상태입니다.
*/
	MSG_ID_D9B = 0xd9b,
/*20180404 to 20180523
아르바이트 노점 강제 종료 알림메일
*/
	MSG_ID_D9C = 0xd9c,
/*20180404 to 20180523
안녕하세요. 운영팀입니다.
해당 아르바이트 노점은 운영정책 위배되는 사항이 확인되어 강제 종료되었습니다.
자세한 확인을 원하시는 경우에는 1:1 문의를 접수해 주시기 바랍니다.
감사합니다
*/
	MSG_ID_D9D = 0xd9d,
/*20180404 to 20180523
50% 이상의 값을 입력할 수 없습니다.
*/
	MSG_ID_D9E = 0xd9e,
/*20180404 to 20180523
파티 가입 요청을 보냈습니다.
*/
	MSG_ID_D9F = 0xd9f,
/*20180404 to 20180523
모험가 중개소에 파티를 등록할 수 없습니다
*/
	MSG_ID_DA0 = 0xda0,
/*20180404 to 20180523
수락
*/
	MSG_ID_DA1 = 0xda1,
/*20180404 to 20180523
거절
*/
	MSG_ID_DA2 = 0xda2,
/*20180404 to 20180523
설정 권한은 파티장에게 있습니다.
*/
	MSG_ID_DA3 = 0xda3,
/*20180404 to 20180523
해당 캐릭터를 찾을 수 없습니다.
*/
	MSG_ID_DA4 = 0xda4,
/*20180404 to 20180523
노점 강제 철거
*/
	MSG_ID_DA5 = 0xda5,
/*20180404 to 20180523
해당 파티의 파티장을 찾을 수 없습니다.
*/
	MSG_ID_DA6 = 0xda6,
/*20180404 to 20180523
잡레벨이 낮아 파티에 가입 할 수 없습니다.
*/
	MSG_ID_DA7 = 0xda7,
/*20180404 to 20180523
현재 요청자가 파티가입이 불가능한 지역에 있습니다.
*/
	MSG_ID_DA8 = 0xda8,
/*20180404 to 20180523
파티 인원수가 초과되었습니다.
*/
	MSG_ID_DA9 = 0xda9,
/*20180404 to 20180523
%s 파티의 파티장이 파티 가입을 승인했습니다.
*/
	MSG_ID_DAA = 0xdaa,
/*20180404 to 20180523
%s 파티의 파티장이 파티 가입을 거부했습니다.
*/
	MSG_ID_DAB = 0xdab,
/*20180404 to 20180523
%s 님이 이미 파티에 가입 중입니다.
*/
	MSG_ID_DAC = 0xdac,
/*20180404 to 20180523
%s 님의 파티 가입을 수락했습니다.
*/
	MSG_ID_DAD = 0xdad,
/*20180404 to 20180523
%s 님의 파티 가입을 거부했습니다.
*/
	MSG_ID_DAE = 0xdae,
/*20180404 to 20180523
파티 요청을 받을 수 없는 상태여서 %s님의 신청이 거절되었습니다.
*/
	MSG_ID_DAF = 0xdaf,
/*20180404 to 20180523
모험가 중개소 리스트
*/
	MSG_ID_DB0 = 0xdb0,
/*20180404 to 20180523
파티 가입 요청
*/
	MSG_ID_DB1 = 0xdb1,
/*20180404 to 20180523
파티장이 아닌 경우, 모험가 중개소에 파티를 등록할 수 없습니다.
*/
	MSG_ID_DB2 = 0xdb2,
/*20180404 to 20180404
파티 모집 중단에 실패했습니다.
20180418 to 20180523
파티 모집을 중단할 수 없습니다.
*/
	MSG_ID_DB3 = 0xdb3,
#endif
#if PACKETVER >= 20180418
/*20180418 to 20180523
존재하지 않는 파티 글입니다.
*/
	MSG_ID_DB4 = 0xdb4,
/*20180418 to 20180418
시야 확장
20180425 to 20180523
Zoom Out
*/
	MSG_ID_DB5 = 0xdb5,
/*20180418 to 20180418
%s : 시야확장을 켜거나 끌수 있습니다 On Off
20180425 to 20180523
%s : Zoom Out을 켜거나 끌수 있습니다 On Off
*/
	MSG_ID_DB6 = 0xdb6,
/*20180418 to 20180418
시야를 확장합니다(On)
20180425 to 20180523
Zoom Out 기능을 켭니다 (On)
*/
	MSG_ID_DB7 = 0xdb7,
/*20180418 to 20180418
시야확장을 해제합니다(Off)
20180425 to 20180523
Zoom Out 기능을 해제합니다 (Off)
*/
	MSG_ID_DB8 = 0xdb8,
/*20180418 to 20180418
/expandsight
20180425 to 20180523
/zoom
*/
	MSG_ID_DB9 = 0xdb9,
/*20180418 to 20180523
모험가 중개소
*/
	MSG_ID_DBA = 0xdba,
/*20180418 to 20180523
파티장인 경우, 가입 요청을 할 수 없습니다.
*/
	MSG_ID_DBB = 0xdbb,
/*20180418 to 20180523
모험가 중개소에 등록 중입니다. 잠시만 기다려 주세요.
*/
	MSG_ID_DBC = 0xdbc,
/*20180418 to 20180523
더 이상 직업을 선택할 수 없습니다.
*/
	MSG_ID_DBD = 0xdbd,
/*20180418 to 20180523
게임 중 해당 유저의 가입 요청을 받지 않습니다.
*/
	MSG_ID_DBE = 0xdbe,
#endif
#if PACKETVER >= 20180502
/*20180502 to 20180523
잠시 후 다시 열어주시기 바랍니다.
*/
	MSG_ID_DBF = 0xdbf,
/*20180502 to 20180523
공성시작 전 %d분 동안은 해당 기능을 이용하실 수 없습니다.
*/
	MSG_ID_DC0 = 0xdc0,
#endif
#if PACKETVER >= 20180516
/*20180516 to 20180523
/viewclear
*/
	MSG_ID_DC1 = 0xdc1,
/*20180516 to 20180523
건물 반 투명화 ON
*/
	MSG_ID_DC2 = 0xdc2,
/*20180516 to 20180523
건물 반 투명화 OFF
*/
	MSG_ID_DC3 = 0xdc3,
/*20180516 to 20180523
건물 투명화
*/
	MSG_ID_DC4 = 0xdc4,
/*20180516 to 20180523
알로 되돌리기가 실패했습니다. 로덱스 작성창을 닫아주세요.
*/
	MSG_ID_DC5 = 0xdc5,
/*20180516 to 20180523
Emblem Frame
*/
	MSG_ID_DC6 = 0xdc6,
/*20180516 to 20180523
Emblem 테두리를 그려줍니다
*/
	MSG_ID_DC7 = 0xdc7,
/*20180516 to 20180523
Emblem 테두리를 그려주지 않습니다
*/
	MSG_ID_DC8 = 0xdc8,
#endif

#if PACKETVER >= 20180605
/*20180605 to latest
ìž¥ì°©ëœ ë¬´ê¸°ê°€ ì—†ìŠµë‹ˆë‹¤.
*/
	MSG_ID_DC9 = 0xdc9,
/*20180605 to latest
ì—ë„ˆì§€ êµ¬ì²´ê°€ ë¶€ì¡±í•©ë‹ˆë‹¤.
*/
	MSG_ID_DCA = 0xdca,
/*20180605 to latest
ë°°ìš¸ ìˆ˜ ì—†ëŠ” ìŠ¤í‚¬(%s)ì´ í¬í•¨ë˜ì–´ìžˆìŠµë‹ˆë‹¤.
*/
	MSG_ID_DCB = 0xdcb,
/*20180605 to latest
/frame
*/
	MSG_ID_DCC = 0xdcc,
#endif
#if PACKETVER >= 20180620
/*20180620 to latest
ì›¨í° ë¸”ë¡œí‚¹ ë°œë™í›„ ì œí•œì‹œê°„ ë‚´ì— ì‚¬ìš©ê°€ëŠ¥í•œ ìŠ¤í‚¬ìž…ë‹ˆë‹¤.
*/
	MSG_ID_DCD = 0xdcd,
#endif
#if PACKETVER >= 20180704
/*20180704 to latest
ì•„ì´ë””í˜¹ì€ íŒ¨ìŠ¤ì›Œë“œê°€ ìž˜ëª»ë˜ì—ˆìë‹ˆë‹¤.
*/
	MSG_ID_DCE = 0xdce,
#endif
#if PACKETVER >= 20180718
/*20180718 to latest
E X P : %.1f%% ( basic 100.0%% %s %.1f%%)
*/
	MSG_ID_DCF = 0xdcf,
/*20180718 to latest
DROP  : %.1f%% ( basic 100.0%% %s %.1f%%)
*/
	MSG_ID_DD0 = 0xdd0,
/*20180718 to latest
DEATH : %.1f%% ( basic 100.0%% %s %.1f%%)
*/
	MSG_ID_DD1 = 0xdd1,
#endif

};
#endif /* MAP_MESSAGES_MAIN_H */
