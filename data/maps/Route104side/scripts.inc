Route104Side_MapScripts::
	.byte 0


Route104side_Eventscript_Sign::
# 4 "data/maps/Route104Side/scripts.pory"
	lockall
# 5 "data/maps/Route104Side/scripts.pory"
	msgbox Route104side_Eventscript_Sign_Text_0
# 6 "data/maps/Route104Side/scripts.pory"
	releaseall
	return


Route104Side_Eventscript_TBBryan::
# 11 "data/maps/Route104Side/scripts.pory"
	trainerbattle_single TRAINER_BRYANK, Bryan_intro, Bryan_outro
# 12 "data/maps/Route104Side/scripts.pory"
	msgbox PostBattle_Bryan, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route104Side/scripts.pory"
	waitmessage
	end


Route104side_Eventscript_Sign_Text_0:
# 5 "data/maps/Route104Side/scripts.pory"
	.string "Underground Tunnel$"

Bryan_intro::
# 17 "data/maps/Route104Side/scripts.pory"
	.string "Hey... BATTOL!$"

Bryan_outro::
# 21 "data/maps/Route104Side/scripts.pory"
	.string "Me lose Battol....$"

PostBattle_Bryan::
# 25 "data/maps/Route104Side/scripts.pory"
	.string "Me lose... sadface$"
