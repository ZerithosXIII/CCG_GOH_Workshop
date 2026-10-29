{"mw_3276e59f8199 tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4_Sherman/exhaust"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
}

{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("M2HB")
		("M1919A4")
	}

{on spawn
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Steel/"}
	}

{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.75 1.25)
	}

{on "reload_delay" overload
		("reload_time" args 6)		;// weapon reload time
	}
}
