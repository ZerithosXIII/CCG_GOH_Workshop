{"mw_09d3124170e4"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/zis5/start"}
		{link_sound "engine_stop"		"vehicle/engine/zis5/stop"}
		{link_sound "engine_idle"		"vehicle/engine/zis5/idle"}
		{link_sound "engine_full"		"vehicle/engine/zis5/full"}
		{link_sound "exhaust"			"vehicle/engine/zis5/exhaust"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "move"				"vehicle/wheels/truck"}
		
		

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	
{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
}

{on "add_weapon_sound" overload
		("Autocannon_s1_MultiBarrel")
		("MG34")
	}



{on animation_event "open_left"
			{play_sound "open_left"}
		}

{on animation_event "open_right"
			{play_sound "open_right"}
		}

{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.25 0.2)
	}

{on "reload_delay" overload
		("reload_time" args 5)	;// weapon reload time
	}

{on fire "gun" overload
		{play_sound "cw_5b86bcfcc2_MultiBarrel_action_recoil"}
		{play_sound "cw_5b86bcfcc2_MultiBarrel_head_mid"}
		{play_sound "cw_5b86bcfcc2_MultiBarrel_head_far"}
		{tags add "cw_5b86bcfcc2_firing"}
		{delay 0.001
			{tags remove "cw_5b86bcfcc2_firing"}
			{play_sound "cw_5b86bcfcc2_MultiBarrel_tail_close"}
			{play_sound "cw_5b86bcfcc2_MultiBarrel_tail_mid"}
			{play_sound "cw_5b86bcfcc2_MultiBarrel_tail_far"}
		}
		
		{if	
			name "00"
				{call "fire_barrel00"}
				{view show "cw_5b86bcfcc2_flashbarrel00"}
				{view start "cw_5b86bcfcc2_flashbarrel00"}
				{ani_play "fire00"}
				{view start "cw_5b86bcfcc2_shell00"}
				{view start "cw_5b86bcfcc2_smoke00"}
				{delay 0.12 "cw_5b86bcfcc2_shell_off"
					{view pause "cw_5b86bcfcc2_shell00"}
					{view pause "cw_5b86bcfcc2_smoke00"}
				}
				{delay 0.2 "cw_5b86bcfcc2_fire"
					{view hide	"cw_5b86bcfcc2_flashbarrel00"}
					{view pause	"cw_5b86bcfcc2_flashbarrel00"}
				}
		
		else 
			name "01"
				{call "fire_barrel01"}
				{view show "cw_5b86bcfcc2_flashbarrel01"}
				{view start "cw_5b86bcfcc2_flashbarrel01"}
				{ani_play "fire01"}
				{view start "cw_5b86bcfcc2_shell01"}
				{view start "cw_5b86bcfcc2_smoke01"}
				{delay 0.12 "cw_5b86bcfcc2_shell_off"
					{view pause "cw_5b86bcfcc2_shell01"}
					{view pause "cw_5b86bcfcc2_smoke01"}
				}
				{delay 0.2 "cw_5b86bcfcc2_fire"
					{view hide	"cw_5b86bcfcc2_flashbarrel01"}
					{view pause	"cw_5b86bcfcc2_flashbarrel01"}
				}
		
		else 
			name "02"
				{call "fire_barrel02"}
				{view show "cw_5b86bcfcc2_flashbarrel02"}
				{view start "cw_5b86bcfcc2_flashbarrel02"}
				{ani_play "fire02"}
				{view start "cw_5b86bcfcc2_shell02"}
				{view start "cw_5b86bcfcc2_smoke02"}
				{delay 0.12 "cw_5b86bcfcc2_shell_off"
					{view pause "cw_5b86bcfcc2_shell02"}
					{view pause "cw_5b86bcfcc2_smoke02"}
				}
				{delay 0.2 "cw_5b86bcfcc2_fire"
					{view hide	"cw_5b86bcfcc2_flashbarrel02"}
					{view pause	"cw_5b86bcfcc2_flashbarrel02"}
				}
		
		else 
			name "03"
				{call "fire_barrel03"}
				{view show "cw_5b86bcfcc2_flashbarrel03"}
				{view start "cw_5b86bcfcc2_flashbarrel03"}
				{ani_play "fire03"}
				{view start "cw_5b86bcfcc2_shell03"}
				{view start "cw_5b86bcfcc2_smoke03"}
				{delay 0.12 "cw_5b86bcfcc2_shell_off"
					{view pause "cw_5b86bcfcc2_shell03"}
					{view pause "cw_5b86bcfcc2_smoke03"}
				}
				{delay 0.2 "cw_5b86bcfcc2_fire"
					{view hide	"cw_5b86bcfcc2_flashbarrel03"}
					{view pause	"cw_5b86bcfcc2_flashbarrel03"}
				}
		
		else 
			name "04"
				{call "fire_barrel04"}
				{view show "cw_5b86bcfcc2_flashbarrel04"}
				{view start "cw_5b86bcfcc2_flashbarrel04"}
				{ani_play "fire04"}
				{view start "cw_5b86bcfcc2_shell04"}
				{view start "cw_5b86bcfcc2_smoke04"}
				{delay 0.12 "cw_5b86bcfcc2_shell_off"
					{view pause "cw_5b86bcfcc2_shell04"}
					{view pause "cw_5b86bcfcc2_smoke04"}
				}
				{delay 0.2 "cw_5b86bcfcc2_fire"
					{view hide	"cw_5b86bcfcc2_flashbarrel04"}
					{view pause	"cw_5b86bcfcc2_flashbarrel04"}
				}
		
		else 
			name "05"
				{call "fire_barrel05"}
				{view show "cw_5b86bcfcc2_flashbarrel05"}
				{view start "cw_5b86bcfcc2_flashbarrel05"}
				{ani_play "fire05"}
				{view start "cw_5b86bcfcc2_shell05"}
				{view start "cw_5b86bcfcc2_smoke05"}
				{delay 0.12 "cw_5b86bcfcc2_shell_off"
					{view pause "cw_5b86bcfcc2_shell05"}
					{view pause "cw_5b86bcfcc2_smoke05"}
				}
				{delay 0.2 "cw_5b86bcfcc2_fire"
					{view hide	"cw_5b86bcfcc2_flashbarrel05"}
					{view pause	"cw_5b86bcfcc2_flashbarrel05"}
				}
		
		else 
			name "06"
				{call "fire_barrel06"}
				{view show "cw_5b86bcfcc2_flashbarrel06"}
				{view start "cw_5b86bcfcc2_flashbarrel06"}
				{ani_play "fire06"}
				{view start "cw_5b86bcfcc2_shell06"}
				{view start "cw_5b86bcfcc2_smoke06"}
				{delay 0.12 "cw_5b86bcfcc2_shell_off"
					{view pause "cw_5b86bcfcc2_shell06"}
					{view pause "cw_5b86bcfcc2_smoke06"}
				}
				{delay 0.2 "cw_5b86bcfcc2_fire"
					{view hide	"cw_5b86bcfcc2_flashbarrel06"}
					{view pause	"cw_5b86bcfcc2_flashbarrel06"}
				}
		
		else 
			name "07"
				{call "fire_barrel07"}
				{view show "cw_5b86bcfcc2_flashbarrel07"}
				{view start "cw_5b86bcfcc2_flashbarrel07"}
				{ani_play "fire07"}
				{view start "cw_5b86bcfcc2_shell07"}
				{view start "cw_5b86bcfcc2_smoke07"}
				{delay 0.12 "cw_5b86bcfcc2_shell_off"
					{view pause "cw_5b86bcfcc2_shell07"}
					{view pause "cw_5b86bcfcc2_smoke07"}
				}
				{delay 0.2 "cw_5b86bcfcc2_fire"
					{view hide	"cw_5b86bcfcc2_flashbarrel07"}
					{view pause	"cw_5b86bcfcc2_flashbarrel07"}
				}
		
		}
	}

{on spawn {inherited}
{add_view "tank_canon_fire_20_25_auto"		"cw_5b86bcfcc2_flashbarrel00"	"shooter00"}

{add_view "tank_canon_fire_20_25_auto"		"cw_5b86bcfcc2_flashbarrel01"	"shooter01"}

{add_view "tank_canon_fire_20_25_auto"		"cw_5b86bcfcc2_flashbarrel02"	"shooter02"}

{add_view "tank_canon_fire_20_25_auto"		"cw_5b86bcfcc2_flashbarrel03"	"shooter03"}

{add_view "smoke_zenit"		"cw_5b86bcfcc2_smoke00"		"fxshell1"}

{add_view "smoke_zenit"		"cw_5b86bcfcc2_smoke01"		"fxshell2"}

{add_view "smoke_zenit"		"cw_5b86bcfcc2_smoke02"		"fxshell3"}

{add_view "smoke_zenit"		"cw_5b86bcfcc2_smoke03"		"fxshell4"}

{add_view "zenit_gilz"		"cw_5b86bcfcc2_shell00"		"fxshell1"}

{add_view "zenit_gilz"		"cw_5b86bcfcc2_shell01"		"fxshell2"}

{add_view "zenit_gilz"		"cw_5b86bcfcc2_shell02"		"fxshell3"}

{add_view "zenit_gilz"		"cw_5b86bcfcc2_shell03"		"fxshell4"}

{link_sound		"cw_5b86bcfcc2_MultiBarrel_action_recoil"		"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}

{link_sound		"cw_5b86bcfcc2_MultiBarrel_tail_close" 		"weapon/shot/cannon/s1/d1/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}

{link_sound		"cw_5b86bcfcc2_MultiBarrel_head_mid"			"weapon/shot/cannon/s1/d2/Shared/Autocannon_20to30mm/Multi_Barrel/Head/"}

{link_sound		"cw_5b86bcfcc2_MultiBarrel_tail_mid"			"weapon/shot/cannon/s1/d2/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}

{link_sound		"cw_5b86bcfcc2_MultiBarrel_head_far"			"weapon/shot/cannon/s1/d3/Shared/Autocannon_20to30mm/Multi_Barrel/Head/"}

{link_sound		"cw_5b86bcfcc2_MultiBarrel_tail_far"			"weapon/shot/cannon/s1/d3/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}
}
}
