{"mw_07f622bbe75d tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4A3_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4A3_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4A3_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4A3_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4A3_Sherman/exhaust"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
}

{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("ZB37")
	}

{on spawn
		("rand_cut_else" args "bench1" "bench2")
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Steel/"}
	}

{on "gunner2_hatch_open" overload}

{on "gunner2_hatch_close" overload}
}
