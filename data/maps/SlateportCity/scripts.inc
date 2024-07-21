# 1 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 21 "data/maps/SlateportCity/scripts.pory"

# 22 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 23 "data/maps/SlateportCity/scripts.pory"

# 24 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 25 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 27 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 28 "data/maps/SlateportCity/scripts.pory"

# 29 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 30 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 31 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 32 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 34 "data/maps/SlateportCity/scripts.pory"
	end
# 35 "data/maps/SlateportCity/scripts.pory"

# 36 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 37 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 38 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 39 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 40 "data/maps/SlateportCity/scripts.pory"
	return
# 41 "data/maps/SlateportCity/scripts.pory"

# 42 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 43 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 57 "data/maps/SlateportCity/scripts.pory"
	return
# 58 "data/maps/SlateportCity/scripts.pory"

# 59 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 60 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 61 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 62 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 63 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 64 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 65 "data/maps/SlateportCity/scripts.pory"
	return
# 66 "data/maps/SlateportCity/scripts.pory"

# 67 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 68 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 70 "data/maps/SlateportCity/scripts.pory"
	return
# 71 "data/maps/SlateportCity/scripts.pory"

# 72 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 73 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 74 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 75 "data/maps/SlateportCity/scripts.pory"

# 76 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 77 "data/maps/SlateportCity/scripts.pory"
	lockall
# 78 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 79 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 80 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 81 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 83 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 84 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 85 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 87 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 88 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 91 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 92 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 93 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 94 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 96 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 97 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 98 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 99 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 101 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 102 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 104 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 105 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 106 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 107 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 108 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 109 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 110 "data/maps/SlateportCity/scripts.pory"
	end
# 111 "data/maps/SlateportCity/scripts.pory"

# 112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 113 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 114 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 115 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 116 "data/maps/SlateportCity/scripts.pory"
	step_end
# 117 "data/maps/SlateportCity/scripts.pory"

# 118 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 119 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	step_end
# 127 "data/maps/SlateportCity/scripts.pory"

# 128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 129 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	step_end
# 138 "data/maps/SlateportCity/scripts.pory"

# 139 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 140 "data/maps/SlateportCity/scripts.pory"
	lock
# 141 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 142 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 143 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 144 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 145 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 146 "data/maps/SlateportCity/scripts.pory"
	release
# 147 "data/maps/SlateportCity/scripts.pory"
	end
# 148 "data/maps/SlateportCity/scripts.pory"

# 149 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 151 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 152 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 157 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 158 "data/maps/SlateportCity/scripts.pory"
	release
# 159 "data/maps/SlateportCity/scripts.pory"
	end
# 160 "data/maps/SlateportCity/scripts.pory"

# 161 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 162 "data/maps/SlateportCity/scripts.pory"
	lock
# 163 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 164 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 165 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 166 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 167 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 168 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 169 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 170 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 171 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 172 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 173 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 174 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 175 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 176 "data/maps/SlateportCity/scripts.pory"
	release
# 177 "data/maps/SlateportCity/scripts.pory"
	end
# 178 "data/maps/SlateportCity/scripts.pory"

# 179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 180 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 181 "data/maps/SlateportCity/scripts.pory"
	release
# 182 "data/maps/SlateportCity/scripts.pory"
	end
# 183 "data/maps/SlateportCity/scripts.pory"

# 184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 185 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 186 "data/maps/SlateportCity/scripts.pory"
	release
# 187 "data/maps/SlateportCity/scripts.pory"
	end
# 188 "data/maps/SlateportCity/scripts.pory"

# 189 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 190 "data/maps/SlateportCity/scripts.pory"
	lock
# 191 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 192 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 193 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 194 "data/maps/SlateportCity/scripts.pory"
	release
# 195 "data/maps/SlateportCity/scripts.pory"
	end
# 196 "data/maps/SlateportCity/scripts.pory"

# 197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 198 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 199 "data/maps/SlateportCity/scripts.pory"
	release
# 200 "data/maps/SlateportCity/scripts.pory"
	end
# 201 "data/maps/SlateportCity/scripts.pory"

# 202 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 203 "data/maps/SlateportCity/scripts.pory"
	lock
# 204 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 205 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 206 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 207 "data/maps/SlateportCity/scripts.pory"
	release
# 208 "data/maps/SlateportCity/scripts.pory"
	end
# 209 "data/maps/SlateportCity/scripts.pory"

# 210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 211 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 212 "data/maps/SlateportCity/scripts.pory"
	release
# 213 "data/maps/SlateportCity/scripts.pory"
	end
# 214 "data/maps/SlateportCity/scripts.pory"

# 215 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 216 "data/maps/SlateportCity/scripts.pory"
	lock
# 217 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 218 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 219 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 220 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 221 "data/maps/SlateportCity/scripts.pory"
	release
# 222 "data/maps/SlateportCity/scripts.pory"
	end
# 223 "data/maps/SlateportCity/scripts.pory"

# 224 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 225 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 226 "data/maps/SlateportCity/scripts.pory"
	release
# 227 "data/maps/SlateportCity/scripts.pory"
	end
# 228 "data/maps/SlateportCity/scripts.pory"

# 229 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 230 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 231 "data/maps/SlateportCity/scripts.pory"
	release
# 232 "data/maps/SlateportCity/scripts.pory"
	end
# 233 "data/maps/SlateportCity/scripts.pory"

# 234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 235 "data/maps/SlateportCity/scripts.pory"
	lock
# 236 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 237 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 238 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 239 "data/maps/SlateportCity/scripts.pory"
	release
# 240 "data/maps/SlateportCity/scripts.pory"
	end
# 241 "data/maps/SlateportCity/scripts.pory"

# 242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 243 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 244 "data/maps/SlateportCity/scripts.pory"
	release
# 245 "data/maps/SlateportCity/scripts.pory"
	end
# 246 "data/maps/SlateportCity/scripts.pory"

# 247 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 248 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 249 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 250 "data/maps/SlateportCity/scripts.pory"
	end
# 251 "data/maps/SlateportCity/scripts.pory"

# 252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 253 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 254 "data/maps/SlateportCity/scripts.pory"
	end
# 255 "data/maps/SlateportCity/scripts.pory"

# 256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 257 "data/maps/SlateportCity/scripts.pory"
	lock
# 258 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 259 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 260 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 261 "data/maps/SlateportCity/scripts.pory"
	release
# 262 "data/maps/SlateportCity/scripts.pory"
	end
# 263 "data/maps/SlateportCity/scripts.pory"

# 264 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 265 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 266 "data/maps/SlateportCity/scripts.pory"
	release
# 267 "data/maps/SlateportCity/scripts.pory"
	end
# 268 "data/maps/SlateportCity/scripts.pory"

# 269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 270 "data/maps/SlateportCity/scripts.pory"
	lock
# 271 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 272 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 273 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 274 "data/maps/SlateportCity/scripts.pory"
	release
# 275 "data/maps/SlateportCity/scripts.pory"
	end
# 276 "data/maps/SlateportCity/scripts.pory"

# 277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 278 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 279 "data/maps/SlateportCity/scripts.pory"
	release
# 280 "data/maps/SlateportCity/scripts.pory"
	end
# 281 "data/maps/SlateportCity/scripts.pory"

# 282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 283 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 284 "data/maps/SlateportCity/scripts.pory"
	end
# 285 "data/maps/SlateportCity/scripts.pory"

# 286 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 287 "data/maps/SlateportCity/scripts.pory"
	lockall
# 288 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 289 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 290 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 291 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 292 "data/maps/SlateportCity/scripts.pory"
	end
# 293 "data/maps/SlateportCity/scripts.pory"

# 294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 295 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 296 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 297 "data/maps/SlateportCity/scripts.pory"
	end
# 298 "data/maps/SlateportCity/scripts.pory"

# 299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 300 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 301 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 302 "data/maps/SlateportCity/scripts.pory"
	end
# 303 "data/maps/SlateportCity/scripts.pory"

# 304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 305 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 306 "data/maps/SlateportCity/scripts.pory"
	end
# 307 "data/maps/SlateportCity/scripts.pory"

# 308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 309 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 310 "data/maps/SlateportCity/scripts.pory"
	end
# 311 "data/maps/SlateportCity/scripts.pory"

# 312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 313 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 314 "data/maps/SlateportCity/scripts.pory"
	end
# 315 "data/maps/SlateportCity/scripts.pory"

# 316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 317 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 318 "data/maps/SlateportCity/scripts.pory"
	end
# 319 "data/maps/SlateportCity/scripts.pory"

# 320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 321 "data/maps/SlateportCity/scripts.pory"
	lockall
# 322 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 323 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 324 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 325 "data/maps/SlateportCity/scripts.pory"
	end
# 326 "data/maps/SlateportCity/scripts.pory"

# 327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 328 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 329 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 330 "data/maps/SlateportCity/scripts.pory"
	end
# 331 "data/maps/SlateportCity/scripts.pory"

# 332 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 333 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 334 "data/maps/SlateportCity/scripts.pory"
	end
# 335 "data/maps/SlateportCity/scripts.pory"

# 336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 337 "data/maps/SlateportCity/scripts.pory"
	lock
# 338 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 339 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 340 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 341 "data/maps/SlateportCity/scripts.pory"
	release
# 342 "data/maps/SlateportCity/scripts.pory"
	end
# 343 "data/maps/SlateportCity/scripts.pory"

# 344 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 345 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 346 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 347 "data/maps/SlateportCity/scripts.pory"
	release
# 348 "data/maps/SlateportCity/scripts.pory"
	end
# 349 "data/maps/SlateportCity/scripts.pory"

# 350 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 351 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 352 "data/maps/SlateportCity/scripts.pory"
	end
# 353 "data/maps/SlateportCity/scripts.pory"

# 354 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 355 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 356 "data/maps/SlateportCity/scripts.pory"
	end
# 357 "data/maps/SlateportCity/scripts.pory"

# 358 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 359 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 360 "data/maps/SlateportCity/scripts.pory"
	end
# 361 "data/maps/SlateportCity/scripts.pory"

# 362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 363 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 364 "data/maps/SlateportCity/scripts.pory"
	end
# 365 "data/maps/SlateportCity/scripts.pory"

# 366 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 367 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 368 "data/maps/SlateportCity/scripts.pory"
	end
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 371 "data/maps/SlateportCity/scripts.pory"
	lock
# 372 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 373 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 374 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 375 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 376 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 377 "data/maps/SlateportCity/scripts.pory"
	release
# 378 "data/maps/SlateportCity/scripts.pory"
	end
# 379 "data/maps/SlateportCity/scripts.pory"

# 380 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 381 "data/maps/SlateportCity/scripts.pory"
	lock
# 382 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 383 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 384 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 385 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 386 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 387 "data/maps/SlateportCity/scripts.pory"
	release
# 388 "data/maps/SlateportCity/scripts.pory"
	end
# 389 "data/maps/SlateportCity/scripts.pory"

# 390 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 391 "data/maps/SlateportCity/scripts.pory"
	lock
# 392 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 393 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 394 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 395 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 396 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 397 "data/maps/SlateportCity/scripts.pory"
	release
# 398 "data/maps/SlateportCity/scripts.pory"
	end
# 399 "data/maps/SlateportCity/scripts.pory"

# 400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 401 "data/maps/SlateportCity/scripts.pory"
	lock
# 402 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 403 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 404 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 405 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 406 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 407 "data/maps/SlateportCity/scripts.pory"
	release
# 408 "data/maps/SlateportCity/scripts.pory"
	end
# 409 "data/maps/SlateportCity/scripts.pory"

# 410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 411 "data/maps/SlateportCity/scripts.pory"
	lock
# 412 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 413 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 414 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 415 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 416 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/SlateportCity/scripts.pory"
	release
# 418 "data/maps/SlateportCity/scripts.pory"
	end
# 419 "data/maps/SlateportCity/scripts.pory"

# 420 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 421 "data/maps/SlateportCity/scripts.pory"
	lock
# 422 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 423 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 424 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 425 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 426 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 427 "data/maps/SlateportCity/scripts.pory"
	release
# 428 "data/maps/SlateportCity/scripts.pory"
	end
# 429 "data/maps/SlateportCity/scripts.pory"

# 430 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 431 "data/maps/SlateportCity/scripts.pory"
	lock
# 432 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 433 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 434 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 435 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 436 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 437 "data/maps/SlateportCity/scripts.pory"
	release
# 438 "data/maps/SlateportCity/scripts.pory"
	end
# 439 "data/maps/SlateportCity/scripts.pory"

# 440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 441 "data/maps/SlateportCity/scripts.pory"
	lock
# 442 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 443 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 444 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 445 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 446 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 447 "data/maps/SlateportCity/scripts.pory"
	release
# 448 "data/maps/SlateportCity/scripts.pory"
	end
# 449 "data/maps/SlateportCity/scripts.pory"

# 450 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 451 "data/maps/SlateportCity/scripts.pory"
	lock
# 452 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 453 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 454 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 455 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 456 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 457 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 458 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 459 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 460 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 461 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 462 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 463 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 465 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 466 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 467 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 468 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 469 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 470 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 471 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 472 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 473 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 474 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 475 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 476 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 477 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	release
# 481 "data/maps/SlateportCity/scripts.pory"
	end
# 482 "data/maps/SlateportCity/scripts.pory"

# 483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 484 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 486 "data/maps/SlateportCity/scripts.pory"
	step_end
# 487 "data/maps/SlateportCity/scripts.pory"

# 488 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 489 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 490 "data/maps/SlateportCity/scripts.pory"
	end
# 491 "data/maps/SlateportCity/scripts.pory"

# 492 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 493 "data/maps/SlateportCity/scripts.pory"
	lock
# 494 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 495 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 496 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 497 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 498 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 499 "data/maps/SlateportCity/scripts.pory"
	release
# 500 "data/maps/SlateportCity/scripts.pory"
	end
# 501 "data/maps/SlateportCity/scripts.pory"

# 502 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 503 "data/maps/SlateportCity/scripts.pory"
	lock
# 504 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 505 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 506 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 507 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 508 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 509 "data/maps/SlateportCity/scripts.pory"
	release
# 510 "data/maps/SlateportCity/scripts.pory"
	end
# 511 "data/maps/SlateportCity/scripts.pory"

# 512 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 514 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 515 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 516 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 517 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 518 "data/maps/SlateportCity/scripts.pory"
	release
# 519 "data/maps/SlateportCity/scripts.pory"
	end
# 520 "data/maps/SlateportCity/scripts.pory"

# 521 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 522 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 523 "data/maps/SlateportCity/scripts.pory"
	release
# 524 "data/maps/SlateportCity/scripts.pory"
	end
# 525 "data/maps/SlateportCity/scripts.pory"

# 526 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 527 "data/maps/SlateportCity/scripts.pory"
	lock
# 528 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 529 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 530 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 531 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 532 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 533 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 534 "data/maps/SlateportCity/scripts.pory"
	release
# 535 "data/maps/SlateportCity/scripts.pory"
	end
# 536 "data/maps/SlateportCity/scripts.pory"

# 537 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 539 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 540 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 541 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 542 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 543 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 544 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 545 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 547 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 548 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 549 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 550 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 551 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 552 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 553 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 554 "data/maps/SlateportCity/scripts.pory"
	release
# 555 "data/maps/SlateportCity/scripts.pory"
	end
# 556 "data/maps/SlateportCity/scripts.pory"

# 557 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 558 "data/maps/SlateportCity/scripts.pory"
	lock
# 559 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 560 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 561 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 562 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 563 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 564 "data/maps/SlateportCity/scripts.pory"
	release
# 565 "data/maps/SlateportCity/scripts.pory"
	end
# 566 "data/maps/SlateportCity/scripts.pory"

# 567 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 568 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 569 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 570 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 571 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 572 "data/maps/SlateportCity/scripts.pory"
	release
# 573 "data/maps/SlateportCity/scripts.pory"
	end
# 574 "data/maps/SlateportCity/scripts.pory"

# 575 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 576 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 577 "data/maps/SlateportCity/scripts.pory"
	lockall
# 578 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 579 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 580 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 581 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 582 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 584 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 585 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 587 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 588 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 589 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 590 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 591 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 593 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 594 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 595 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 596 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 598 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 599 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 600 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 601 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 602 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 603 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 604 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 605 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 607 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 609 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 610 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 611 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 613 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 615 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 616 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 617 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 618 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 620 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 621 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 623 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 624 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 625 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 626 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 627 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 628 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 629 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 630 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 631 "data/maps/SlateportCity/scripts.pory"
	end
# 632 "data/maps/SlateportCity/scripts.pory"

# 633 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 634 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 635 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 636 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 637 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 638 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 639 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 640 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 641 "data/maps/SlateportCity/scripts.pory"
	step_end
# 642 "data/maps/SlateportCity/scripts.pory"

# 643 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 644 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 645 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 646 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 647 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 648 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 649 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 650 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 651 "data/maps/SlateportCity/scripts.pory"
	step_end
# 652 "data/maps/SlateportCity/scripts.pory"

# 653 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 654 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 656 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 658 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 659 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 661 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 662 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 663 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 664 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 666 "data/maps/SlateportCity/scripts.pory"
	step_end
# 667 "data/maps/SlateportCity/scripts.pory"

# 668 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 669 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 670 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 679 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 680 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 681 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 682 "data/maps/SlateportCity/scripts.pory"
	step_end
# 683 "data/maps/SlateportCity/scripts.pory"

# 684 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 685 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 686 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 687 "data/maps/SlateportCity/scripts.pory"
	step_end
# 688 "data/maps/SlateportCity/scripts.pory"

# 689 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 690 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 691 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 693 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 694 "data/maps/SlateportCity/scripts.pory"
	step_end
# 695 "data/maps/SlateportCity/scripts.pory"

# 696 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 697 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 698 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 699 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 700 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 701 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 702 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 704 "data/maps/SlateportCity/scripts.pory"
	step_end
# 705 "data/maps/SlateportCity/scripts.pory"

# 706 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 707 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 708 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 709 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 710 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 711 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 712 "data/maps/SlateportCity/scripts.pory"
	step_end
# 713 "data/maps/SlateportCity/scripts.pory"

# 714 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 715 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 716 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 717 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 718 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 719 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 720 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 721 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 722 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 723 "data/maps/SlateportCity/scripts.pory"
	step_end
# 724 "data/maps/SlateportCity/scripts.pory"

# 725 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 726 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 727 "data/maps/SlateportCity/scripts.pory"
	end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 730 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 731 "data/maps/SlateportCity/scripts.pory"
	end
# 732 "data/maps/SlateportCity/scripts.pory"

# 733 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 734 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 735 "data/maps/SlateportCity/scripts.pory"
	end
# 736 "data/maps/SlateportCity/scripts.pory"

# 737 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 738 "data/maps/SlateportCity/scripts.pory"
	lock
# 739 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 740 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 741 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 742 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 743 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 744 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 745 "data/maps/SlateportCity/scripts.pory"
	release
# 746 "data/maps/SlateportCity/scripts.pory"
	end
# 747 "data/maps/SlateportCity/scripts.pory"

# 748 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 749 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 750 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 751 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 752 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 753 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 754 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 755 "data/maps/SlateportCity/scripts.pory"
	end
# 756 "data/maps/SlateportCity/scripts.pory"

# 757 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 758 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 759 "data/maps/SlateportCity/scripts.pory"
	release
# 760 "data/maps/SlateportCity/scripts.pory"
	end
# 761 "data/maps/SlateportCity/scripts.pory"

# 762 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 763 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 764 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 765 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 766 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 767 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 768 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 769 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 770 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 771 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 772 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 773 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 774 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 775 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 776 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 777 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 778 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 779 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 780 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 781 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 782 "data/maps/SlateportCity/scripts.pory"
	end
# 783 "data/maps/SlateportCity/scripts.pory"

# 784 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 785 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 786 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 787 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 788 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 789 "data/maps/SlateportCity/scripts.pory"
	end
# 790 "data/maps/SlateportCity/scripts.pory"

# 791 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 792 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 793 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 794 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 795 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 796 "data/maps/SlateportCity/scripts.pory"
	end
# 797 "data/maps/SlateportCity/scripts.pory"

# 798 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 799 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 800 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 801 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 802 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 803 "data/maps/SlateportCity/scripts.pory"
	end
# 804 "data/maps/SlateportCity/scripts.pory"

# 805 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 806 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 807 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 808 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 809 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 810 "data/maps/SlateportCity/scripts.pory"
	end
# 811 "data/maps/SlateportCity/scripts.pory"

# 812 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 813 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 814 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 815 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 816 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 817 "data/maps/SlateportCity/scripts.pory"
	end
# 818 "data/maps/SlateportCity/scripts.pory"

# 819 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 820 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 821 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 822 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 823 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 824 "data/maps/SlateportCity/scripts.pory"
	end
# 825 "data/maps/SlateportCity/scripts.pory"

# 826 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 827 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 828 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 829 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 830 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 831 "data/maps/SlateportCity/scripts.pory"
	end
# 832 "data/maps/SlateportCity/scripts.pory"

# 833 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 834 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 835 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 836 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 837 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 838 "data/maps/SlateportCity/scripts.pory"
	end
# 839 "data/maps/SlateportCity/scripts.pory"

# 840 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 841 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 842 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 843 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 844 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 845 "data/maps/SlateportCity/scripts.pory"
	end
# 846 "data/maps/SlateportCity/scripts.pory"

# 847 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 848 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 849 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 850 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 851 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 852 "data/maps/SlateportCity/scripts.pory"
	end
# 853 "data/maps/SlateportCity/scripts.pory"

# 854 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 855 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 856 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 857 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 858 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 859 "data/maps/SlateportCity/scripts.pory"
	end
# 860 "data/maps/SlateportCity/scripts.pory"

# 861 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 862 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 863 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 864 "data/maps/SlateportCity/scripts.pory"
	release
# 865 "data/maps/SlateportCity/scripts.pory"
	end
# 866 "data/maps/SlateportCity/scripts.pory"

# 867 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 868 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 869 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 870 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 871 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 872 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 873 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 874 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 875 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 876 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 877 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 878 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 879 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 880 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 881 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 882 "data/maps/SlateportCity/scripts.pory"
	release
# 883 "data/maps/SlateportCity/scripts.pory"
	end
# 884 "data/maps/SlateportCity/scripts.pory"

# 885 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 886 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 887 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 888 "data/maps/SlateportCity/scripts.pory"
	release
# 889 "data/maps/SlateportCity/scripts.pory"
	end
# 890 "data/maps/SlateportCity/scripts.pory"

# 891 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 892 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 893 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 894 "data/maps/SlateportCity/scripts.pory"
	end
# 895 "data/maps/SlateportCity/scripts.pory"

# 896 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 897 "data/maps/SlateportCity/scripts.pory"
	lockall
# 898 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 899 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 900 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 901 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 902 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 903 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 904 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 905 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 906 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 907 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 908 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 909 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 910 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 911 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 912 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 913 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 914 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 915 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 916 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 917 "data/maps/SlateportCity/scripts.pory"
	end
# 918 "data/maps/SlateportCity/scripts.pory"

# 919 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 920 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 921 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 922 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 923 "data/maps/SlateportCity/scripts.pory"
	step_end
# 924 "data/maps/SlateportCity/scripts.pory"

# 925 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 926 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 927 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 928 "data/maps/SlateportCity/scripts.pory"
	step_end
# 929 "data/maps/SlateportCity/scripts.pory"

# 930 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 931 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 932 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 933 "data/maps/SlateportCity/scripts.pory"
	step_end
# 934 "data/maps/SlateportCity/scripts.pory"

# 935 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 936 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 937 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 938 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 939 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 940 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 941 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 942 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 943 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 944 "data/maps/SlateportCity/scripts.pory"
	step_end
# 945 "data/maps/SlateportCity/scripts.pory"

# 946 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 947 "data/maps/SlateportCity/scripts.pory"
	lockall
# 948 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 949 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 950 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 951 "data/maps/SlateportCity/scripts.pory"
	end
# 952 "data/maps/SlateportCity/scripts.pory"

# 953 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 954 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 955 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 956 "data/maps/SlateportCity/scripts.pory"

# 957 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 958 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 959 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 960 "data/maps/SlateportCity/scripts.pory"

# 961 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 962 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 963 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 964 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 965 "data/maps/SlateportCity/scripts.pory"

# 966 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 967 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 968 "data/maps/SlateportCity/scripts.pory"

# 969 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 971 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 972 "data/maps/SlateportCity/scripts.pory"

# 973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 975 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 977 "data/maps/SlateportCity/scripts.pory"

# 978 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 979 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 980 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 981 "data/maps/SlateportCity/scripts.pory"

# 982 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 984 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 985 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 994 "data/maps/SlateportCity/scripts.pory"

# 995 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 997 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1001 "data/maps/SlateportCity/scripts.pory"

# 1002 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1003 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1006 "data/maps/SlateportCity/scripts.pory"

# 1007 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1013 "data/maps/SlateportCity/scripts.pory"

# 1014 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1019 "data/maps/SlateportCity/scripts.pory"

# 1020 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1026 "data/maps/SlateportCity/scripts.pory"

# 1027 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1028 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1032 "data/maps/SlateportCity/scripts.pory"

# 1033 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1036 "data/maps/SlateportCity/scripts.pory"

# 1037 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1038 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1042 "data/maps/SlateportCity/scripts.pory"

# 1043 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1046 "data/maps/SlateportCity/scripts.pory"

# 1047 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1056 "data/maps/SlateportCity/scripts.pory"

# 1057 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1061 "data/maps/SlateportCity/scripts.pory"

# 1062 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1065 "data/maps/SlateportCity/scripts.pory"

# 1066 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1074 "data/maps/SlateportCity/scripts.pory"

# 1075 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1078 "data/maps/SlateportCity/scripts.pory"

# 1079 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1082 "data/maps/SlateportCity/scripts.pory"

# 1083 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1084 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1086 "data/maps/SlateportCity/scripts.pory"

# 1087 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1089 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1093 "data/maps/SlateportCity/scripts.pory"

# 1094 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1099 "data/maps/SlateportCity/scripts.pory"

# 1100 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1105 "data/maps/SlateportCity/scripts.pory"

# 1106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1110 "data/maps/SlateportCity/scripts.pory"

# 1111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1112 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1120 "data/maps/SlateportCity/scripts.pory"

# 1121 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1125 "data/maps/SlateportCity/scripts.pory"

# 1126 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1131 "data/maps/SlateportCity/scripts.pory"

# 1132 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1139 "data/maps/SlateportCity/scripts.pory"

# 1140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1145 "data/maps/SlateportCity/scripts.pory"

# 1146 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1151 "data/maps/SlateportCity/scripts.pory"

# 1152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1157 "data/maps/SlateportCity/scripts.pory"

# 1158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1166 "data/maps/SlateportCity/scripts.pory"

# 1167 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1174 "data/maps/SlateportCity/scripts.pory"

# 1175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1178 "data/maps/SlateportCity/scripts.pory"

# 1179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1182 "data/maps/SlateportCity/scripts.pory"

# 1183 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1194 "data/maps/SlateportCity/scripts.pory"

# 1195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1204 "data/maps/SlateportCity/scripts.pory"

# 1205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1215 "data/maps/SlateportCity/scripts.pory"

# 1216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1221 "data/maps/SlateportCity/scripts.pory"

# 1222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1226 "data/maps/SlateportCity/scripts.pory"

# 1227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1230 "data/maps/SlateportCity/scripts.pory"

# 1231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1234 "data/maps/SlateportCity/scripts.pory"

# 1235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1239 "data/maps/SlateportCity/scripts.pory"

# 1240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1245 "data/maps/SlateportCity/scripts.pory"

# 1246 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1251 "data/maps/SlateportCity/scripts.pory"

# 1252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1255 "data/maps/SlateportCity/scripts.pory"

# 1256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1260 "data/maps/SlateportCity/scripts.pory"

# 1261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1265 "data/maps/SlateportCity/scripts.pory"

# 1266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1269 "data/maps/SlateportCity/scripts.pory"

# 1270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1276 "data/maps/SlateportCity/scripts.pory"

# 1277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1281 "data/maps/SlateportCity/scripts.pory"

# 1282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1285 "data/maps/SlateportCity/scripts.pory"

# 1286 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1300 "data/maps/SlateportCity/scripts.pory"

# 1301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1311 "data/maps/SlateportCity/scripts.pory"

# 1312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1315 "data/maps/SlateportCity/scripts.pory"

# 1316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1319 "data/maps/SlateportCity/scripts.pory"

# 1320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1323 "data/maps/SlateportCity/scripts.pory"

# 1324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1327 "data/maps/SlateportCity/scripts.pory"

# 1328 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1337 "data/maps/SlateportCity/scripts.pory"

# 1338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1343 "data/maps/SlateportCity/scripts.pory"

# 1344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1352 "data/maps/SlateportCity/scripts.pory"

# 1353 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1356 "data/maps/SlateportCity/scripts.pory"

# 1357 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1363 "data/maps/SlateportCity/scripts.pory"

# 1364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1367 "data/maps/SlateportCity/scripts.pory"

# 1368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1375 "data/maps/SlateportCity/scripts.pory"

# 1376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

Slateport_EventScript_EVOMerchant::
# 1391 "data/maps/SlateportCity/scripts.pory"
	lock
# 1392 "data/maps/SlateportCity/scripts.pory"
	message Slateport_EventScript_EVOMerchant_Text_0
# 1393 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1394 "data/maps/SlateportCity/scripts.pory"
	pokemart EvoMart
# 1395 "data/maps/SlateportCity/scripts.pory"
	msgbox Slateport_EventScript_EVOMerchant_Text_1, MSGBOX_DEFAULT
# 1396 "data/maps/SlateportCity/scripts.pory"
	release
	return


Slateport_EventScript_BattleMerchant::
# 1401 "data/maps/SlateportCity/scripts.pory"
	lock
# 1402 "data/maps/SlateportCity/scripts.pory"
	message Slateport_EventScript_BattleMerchant_Text_0
# 1403 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1404 "data/maps/SlateportCity/scripts.pory"
	pokemart BattleMart
# 1405 "data/maps/SlateportCity/scripts.pory"
	msgbox Slateport_EventScript_EVOMerchant_Text_1, MSGBOX_DEFAULT
# 1406 "data/maps/SlateportCity/scripts.pory"
	release
	return


Slateport_EventScript_CandyMerchant::
# 1411 "data/maps/SlateportCity/scripts.pory"
	lock
# 1412 "data/maps/SlateportCity/scripts.pory"
	message Slateport_EventScript_CandyMerchant_Text_0
# 1413 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1414 "data/maps/SlateportCity/scripts.pory"
	pokemart CandyMart
# 1415 "data/maps/SlateportCity/scripts.pory"
	msgbox Slateport_EventScript_EVOMerchant_Text_1, MSGBOX_DEFAULT
# 1416 "data/maps/SlateportCity/scripts.pory"
	release
	return


Slateport_EventScript_NatureMerchant::
# 1421 "data/maps/SlateportCity/scripts.pory"
	lock
# 1422 "data/maps/SlateportCity/scripts.pory"
	message Slateport_EventScript_NatureMerchant_Text_0
# 1423 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1424 "data/maps/SlateportCity/scripts.pory"
	pokemart NatureMart
# 1425 "data/maps/SlateportCity/scripts.pory"
	msgbox Slateport_EventScript_EVOMerchant_Text_1, MSGBOX_DEFAULT
# 1426 "data/maps/SlateportCity/scripts.pory"
	release
	return


Slateport_EventScript_MegaMerchant::
# 1431 "data/maps/SlateportCity/scripts.pory"
	lock
# 1432 "data/maps/SlateportCity/scripts.pory"
	message Slateport_EventScript_MegaMerchant_Text_0
# 1433 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1434 "data/maps/SlateportCity/scripts.pory"
	pokemart MegaMart
# 1435 "data/maps/SlateportCity/scripts.pory"
	msgbox Slateport_EventScript_EVOMerchant_Text_1, MSGBOX_DEFAULT
# 1436 "data/maps/SlateportCity/scripts.pory"
	release
	return


	.align 2
# 1440 "data/maps/SlateportCity/scripts.pory"
BattleMart:
# 1441 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 1442 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 1443 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 1444 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 1445 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 1446 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 1447 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 1448 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 1449 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 1450 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 1451 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 1452 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 1453 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 1454 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BELT
# 1455 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_LENS
# 1456 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BAND
# 1457 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 1458 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 1459 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARCOAL
# 1460 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 1461 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGNET
# 1462 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 1463 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 1464 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 1465 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POISON_BARB
# 1466 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 1467 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 1468 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 1469 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 1470 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HARD_STONE
# 1471 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 1472 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 1473 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 1474 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_COAT
# 1475 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1476 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1477 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1478 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 1479 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 1480 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 1481 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 1482 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 1483 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 1484 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 1485 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 1486 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 1487 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SNOWBALL
# 1488 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 1489 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 1490 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 1491 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 1492 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 1493 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 1494 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 1495 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 1496 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 1497 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 1498 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 1499 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 1500 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 1501 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 1502 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 1503 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 1504 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 1505 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 1506 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 1507 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_HERB
# 1508 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 1509 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 1510 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METRONOME
# 1511 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON_BALL
# 1512 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 1513 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 1514 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 1515 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 1516 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 1517 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 1518 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 1519 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 1520 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 1521 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EVIOLITE
# 1522 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 1523 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 1524 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 1525 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RED_CARD
# 1526 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RING_TARGET
# 1527 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 1528 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 1529 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 1530 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 1531 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 1532 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 1533 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_NONE

	.align 2
# 1537 "data/maps/SlateportCity/scripts.pory"
CandyMart:
# 1538 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 1539 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 1540 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 1541 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 1542 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 1543 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

	.align 2
# 1547 "data/maps/SlateportCity/scripts.pory"
NatureMart:
# 1548 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 1549 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 1550 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 1551 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 1552 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 1553 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 1554 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAX_MINT
# 1555 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 1556 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 1557 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MILD_MINT
# 1558 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RASH_MINT
# 1559 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 1560 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALM_MINT
# 1561 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 1562 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 1563 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 1564 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 1565 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 1566 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 1567 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 1568 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 1571 "data/maps/SlateportCity/scripts.pory"
MegaMart:
# 1572 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 1573 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 1574 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 1575 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 1576 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 1577 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 1578 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 1579 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 1580 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 1581 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 1582 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 1583 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENGARITE
# 1584 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 1585 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PINSIRITE
# 1586 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 1587 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 1588 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MEWTWONITE_X
# 1589 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MEWTWONITE_Y
# 1590 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 1591 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STEELIXITE
# 1592 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCIZORITE
# 1593 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HERACRONITE
# 1594 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 1595 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 1596 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 1597 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SABLENITE
# 1598 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAWILITE
# 1599 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AGGRONITE
# 1600 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 1601 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MANECTITE
# 1602 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 1603 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 1604 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 1605 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BANETTITE
# 1606 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABSOLITE
# 1607 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GLALITITE
# 1608 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 1609 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 1610 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LATIASITE
# 1611 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LATIOSITE
# 1612 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 1613 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 1614 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 1615 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABOMASITE
# 1616 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALLADITE
# 1617 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AUDINITE
# 1618 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DIANCITE
	.2byte ITEM_NONE

	.align 2
# 1622 "data/maps/SlateportCity/scripts.pory"
EvoMart:
# 1623 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 1624 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 1625 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 1626 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 1627 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MOON_STONE
# 1628 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SUN_STONE
# 1629 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 1630 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 1631 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 1632 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICE_STONE
# 1633 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 1634 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 1635 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 1636 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 1637 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 1638 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 1639 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 1640 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 1641 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_UPGRADE
# 1642 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTECTOR
# 1643 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 1644 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 1645 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 1646 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 1647 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 1648 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SACHET
# 1649 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 1650 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_COAT
# 1651 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 1652 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 1653 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_NONE

Slateport_EventScript_EVOMerchant_Text_0:
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "Hello! Welcome to the Evo Shop!$"

Slateport_EventScript_EVOMerchant_Text_1:
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "Come Again!$"

Slateport_EventScript_BattleMerchant_Text_0:
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "Hello! Welcome to the Battle Shop!$"

Slateport_EventScript_CandyMerchant_Text_0:
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "Hello! Welcome to the Candy Shop!$"

Slateport_EventScript_NatureMerchant_Text_0:
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "Hello! Welcome to the Nature Shop!$"

Slateport_EventScript_MegaMerchant_Text_0:
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "Hello! Welcome to the Mega Shop!$"
