{"mw_4ab2bb47016f tank"
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
		
	{link_sound		"action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
	
	

		
	{link_sound 		"Tail_Close"			"weapon/shot/smallarms/s3/d1/rus/dp27/tail/"}
	{link_sound 		"Head_Mid"				"weapon/shot/smallarms/s3/d2/rus/dp27/head/"}
	{link_sound 		"Tail_Mid"				"weapon/shot/smallarms/s3/d2/rus/dp27/tail/"}
	{link_sound 		"Head_Far"				"weapon/shot/smallarms/s3/d3/rus/dp27/head/"}
	{link_sound 		"Tail_Far"				"weapon/shot/smallarms/s3/d3/rus/dp27/tail/"}

	
{link_sound		"Cannon_Mid"				"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}

{link_sound		"Cannon_Far"				"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
}

{on spawn
		{add_view "flamer_fire_tank" "flamer1" "foresight4"}
	
{add_view	"flash_gun_big"	"flashbarrel5"	"foresight5"}

{link_sound "start"		"weapon/shot/flame/vehicle/vehicle_flamer_start"}

{link_sound "loop"		"weapon/shot/flame/vehicle/vehicle_flamer_loop"}

{link_sound "end"		"weapon/shot/flame/vehicle/vehicle_flamer_stop"}

{add_view "tank_canon_fire_100_105"				"cw_f591b5270c_flashbarrelmaximum"	"foresight1"}

{link_sound		"cw_f591b5270c_action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}

{link_sound		"cw_f591b5270c_Cannon_Mid"				"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}

{link_sound		"cw_f591b5270c_Cannon_Far"				"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
}

{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
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

{on fire "flamer1" overload
			{spawn "fx_piece_flame_80" "foresight4" x
				{impulse forward 45 rnd_dir 0.01 com}
				{gravity 0.65}
				{linear_damping 0}
			}
			{view start "flamer1"}
			{delay 0.05
				{spawn "fx_piece_flame_80" "foresight4" x
					{impulse forward 45 rnd_dir 0.01 com}
					{gravity 0.65}
					{linear_damping 0}
				}
			}
			{delay 0.1
				{view pause "flamer1"}
			}
			{if tagged "firing"
				{if tagged "looping"
					{play_sound "loop" 1}
					{tags remove "looping"}
				}
			else
				{play_sound "start"}
				{tags add "looping"}
			}
			{tags add "firing"}
			{delay 0.125
				{tags remove "firing"}
				{tags remove "looping"}
				{play_sound "end"}
				{delay 0.05
					{stop_sound "loop"}
				}
			}
		}

{on fire "gun" overload
		{view start "cw_f591b5270c_flashbarrel1"}
		{view start "cw_f591b5270c_flashbarrel1smoke"}
		{ani_play "fire_gun"}
	
{view start "cw_f591b5270c_flashbarrelmaximum"}

{play_sound "cw_f591b5270c_action_recoil_Cannon"}

{play_sound "cw_f591b5270c_Cannon_Mid"}

{play_sound "cw_f591b5270c_Cannon_Far"}

{call "cw_f591b5270c_maximum_terrain_fx"}
}

{on "cw_f591b5270c_maximum_terrain_fx"
		{if not rain
			{if terrain_fx "ground"
				{view start "cw_f591b5270c_maximum_ground_fx"}
			else terrain_fx "mud"
				;//none
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_f591b5270c_maximum_sand_fx"}
			else terrain_fx "snow"
				{view start "cw_f591b5270c_maximum_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_f591b5270c_maximum_snow_fx"}
			else
				{view start "cw_f591b5270c_maximum_ground_fx"}
			}
		else
			{if terrain_fx "ground"
				{view start "cw_f591b5270c_maximum_ground_r_fx"}
			else terrain_fx "water"
				;//none
			else terrain_fx "shallow_water"
				;//none
			else terrain_fx "sand"
				{view start "cw_f591b5270c_maximum_sand_r_fx"}
			else terrain_fx "snow"
				{view start "cw_f591b5270c_maximum_snow_fx"}
			else terrain_fx "ice"
				{view start "cw_f591b5270c_maximum_snow_fx"}
			else
				{view start "cw_f591b5270c_maximum_ground_r_fx"}
			}
		}
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
