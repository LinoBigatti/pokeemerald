EverGrandeCity_Hall4_MapScripts:: @ 82295A8
	map_script 4, EverGrandeCity_Hall4_MapScript2_2295AE
	.byte 0

EverGrandeCity_Hall4_MapScript2_2295AE: @ 82295AE
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall4_EventScript_2295B8
	.2byte 0

EverGrandeCity_Hall4_EventScript_2295B8:: @ 82295B8
	turnobject 255, 2
	end

