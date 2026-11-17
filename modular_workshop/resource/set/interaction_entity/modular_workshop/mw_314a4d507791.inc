{"mw_314a4d507791"
{on fire "mgun5" overload
		{play_sound "cw_2ffba043bf_MultiBarrel_action_recoil"}
		{play_sound "cw_2ffba043bf_MultiBarrel_head_mid"}
		{play_sound "cw_2ffba043bf_MultiBarrel_head_far"}
		{tags add "cw_2ffba043bf_firing"}
		{delay 0.001
			{tags remove "cw_2ffba043bf_firing"}
			{play_sound "cw_2ffba043bf_MultiBarrel_tail_close"}
			{play_sound "cw_2ffba043bf_MultiBarrel_tail_mid"}
			{play_sound "cw_2ffba043bf_MultiBarrel_tail_far"}
		}
		
		{if	
			name "00"
				{call "fire_barrel00"}
				{view show "cw_2ffba043bf_flashbarrel00"}
				{view start "cw_2ffba043bf_flashbarrel00"}
				{ani_play "fire00"}
				{view start "cw_2ffba043bf_shell00"}
				{view start "cw_2ffba043bf_smoke00"}
				{delay 0.12 "cw_2ffba043bf_shell_off"
					{view pause "cw_2ffba043bf_shell00"}
					{view pause "cw_2ffba043bf_smoke00"}
				}
				{delay 0.2 "cw_2ffba043bf_fire"
					{view hide	"cw_2ffba043bf_flashbarrel00"}
					{view pause	"cw_2ffba043bf_flashbarrel00"}
				}
		
		else 
			name "01"
				{call "fire_barrel01"}
				{view show "cw_2ffba043bf_flashbarrel01"}
				{view start "cw_2ffba043bf_flashbarrel01"}
				{ani_play "fire01"}
				{view start "cw_2ffba043bf_shell01"}
				{view start "cw_2ffba043bf_smoke01"}
				{delay 0.12 "cw_2ffba043bf_shell_off"
					{view pause "cw_2ffba043bf_shell01"}
					{view pause "cw_2ffba043bf_smoke01"}
				}
				{delay 0.2 "cw_2ffba043bf_fire"
					{view hide	"cw_2ffba043bf_flashbarrel01"}
					{view pause	"cw_2ffba043bf_flashbarrel01"}
				}
		
		else 
			name "02"
				{call "fire_barrel02"}
				{view show "cw_2ffba043bf_flashbarrel02"}
				{view start "cw_2ffba043bf_flashbarrel02"}
				{ani_play "fire02"}
				{view start "cw_2ffba043bf_shell02"}
				{view start "cw_2ffba043bf_smoke02"}
				{delay 0.12 "cw_2ffba043bf_shell_off"
					{view pause "cw_2ffba043bf_shell02"}
					{view pause "cw_2ffba043bf_smoke02"}
				}
				{delay 0.2 "cw_2ffba043bf_fire"
					{view hide	"cw_2ffba043bf_flashbarrel02"}
					{view pause	"cw_2ffba043bf_flashbarrel02"}
				}
		
		else 
			name "03"
				{call "fire_barrel03"}
				{view show "cw_2ffba043bf_flashbarrel03"}
				{view start "cw_2ffba043bf_flashbarrel03"}
				{ani_play "fire03"}
				{view start "cw_2ffba043bf_shell03"}
				{view start "cw_2ffba043bf_smoke03"}
				{delay 0.12 "cw_2ffba043bf_shell_off"
					{view pause "cw_2ffba043bf_shell03"}
					{view pause "cw_2ffba043bf_smoke03"}
				}
				{delay 0.2 "cw_2ffba043bf_fire"
					{view hide	"cw_2ffba043bf_flashbarrel03"}
					{view pause	"cw_2ffba043bf_flashbarrel03"}
				}
		
		else 
			name "04"
				{call "fire_barrel04"}
				{view show "cw_2ffba043bf_flashbarrel04"}
				{view start "cw_2ffba043bf_flashbarrel04"}
				{ani_play "fire04"}
				{view start "cw_2ffba043bf_shell04"}
				{view start "cw_2ffba043bf_smoke04"}
				{delay 0.12 "cw_2ffba043bf_shell_off"
					{view pause "cw_2ffba043bf_shell04"}
					{view pause "cw_2ffba043bf_smoke04"}
				}
				{delay 0.2 "cw_2ffba043bf_fire"
					{view hide	"cw_2ffba043bf_flashbarrel04"}
					{view pause	"cw_2ffba043bf_flashbarrel04"}
				}
		
		else 
			name "05"
				{call "fire_barrel05"}
				{view show "cw_2ffba043bf_flashbarrel05"}
				{view start "cw_2ffba043bf_flashbarrel05"}
				{ani_play "fire05"}
				{view start "cw_2ffba043bf_shell05"}
				{view start "cw_2ffba043bf_smoke05"}
				{delay 0.12 "cw_2ffba043bf_shell_off"
					{view pause "cw_2ffba043bf_shell05"}
					{view pause "cw_2ffba043bf_smoke05"}
				}
				{delay 0.2 "cw_2ffba043bf_fire"
					{view hide	"cw_2ffba043bf_flashbarrel05"}
					{view pause	"cw_2ffba043bf_flashbarrel05"}
				}
		
		else 
			name "06"
				{call "fire_barrel06"}
				{view show "cw_2ffba043bf_flashbarrel06"}
				{view start "cw_2ffba043bf_flashbarrel06"}
				{ani_play "fire06"}
				{view start "cw_2ffba043bf_shell06"}
				{view start "cw_2ffba043bf_smoke06"}
				{delay 0.12 "cw_2ffba043bf_shell_off"
					{view pause "cw_2ffba043bf_shell06"}
					{view pause "cw_2ffba043bf_smoke06"}
				}
				{delay 0.2 "cw_2ffba043bf_fire"
					{view hide	"cw_2ffba043bf_flashbarrel06"}
					{view pause	"cw_2ffba043bf_flashbarrel06"}
				}
		
		else 
			name "07"
				{call "fire_barrel07"}
				{view show "cw_2ffba043bf_flashbarrel07"}
				{view start "cw_2ffba043bf_flashbarrel07"}
				{ani_play "fire07"}
				{view start "cw_2ffba043bf_shell07"}
				{view start "cw_2ffba043bf_smoke07"}
				{delay 0.12 "cw_2ffba043bf_shell_off"
					{view pause "cw_2ffba043bf_shell07"}
					{view pause "cw_2ffba043bf_smoke07"}
				}
				{delay 0.2 "cw_2ffba043bf_fire"
					{view hide	"cw_2ffba043bf_flashbarrel07"}
					{view pause	"cw_2ffba043bf_flashbarrel07"}
				}
		
		}
	}

{on fire "mgun3" overload
		{play_sound "cw_49a70e71da_MultiBarrel_action_recoil"}
		{play_sound "cw_49a70e71da_MultiBarrel_head_mid"}
		{play_sound "cw_49a70e71da_MultiBarrel_head_far"}
		{tags add "cw_49a70e71da_firing"}
		{delay 0.001
			{tags remove "cw_49a70e71da_firing"}
			{play_sound "cw_49a70e71da_MultiBarrel_tail_close"}
			{play_sound "cw_49a70e71da_MultiBarrel_tail_mid"}
			{play_sound "cw_49a70e71da_MultiBarrel_tail_far"}
		}
		
		{if	
			name "00"
				{call "fire_barrel00"}
				{view show "cw_49a70e71da_flashbarrel00"}
				{view start "cw_49a70e71da_flashbarrel00"}
				{ani_play "fire00"}
				{view start "cw_49a70e71da_shell00"}
				{view start "cw_49a70e71da_smoke00"}
				{delay 0.12 "cw_49a70e71da_shell_off"
					{view pause "cw_49a70e71da_shell00"}
					{view pause "cw_49a70e71da_smoke00"}
				}
				{delay 0.2 "cw_49a70e71da_fire"
					{view hide	"cw_49a70e71da_flashbarrel00"}
					{view pause	"cw_49a70e71da_flashbarrel00"}
				}
		
		else 
			name "01"
				{call "fire_barrel01"}
				{view show "cw_49a70e71da_flashbarrel01"}
				{view start "cw_49a70e71da_flashbarrel01"}
				{ani_play "fire01"}
				{view start "cw_49a70e71da_shell01"}
				{view start "cw_49a70e71da_smoke01"}
				{delay 0.12 "cw_49a70e71da_shell_off"
					{view pause "cw_49a70e71da_shell01"}
					{view pause "cw_49a70e71da_smoke01"}
				}
				{delay 0.2 "cw_49a70e71da_fire"
					{view hide	"cw_49a70e71da_flashbarrel01"}
					{view pause	"cw_49a70e71da_flashbarrel01"}
				}
		
		else 
			name "02"
				{call "fire_barrel02"}
				{view show "cw_49a70e71da_flashbarrel02"}
				{view start "cw_49a70e71da_flashbarrel02"}
				{ani_play "fire02"}
				{view start "cw_49a70e71da_shell02"}
				{view start "cw_49a70e71da_smoke02"}
				{delay 0.12 "cw_49a70e71da_shell_off"
					{view pause "cw_49a70e71da_shell02"}
					{view pause "cw_49a70e71da_smoke02"}
				}
				{delay 0.2 "cw_49a70e71da_fire"
					{view hide	"cw_49a70e71da_flashbarrel02"}
					{view pause	"cw_49a70e71da_flashbarrel02"}
				}
		
		else 
			name "03"
				{call "fire_barrel03"}
				{view show "cw_49a70e71da_flashbarrel03"}
				{view start "cw_49a70e71da_flashbarrel03"}
				{ani_play "fire03"}
				{view start "cw_49a70e71da_shell03"}
				{view start "cw_49a70e71da_smoke03"}
				{delay 0.12 "cw_49a70e71da_shell_off"
					{view pause "cw_49a70e71da_shell03"}
					{view pause "cw_49a70e71da_smoke03"}
				}
				{delay 0.2 "cw_49a70e71da_fire"
					{view hide	"cw_49a70e71da_flashbarrel03"}
					{view pause	"cw_49a70e71da_flashbarrel03"}
				}
		
		else 
			name "04"
				{call "fire_barrel04"}
				{view show "cw_49a70e71da_flashbarrel04"}
				{view start "cw_49a70e71da_flashbarrel04"}
				{ani_play "fire04"}
				{view start "cw_49a70e71da_shell04"}
				{view start "cw_49a70e71da_smoke04"}
				{delay 0.12 "cw_49a70e71da_shell_off"
					{view pause "cw_49a70e71da_shell04"}
					{view pause "cw_49a70e71da_smoke04"}
				}
				{delay 0.2 "cw_49a70e71da_fire"
					{view hide	"cw_49a70e71da_flashbarrel04"}
					{view pause	"cw_49a70e71da_flashbarrel04"}
				}
		
		else 
			name "05"
				{call "fire_barrel05"}
				{view show "cw_49a70e71da_flashbarrel05"}
				{view start "cw_49a70e71da_flashbarrel05"}
				{ani_play "fire05"}
				{view start "cw_49a70e71da_shell05"}
				{view start "cw_49a70e71da_smoke05"}
				{delay 0.12 "cw_49a70e71da_shell_off"
					{view pause "cw_49a70e71da_shell05"}
					{view pause "cw_49a70e71da_smoke05"}
				}
				{delay 0.2 "cw_49a70e71da_fire"
					{view hide	"cw_49a70e71da_flashbarrel05"}
					{view pause	"cw_49a70e71da_flashbarrel05"}
				}
		
		else 
			name "06"
				{call "fire_barrel06"}
				{view show "cw_49a70e71da_flashbarrel06"}
				{view start "cw_49a70e71da_flashbarrel06"}
				{ani_play "fire06"}
				{view start "cw_49a70e71da_shell06"}
				{view start "cw_49a70e71da_smoke06"}
				{delay 0.12 "cw_49a70e71da_shell_off"
					{view pause "cw_49a70e71da_shell06"}
					{view pause "cw_49a70e71da_smoke06"}
				}
				{delay 0.2 "cw_49a70e71da_fire"
					{view hide	"cw_49a70e71da_flashbarrel06"}
					{view pause	"cw_49a70e71da_flashbarrel06"}
				}
		
		else 
			name "07"
				{call "fire_barrel07"}
				{view show "cw_49a70e71da_flashbarrel07"}
				{view start "cw_49a70e71da_flashbarrel07"}
				{ani_play "fire07"}
				{view start "cw_49a70e71da_shell07"}
				{view start "cw_49a70e71da_smoke07"}
				{delay 0.12 "cw_49a70e71da_shell_off"
					{view pause "cw_49a70e71da_shell07"}
					{view pause "cw_49a70e71da_smoke07"}
				}
				{delay 0.2 "cw_49a70e71da_fire"
					{view hide	"cw_49a70e71da_flashbarrel07"}
					{view pause	"cw_49a70e71da_flashbarrel07"}
				}
		
		}
	}

{on fire "mgun2" overload
		{play_sound "cw_9a0615f0bb_MultiBarrel_action_recoil"}
		{play_sound "cw_9a0615f0bb_MultiBarrel_head_mid"}
		{play_sound "cw_9a0615f0bb_MultiBarrel_head_far"}
		{tags add "cw_9a0615f0bb_firing"}
		{delay 0.001
			{tags remove "cw_9a0615f0bb_firing"}
			{play_sound "cw_9a0615f0bb_MultiBarrel_tail_close"}
			{play_sound "cw_9a0615f0bb_MultiBarrel_tail_mid"}
			{play_sound "cw_9a0615f0bb_MultiBarrel_tail_far"}
		}
		
		{if	
			name "00"
				{call "fire_barrel00"}
				{view show "cw_9a0615f0bb_flashbarrel00"}
				{view start "cw_9a0615f0bb_flashbarrel00"}
				{ani_play "fire00"}
				{view start "cw_9a0615f0bb_shell00"}
				{view start "cw_9a0615f0bb_smoke00"}
				{delay 0.12 "cw_9a0615f0bb_shell_off"
					{view pause "cw_9a0615f0bb_shell00"}
					{view pause "cw_9a0615f0bb_smoke00"}
				}
				{delay 0.2 "cw_9a0615f0bb_fire"
					{view hide	"cw_9a0615f0bb_flashbarrel00"}
					{view pause	"cw_9a0615f0bb_flashbarrel00"}
				}
		
		else 
			name "01"
				{call "fire_barrel01"}
				{view show "cw_9a0615f0bb_flashbarrel01"}
				{view start "cw_9a0615f0bb_flashbarrel01"}
				{ani_play "fire01"}
				{view start "cw_9a0615f0bb_shell01"}
				{view start "cw_9a0615f0bb_smoke01"}
				{delay 0.12 "cw_9a0615f0bb_shell_off"
					{view pause "cw_9a0615f0bb_shell01"}
					{view pause "cw_9a0615f0bb_smoke01"}
				}
				{delay 0.2 "cw_9a0615f0bb_fire"
					{view hide	"cw_9a0615f0bb_flashbarrel01"}
					{view pause	"cw_9a0615f0bb_flashbarrel01"}
				}
		
		else 
			name "02"
				{call "fire_barrel02"}
				{view show "cw_9a0615f0bb_flashbarrel02"}
				{view start "cw_9a0615f0bb_flashbarrel02"}
				{ani_play "fire02"}
				{view start "cw_9a0615f0bb_shell02"}
				{view start "cw_9a0615f0bb_smoke02"}
				{delay 0.12 "cw_9a0615f0bb_shell_off"
					{view pause "cw_9a0615f0bb_shell02"}
					{view pause "cw_9a0615f0bb_smoke02"}
				}
				{delay 0.2 "cw_9a0615f0bb_fire"
					{view hide	"cw_9a0615f0bb_flashbarrel02"}
					{view pause	"cw_9a0615f0bb_flashbarrel02"}
				}
		
		else 
			name "03"
				{call "fire_barrel03"}
				{view show "cw_9a0615f0bb_flashbarrel03"}
				{view start "cw_9a0615f0bb_flashbarrel03"}
				{ani_play "fire03"}
				{view start "cw_9a0615f0bb_shell03"}
				{view start "cw_9a0615f0bb_smoke03"}
				{delay 0.12 "cw_9a0615f0bb_shell_off"
					{view pause "cw_9a0615f0bb_shell03"}
					{view pause "cw_9a0615f0bb_smoke03"}
				}
				{delay 0.2 "cw_9a0615f0bb_fire"
					{view hide	"cw_9a0615f0bb_flashbarrel03"}
					{view pause	"cw_9a0615f0bb_flashbarrel03"}
				}
		
		else 
			name "04"
				{call "fire_barrel04"}
				{view show "cw_9a0615f0bb_flashbarrel04"}
				{view start "cw_9a0615f0bb_flashbarrel04"}
				{ani_play "fire04"}
				{view start "cw_9a0615f0bb_shell04"}
				{view start "cw_9a0615f0bb_smoke04"}
				{delay 0.12 "cw_9a0615f0bb_shell_off"
					{view pause "cw_9a0615f0bb_shell04"}
					{view pause "cw_9a0615f0bb_smoke04"}
				}
				{delay 0.2 "cw_9a0615f0bb_fire"
					{view hide	"cw_9a0615f0bb_flashbarrel04"}
					{view pause	"cw_9a0615f0bb_flashbarrel04"}
				}
		
		else 
			name "05"
				{call "fire_barrel05"}
				{view show "cw_9a0615f0bb_flashbarrel05"}
				{view start "cw_9a0615f0bb_flashbarrel05"}
				{ani_play "fire05"}
				{view start "cw_9a0615f0bb_shell05"}
				{view start "cw_9a0615f0bb_smoke05"}
				{delay 0.12 "cw_9a0615f0bb_shell_off"
					{view pause "cw_9a0615f0bb_shell05"}
					{view pause "cw_9a0615f0bb_smoke05"}
				}
				{delay 0.2 "cw_9a0615f0bb_fire"
					{view hide	"cw_9a0615f0bb_flashbarrel05"}
					{view pause	"cw_9a0615f0bb_flashbarrel05"}
				}
		
		else 
			name "06"
				{call "fire_barrel06"}
				{view show "cw_9a0615f0bb_flashbarrel06"}
				{view start "cw_9a0615f0bb_flashbarrel06"}
				{ani_play "fire06"}
				{view start "cw_9a0615f0bb_shell06"}
				{view start "cw_9a0615f0bb_smoke06"}
				{delay 0.12 "cw_9a0615f0bb_shell_off"
					{view pause "cw_9a0615f0bb_shell06"}
					{view pause "cw_9a0615f0bb_smoke06"}
				}
				{delay 0.2 "cw_9a0615f0bb_fire"
					{view hide	"cw_9a0615f0bb_flashbarrel06"}
					{view pause	"cw_9a0615f0bb_flashbarrel06"}
				}
		
		else 
			name "07"
				{call "fire_barrel07"}
				{view show "cw_9a0615f0bb_flashbarrel07"}
				{view start "cw_9a0615f0bb_flashbarrel07"}
				{ani_play "fire07"}
				{view start "cw_9a0615f0bb_shell07"}
				{view start "cw_9a0615f0bb_smoke07"}
				{delay 0.12 "cw_9a0615f0bb_shell_off"
					{view pause "cw_9a0615f0bb_shell07"}
					{view pause "cw_9a0615f0bb_smoke07"}
				}
				{delay 0.2 "cw_9a0615f0bb_fire"
					{view hide	"cw_9a0615f0bb_flashbarrel07"}
					{view pause	"cw_9a0615f0bb_flashbarrel07"}
				}
		
		}
	}

{on fire "mgun4" overload
		{play_sound "cw_13f0a0efa4_MultiBarrel_action_recoil"}
		{play_sound "cw_13f0a0efa4_MultiBarrel_head_mid"}
		{play_sound "cw_13f0a0efa4_MultiBarrel_head_far"}
		{tags add "cw_13f0a0efa4_firing"}
		{delay 0.001
			{tags remove "cw_13f0a0efa4_firing"}
			{play_sound "cw_13f0a0efa4_MultiBarrel_tail_close"}
			{play_sound "cw_13f0a0efa4_MultiBarrel_tail_mid"}
			{play_sound "cw_13f0a0efa4_MultiBarrel_tail_far"}
		}
		
		{if	
			name "00"
				{call "fire_barrel00"}
				{view show "cw_13f0a0efa4_flashbarrel00"}
				{view start "cw_13f0a0efa4_flashbarrel00"}
				{ani_play "fire00"}
				{view start "cw_13f0a0efa4_shell00"}
				{view start "cw_13f0a0efa4_smoke00"}
				{delay 0.12 "cw_13f0a0efa4_shell_off"
					{view pause "cw_13f0a0efa4_shell00"}
					{view pause "cw_13f0a0efa4_smoke00"}
				}
				{delay 0.2 "cw_13f0a0efa4_fire"
					{view hide	"cw_13f0a0efa4_flashbarrel00"}
					{view pause	"cw_13f0a0efa4_flashbarrel00"}
				}
		
		else 
			name "01"
				{call "fire_barrel01"}
				{view show "cw_13f0a0efa4_flashbarrel01"}
				{view start "cw_13f0a0efa4_flashbarrel01"}
				{ani_play "fire01"}
				{view start "cw_13f0a0efa4_shell01"}
				{view start "cw_13f0a0efa4_smoke01"}
				{delay 0.12 "cw_13f0a0efa4_shell_off"
					{view pause "cw_13f0a0efa4_shell01"}
					{view pause "cw_13f0a0efa4_smoke01"}
				}
				{delay 0.2 "cw_13f0a0efa4_fire"
					{view hide	"cw_13f0a0efa4_flashbarrel01"}
					{view pause	"cw_13f0a0efa4_flashbarrel01"}
				}
		
		else 
			name "02"
				{call "fire_barrel02"}
				{view show "cw_13f0a0efa4_flashbarrel02"}
				{view start "cw_13f0a0efa4_flashbarrel02"}
				{ani_play "fire02"}
				{view start "cw_13f0a0efa4_shell02"}
				{view start "cw_13f0a0efa4_smoke02"}
				{delay 0.12 "cw_13f0a0efa4_shell_off"
					{view pause "cw_13f0a0efa4_shell02"}
					{view pause "cw_13f0a0efa4_smoke02"}
				}
				{delay 0.2 "cw_13f0a0efa4_fire"
					{view hide	"cw_13f0a0efa4_flashbarrel02"}
					{view pause	"cw_13f0a0efa4_flashbarrel02"}
				}
		
		else 
			name "03"
				{call "fire_barrel03"}
				{view show "cw_13f0a0efa4_flashbarrel03"}
				{view start "cw_13f0a0efa4_flashbarrel03"}
				{ani_play "fire03"}
				{view start "cw_13f0a0efa4_shell03"}
				{view start "cw_13f0a0efa4_smoke03"}
				{delay 0.12 "cw_13f0a0efa4_shell_off"
					{view pause "cw_13f0a0efa4_shell03"}
					{view pause "cw_13f0a0efa4_smoke03"}
				}
				{delay 0.2 "cw_13f0a0efa4_fire"
					{view hide	"cw_13f0a0efa4_flashbarrel03"}
					{view pause	"cw_13f0a0efa4_flashbarrel03"}
				}
		
		else 
			name "04"
				{call "fire_barrel04"}
				{view show "cw_13f0a0efa4_flashbarrel04"}
				{view start "cw_13f0a0efa4_flashbarrel04"}
				{ani_play "fire04"}
				{view start "cw_13f0a0efa4_shell04"}
				{view start "cw_13f0a0efa4_smoke04"}
				{delay 0.12 "cw_13f0a0efa4_shell_off"
					{view pause "cw_13f0a0efa4_shell04"}
					{view pause "cw_13f0a0efa4_smoke04"}
				}
				{delay 0.2 "cw_13f0a0efa4_fire"
					{view hide	"cw_13f0a0efa4_flashbarrel04"}
					{view pause	"cw_13f0a0efa4_flashbarrel04"}
				}
		
		else 
			name "05"
				{call "fire_barrel05"}
				{view show "cw_13f0a0efa4_flashbarrel05"}
				{view start "cw_13f0a0efa4_flashbarrel05"}
				{ani_play "fire05"}
				{view start "cw_13f0a0efa4_shell05"}
				{view start "cw_13f0a0efa4_smoke05"}
				{delay 0.12 "cw_13f0a0efa4_shell_off"
					{view pause "cw_13f0a0efa4_shell05"}
					{view pause "cw_13f0a0efa4_smoke05"}
				}
				{delay 0.2 "cw_13f0a0efa4_fire"
					{view hide	"cw_13f0a0efa4_flashbarrel05"}
					{view pause	"cw_13f0a0efa4_flashbarrel05"}
				}
		
		else 
			name "06"
				{call "fire_barrel06"}
				{view show "cw_13f0a0efa4_flashbarrel06"}
				{view start "cw_13f0a0efa4_flashbarrel06"}
				{ani_play "fire06"}
				{view start "cw_13f0a0efa4_shell06"}
				{view start "cw_13f0a0efa4_smoke06"}
				{delay 0.12 "cw_13f0a0efa4_shell_off"
					{view pause "cw_13f0a0efa4_shell06"}
					{view pause "cw_13f0a0efa4_smoke06"}
				}
				{delay 0.2 "cw_13f0a0efa4_fire"
					{view hide	"cw_13f0a0efa4_flashbarrel06"}
					{view pause	"cw_13f0a0efa4_flashbarrel06"}
				}
		
		else 
			name "07"
				{call "fire_barrel07"}
				{view show "cw_13f0a0efa4_flashbarrel07"}
				{view start "cw_13f0a0efa4_flashbarrel07"}
				{ani_play "fire07"}
				{view start "cw_13f0a0efa4_shell07"}
				{view start "cw_13f0a0efa4_smoke07"}
				{delay 0.12 "cw_13f0a0efa4_shell_off"
					{view pause "cw_13f0a0efa4_shell07"}
					{view pause "cw_13f0a0efa4_smoke07"}
				}
				{delay 0.2 "cw_13f0a0efa4_fire"
					{view hide	"cw_13f0a0efa4_flashbarrel07"}
					{view pause	"cw_13f0a0efa4_flashbarrel07"}
				}
		
		}
	}

{on fire "gun" overload
		{play_sound "cw_4c043ddf75_MultiBarrel_action_recoil"}
		{play_sound "cw_4c043ddf75_MultiBarrel_head_mid"}
		{play_sound "cw_4c043ddf75_MultiBarrel_head_far"}
		{tags add "cw_4c043ddf75_firing"}
		{delay 0.001
			{tags remove "cw_4c043ddf75_firing"}
			{play_sound "cw_4c043ddf75_MultiBarrel_tail_close"}
			{play_sound "cw_4c043ddf75_MultiBarrel_tail_mid"}
			{play_sound "cw_4c043ddf75_MultiBarrel_tail_far"}
		}
		
		{if	
			name "00"
				{call "fire_barrel00"}
				{view show "cw_4c043ddf75_flashbarrel00"}
				{view start "cw_4c043ddf75_flashbarrel00"}
				{ani_play "fire00"}
				{view start "cw_4c043ddf75_shell00"}
				{view start "cw_4c043ddf75_smoke00"}
				{delay 0.12 "cw_4c043ddf75_shell_off"
					{view pause "cw_4c043ddf75_shell00"}
					{view pause "cw_4c043ddf75_smoke00"}
				}
				{delay 0.2 "cw_4c043ddf75_fire"
					{view hide	"cw_4c043ddf75_flashbarrel00"}
					{view pause	"cw_4c043ddf75_flashbarrel00"}
				}
		
		else 
			name "01"
				{call "fire_barrel01"}
				{view show "cw_4c043ddf75_flashbarrel01"}
				{view start "cw_4c043ddf75_flashbarrel01"}
				{ani_play "fire01"}
				{view start "cw_4c043ddf75_shell01"}
				{view start "cw_4c043ddf75_smoke01"}
				{delay 0.12 "cw_4c043ddf75_shell_off"
					{view pause "cw_4c043ddf75_shell01"}
					{view pause "cw_4c043ddf75_smoke01"}
				}
				{delay 0.2 "cw_4c043ddf75_fire"
					{view hide	"cw_4c043ddf75_flashbarrel01"}
					{view pause	"cw_4c043ddf75_flashbarrel01"}
				}
		
		else 
			name "02"
				{call "fire_barrel02"}
				{view show "cw_4c043ddf75_flashbarrel02"}
				{view start "cw_4c043ddf75_flashbarrel02"}
				{ani_play "fire02"}
				{view start "cw_4c043ddf75_shell02"}
				{view start "cw_4c043ddf75_smoke02"}
				{delay 0.12 "cw_4c043ddf75_shell_off"
					{view pause "cw_4c043ddf75_shell02"}
					{view pause "cw_4c043ddf75_smoke02"}
				}
				{delay 0.2 "cw_4c043ddf75_fire"
					{view hide	"cw_4c043ddf75_flashbarrel02"}
					{view pause	"cw_4c043ddf75_flashbarrel02"}
				}
		
		else 
			name "03"
				{call "fire_barrel03"}
				{view show "cw_4c043ddf75_flashbarrel03"}
				{view start "cw_4c043ddf75_flashbarrel03"}
				{ani_play "fire03"}
				{view start "cw_4c043ddf75_shell03"}
				{view start "cw_4c043ddf75_smoke03"}
				{delay 0.12 "cw_4c043ddf75_shell_off"
					{view pause "cw_4c043ddf75_shell03"}
					{view pause "cw_4c043ddf75_smoke03"}
				}
				{delay 0.2 "cw_4c043ddf75_fire"
					{view hide	"cw_4c043ddf75_flashbarrel03"}
					{view pause	"cw_4c043ddf75_flashbarrel03"}
				}
		
		else 
			name "04"
				{call "fire_barrel04"}
				{view show "cw_4c043ddf75_flashbarrel04"}
				{view start "cw_4c043ddf75_flashbarrel04"}
				{ani_play "fire04"}
				{view start "cw_4c043ddf75_shell04"}
				{view start "cw_4c043ddf75_smoke04"}
				{delay 0.12 "cw_4c043ddf75_shell_off"
					{view pause "cw_4c043ddf75_shell04"}
					{view pause "cw_4c043ddf75_smoke04"}
				}
				{delay 0.2 "cw_4c043ddf75_fire"
					{view hide	"cw_4c043ddf75_flashbarrel04"}
					{view pause	"cw_4c043ddf75_flashbarrel04"}
				}
		
		else 
			name "05"
				{call "fire_barrel05"}
				{view show "cw_4c043ddf75_flashbarrel05"}
				{view start "cw_4c043ddf75_flashbarrel05"}
				{ani_play "fire05"}
				{view start "cw_4c043ddf75_shell05"}
				{view start "cw_4c043ddf75_smoke05"}
				{delay 0.12 "cw_4c043ddf75_shell_off"
					{view pause "cw_4c043ddf75_shell05"}
					{view pause "cw_4c043ddf75_smoke05"}
				}
				{delay 0.2 "cw_4c043ddf75_fire"
					{view hide	"cw_4c043ddf75_flashbarrel05"}
					{view pause	"cw_4c043ddf75_flashbarrel05"}
				}
		
		else 
			name "06"
				{call "fire_barrel06"}
				{view show "cw_4c043ddf75_flashbarrel06"}
				{view start "cw_4c043ddf75_flashbarrel06"}
				{ani_play "fire06"}
				{view start "cw_4c043ddf75_shell06"}
				{view start "cw_4c043ddf75_smoke06"}
				{delay 0.12 "cw_4c043ddf75_shell_off"
					{view pause "cw_4c043ddf75_shell06"}
					{view pause "cw_4c043ddf75_smoke06"}
				}
				{delay 0.2 "cw_4c043ddf75_fire"
					{view hide	"cw_4c043ddf75_flashbarrel06"}
					{view pause	"cw_4c043ddf75_flashbarrel06"}
				}
		
		else 
			name "07"
				{call "fire_barrel07"}
				{view show "cw_4c043ddf75_flashbarrel07"}
				{view start "cw_4c043ddf75_flashbarrel07"}
				{ani_play "fire07"}
				{view start "cw_4c043ddf75_shell07"}
				{view start "cw_4c043ddf75_smoke07"}
				{delay 0.12 "cw_4c043ddf75_shell_off"
					{view pause "cw_4c043ddf75_shell07"}
					{view pause "cw_4c043ddf75_smoke07"}
				}
				{delay 0.2 "cw_4c043ddf75_fire"
					{view hide	"cw_4c043ddf75_flashbarrel07"}
					{view pause	"cw_4c043ddf75_flashbarrel07"}
				}
		
		}
	}

{on spawn {inherited}
{add_view "flash_gun_big"		"cw_2ffba043bf_flashbarrel00"	"shooter00"}

{add_view "flash_gun_big"		"cw_2ffba043bf_flashbarrel01"	"shooter01"}

{add_view "flash_gun_big"		"cw_2ffba043bf_flashbarrel02"	"shooter02"}

{add_view "flash_gun_big"		"cw_2ffba043bf_flashbarrel03"	"shooter03"}

{add_view "ejectsmoke_big"		"cw_2ffba043bf_smoke00"		"fxshell1"}

{add_view "ejectsmoke_big"		"cw_2ffba043bf_smoke01"		"fxshell2"}

{add_view "ejectsmoke_big"		"cw_2ffba043bf_smoke02"		"fxshell3"}

{add_view "ejectsmoke_big"		"cw_2ffba043bf_smoke03"		"fxshell4"}

{add_view "shell_hmgun"		"cw_2ffba043bf_shell00"		"fxshell1"}

{add_view "shell_hmgun"		"cw_2ffba043bf_shell01"		"fxshell2"}

{add_view "shell_hmgun"		"cw_2ffba043bf_shell02"		"fxshell3"}

{add_view "shell_hmgun"		"cw_2ffba043bf_shell03"		"fxshell4"}

{link_sound			"cw_2ffba043bf_MultiBarrel_action_recoil"			"weapon/action/recoil/closed_bolt_HMG/"}

{link_sound			"cw_2ffba043bf_MultiBarrel_tail_close" 			"weapon/shot/smallarms/s4/d1/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{link_sound			"cw_2ffba043bf_MultiBarrel_head_mid" 				"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Head/"}

{link_sound			"cw_2ffba043bf_MultiBarrel_tail_mid" 				"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{link_sound			"cw_2ffba043bf_MultiBarrel_head_far" 				"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Head/"}

{link_sound			"cw_2ffba043bf_MultiBarrel_tail_far" 				"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{add_view "flash_gun_big"		"cw_49a70e71da_flashbarrel00"	"module_shooter00"}

{add_view "flash_gun_big"		"cw_49a70e71da_flashbarrel01"	"module_shooter01"}

{add_view "flash_gun_big"		"cw_49a70e71da_flashbarrel02"	"module_shooter02"}

{add_view "flash_gun_big"		"cw_49a70e71da_flashbarrel03"	"module_shooter03"}

{add_view "ejectsmoke_big"		"cw_49a70e71da_smoke00"		"module_fxshell1"}

{add_view "ejectsmoke_big"		"cw_49a70e71da_smoke01"		"module_fxshell2"}

{add_view "ejectsmoke_big"		"cw_49a70e71da_smoke02"		"module_fxshell3"}

{add_view "ejectsmoke_big"		"cw_49a70e71da_smoke03"		"module_fxshell4"}

{add_view "shell_hmgun"		"cw_49a70e71da_shell00"		"module_fxshell1"}

{add_view "shell_hmgun"		"cw_49a70e71da_shell01"		"module_fxshell2"}

{add_view "shell_hmgun"		"cw_49a70e71da_shell02"		"module_fxshell3"}

{add_view "shell_hmgun"		"cw_49a70e71da_shell03"		"module_fxshell4"}

{link_sound			"cw_49a70e71da_MultiBarrel_action_recoil"			"weapon/action/recoil/closed_bolt_HMG/"}

{link_sound			"cw_49a70e71da_MultiBarrel_tail_close" 			"weapon/shot/smallarms/s4/d1/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{link_sound			"cw_49a70e71da_MultiBarrel_head_mid" 				"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Head/"}

{link_sound			"cw_49a70e71da_MultiBarrel_tail_mid" 				"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{link_sound			"cw_49a70e71da_MultiBarrel_head_far" 				"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Head/"}

{link_sound			"cw_49a70e71da_MultiBarrel_tail_far" 				"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{add_view "flash_gun_big"		"cw_9a0615f0bb_flashbarrel00"	"module2_shooter00"}

{add_view "flash_gun_big"		"cw_9a0615f0bb_flashbarrel01"	"module2_shooter01"}

{add_view "flash_gun_big"		"cw_9a0615f0bb_flashbarrel02"	"module2_shooter02"}

{add_view "flash_gun_big"		"cw_9a0615f0bb_flashbarrel03"	"module2_shooter03"}

{add_view "ejectsmoke_big"		"cw_9a0615f0bb_smoke00"		"module_fxshell1_1"}

{add_view "ejectsmoke_big"		"cw_9a0615f0bb_smoke01"		"module_fxshell2_1"}

{add_view "ejectsmoke_big"		"cw_9a0615f0bb_smoke02"		"module_fxshell3_1"}

{add_view "ejectsmoke_big"		"cw_9a0615f0bb_smoke03"		"module_fxshell4_1"}

{add_view "shell_hmgun"		"cw_9a0615f0bb_shell00"		"module_fxshell1_1"}

{add_view "shell_hmgun"		"cw_9a0615f0bb_shell01"		"module_fxshell2_1"}

{add_view "shell_hmgun"		"cw_9a0615f0bb_shell02"		"module_fxshell3_1"}

{add_view "shell_hmgun"		"cw_9a0615f0bb_shell03"		"module_fxshell4_1"}

{link_sound			"cw_9a0615f0bb_MultiBarrel_action_recoil"			"weapon/action/recoil/closed_bolt_HMG/"}

{link_sound			"cw_9a0615f0bb_MultiBarrel_tail_close" 			"weapon/shot/smallarms/s4/d1/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{link_sound			"cw_9a0615f0bb_MultiBarrel_head_mid" 				"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Head/"}

{link_sound			"cw_9a0615f0bb_MultiBarrel_tail_mid" 				"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{link_sound			"cw_9a0615f0bb_MultiBarrel_head_far" 				"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Head/"}

{link_sound			"cw_9a0615f0bb_MultiBarrel_tail_far" 				"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{add_view "flash_gun_big"		"cw_13f0a0efa4_flashbarrel00"	"module3_shooter00"}

{add_view "flash_gun_big"		"cw_13f0a0efa4_flashbarrel01"	"module3_shooter01"}

{add_view "flash_gun_big"		"cw_13f0a0efa4_flashbarrel02"	"module3_shooter02"}

{add_view "flash_gun_big"		"cw_13f0a0efa4_flashbarrel03"	"module3_shooter03"}

{add_view "ejectsmoke_big"		"cw_13f0a0efa4_smoke00"		"module_fxshell1_2"}

{add_view "ejectsmoke_big"		"cw_13f0a0efa4_smoke01"		"module_fxshell2_2"}

{add_view "ejectsmoke_big"		"cw_13f0a0efa4_smoke02"		"module_fxshell3_2"}

{add_view "ejectsmoke_big"		"cw_13f0a0efa4_smoke03"		"module_fxshell4_2"}

{add_view "shell_hmgun"		"cw_13f0a0efa4_shell00"		"module_fxshell1_2"}

{add_view "shell_hmgun"		"cw_13f0a0efa4_shell01"		"module_fxshell2_2"}

{add_view "shell_hmgun"		"cw_13f0a0efa4_shell02"		"module_fxshell3_2"}

{add_view "shell_hmgun"		"cw_13f0a0efa4_shell03"		"module_fxshell4_2"}

{link_sound			"cw_13f0a0efa4_MultiBarrel_action_recoil"			"weapon/action/recoil/closed_bolt_HMG/"}

{link_sound			"cw_13f0a0efa4_MultiBarrel_tail_close" 			"weapon/shot/smallarms/s4/d1/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{link_sound			"cw_13f0a0efa4_MultiBarrel_head_mid" 				"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Head/"}

{link_sound			"cw_13f0a0efa4_MultiBarrel_tail_mid" 				"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{link_sound			"cw_13f0a0efa4_MultiBarrel_head_far" 				"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Head/"}

{link_sound			"cw_13f0a0efa4_MultiBarrel_tail_far" 				"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Tail/"}

{add_view "tank_canon_fire_20_25_auto"		"cw_4c043ddf75_flashbarrel00"	"module4_shooter00"}

{add_view "tank_canon_fire_20_25_auto"		"cw_4c043ddf75_flashbarrel01"	"module4_shooter01"}

{add_view "tank_canon_fire_20_25_auto"		"cw_4c043ddf75_flashbarrel02"	"module4_shooter02"}

{add_view "tank_canon_fire_20_25_auto"		"cw_4c043ddf75_flashbarrel03"	"module4_shooter03"}

{add_view "smoke_zenit"		"cw_4c043ddf75_smoke00"		"module_fxshell1_3"}

{add_view "smoke_zenit"		"cw_4c043ddf75_smoke01"		"module_fxshell2_3"}

{add_view "smoke_zenit"		"cw_4c043ddf75_smoke02"		"module_fxshell3_3"}

{add_view "smoke_zenit"		"cw_4c043ddf75_smoke03"		"module_fxshell4_3"}

{add_view "zenit_gilz"		"cw_4c043ddf75_shell00"		"module_fxshell1_3"}

{add_view "zenit_gilz"		"cw_4c043ddf75_shell01"		"module_fxshell2_3"}

{add_view "zenit_gilz"		"cw_4c043ddf75_shell02"		"module_fxshell3_3"}

{add_view "zenit_gilz"		"cw_4c043ddf75_shell03"		"module_fxshell4_3"}

{link_sound		"cw_4c043ddf75_MultiBarrel_action_recoil"		"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}

{link_sound		"cw_4c043ddf75_MultiBarrel_tail_close" 		"weapon/shot/cannon/s1/d1/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}

{link_sound		"cw_4c043ddf75_MultiBarrel_head_mid"			"weapon/shot/cannon/s1/d2/Shared/Autocannon_20to30mm/Multi_Barrel/Head/"}

{link_sound		"cw_4c043ddf75_MultiBarrel_tail_mid"			"weapon/shot/cannon/s1/d2/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}

{link_sound		"cw_4c043ddf75_MultiBarrel_head_far"			"weapon/shot/cannon/s1/d3/Shared/Autocannon_20to30mm/Multi_Barrel/Head/"}

{link_sound		"cw_4c043ddf75_MultiBarrel_tail_far"			"weapon/shot/cannon/s1/d3/Shared/Autocannon_20to30mm/Multi_Barrel/Tail/"}
}
}
