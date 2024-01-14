   // se vc leu seu ku é meu
    #pragma once
 
    //core
   constexpr long OFF_REGION = 0x140000000;                      //[Static]->Region
    constexpr long OFF_LEVEL = 0x16d6ac0;                         //[Miscellaneous]->LevelName
    constexpr long OFF_LOCAL_PLAYER = 0x21615d8;                  //[Miscellaneous]->LocalPlayer
    constexpr long OFF_ENTITY_LIST = 0x1db2ed8;                   //[Miscellaneous]->cl_entitylist
    
    //buttons
    constexpr long OFF_IN_ATTACK = 0x073cd740;                     //[Buttons]->in_attack
    constexpr long OFF_IN_JUMP = 0x073cd828;                       //[Buttons]->in_jump
    
    // player
    constexpr long OFF_ZOOMING = 0x1b91;                          //[RecvTable.DT_Player]->m_bZooming
    constexpr long OFF_LOCAL_ORIGIN = 0x0188;                     //[DataMap.CBaseViewModel]->m_localOrigin
    constexpr long OFF_TEAM_NUMBER = 0x030c;                      //[RecvTable.DT_BaseEntity]->m_iTeamNum
    constexpr long OFF_CURRENT_HEALTH = 0x02fc;                   //[RecvTable.DT_BaseEntity]->m_iHealth
    constexpr long OFF_CURRENT_SHIELDS = 0x01a0;                  //[RecvTable.DT_BaseEntity]->m_shieldHealth
    constexpr long OFF_NAME = 0x0449;                             //[RecvTable.DT_BaseEntity]->m_iName
    constexpr long OFF_SIGNIFIER_NAME = 0x0440;                   //[RecvTable.DT_BaseEntity]->m_iSignifierName
    constexpr long OFF_LIFE_STATE = 0x0658;                       //[RecvTable.DT_Player]->m_lifeState
    constexpr long OFF_BLEEDOUT_STATE = 0x26a0;                   //[RecvTable.DT_Player]->m_bleedoutState
    constexpr long OFF_LAST_VISIBLE_TIME = 0x194d + 0x3;          //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x3
    constexpr long OFF_LAST_AIMEDAT_TIME = 0x194d + 0x3 + 0x8;    //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x3 + 0x8
    constexpr long OFF_VIEW_ANGLES = 0x24f4 - 0x14;               //[DataMap.C_Player]-> m_ammoPoolCapacity - 0x14
    constexpr long OFF_PUNCH_ANGLES = 0x23f8;                     //[?]->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
    //weapon
    constexpr long OFF_WEAPON_HANDLE = 0x18f4;                    //[RecvTable.DT_Player]->m_latestPrimaryWeapons
    constexpr long OFF_WEAPON_INDEX = 0x1738;                     //[RecvTable.DT_WeaponX]->m_weaponNameIndex
    constexpr long OFF_WEAPON_DISCARDED = 0x15ac;                 //[RecvTable.DT_WeaponX]->m_discarded
    //glow
    constexpr long OFF_GLOW_ENABLE = 0x26C;                       //[DT_HighlightSettings].?
    constexpr long OFF_GLOW_THROUGH_WALL = 0x28C;                 //[DT_HighlightSettings].?
    constexpr long OFF_GLOW_FIX = 0x268;
    constexpr long OFF_GLOW_HIGHLIGHT_ID = 0x26C;                 //[DT_HighlightSettings].m_highlightServerActiveStates
    constexpr long OFF_GLOW_HIGHLIGHTS = 0xB7A6050;		//0xB7A4E90
