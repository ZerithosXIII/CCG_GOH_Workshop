{"mw_7c8615afc70c"
{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/zis5/start"}
		{link_sound "engine_stop"		"vehicle/engine/zis5/stop"}
		{link_sound "engine_idle"		"vehicle/engine/zis5/idle"}
		{link_sound "engine_full"		"vehicle/engine/zis5/full"}
		{link_sound "exhaust"			"vehicle/engine/zis5/exhaust"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "move"				"vehicle/wheels/truck"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	}

{on "add_weapon_sound" overload
		("Autocannon_s2")
	}

("animation_sound" args "open_left")

("animation_sound" args "open_right")

{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}
