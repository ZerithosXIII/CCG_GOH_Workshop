{"mw_d9089449e28a tank"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t26/start"}
		{link_sound "engine_stop"		"vehicle/engine/t26/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t26/idle"}
		{link_sound "engine_full"		"vehicle/engine/t26/full"}
		{link_sound "exhaust"			"vehicle/engine/t26/exhaust"}
		{link_sound "move"				"vehicle/tracks/t26/"}
		
	}

{on "add_weapon_sound" overload
		("Autocannon_s2")
	}

{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
	}

{on "update_turret"
		{if work "turret"
			{weapon_work "mgun2" 1}
		else
			{weapon_work "mgun2" 0}
		}
		{inherited}
	}

{on "update_multi_turret"
		{if work "aux_turret2"
			{weapon_work "mgun3" 1}
		else
			{weapon_work "mgun3" 0}
		}
		{inherited}
	}
}
