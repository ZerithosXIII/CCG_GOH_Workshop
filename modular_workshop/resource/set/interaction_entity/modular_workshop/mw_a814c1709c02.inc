{"mw_a814c1709c02"
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
