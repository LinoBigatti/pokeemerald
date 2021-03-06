Route113_MapScripts:: @ 81F2153
	map_script 5, Route113_MapScript1_1F215E
	map_script 3, Route113_MapScript1_1F2161
	.byte 0

Route113_MapScript1_1F215E: @ 81F215E
	setstepcallback 1
	end

Route113_MapScript1_1F2161: @ 81F2161
	clearflag FLAG_0x09D
	call Route113_EventScript_1F216A
	end

Route113_EventScript_1F216A:: @ 81F216A
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 19
	goto_if 0, Route113_EventScript_1F2189
	compare VAR_TEMP_0, 84
	goto_if 2, Route113_EventScript_1F2189
	setweather 7
	return

Route113_EventScript_1F2189:: @ 81F2189
	return

Route113_EventScript_1F218A:: @ 81F218A
	msgbox Route113_Text_1F235B, 2
	end

Route113_EventScript_1F2193:: @ 81F2193
	msgbox Route113_Text_1F23CA, 2
	end

Route113_EventScript_1F219C:: @ 81F219C
	msgbox Route113_Text_1F2440, 3
	end

Route113_EventScript_1F21A5:: @ 81F21A5
	msgbox Route113_Text_1F2456, 3
	end

Route113_EventScript_1F21AE:: @ 81F21AE
	msgbox Route113_Text_1F24F8, 3
	end

Route113_EventScript_1F21B7:: @ 81F21B7
	msgbox Route113_Text_1F2471, 3
	end

Route113_EventScript_1F21C0:: @ 81F21C0
	trainerbattle 0, TRAINER_JAYLEN, 0, Route113_Text_299D3C, Route113_Text_299D68
	msgbox Route113_Text_299D7D, 6
	end

Route113_EventScript_1F21D7:: @ 81F21D7
	trainerbattle 0, TRAINER_DILLON, 0, Route113_Text_299DE3, Route113_Text_299E1C
	msgbox Route113_Text_299E38, 6
	end

Route113_EventScript_1F21EE:: @ 81F21EE
	trainerbattle 2, TRAINER_MADELINE_1, 0, Route113_Text_299EA6, Route113_Text_299EF9, Route113_EventScript_1F221A
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_eq Route113_EventScript_1F2239
	msgbox Route113_Text_299F15, 4
	release
	end

Route113_EventScript_1F221A:: @ 81F221A
	special sub_80B4808
	waitmovement 0
	msgbox Route113_Text_299F49, 4
	setvar VAR_0x8004, 434
	special SetMatchCallRegisteredFlag
	setorcopyvar VAR_0x8000, 434
	callstd 8
	release
	end

Route113_EventScript_1F2239:: @ 81F2239
	trainerbattle 5, TRAINER_MADELINE_1, 0, Route113_Text_299F8A, Route113_Text_299FC9
	msgbox Route113_Text_299FD8, 6
	end

Route113_EventScript_1F2250:: @ 81F2250
	trainerbattle 2, TRAINER_LAO_1, 0, Route113_Text_29A015, Route113_Text_29A04C, Route113_EventScript_1F227C
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_eq Route113_EventScript_1F229B
	msgbox Route113_Text_29A067, 4
	release
	end

Route113_EventScript_1F227C:: @ 81F227C
	special sub_80B4808
	waitmovement 0
	msgbox Route113_Text_29A0A2, 4
	setvar VAR_0x8004, 419
	special SetMatchCallRegisteredFlag
	setorcopyvar VAR_0x8000, 419
	callstd 8
	release
	end

Route113_EventScript_1F229B:: @ 81F229B
	trainerbattle 5, TRAINER_LAO_1, 0, Route113_Text_29A0E8, Route113_Text_29A11F
	msgbox Route113_Text_29A13A, 6
	end

Route113_EventScript_1F22B2:: @ 81F22B2
	trainerbattle 0, TRAINER_LUNG, 0, Route113_Text_29A192, Route113_Text_29A1C6
	msgbox Route113_Text_29A219, 6
	end

Route113_EventScript_1F22C9:: @ 81F22C9
	trainerbattle 4, TRAINER_TORI_AND_TIA, 0, Route113_Text_29A261, Route113_Text_29A29D, Route113_Text_29A31F
	msgbox Route113_Text_29A2DE, 6
	end

Route113_EventScript_1F22E4:: @ 81F22E4
	trainerbattle 4, TRAINER_TORI_AND_TIA, 0, Route113_Text_29A35C, Route113_Text_29A397, Route113_Text_29A419
	msgbox Route113_Text_29A3DA, 6
	end

Route113_EventScript_1F22FF:: @ 81F22FF
	trainerbattle 0, TRAINER_SOPHIE, 0, Route113_Text_29A4BF, Route113_Text_29A508
	msgbox Route113_Text_29A529, 6
	end

Route113_EventScript_1F2316:: @ 81F2316
	trainerbattle 0, TRAINER_COBY, 0, Route113_Text_29A453, Route113_Text_29A480
	msgbox Route113_Text_29A489, 6
	end

Route113_EventScript_1F232D:: @ 81F232D
	trainerbattle 0, TRAINER_LAWRENCE, 0, Route113_Text_29A566, Route113_Text_29A5A0
	msgbox Route113_Text_29A5BE, 6
	end

Route113_EventScript_1F2344:: @ 81F2344
	trainerbattle 0, TRAINER_WYATT, 0, Route113_Text_29A5E4, Route113_Text_29A628
	msgbox Route113_Text_29A65D, 6
	end

Route113_Text_1F235B: @ 81F235B
	.string "Wahahaha! Today’s technology is a\n"
	.string "wondrous thing!\p"
	.string "Take this volcanic ash here.\n"
	.string "It can be fashioned into glass.$"

Route113_Text_1F23CA: @ 81F23CA
	.string "It’s fun walking through the volcano’s\n"
	.string "ashes on the ground and grass.\p"
	.string "You can see where you walked--it’s\n"
	.string "really neat!$"

Route113_Text_1F2440: @ 81F2440
	.string "ROUTE 113\n"
	.string "{RIGHT_ARROW} ROUTE 111$"

Route113_Text_1F2456: @ 81F2456
	.string "ROUTE 113\n"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"

Route113_Text_1F2471: @ 81F2471
	.string "TRAINER TIPS\p"
	.string "You may register one of the KEY ITEMS\n"
	.string "in your BAG as SELECT.\p"
	.string "Simply press SELECT to use\n"
	.string "the registered item conveniently.$"

Route113_Text_1F24F8: @ 81F24F8
	.string "GLASS WORKSHOP\n"
	.string "“Turning Volcanic Ash into Glass Items”$"

