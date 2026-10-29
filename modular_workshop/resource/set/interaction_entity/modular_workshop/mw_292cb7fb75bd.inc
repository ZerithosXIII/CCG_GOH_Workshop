{"mw_292cb7fb75bd tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4_Sherman/exhaust"}
		
	


{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
}

{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("M33_DualMount")
	}

{on spawn
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Rubber/"}
	}

{on "commander_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}

{on "commander_hatch_close" overload
		{ani_play "mgun_aa" -1.0 resume}
	}
}
