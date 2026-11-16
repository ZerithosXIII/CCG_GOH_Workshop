{"mw_bb728f966583 tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m5a1_stuart/start"}
		{link_sound "engine_stop"		"vehicle/engine/m5a1_stuart/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m5a1_stuart/idle"}
		{link_sound "engine_full"		"vehicle/engine/m5a1_stuart/full"}
		{link_sound "exhaust"			"vehicle/engine/m5a1_stuart/exhaust"}
		{link_sound "move"				"vehicle/tracks/m5a1_stuart/"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
}

{on "add_weapon_sound" overload
		
	{link_sound		"action_recoil_Cannon"		"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
	
	

		
	{link_sound			"Tail_Close"			"weapon/shot/smallarms/s3/d1/USA/M1919A4/tail/"}
	{link_sound			"Head_Mid"				"weapon/shot/smallarms/s3/d2/USA/M1919A4/head/"}
	{link_sound			"Tail_Mid"				"weapon/shot/smallarms/s3/d2/USA/M1919A4/tail/"}
	{link_sound			"Head_Far"				"weapon/shot/smallarms/s3/d3/USA/M1919A4/head/"}
	{link_sound			"Tail_Far"				"weapon/shot/smallarms/s3/d3/USA/M1919A4/tail/"}

	
{link_sound		"Cannon_Mid"				"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm_HV/"}

{link_sound		"Cannon_Far"				"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm_HV/"}
}

{on "gunner2_hatch_open" overload}

{on "gunner2_hatch_close" overload}

{on fire "gun" overload {inherited}
{ani_play "fire_gun"}
}
}
