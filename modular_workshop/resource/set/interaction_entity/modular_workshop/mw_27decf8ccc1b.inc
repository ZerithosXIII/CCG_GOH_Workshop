{"mw_27decf8ccc1b tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
}

{on "add_weapon_sound" overload
		
	{link_sound		"action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
	
	

		
	{link_sound 		"Tail_Close"			"weapon/shot/smallarms/s3/d1/rus/dp27/tail/"}
	{link_sound 		"Head_Mid"				"weapon/shot/smallarms/s3/d2/rus/dp27/head/"}
	{link_sound 		"Tail_Mid"				"weapon/shot/smallarms/s3/d2/rus/dp27/tail/"}
	{link_sound 		"Head_Far"				"weapon/shot/smallarms/s3/d3/rus/dp27/head/"}
	{link_sound 		"Tail_Far"				"weapon/shot/smallarms/s3/d3/rus/dp27/tail/"}

		
	{link_sound			"HMG_action_recoil"		"weapon/action/recoil/open_bolt_mg/reciprocating/"}
	{link_sound			"HMG_tail_close" 		"weapon/shot/smallarms/s4/d1/RUS/DShK38/Tail/"}
	{link_sound			"HMG_head_mid" 			"weapon/shot/smallarms/s4/d2/RUS/DShK38/Head/"}
	{link_sound			"HMG_tail_mid" 			"weapon/shot/smallarms/s4/d2/RUS/DShK38/Tail/"}
	{link_sound			"HMG_head_far" 			"weapon/shot/smallarms/s4/d3/RUS/DShK38/Head/"}
	{link_sound			"HMG_tail_far" 			"weapon/shot/smallarms/s4/d3/RUS/DShK38/Tail/"}

	
{link_sound		"Cannon_Mid"				"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}

{link_sound		"Cannon_Far"				"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
}

{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}

{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
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
	{tags add "firing"}
	{kill_delay "burst_end"}

	{delay 0.02 "burst_end"
		{tags remove "firing"}
		; Tail – plays only when the burst is complete
		{play_sound "tail_close"}
		{play_sound "tail_mid"}
		{play_sound "tail_far"}
	}

				{view start "flashbarrel5"}
				{delay 0.2
					{view pause "flashbarrel5"}
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
	{tags add "firing"}
	{kill_delay "burst_end"}

	{delay 0.02 "burst_end"
		{tags remove "firing"}
		; Tail – plays only when the burst is complete
		{play_sound "tail_close"}
		{play_sound "tail_mid"}
		{play_sound "tail_far"}
	}

				{view start "flashbarrel6"}
				{delay 0.2
					{view pause "flashbarrel6"}
				}
			}
		}

{on fire "gun" overload
		{view start "cw_7414679bb5_flashbarrel1"}
		{view start "cw_7414679bb5_flashbarrel1smoke"}
		{ani_play "fire_gun"}
	
{view start "cw_7414679bb5_flashbarrelmaximum"}

{play_sound "cw_7414679bb5_action_recoil_Cannon"}

{play_sound "cw_7414679bb5_Cannon_Mid"}

{play_sound "cw_7414679bb5_Cannon_Far"}

{call "cw_7414679bb5_maximum_terrain_fx"}
}

{on "cw_7414679bb5_maximum_terrain_fx"
		{if not rain
			{if terrain_fx "ground"
				{view start "cw_7414679bb5_maximum_ground_fx"}
			else terrain_fx "mud"
				;//none
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_7414679bb5_maximum_sand_fx"}
			else terrain_fx "snow"
				{view start "cw_7414679bb5_maximum_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_7414679bb5_maximum_snow_fx"}
			else
				{view start "cw_7414679bb5_maximum_ground_fx"}
			}
		else
			{if terrain_fx "ground"
				{view start "cw_7414679bb5_maximum_ground_r_fx"}
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_7414679bb5_maximum_sand_r_fx"}
			else terrain_fx "snow"
				{view start "cw_7414679bb5_maximum_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_7414679bb5_maximum_snow_fx"}
			else
				{view start "cw_7414679bb5_maximum_ground_r_fx"}
			}
		}
	}

{on spawn {inherited}
{add_view	"flash_gun_big"	"flashbarrel5"	"foresight5"}

{add_view	"flash_gun_big"	"flashbarrel6"	"foresight6"}

{add_view "tank_canon_fire_122_128"				"cw_7414679bb5_flashbarrelmaximum"	"foresight1"}

{link_sound		"cw_7414679bb5_action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}

{link_sound		"cw_7414679bb5_Cannon_Mid"				"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}

{link_sound		"cw_7414679bb5_Cannon_Far"				"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
}
}
