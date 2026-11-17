{"mw_525623e71a54 tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70"}
		
	
{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
}

{on "add_weapon_sound" overload
		
	{link_sound		"action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
	
	

		
	{link_sound		"breech_open"				"weapon/reload/tank/breech_open/"}
	{link_sound		"breech_close"				"weapon/reload/tank/breech_close/"}

	
{link_sound		"Cannon_Mid"				"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm/"}

{link_sound		"Cannon_Far"				"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm/"}
}

{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

{on "reload_delay" overload
		("reload_time" args 5)		;// weapon reload time
	}



{on fire "gun" overload
		{view start "cw_c0a851a5d7_flashbarrel1"}
		{view start "cw_c0a851a5d7_flashbarrel1smoke"}
		{ani_play "fire_gun"}
	
{view start "cw_c0a851a5d7_flashbarrelmedium"}

{play_sound "cw_c0a851a5d7_action_recoil_Cannon"}

{play_sound "cw_c0a851a5d7_Cannon_Mid"}

{play_sound "cw_c0a851a5d7_Cannon_Far"}

{call "cw_c0a851a5d7_medium_terrain_fx"}
}

{on "cw_c0a851a5d7_medium_terrain_fx"
		{if not rain
			{if terrain_fx "ground"
				{view start "cw_c0a851a5d7_medium_ground_fx"}
			else terrain_fx "mud"
				;//none
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_c0a851a5d7_medium_sand_fx"}
			else terrain_fx "snow"
				{view start "cw_c0a851a5d7_medium_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_c0a851a5d7_medium_snow_fx"}
			else
				{view start "cw_c0a851a5d7_medium_ground_fx"}
			}
		else
			{if terrain_fx "ground"
				{view start "cw_c0a851a5d7_medium_ground_r_fx"}
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_c0a851a5d7_medium_sand_r_fx"}
			else terrain_fx "snow"
				{view start "cw_c0a851a5d7_medium_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_c0a851a5d7_medium_snow_fx"}
			else
				{view start "cw_c0a851a5d7_medium_ground_r_fx"}
			}
		}
	}

{on spawn {inherited}
{add_view "tank_canon_fire_75_76"				"cw_c0a851a5d7_flashbarrelmedium"		"foresight1"}

{link_sound		"cw_c0a851a5d7_action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}

{link_sound		"cw_c0a851a5d7_Cannon_Mid"				"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm/"}

{link_sound		"cw_c0a851a5d7_Cannon_Far"				"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm/"}
}

{on fire "mgun1"
{if effector "stuff weapon" {with_effector {call "fire"}}}
}

{on "commander_hatch_open" overload
{ani_play "cmdmg_pose2" +1.0 resume}
}

{on "commander_hatch_close" overload
{ani_play "cmdmg_pose2" -1.0 resume}
}
}
