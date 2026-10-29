{"mw_e5ee481f8031 tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m5a1_stuart/start"}
		{link_sound "engine_stop"		"vehicle/engine/m5a1_stuart/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m5a1_stuart/idle"}
		{link_sound "engine_full"		"vehicle/engine/m5a1_stuart/full"}
		{link_sound "exhaust"			"vehicle/engine/m5a1_stuart/exhaust"}
		{link_sound "move"				"vehicle/tracks/m5a1_stuart/"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_light"}
}

{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M1919A4")
		("M2HB")
	}

{on "gunner2_hatch_open" overload}

{on "gunner2_hatch_close" overload}
}
