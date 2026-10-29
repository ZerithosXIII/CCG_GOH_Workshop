{"mw_f6187b82efdc tank"
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
	{link_sound			"HMG_tail_close" 		"weapon/shot/smallarms/s4/d1/USA/M2HB/Tail/"}
	{link_sound			"HMG_head_mid" 			"weapon/shot/smallarms/s4/d2/USA/M2HB/Head/"}
	{link_sound			"HMG_tail_mid" 			"weapon/shot/smallarms/s4/d2/USA/M2HB/Tail/"}
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

{on fire "gun" {inherited}
{ani_play "fire_gun"}
}
}
