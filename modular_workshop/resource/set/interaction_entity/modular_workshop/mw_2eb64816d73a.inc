{"mw_2eb64816d73a tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34/"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
}

{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}

{on fire "mgun_cmd2"
{if effector "stuff weapon" {with_effector {call "fire"}}}
}

{on "commander_hatch_open" overload
{ani_play "cmdmg_pose2" +1.0 resume}
}

{on "commander_hatch_close" overload
{ani_play "cmdmg_pose2" -1.0 resume}
}
}
