{"mw_2e998126c2a7 tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t28/start"}
		{link_sound "engine_stop"		"vehicle/engine/t28/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t28/idle"}
		{link_sound "engine_full"		"vehicle/engine/t28/full"}
		{link_sound "exhaust"			"vehicle/engine/t28/exhaust"}
		{link_sound "move"				"vehicle/tracks/t28/"}
		
		{link_sound "rotate_turret1"	"vehicle/turret/handcrank/handcrank_light"}
	
{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
}

{on "add_weapon_sound" overload
		
	{link_sound		"action_recoil_Cannon"		"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
	
	

		{link_sound 		"action_recoil_Cannon2"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound	 	"Cannon_Mid2"		"weapon/shot/cannon/s2/d2/Shared/Cannon_45to47mm/"}
		{link_sound 		"Cannon_Far2"		"weapon/shot/cannon/s2/d3/Shared/Cannon_45to47mm/"}
		
	{link_sound 		"Tail_Close"			"weapon/shot/smallarms/s3/d1/rus/dp27/tail/"}
	{link_sound 		"Head_Mid"				"weapon/shot/smallarms/s3/d2/rus/dp27/head/"}
	{link_sound 		"Tail_Mid"				"weapon/shot/smallarms/s3/d2/rus/dp27/tail/"}
	{link_sound 		"Head_Far"				"weapon/shot/smallarms/s3/d3/rus/dp27/head/"}
	{link_sound 		"Tail_Far"				"weapon/shot/smallarms/s3/d3/rus/dp27/tail/"}

	
{link_sound		"Cannon_Mid"				"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm_LV/"}

{link_sound		"Cannon_Far"				"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm_LV/"}
}

{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}

{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}

{on break
		{if not tagged "exploded"
			{if component "aux_turret4"
				{call "kill_gunner6"}
			else component "aux_turret3"
				{if rand 0.5
					{call_synced "kill_gunner4"}
				else
					{call_synced "kill_charger4"}
				}
			else component "aux_turret2"
				{call "kill_gunner5"}
			else component "aux_turret1"
				{if rand 0.5
					{call_synced "kill_gunner3"}
				else
					{call_synced "kill_charger3"}
				}
			}
		}
	}

{on "update_multi_turret"
		{if work "aux_turret2"
			{weapon_work "mgun1" 1}
		else
			{weapon_work "mgun1" 0}
		}
		{if work "aux_turret4"
			{weapon_work "mgun2" 1}
		else
			{weapon_work "mgun2" 0}
		}
		{inherited}
	}

(define "multi_turret_rotate"
		{on ik begin "%0" overload
			{kill_delay "rotate_turret%1"}
			{if not "rotate_turret%1"
				{play_sound "rotate_turret%1" 1}
				{set "rotate_turret%1" 1}
			}
		}
		{on ik end "%0" overload
			{delay 0.25 "rotate_turret%1"
				{stop_sound "rotate_turret%1"}
				{set "rotate_turret%1" 0}
			}
		}
	)

("multi_turret_rotate" args aux_turret1 1)

("multi_turret_rotate" args aux_turret2 1)

("multi_turret_rotate" args aux_turret3 1)

("multi_turret_rotate" args aux_turret4 1)

{on fire "gun" {inherited}
{ani_play "recoil"}
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
