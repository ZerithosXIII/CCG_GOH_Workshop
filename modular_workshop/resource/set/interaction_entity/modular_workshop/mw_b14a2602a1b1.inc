{"mw_b14a2602a1b1 tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/kv/start"}
		{link_sound "engine_stop"		"vehicle/engine/kv/stop"}
		{link_sound "engine_idle"		"vehicle/engine/kv/idle"}
		{link_sound "engine_full"		"vehicle/engine/kv/full"}
		{link_sound "exhaust"			"vehicle/engine/kv/exhaust"}
		{link_sound "move"				"vehicle/tracks/kv/"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
}

{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("MG34")
	}

{on fire "gun" overload
		{view start "cw_5b86bcfcc2_flashbarrel1"}
		{view start "cw_5b86bcfcc2_flashbarrel1smoke"}
		{ani_play "fire"}
	
{view start "cw_5b86bcfcc2_flashbarrelmaximum"}

{play_sound "cw_5b86bcfcc2_action_recoil_Cannon"}

{play_sound "cw_5b86bcfcc2_Cannon_Mid"}

{play_sound "cw_5b86bcfcc2_Cannon_Far"}

{call "cw_5b86bcfcc2_maximum_terrain_fx"}
}

{on "cw_5b86bcfcc2_maximum_terrain_fx"
		{if not rain
			{if terrain_fx "ground"
				{view start "cw_5b86bcfcc2_maximum_ground_fx"}
			else terrain_fx "mud"
				;//none
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_5b86bcfcc2_maximum_sand_fx"}
			else terrain_fx "snow"
				{view start "cw_5b86bcfcc2_maximum_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_5b86bcfcc2_maximum_snow_fx"}
			else
				{view start "cw_5b86bcfcc2_maximum_ground_fx"}
			}
		else
			{if terrain_fx "ground"
				{view start "cw_5b86bcfcc2_maximum_ground_r_fx"}
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_5b86bcfcc2_maximum_sand_r_fx"}
			else terrain_fx "snow"
				{view start "cw_5b86bcfcc2_maximum_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_5b86bcfcc2_maximum_snow_fx"}
			else
				{view start "cw_5b86bcfcc2_maximum_ground_r_fx"}
			}
		}
	}

{on fire "gun2" overload
		{view start "cw_8a33890695_flashbarrel1"}
		{view start "cw_8a33890695_flashbarrel1smoke"}
		{ani_play "fire2"}
	
{view start "cw_8a33890695_flashbarrelmaximum"}

{play_sound "cw_8a33890695_action_recoil_Cannon"}

{play_sound "cw_8a33890695_Cannon_Mid"}

{play_sound "cw_8a33890695_Cannon_Far"}

{call "cw_8a33890695_maximum_terrain_fx"}
}

{on "cw_8a33890695_maximum_terrain_fx"
		{if not rain
			{if terrain_fx "ground"
				{view start "cw_8a33890695_maximum_ground_fx"}
			else terrain_fx "mud"
				;//none
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_8a33890695_maximum_sand_fx"}
			else terrain_fx "snow"
				{view start "cw_8a33890695_maximum_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_8a33890695_maximum_snow_fx"}
			else
				{view start "cw_8a33890695_maximum_ground_fx"}
			}
		else
			{if terrain_fx "ground"
				{view start "cw_8a33890695_maximum_ground_r_fx"}
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_8a33890695_maximum_sand_r_fx"}
			else terrain_fx "snow"
				{view start "cw_8a33890695_maximum_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_8a33890695_maximum_snow_fx"}
			else
				{view start "cw_8a33890695_maximum_ground_r_fx"}
			}
		}
	}

{on fire "mgun2" overload
			{if effector "stuff weapon"
				{with_effector
					{call "fire"}
				}
			else
				
	; Granular Head – played on EVERY shot
	{play_sound "action_recoil"}
	{play_sound "head_mid"}
	{play_sound "head_far"}
	{tags add "cw_16e7f63aa8_firing"}
	{kill_delay "cw_16e7f63aa8_burst_end"}

	{delay 0.001 "cw_16e7f63aa8_burst_end"
		{tags remove "cw_16e7f63aa8_firing"}
		; Tail – plays only when the burst is complete
		{play_sound "tail_close"}
		{play_sound "tail_mid"}
		{play_sound "tail_far"}
	}

				{view start "cw_16e7f63aa8_flashbarrel5"}
				{delay 0.2
					{view pause "cw_16e7f63aa8_flashbarrel5"}
				}
			}
		}

{on fire "mgun3" overload
			{if effector "stuff weapon"
				{with_effector
					{call "fire"}
				}
			else
				
	; Granular Head – played on EVERY shot
	{play_sound "action_recoil"}
	{play_sound "head_mid"}
	{play_sound "head_far"}
	{tags add "cw_49a70e71da_firing"}
	{kill_delay "cw_49a70e71da_burst_end"}

	{delay 0.001 "cw_49a70e71da_burst_end"
		{tags remove "cw_49a70e71da_firing"}
		; Tail – plays only when the burst is complete
		{play_sound "tail_close"}
		{play_sound "tail_mid"}
		{play_sound "tail_far"}
	}

				{view start "cw_49a70e71da_flashbarrel6"}
				{delay 0.2
					{view pause "cw_49a70e71da_flashbarrel6"}
				}
			}
		}

{on fire "gun3" overload
		{play_sound "cw_4d28a501b6_MultiBarrel_action_recoil"}
		{play_sound "cw_4d28a501b6_MultiBarrel_head_mid"}
		{play_sound "cw_4d28a501b6_MultiBarrel_head_far"}
		{tags add "cw_4d28a501b6_firing"}
		{delay 0.001
			{tags remove "cw_4d28a501b6_firing"}
			{play_sound "cw_4d28a501b6_MultiBarrel_tail_close"}
			{play_sound "cw_4d28a501b6_MultiBarrel_tail_mid"}
			{play_sound "cw_4d28a501b6_MultiBarrel_tail_far"}
		}
		
		{if	
			name "00"
				{call "fire_barrel00"}
				{view show "cw_4d28a501b6_flashbarrel00"}
				{view start "cw_4d28a501b6_flashbarrel00"}
				{ani_play "fire00"}
				{view start "cw_4d28a501b6_shell00"}
				{view start "cw_4d28a501b6_smoke00"}
				{delay 0.12 "cw_4d28a501b6_shell_off"
					{view pause "cw_4d28a501b6_shell00"}
					{view pause "cw_4d28a501b6_smoke00"}
				}
				{delay 0.2 "cw_4d28a501b6_fire"
					{view hide	"cw_4d28a501b6_flashbarrel00"}
					{view pause	"cw_4d28a501b6_flashbarrel00"}
				}
		
		else 
			name "01"
				{call "fire_barrel01"}
				{view show "cw_4d28a501b6_flashbarrel01"}
				{view start "cw_4d28a501b6_flashbarrel01"}
				{ani_play "fire01"}
				{view start "cw_4d28a501b6_shell01"}
				{view start "cw_4d28a501b6_smoke01"}
				{delay 0.12 "cw_4d28a501b6_shell_off"
					{view pause "cw_4d28a501b6_shell01"}
					{view pause "cw_4d28a501b6_smoke01"}
				}
				{delay 0.2 "cw_4d28a501b6_fire"
					{view hide	"cw_4d28a501b6_flashbarrel01"}
					{view pause	"cw_4d28a501b6_flashbarrel01"}
				}
		
		else 
			name "02"
				{call "fire_barrel02"}
				{view show "cw_4d28a501b6_flashbarrel02"}
				{view start "cw_4d28a501b6_flashbarrel02"}
				{ani_play "fire02"}
				{view start "cw_4d28a501b6_shell02"}
				{view start "cw_4d28a501b6_smoke02"}
				{delay 0.12 "cw_4d28a501b6_shell_off"
					{view pause "cw_4d28a501b6_shell02"}
					{view pause "cw_4d28a501b6_smoke02"}
				}
				{delay 0.2 "cw_4d28a501b6_fire"
					{view hide	"cw_4d28a501b6_flashbarrel02"}
					{view pause	"cw_4d28a501b6_flashbarrel02"}
				}
		
		else 
			name "03"
				{call "fire_barrel03"}
				{view show "cw_4d28a501b6_flashbarrel03"}
				{view start "cw_4d28a501b6_flashbarrel03"}
				{ani_play "fire03"}
				{view start "cw_4d28a501b6_shell03"}
				{view start "cw_4d28a501b6_smoke03"}
				{delay 0.12 "cw_4d28a501b6_shell_off"
					{view pause "cw_4d28a501b6_shell03"}
					{view pause "cw_4d28a501b6_smoke03"}
				}
				{delay 0.2 "cw_4d28a501b6_fire"
					{view hide	"cw_4d28a501b6_flashbarrel03"}
					{view pause	"cw_4d28a501b6_flashbarrel03"}
				}
		
		else 
			name "04"
				{call "fire_barrel04"}
				{view show "cw_4d28a501b6_flashbarrel04"}
				{view start "cw_4d28a501b6_flashbarrel04"}
				{ani_play "fire04"}
				{view start "cw_4d28a501b6_shell04"}
				{view start "cw_4d28a501b6_smoke04"}
				{delay 0.12 "cw_4d28a501b6_shell_off"
					{view pause "cw_4d28a501b6_shell04"}
					{view pause "cw_4d28a501b6_smoke04"}
				}
				{delay 0.2 "cw_4d28a501b6_fire"
					{view hide	"cw_4d28a501b6_flashbarrel04"}
					{view pause	"cw_4d28a501b6_flashbarrel04"}
				}
		
		else 
			name "05"
				{call "fire_barrel05"}
				{view show "cw_4d28a501b6_flashbarrel05"}
				{view start "cw_4d28a501b6_flashbarrel05"}
				{ani_play "fire05"}
				{view start "cw_4d28a501b6_shell05"}
				{view start "cw_4d28a501b6_smoke05"}
				{delay 0.12 "cw_4d28a501b6_shell_off"
					{view pause "cw_4d28a501b6_shell05"}
					{view pause "cw_4d28a501b6_smoke05"}
				}
				{delay 0.2 "cw_4d28a501b6_fire"
					{view hide	"cw_4d28a501b6_flashbarrel05"}
					{view pause	"cw_4d28a501b6_flashbarrel05"}
				}
		
		else 
			name "06"
				{call "fire_barrel06"}
				{view show "cw_4d28a501b6_flashbarrel06"}
				{view start "cw_4d28a501b6_flashbarrel06"}
				{ani_play "fire06"}
				{view start "cw_4d28a501b6_shell06"}
				{view start "cw_4d28a501b6_smoke06"}
				{delay 0.12 "cw_4d28a501b6_shell_off"
					{view pause "cw_4d28a501b6_shell06"}
					{view pause "cw_4d28a501b6_smoke06"}
				}
				{delay 0.2 "cw_4d28a501b6_fire"
					{view hide	"cw_4d28a501b6_flashbarrel06"}
					{view pause	"cw_4d28a501b6_flashbarrel06"}
				}
		
		else 
			name "07"
				{call "fire_barrel07"}
				{view show "cw_4d28a501b6_flashbarrel07"}
				{view start "cw_4d28a501b6_flashbarrel07"}
				{ani_play "fire07"}
				{view start "cw_4d28a501b6_shell07"}
				{view start "cw_4d28a501b6_smoke07"}
				{delay 0.12 "cw_4d28a501b6_shell_off"
					{view pause "cw_4d28a501b6_shell07"}
					{view pause "cw_4d28a501b6_smoke07"}
				}
				{delay 0.2 "cw_4d28a501b6_fire"
					{view hide	"cw_4d28a501b6_flashbarrel07"}
					{view pause	"cw_4d28a501b6_flashbarrel07"}
				}
		
		}
	}

{on spawn {inherited}
{add_view "tank_canon_fire_122_128"				"cw_5b86bcfcc2_flashbarrelmaximum"	"foresight1"}

{link_sound		"cw_5b86bcfcc2_action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}

{link_sound		"cw_5b86bcfcc2_Cannon_Mid"				"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}

{link_sound		"cw_5b86bcfcc2_Cannon_Far"				"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}

{add_view "tank_canon_fire_150_155"				"cw_8a33890695_flashbarrelmaximum"	"module_foresight1"}

{link_sound		"cw_8a33890695_action_recoil_Cannon"		"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}

{link_sound		"cw_8a33890695_Cannon_Mid"				"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}

{link_sound		"cw_8a33890695_Cannon_Far"				"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}

{add_view	"flash_gun_big"	"cw_16e7f63aa8_flashbarrel5"	"foresight5"}

{add_view	"flash_gun_big"	"cw_49a70e71da_flashbarrel6"	"foresight6"}

{add_view "tank_canon_fire_20_25_auto"		"cw_4d28a501b6_flashbarrel00"	"shooter00"}

{add_view "tank_canon_fire_20_25_auto"		"cw_4d28a501b6_flashbarrel01"	"shooter01"}

{add_view "tank_canon_fire_20_25_auto"		"cw_4d28a501b6_flashbarrel02"	"shooter02"}

{add_view "tank_canon_fire_20_25_auto"		"cw_4d28a501b6_flashbarrel03"	"shooter03"}

{add_view "smoke_zenit"		"cw_4d28a501b6_smoke00"		"fxshell1"}

{add_view "smoke_zenit"		"cw_4d28a501b6_smoke01"		"fxshell2"}

{add_view "smoke_zenit"		"cw_4d28a501b6_smoke02"		"fxshell3"}

{add_view "smoke_zenit"		"cw_4d28a501b6_smoke03"		"fxshell4"}

{add_view "zenit_gilz"		"cw_4d28a501b6_shell00"		"fxshell1"}

{add_view "zenit_gilz"		"cw_4d28a501b6_shell01"		"fxshell2"}

{add_view "zenit_gilz"		"cw_4d28a501b6_shell02"		"fxshell3"}

{add_view "zenit_gilz"		"cw_4d28a501b6_shell03"		"fxshell4"}

{link_sound		"cw_4d28a501b6_MultiBarrel_action_recoil"		"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}

{link_sound		"cw_4d28a501b6_MultiBarrel_tail_close" 		"weapon/shot/cannon/s1/d1/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}

{link_sound		"cw_4d28a501b6_MultiBarrel_head_mid"			"weapon/shot/cannon/s1/d2/Shared/Autocannon_20to30mm/Multi_Barrel/Head/"}

{link_sound		"cw_4d28a501b6_MultiBarrel_tail_mid"			"weapon/shot/cannon/s1/d2/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}

{link_sound		"cw_4d28a501b6_MultiBarrel_head_far"			"weapon/shot/cannon/s1/d3/Shared/Autocannon_20to30mm/Multi_Barrel/Head/"}

{link_sound		"cw_4d28a501b6_MultiBarrel_tail_far"			"weapon/shot/cannon/s1/d3/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}
}
}
