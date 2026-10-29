{"mw_e0dcc79a529a tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4_Sherman/exhaust"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
}

{on "add_weapon_sound" overload
		
	{link_sound		"action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
	
	

		
	{link_sound		"breech_open"				"weapon/reload/tank/breech_open/"}
	{link_sound		"breech_close"				"weapon/reload/tank/breech_close/"}

		
	{link_sound			"HMG_action_recoil"		"weapon/action/recoil/closed_bolt_HMG/"}
	{link_sound			"HMG_tail_close" 		"weapon/shot/smallarms/s4/d1/USA/M2HB/Tail/"}
	{link_sound			"HMG_head_mid" 			"weapon/shot/smallarms/s4/d2/USA/M2HB/Head/"}
	{link_sound			"HMG_tail_mid" 			"weapon/shot/smallarms/s4/d2/USA/M2HB/Tail/"}
	{link_sound			"HMG_head_far" 			"weapon/shot/smallarms/s4/d3/RUS/DShK38/Head/"}
	{link_sound			"HMG_tail_far" 			"weapon/shot/smallarms/s4/d3/RUS/DShK38/Tail/"}

	
{link_sound		"Cannon_Mid"				"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}

{link_sound		"Cannon_Far"				"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
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

{on fire "gun" {inherited}
{ani_play "fire_gun"}
}
}
