// This file was decompiled using SASCM.ini published on 2022-03-20
{$E}

$9585 = 0.0 
$9586 = 0.0 
$9587 = 0.0 
$AMMU_X_OFFSET = 0.0 
$AMMU_Y_OFFSET = 0.0 
$AMMU_Z_OFFSET = 0.0 
$X_CAMERA = 0.0 
$Y_CAMERA = 0.0 
$Z_CAMERA = 0.0 
$AMMU_X_AIM_CAMERA = 0.0 
$AMMU_Y_AIM_CAMERA = 0.0 
$AMMU_Z_AIM_CAMERA = 0.0 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
$AMMU_SELLER_ANGLE = 0.0 
$2418 = 0 
$AMMU_X_SELLER = 0.0 
$AMMU_Y_SELLER = 0.0 
$AMMU_Z_SELLER = 0.0 
$FLAG_AMMU_SELLER_ATTACK_PLAYER = 0 
$AMMU_STAGE = 0 
$9575 = 0.0 
$9576 = 0.0 
$9577 = 0.0 
$9572 = 0 
$9573 = 0 
$9574 = 0 
$2418 = 0 
$2422 = 0 
$2545 = 0 
$2544 = 0 
$9595 = 0 
$9594 = 0 
$9596 = 0 
$9616 = 0 
$9597 = 0 
$2515 = 0 
$9598 = 0 
$9599 = 0 
$9600 = 0 
$9601 = 0 
$9602 = 0 
$9603 = 0 
$9604 = 0 
$9605 = 0 
$9606 = 0 
$9607 = 0 
$9608 = 0 
$9609 = 0 
$9610 = 0 
$9611 = 0 
$9612 = 0 
$9613 = 0 
$9614 = 0 
$9615 = 0 
$9636 = 0 
$9637 = 0 
$9638 = 0 
jump @AMUNAT_525 
018D: NOP $9570 65535 $AMMU_X_SELLER $AMMU_Y_SELLER $AMMU_Z_SELLER 
Object.Create($9571, $AMMU_SELECTED_WEAPON_MODEL, 1659.635, -1576.514, 15.585)
Object.Create($9543, $AMMU_SELECTED_WEAPON_MODEL, $9575, $9576, $9577)

:AMUNAT_525
04AE: $SELLER_MODEL = 179 // = constant 
Model.Load($SELLER_MODEL)
Model.Load(#COLT45)
Model.Load(#TEC9)
Model.Load(#MICRO_UZI)
Model.Load(#CHROMEGUN)
Model.Load(#GRENADE)
Model.Load(#ARMOUR)
Model.Load(#MP5LNG)
Model.Load(#SAWNOFF)
Model.Load(#SILENCED)
Model.Load(#SATCHEL)
Model.Load(#BOMB)
Model.Load(#CUNTGUN)
Model.Load(#SNIPER)
Model.Load(#AK47)
Model.Load(#M4)
Model.Load(#DESERT_EAGLE)
Model.Load(#SHOTGSPA)
038B: load_requested_models 
set_wb_check_to 0 
script_name 'AMUNAT' 

:AMUNAT_640
wait 0 
if 
  Player.Defined($PLAYER_CHAR)
jf @AMUNAT_7618 
if 
8844:   not string s$CURRENT_SHOP_GXT_NAME empty // s$ 
jf @AMUNAT_7604 
if 
  $AMMU_STAGE > 0 
jf @AMUNAT_762 
if 
0A0F:   new_language_set 
jf @AMUNAT_762 
03E6: remove_text_box 
08DA: remove_panel $2419 
08DA: remove_panel $2423 
08DA: remove_panel $2421 
08DA: remove_panel $2417 
$2420 = 0 
$2424 = 0 
$2418 = 0 
$2422 = 0 
09FB: $CURRENT_LANGUAGE = current_language 

:AMUNAT_762
if 
  $AMMU_STAGE == 0 
jf @AMUNAT_1286 
if 
05AD:   s$CURRENT_SHOP_GXT_NAME == 'AMMUN1' // s$ == short  // Ammu-Nation
jf @AMUNAT_884 
$AMMU_X_OFFSET = 0.0 
$AMMU_Y_OFFSET = 0.0 
$AMMU_Z_OFFSET = 0.0 
$AMMU_PLAYER_ANGLE = 180.0 
$AMMU_SELLER_ANGLE = 0.0 
$SHOW_SHOP_SPHERE = 1 
05A9: s$AMMU_INTERIOR_NAME = s$CURRENT_SHOP_GXT_NAME // s$ 
$9584 = 0 
$AMMU_STAGE = 1 

:AMUNAT_884
if 
05AD:   s$CURRENT_SHOP_GXT_NAME == 'AMMUN2' // s$ == short  // Ammu-Nation
jf @AMUNAT_988 
$AMMU_X_OFFSET = -0.765 
$AMMU_Y_OFFSET = -42.311 
$AMMU_Z_OFFSET = -0.013 
$AMMU_PLAYER_ANGLE = 180.0 
$AMMU_SELLER_ANGLE = 0.0 
$SHOW_SHOP_SPHERE = 1 
05A9: s$AMMU_INTERIOR_NAME = s$CURRENT_SHOP_GXT_NAME // s$ 
$9584 = 0 
$AMMU_STAGE = 1 

:AMUNAT_988
if 
05AD:   s$CURRENT_SHOP_GXT_NAME == 'AMMUN3' // s$ == short  // Ammu-Nation
jf @AMUNAT_1092 
$AMMU_X_OFFSET = -6.264 
$AMMU_Y_OFFSET = -71.34 
$AMMU_Z_OFFSET = -0.002 
$AMMU_PLAYER_ANGLE = 180.0 
$AMMU_SELLER_ANGLE = 0.0 
$SHOW_SHOP_SPHERE = 1 
05A9: s$AMMU_INTERIOR_NAME = s$CURRENT_SHOP_GXT_NAME // s$ 
$9584 = 0 
$AMMU_STAGE = 1 

:AMUNAT_1092
if 
05AD:   s$CURRENT_SHOP_GXT_NAME == 'AMMUN4' // s$ == short  // Ammu-Nation
jf @AMUNAT_1189 
$AMMU_X_OFFSET = 11.642 
$AMMU_Y_OFFSET = -102.936 
$AMMU_Z_OFFSET = -1.929 
$AMMU_PLAYER_ANGLE = 180.0 
$AMMU_SELLER_ANGLE = 0.0 
$SHOW_SHOP_SPHERE = 1 
05A9: s$AMMU_INTERIOR_NAME = s$CURRENT_SHOP_GXT_NAME // s$ 
$AMMU_STAGE = 1 

:AMUNAT_1189
if 
05AD:   s$CURRENT_SHOP_GXT_NAME == 'AMMUN5' // s$ == short  // Ammu-Nation
jf @AMUNAT_1286 
$AMMU_X_OFFSET = 16.285 
$AMMU_Y_OFFSET = -127.781 
$AMMU_Z_OFFSET = -1.929 
$AMMU_PLAYER_ANGLE = 180.0 
$AMMU_SELLER_ANGLE = 0.0 
$SHOW_SHOP_SPHERE = 1 
05A9: s$AMMU_INTERIOR_NAME = s$CURRENT_SHOP_GXT_NAME // s$ 
$AMMU_STAGE = 1 

:AMUNAT_1286
if 
  $AMMU_STAGE == 1 
jf @AMUNAT_2318 
03F0: enable_text_draw 1 
08F8: display_stat_update_box 0 
$X_BUY_MARKER = 296.506 
0059: $X_BUY_MARKER += $AMMU_X_OFFSET // (float) 
$Y_BUY_MARKER = -38.168 
0059: $Y_BUY_MARKER += $AMMU_Y_OFFSET // (float) 
$Z_BUY_MARKER = 1000.547 
0059: $Z_BUY_MARKER += $AMMU_Z_OFFSET // (float) 
$AMMU_X_SELLER = 296.506 
0059: $AMMU_X_SELLER += $AMMU_X_OFFSET // (float) 
$AMMU_Y_SELLER = -40.35 
0059: $AMMU_Y_SELLER += $AMMU_Y_OFFSET // (float) 
$AMMU_Z_SELLER = 1000.54 
0059: $AMMU_Z_SELLER += $AMMU_Z_OFFSET // (float) 
$X_CAMERA = 296.585 
0059: $X_CAMERA += $AMMU_X_OFFSET // (float) 
$Y_CAMERA = -38.345 
0059: $Y_CAMERA += $AMMU_Y_OFFSET // (float) 
$Z_CAMERA = 1002.236 
0059: $Z_CAMERA += $AMMU_Z_OFFSET // (float) 
$AMMU_X_AIM_CAMERA = 296.501 
0059: $AMMU_X_AIM_CAMERA += $AMMU_X_OFFSET // (float) 
$AMMU_Y_AIM_CAMERA = -39.298 
0059: $AMMU_Y_AIM_CAMERA += $AMMU_Y_OFFSET // (float) 
$AMMU_Z_AIM_CAMERA = 1001.943 
0059: $AMMU_Z_AIM_CAMERA += $AMMU_Z_OFFSET // (float) 
Actor.Create($AMMU_SELLER, PedType.CivMale, $SELLER_MODEL, $AMMU_X_SELLER, $AMMU_Y_SELLER, $AMMU_Z_SELLER)
Actor.Angle($AMMU_SELLER) = $AMMU_SELLER_ANGLE
02A9: set_actor $AMMU_SELLER immune_to_nonplayer 1 
060B: set_actor $AMMU_SELLER decision_maker_to 65542 
if 
  $CASINO_TOTAL_PASSED_MISSIONS > 2 
jf @AMUNAT_1638 
075F: store_shopping_data_entries_number_to $AMMU_AVAILABLE_WEAPONS 
if 
  $2574 == 0 
jf @AMUNAT_1631 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2574 = 1 

:AMUNAT_1631
jump @AMUNAT_2311 

:AMUNAT_1638
if 
  $TORENO_TOTAL_PASSED_MISSIONS > 7 
jf @AMUNAT_1706 
$AMMU_AVAILABLE_WEAPONS = 15 
if 
  $2573 == 0 
jf @AMUNAT_1699 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2573 = 1 

:AMUNAT_1699
jump @AMUNAT_2311 

:AMUNAT_1706
if 
  $SYNDICATE_TOTAL_PASSED_MISSIONS > 9 
jf @AMUNAT_1774 
$AMMU_AVAILABLE_WEAPONS = 14 
if 
  $2572 == 0 
jf @AMUNAT_1767 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2572 = 1 

:AMUNAT_1767
jump @AMUNAT_2311 

:AMUNAT_1774
if 
  $WUZIMU_TOTAL_PASSED_MISSIONS > 0 
jf @AMUNAT_1842 
$AMMU_AVAILABLE_WEAPONS = 13 
if 
  $2571 == 0 
jf @AMUNAT_1835 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2571 = 1 

:AMUNAT_1835
jump @AMUNAT_2311 

:AMUNAT_1842
if 
  $SYNDICATE_TOTAL_PASSED_MISSIONS > 7 
jf @AMUNAT_1910 
$AMMU_AVAILABLE_WEAPONS = 12 
if 
  $2570 == 0 
jf @AMUNAT_1903 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2570 = 1 

:AMUNAT_1903
jump @AMUNAT_2311 

:AMUNAT_1910
if 
  $TRUTH_TOTAL_PASSED_MISSIONS > 0 
jf @AMUNAT_1978 
$AMMU_AVAILABLE_WEAPONS = 11 
if 
  $2569 == 0 
jf @AMUNAT_1971 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2569 = 1 

:AMUNAT_1971
jump @AMUNAT_2311 

:AMUNAT_1978
if 
  $ALL_CATALINA_MISSIONS_PASSED == 1 
jf @AMUNAT_2046 
$AMMU_AVAILABLE_WEAPONS = 10 
if 
  $2568 == 0 
jf @AMUNAT_2039 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2568 = 1 

:AMUNAT_2039
jump @AMUNAT_2311 

:AMUNAT_2046
if 
  $OG_LOC_TOTAL_PASSED_MISSIONS > 4 
jf @AMUNAT_2114 
$AMMU_AVAILABLE_WEAPONS = 9 
if 
  $2567 == 0 
jf @AMUNAT_2107 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2567 = 1 

:AMUNAT_2107
jump @AMUNAT_2311 

:AMUNAT_2114
if 
  $SMOKE_TOTAL_PASSED_MISSIONS > 3 
jf @AMUNAT_2182 
$AMMU_AVAILABLE_WEAPONS = 8 
if 
  $2566 == 0 
jf @AMUNAT_2175 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2566 = 1 

:AMUNAT_2175
jump @AMUNAT_2311 

:AMUNAT_2182
if 
  $RYDER_TOTAL_PASSED_MISSIONS > 2 
jf @AMUNAT_2250 
$AMMU_AVAILABLE_WEAPONS = 7 
if 
  $2565 == 0 
jf @AMUNAT_2243 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2565 = 1 

:AMUNAT_2243
jump @AMUNAT_2311 

:AMUNAT_2250
if 
  2 > $LS_FINAL_TOTAL_PASSED_MISSIONS 
jf @AMUNAT_2311 
$AMMU_AVAILABLE_WEAPONS = 6 
if 
  $2564 == 0 
jf @AMUNAT_2311 
03E5: show_text_box 'NEWWEAP'  // A new weapon is available to buy.
$2564 = 1 

:AMUNAT_2311
$AMMU_STAGE = 2 

:AMUNAT_2318
if 
  $AMMU_STAGE == 2 
jf @AMUNAT_2978 
07B0: get_active_shop_name_to s$CURRENT_SHOP_GXT_NAME // s$ 
if 
85AD:   not  s$CURRENT_SHOP_GXT_NAME == s$AMMU_INTERIOR_NAME // s$ == short 
jf @AMUNAT_2367 
gosub @AMUNAT_8535 

:AMUNAT_2367
if 
  not Actor.Dead($AMMU_SELLER)
jf @AMUNAT_2933 
if 
  $FLAG_AMMU_SELLER_ATTACK_PLAYER == 0 
jf @AMUNAT_2881 
if 
  $9584 == 0 
jf @AMUNAT_2480 
0812: AS_actor $AMMU_SELLER perform_animation "SHP_TRAY_POSE" IFP "WEAPONS" framedelta 1000.0 loopA 1 lockX 0 lockY 0 lockF 0 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
$9584 = 1 

:AMUNAT_2480
if 
  $ONMISSION_SHOOTING == 0 
jf @AMUNAT_2700 
if or
02E0:   actor $PLAYER_ACTOR firing_weapon 
0457:   player $PLAYER_CHAR aiming_at_actor $AMMU_SELLER 
031D:   actor $AMMU_SELLER hit_by_weapon 57 
jf @AMUNAT_2613 
09D5: play_sound_of_actor $AMMU_SELLER soundslot 327 unknown_flags 0 0 1 as $10081 // extended 0947 
05BA: AS_actor $AMMU_SELLER move_mouth 5 ms 
081A: set_actor $AMMU_SELLER weapon_skill_to 2 
Actor.GiveWeaponAndAmmo($AMMU_SELLER, WeaponType.Pistol, 30000)
Actor.WeaponAccuracy($AMMU_SELLER) = 80
0638: AS_actor $AMMU_SELLER stay_put 1 
05E2: AS_actor $AMMU_SELLER kill_actor $PLAYER_ACTOR 
$SHOW_SHOP_SPHERE = 0 
$FLAG_AMMU_SELLER_ATTACK_PLAYER = 1 
jump @AMUNAT_2693 

:AMUNAT_2613
$SHOW_SHOP_SPHERE = 1 
if 
0102:   actor $PLAYER_ACTOR in_sphere $X_BUY_MARKER $Y_BUY_MARKER $Z_BUY_MARKER radius 1.0 1.0 4.0 sphere $SHOW_SHOP_SPHERE stopped_on_foot 
jf @AMUNAT_2693 
if 
  Player.Controllable($PLAYER_CHAR)
jf @AMUNAT_2693 
$9584 = 0 
$AMMU_STAGE = 3 

:AMUNAT_2693
jump @AMUNAT_2874 

:AMUNAT_2700
if or
0457:   player $PLAYER_CHAR aiming_at_actor $AMMU_SELLER 
031D:   actor $AMMU_SELLER hit_by_weapon 57 
jf @AMUNAT_2810 
09D5: play_sound_of_actor $AMMU_SELLER soundslot 327 unknown_flags 0 0 1 as $10081 // extended 0947 
05BA: AS_actor $AMMU_SELLER move_mouth 5 ms 
081A: set_actor $AMMU_SELLER weapon_skill_to 2 
Actor.GiveWeaponAndAmmo($AMMU_SELLER, WeaponType.Pistol, 30000)
Actor.WeaponAccuracy($AMMU_SELLER) = 80
0638: AS_actor $AMMU_SELLER stay_put 1 
05E2: AS_actor $AMMU_SELLER kill_actor $PLAYER_ACTOR 
$SHOW_SHOP_SPHERE = 0 
$FLAG_AMMU_SELLER_ATTACK_PLAYER = 1 
jump @AMUNAT_2874 

:AMUNAT_2810
$SHOW_SHOP_SPHERE = 1 
if 
0102:   actor $PLAYER_ACTOR in_sphere $X_BUY_MARKER $Y_BUY_MARKER $Z_BUY_MARKER radius 1.0 1.0 4.0 sphere $SHOW_SHOP_SPHERE stopped_on_foot 
jf @AMUNAT_2874 
$9584 = 0 
$AMMU_STAGE = 3 

:AMUNAT_2874
jump @AMUNAT_2926 

:AMUNAT_2881
gosub @AMUNAT_8273 
07B0: get_active_shop_name_to s$CURRENT_SHOP_GXT_NAME // s$ 
if 
85AD:   not  s$CURRENT_SHOP_GXT_NAME == s$AMMU_INTERIOR_NAME // s$ == short 
jf @AMUNAT_2919 
gosub @AMUNAT_8535 

:AMUNAT_2919
jump @AMUNAT_640 

:AMUNAT_2926
jump @AMUNAT_2978 

:AMUNAT_2933
gosub @AMUNAT_8273 
07B0: get_active_shop_name_to s$CURRENT_SHOP_GXT_NAME // s$ 
if 
85AD:   not  s$CURRENT_SHOP_GXT_NAME == s$AMMU_INTERIOR_NAME // s$ == short 
jf @AMUNAT_2971 
gosub @AMUNAT_8535 

:AMUNAT_2971
jump @AMUNAT_640 

:AMUNAT_2978
if 
  $AMMU_STAGE == 3 
jf @AMUNAT_3062 
Player.CanMove($PLAYER_CHAR, False)
09BD: allow_other_scripts_to_display_text_boxes 1 
01B9: set_actor $PLAYER_ACTOR armed_weapon_to 0 
0792: disembark_instantly_actor $PLAYER_ACTOR 
0395: clear_area 1 at $TEMPVAR_X_COORD $TEMPVAR_Y_COORD $TEMPVAR_Z_COORD radius 1.0 
03D5: remove_text 'SHOPNO'  // ~s~You don't have enough money to buy this item.
TIMERA = 0 
$AMMU_STAGE = 4 

:AMUNAT_3062
if 
  $AMMU_STAGE == 4 
jf @AMUNAT_3421 
if 
  Actor.Dead($AMMU_SELLER)
jf @AMUNAT_3141 
gosub @AMUNAT_8273 
07B0: get_active_shop_name_to s$CURRENT_SHOP_GXT_NAME // s$ 
if 
85AD:   not  s$CURRENT_SHOP_GXT_NAME == s$AMMU_INTERIOR_NAME // s$ == short 
jf @AMUNAT_3134 
gosub @AMUNAT_8535 

:AMUNAT_3134
jump @AMUNAT_640 

:AMUNAT_3141
if 
  $9584 == 0 
jf @AMUNAT_3421 
if 
  TIMERA >= 300 
jf @AMUNAT_3421 
08C7: put_actor $PLAYER_ACTOR at $X_BUY_MARKER $Y_BUY_MARKER $Z_BUY_MARKER dont_warp_gang 
Actor.Angle($PLAYER_ACTOR) = $AMMU_PLAYER_ANGLE
Actor.StorePos($AMMU_SELLER, $2755, $2756, $2757)
if or
8044:   not  $2755 == $AMMU_X_SELLER // (float) 
8044:   not  $2756 == $AMMU_Y_SELLER // (float) 
8044:   not  $2757 == $AMMU_Z_SELLER // (float) 
jf @AMUNAT_3271 
Actor.PutAt($AMMU_SELLER, $AMMU_X_SELLER, $AMMU_Y_SELLER, $AMMU_Z_SELLER)
Actor.Angle($AMMU_SELLER) = $AMMU_SELLER_ANGLE

:AMUNAT_3271
Camera.SetPosition($X_CAMERA, $Y_CAMERA, $Z_CAMERA, 0.0, 0.0, 0.0)
Camera.PointAt($AMMU_X_AIM_CAMERA, $AMMU_Y_AIM_CAMERA, $AMMU_Z_AIM_CAMERA, 2)
09D5: play_sound_of_actor $AMMU_SELLER soundslot 333 unknown_flags 0 0 1 as $10081 // extended 0947 
if 
  $2576 == 1 
jf @AMUNAT_3352 
$2575 = 1 

:AMUNAT_3352
if 
  Player.Defined($PLAYER_CHAR)
jf @AMUNAT_3389 
Actor.StorePos($PLAYER_ACTOR, $TEMPVAR_X_COORD, $TEMPVAR_Y_COORD, $TEMPVAR_Z_COORD)
jump @AMUNAT_3403 

:AMUNAT_3389
gosub @AMUNAT_8535 
jump @AMUNAT_640 

:AMUNAT_3403
0581: enable_radar 0 
$AMMU_STAGE = 5 
$9584 = 0 

:AMUNAT_3421
if 
  $AMMU_STAGE == 5 
jf @AMUNAT_4241 
if 
  Actor.Dead($AMMU_SELLER)
jf @AMUNAT_3500 
gosub @AMUNAT_8273 
07B0: get_active_shop_name_to s$CURRENT_SHOP_GXT_NAME // s$ 
if 
85AD:   not  s$CURRENT_SHOP_GXT_NAME == s$AMMU_INTERIOR_NAME // s$ == short 
jf @AMUNAT_3493 
gosub @AMUNAT_8535 

:AMUNAT_3493
jump @AMUNAT_640 

:AMUNAT_3500
if 
  1 > $9584 
jf @AMUNAT_3550 
if 
  $2420 == 0 
jf @AMUNAT_3550 
gosub @AMUNAT_9980 
gosub @AMUNAT_10986 

:AMUNAT_3550
if 
  $9584 == 0 
jf @AMUNAT_3616 
if 
00E1:   player 0 pressed_key 16 
jf @AMUNAT_3592 
$9584 = 3 

:AMUNAT_3592
if 
00E1:   player 0 pressed_key 15 
jf @AMUNAT_3616 
$9584 = 1 

:AMUNAT_3616
if 
  $9584 == 1 
jf @AMUNAT_3862 
if 
80E1:   not player 0 pressed_key 15 
jf @AMUNAT_3862 
if 
  $2420 == 1 
jf @AMUNAT_3683 
03E6: remove_text_box 
08DA: remove_panel $2419 
$2420 = 0 

:AMUNAT_3683
if 
  $2424 == 1 
jf @AMUNAT_3715 
03E6: remove_text_box 
08DA: remove_panel $2423 
$2424 = 0 

:AMUNAT_3715
if 
  $2418 == 1 
jf @AMUNAT_3747 
03E6: remove_text_box 
08DA: remove_panel $2417 
$2418 = 0 

:AMUNAT_3747
if 
  $2422 == 1 
jf @AMUNAT_3777 
08DA: remove_panel $2421 
$2422 = 0 

:AMUNAT_3777
03D5: remove_text 'AMMUA'  // ~s~Buying this item will replace the weapon in this slot.
03D5: remove_text 'SHOPNO'  // ~s~You don't have enough money to buy this item.
03D5: remove_text 'AMMUC'  // ~s~You cannot buy any more ammunition for this weapon.
03D5: remove_text 'AMMUD'  // ~s~You cannot buy any more armor.
09D5: play_sound_of_actor $AMMU_SELLER soundslot 331 unknown_flags 0 0 1 as $10081 // extended 0947 
Camera.Restore_WithJumpCut
Player.CanMove($PLAYER_CHAR, True)
09BD: allow_other_scripts_to_display_text_boxes 0 
0581: enable_radar 1 
$9584 = 2 

:AMUNAT_3862
if 
  $9584 == 2 
jf @AMUNAT_4090 
if 
  $FLAG_AMMU_SELLER_ATTACK_PLAYER == 0 
jf @AMUNAT_3999 
if or
02E0:   actor $PLAYER_ACTOR firing_weapon 
0457:   player $PLAYER_CHAR aiming_at_actor $AMMU_SELLER 
031D:   actor $AMMU_SELLER hit_by_weapon 57 
jf @AMUNAT_3999 
09D5: play_sound_of_actor $AMMU_SELLER soundslot 327 unknown_flags 0 0 1 as $10081 // extended 0947 
05BA: AS_actor $AMMU_SELLER move_mouth 5 ms 
081A: set_actor $AMMU_SELLER weapon_skill_to 2 
Actor.GiveWeaponAndAmmo($AMMU_SELLER, WeaponType.Pistol, 30000)
Actor.WeaponAccuracy($AMMU_SELLER) = 80
0638: AS_actor $AMMU_SELLER stay_put 1 
05E2: AS_actor $AMMU_SELLER kill_actor $PLAYER_ACTOR 
$FLAG_AMMU_SELLER_ATTACK_PLAYER = 1 

:AMUNAT_3999
if 
80FF:   not actor $PLAYER_ACTOR sphere 0 in_sphere $X_BUY_MARKER $Y_BUY_MARKER $Z_BUY_MARKER radius 1.0 1.0 4.0 on_foot 
jf @AMUNAT_4090 
$2420 = 0 
$2424 = 0 
$9544 = 0 
$2418 = 0 
$2422 = 0 
$AMMU_STAGE = 2 
$9584 = 0 

:AMUNAT_4090
if 
  $9584 == 3 
jf @AMUNAT_4241 
if 
80E1:   not player 0 pressed_key 16 
jf @AMUNAT_4241 
08D8: $9637 = panel $2419 selected_row 
05A9: s$9549 = $2450($9637,12s) // s$ 
if 
  0 > $9637 
jf @AMUNAT_4170 
$9637 = 0 

:AMUNAT_4170
if 
  $2420 == 1 
jf @AMUNAT_4202 
03E6: remove_text_box 
08DA: remove_panel $2419 
$2420 = 0 

:AMUNAT_4202
if 
  $2424 == 0 
jf @AMUNAT_4227 
gosub @AMUNAT_11388 

:AMUNAT_4227
$9584 = 0 
$AMMU_STAGE = 6 

:AMUNAT_4241
if 
  $AMMU_STAGE == 6 
jf @AMUNAT_5565 
if 
  Actor.Dead($AMMU_SELLER)
jf @AMUNAT_4320 
gosub @AMUNAT_8273 
07B0: get_active_shop_name_to s$CURRENT_SHOP_GXT_NAME // s$ 
if 
85AD:   not  s$CURRENT_SHOP_GXT_NAME == s$AMMU_INTERIOR_NAME // s$ == short 
jf @AMUNAT_4313 
gosub @AMUNAT_8535 

:AMUNAT_4313
jump @AMUNAT_640 

:AMUNAT_4320
if 
  1 > $9584 
jf @AMUNAT_4363 
if 
  $2424 == 0 
jf @AMUNAT_4363 
gosub @AMUNAT_11388 

:AMUNAT_4363
if 
  $9584 == 0 
jf @AMUNAT_4429 
if 
00E1:   player 0 pressed_key 16 
jf @AMUNAT_4405 
$9584 = 2 

:AMUNAT_4405
if 
00E1:   player 0 pressed_key 15 
jf @AMUNAT_4429 
$9584 = 1 

:AMUNAT_4429
if 
  $9584 == 1 
jf @AMUNAT_4542 
if 
80E1:   not player 0 pressed_key 15 
jf @AMUNAT_4542 
if 
  $2424 == 1 
jf @AMUNAT_4496 
03E6: remove_text_box 
08DA: remove_panel $2423 
$2424 = 0 

:AMUNAT_4496
if 
  $2420 == 0 
jf @AMUNAT_4528 
gosub @AMUNAT_9980 
gosub @AMUNAT_10986 

:AMUNAT_4528
$9584 = 0 
$AMMU_STAGE = 5 

:AMUNAT_4542
if 
  $9584 == 2 
jf @AMUNAT_4834 
if 
80E1:   not player 0 pressed_key 16 
jf @AMUNAT_4834 
08D8: $9638 = panel $2423 selected_row 
if 
  0 > $9638 
jf @AMUNAT_4610 
$9638 = 0 

:AMUNAT_4610
0084: $AMMU_SELECTED_WEAPON = $9633($9638,3i) // (int) 
078C: get_shopping_item_with_textureCRC $AMMU_SELECTED_WEAPON nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
0761: get_shopping_item_with_textureCRC $AMMU_SELECTED_WEAPON price_to $AMMU_WEAPON_COST 
if 
84A3:   not  $AMMU_SELECTED_WEAPON == 48 // == constant 
jf @AMUNAT_4679 
0782: get_weapon_with_ID $AMMU_SELECTED_WEAPON weapon_group_to $AMMU_SELECTED_WEAPON_WEAPON_GROUP 
0781: get_weapon_with_ID $AMMU_SELECTED_WEAPON model_to $AMMU_SELECTED_WEAPON_MODEL 
jump @AMUNAT_4687 

:AMUNAT_4679
04AE: $AMMU_SELECTED_WEAPON_MODEL = 373 // = constant 

:AMUNAT_4687
if 
  $2424 == 1 
jf @AMUNAT_4719 
03E6: remove_text_box 
08DA: remove_panel $2423 
$2424 = 0 

:AMUNAT_4719
0812: AS_actor $AMMU_SELLER perform_animation "SHP_G_LIFT_IN" IFP "WEAPONS" framedelta 1000.0 loopA 0 lockX 0 lockY 0 lockF 1 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
if 
  Actor.Animation($AMMU_SELLER) == "SHP_G_LIFT_IN"
jf @AMUNAT_4827 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation "SHP_G_LIFT_IN" time 

:AMUNAT_4827
$9584 = 3 

:AMUNAT_4834
if 
  $9584 == 3 
jf @AMUNAT_4934 
if 
  Actor.Animation($AMMU_SELLER) == "SHP_G_LIFT_IN"
jf @AMUNAT_4906 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation "SHP_G_LIFT_IN" time 

:AMUNAT_4906
if 
  $AMMU_SELLER_ANIMATION_TIME == 1.0 
jf @AMUNAT_4934 
$9584 = 4 

:AMUNAT_4934
if 
  $9584 == 4 
jf @AMUNAT_5110 
Object.Create($9543, $AMMU_SELECTED_WEAPON_MODEL, $AMMU_X_SELLER, $AMMU_Y_SELLER, $AMMU_Z_SELLER)
gosub @AMUNAT_8960 
gosub @AMUNAT_9615 
070A: AS_actor $AMMU_SELLER attach_to_object $9543 offset 0.0 0.0 0.0 on_bone 6 16 perform_animation "NULL" IFP_file "NULL" time 0 
Object.KeepInMemory($9543, False)
0812: AS_actor $AMMU_SELLER perform_animation v$9554 IFP "WEAPONS" framedelta 1000.0 loopA 0 lockX 0 lockY 0 lockF 1 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
if 
  Actor.Animation($AMMU_SELLER) == v$9554
jf @AMUNAT_5103 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation v$9554 time 

:AMUNAT_5103
$9584 = 5 

:AMUNAT_5110
if 
  $9584 == 5 
jf @AMUNAT_5300 
if 
  Actor.Animation($AMMU_SELLER) == v$9554
jf @AMUNAT_5158 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation v$9554 time 

:AMUNAT_5158
if 
  $AMMU_SELLER_ANIMATION_TIME == 1.0 
jf @AMUNAT_5300 
070B: set_actor $AMMU_SELLER onbone_attached_object_operation 0 
097A: play_audio_at $TEMPVAR_X_COORD $TEMPVAR_Y_COORD $TEMPVAR_Z_COORD event 1131 
Object.PutAt($9543, $9585, $9586, $9587)
Object.KeepInMemory($9543, True)
0812: AS_actor $AMMU_SELLER perform_animation v$9558 IFP "WEAPONS" framedelta 1000.0 loopA 0 lockX 0 lockY 0 lockF 1 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
if 
  Actor.Animation($AMMU_SELLER) == v$9558
jf @AMUNAT_5293 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation v$9558 time 

:AMUNAT_5293
$9584 = 6 

:AMUNAT_5300
if 
  $9584 == 6 
jf @AMUNAT_5565 
if 
  Actor.Animation($AMMU_SELLER) == v$9558
jf @AMUNAT_5348 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation v$9558 time 

:AMUNAT_5348
if 
  $AMMU_SELLER_ANIMATION_TIME == 1.0 
jf @AMUNAT_5565 
0812: AS_actor $AMMU_SELLER perform_animation "SHP_TRAY_POSE" IFP "WEAPONS" framedelta 1000.0 loopA 1 lockX 0 lockY 0 lockF 0 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
if 
  $2418 == 0 
jf @AMUNAT_5448 
gosub @AMUNAT_7632 

:AMUNAT_5448
if 
84A3:   not  $AMMU_SELECTED_WEAPON == 48 // == constant 
jf @AMUNAT_5551 
0084: $9578 = $AMMU_SELECTED_WEAPON_WEAPON_GROUP // (int) 
$9578 += 1 
04B8: get_weapon_data_from_actor $PLAYER_ACTOR slot $9578 weapon $9572 ammo $9573 model $9574 
if 
803A:   not  $9572 == $AMMU_SELECTED_WEAPON // (int) 
jf @AMUNAT_5551 
if 
  $9573 > 0 
jf @AMUNAT_5551 
00BC: show_text_highpriority GXT 'AMMUA' time 5000 flag 1  // ~s~Buying this item will replace the weapon in this slot.

:AMUNAT_5551
$AMMU_STAGE = 7 
$9584 = 0 

:AMUNAT_5565
if 
  $AMMU_STAGE == 7 
jf @AMUNAT_7597 
if 
  Actor.Dead($AMMU_SELLER)
jf @AMUNAT_5644 
gosub @AMUNAT_8273 
07B0: get_active_shop_name_to s$CURRENT_SHOP_GXT_NAME // s$ 
if 
85AD:   not  s$CURRENT_SHOP_GXT_NAME == s$AMMU_INTERIOR_NAME // s$ == short 
jf @AMUNAT_5637 
gosub @AMUNAT_8535 

:AMUNAT_5637
jump @AMUNAT_640 

:AMUNAT_5644
if 
  1 > $9584 
jf @AMUNAT_5687 
if 
  $2418 == 0 
jf @AMUNAT_5687 
gosub @AMUNAT_7632 

:AMUNAT_5687
if 
  $9584 == 0 
jf @AMUNAT_5753 
if 
00E1:   player 0 pressed_key 16 
jf @AMUNAT_5729 
$9584 = 5 

:AMUNAT_5729
if 
00E1:   player 0 pressed_key 15 
jf @AMUNAT_5753 
$9584 = 1 

:AMUNAT_5753
if 
  $9584 == 1 
jf @AMUNAT_5899 
if 
80E1:   not player 0 pressed_key 15 
jf @AMUNAT_5899 
if 
  $2418 == 1 
jf @AMUNAT_5820 
03E6: remove_text_box 
08DA: remove_panel $2417 
$2418 = 0 

:AMUNAT_5820
0812: AS_actor $AMMU_SELLER perform_animation v$AMMU_SELLER_ANIMATION IFP "WEAPONS" framedelta 1000.0 loopA 0 lockX 0 lockY 0 lockF 1 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
if 
  Actor.Animation($AMMU_SELLER) == v$AMMU_SELLER_ANIMATION
jf @AMUNAT_5892 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation v$AMMU_SELLER_ANIMATION time 

:AMUNAT_5892
$9584 = 2 

:AMUNAT_5899
if 
  $9584 == 2 
jf @AMUNAT_6095 
if 
  Actor.Animation($AMMU_SELLER) == v$AMMU_SELLER_ANIMATION
jf @AMUNAT_5947 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation v$AMMU_SELLER_ANIMATION time 

:AMUNAT_5947
if 
  $AMMU_SELLER_ANIMATION_TIME == 1.0 
jf @AMUNAT_6095 
070A: AS_actor $AMMU_SELLER attach_to_object $9543 offset 0.0 0.0 0.0 on_bone 6 16 perform_animation "NULL" IFP_file "NULL" time 0 
Object.KeepInMemory($9543, False)
0812: AS_actor $AMMU_SELLER perform_animation v$9566 IFP "WEAPONS" framedelta 1000.0 loopA 0 lockX 0 lockY 0 lockF 1 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
if 
  Actor.Animation($AMMU_SELLER) == v$9566
jf @AMUNAT_6088 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation v$9566 time 

:AMUNAT_6088
$9584 = 3 

:AMUNAT_6095
if 
  $9584 == 3 
jf @AMUNAT_6317 
if 
  Actor.Animation($AMMU_SELLER) == v$9566
jf @AMUNAT_6143 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation v$9566 time 

:AMUNAT_6143
if 
  $AMMU_SELLER_ANIMATION_TIME == 1.0 
jf @AMUNAT_6317 
070B: set_actor $AMMU_SELLER onbone_attached_object_operation 0 
Object.PutAt($9543, $9585, $9586, $9587)
Object.KeepInMemory($9543, True)
gosub @AMUNAT_8953 
0812: AS_actor $AMMU_SELLER perform_animation "SHP_G_LIFT_OUT" IFP "WEAPONS" framedelta 1000.0 loopA 0 lockX 0 lockY 0 lockF 1 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
if 
  Actor.Animation($AMMU_SELLER) == "SHP_G_LIFT_OUT"
jf @AMUNAT_6310 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation "SHP_G_LIFT_OUT" time 

:AMUNAT_6310
$9584 = 4 

:AMUNAT_6317
if 
  $9584 == 4 
jf @AMUNAT_6480 
if 
  Actor.Animation($AMMU_SELLER) == "SHP_G_LIFT_OUT"
jf @AMUNAT_6391 
0613: $AMMU_SELLER_ANIMATION_TIME = actor $AMMU_SELLER animation "SHP_G_LIFT_OUT" time 

:AMUNAT_6391
if 
  $AMMU_SELLER_ANIMATION_TIME == 1.0 
jf @AMUNAT_6480 
0812: AS_actor $AMMU_SELLER perform_animation "SHP_TRAY_POSE" IFP "WEAPONS" framedelta 1000.0 loopA 1 lockX 0 lockY 0 lockF 0 time -1 // versionB 
$AMMU_SELLER_ANIMATION_TIME = 0.0 
$9584 = 0 
$AMMU_STAGE = 6 

:AMUNAT_6480
if 
  $9584 == 5 
jf @AMUNAT_7048 
if 
80E1:   not player 0 pressed_key 16 
jf @AMUNAT_7048 
03D5: remove_text 'AMMUA'  // ~s~Buying this item will replace the weapon in this slot.
03D5: remove_text 'SHOPNO'  // ~s~You don't have enough money to buy this item.
03D5: remove_text 'AMMUC'  // ~s~You cannot buy any more ammunition for this weapon.
03D5: remove_text 'AMMUD'  // ~s~You cannot buy any more armor.
$2544 = 0 
$9596 = 0 
$SHOPS_PLAYER_CASH = Player.Money($PLAYER_CHAR)
if 
002C:   $SHOPS_PLAYER_CASH >= $AMMU_WEAPON_COST // (int) 
jf @AMUNAT_6969 
if 
84A3:   not  $AMMU_SELECTED_WEAPON == 48 // == constant 
jf @AMUNAT_6791 
041A: $9573 = actor $PLAYER_ACTOR weapon $AMMU_SELECTED_WEAPON ammo 
if 
  9999 > $9573 
jf @AMUNAT_6705 
0790: charge_money_for_shopping_item_with_textureCRC $AMMU_SELECTED_WEAPON 
09D5: play_sound_of_actor $AMMU_SELLER soundslot 323 unknown_flags 0 0 1 as $10081 // extended 0947 
097A: play_audio_at $TEMPVAR_X_COORD $TEMPVAR_Y_COORD $TEMPVAR_Z_COORD event 1052 
$9584 = 6 
TIMERB = 0 
jump @AMUNAT_6784 

:AMUNAT_6705
if 
  $9596 == 0 
jf @AMUNAT_6784 
097A: play_audio_at $TEMPVAR_X_COORD $TEMPVAR_Y_COORD $TEMPVAR_Z_COORD event 1053 
00BC: show_text_highpriority GXT 'AMMUC' time 5000 flag 1  // ~s~You cannot buy any more ammunition for this weapon.
09D5: play_sound_of_actor $AMMU_SELLER soundslot 322 unknown_flags 0 0 1 as $10081 // extended 0947 
$9584 = 0 
$9596 = 1 

:AMUNAT_6784
jump @AMUNAT_6962 

:AMUNAT_6791
04DD: $9594 = actor $PLAYER_ACTOR armour 
0945: get_player $PLAYER_CHAR max_armour_to $9595 
if 
001C:   $9595 > $9594 // (int) 
jf @AMUNAT_6883 
09D5: play_sound_of_actor $AMMU_SELLER soundslot 323 unknown_flags 0 0 1 as $10081 // extended 0947 
0790: charge_money_for_shopping_item_with_textureCRC $AMMU_SELECTED_WEAPON 
097A: play_audio_at $TEMPVAR_X_COORD $TEMPVAR_Y_COORD $TEMPVAR_Z_COORD event 1052 
$9584 = 6 
TIMERB = 0 
jump @AMUNAT_6962 

:AMUNAT_6883
if 
  $9596 == 0 
jf @AMUNAT_6962 
097A: play_audio_at $TEMPVAR_X_COORD $TEMPVAR_Y_COORD $TEMPVAR_Z_COORD event 1053 
09D5: play_sound_of_actor $AMMU_SELLER soundslot 322 unknown_flags 0 0 1 as $10081 // extended 0947 
00BC: show_text_highpriority GXT 'AMMUD' time 5000 flag 1  // ~s~You cannot buy any more armor.
$9584 = 0 
$9596 = 1 

:AMUNAT_6962
jump @AMUNAT_7048 

:AMUNAT_6969
if 
  $2544 == 0 
jf @AMUNAT_7048 
097A: play_audio_at $TEMPVAR_X_COORD $TEMPVAR_Y_COORD $TEMPVAR_Z_COORD event 1053 
09D5: play_sound_of_actor $AMMU_SELLER soundslot 324 unknown_flags 0 0 1 as $10081 // extended 0947 
00BC: show_text_highpriority GXT 'SHOPNO' time 5000 flag 1  // ~s~You don't have enough money to buy this item.
$9584 = 0 
$2544 = 1 

:AMUNAT_7048
if 
  $9584 == 6 
jf @AMUNAT_7480 
if 
  $2418 == 1 
jf @AMUNAT_7098 
08DA: remove_panel $2417 
03E6: remove_text_box 
$2418 = 0 

:AMUNAT_7098
if 
  $2422 == 0 
jf @AMUNAT_7466 
08D4: $2421 = create_panel_with_title 'AMMUN' position 29.0 20.0 width 93.0 columns 2 interactive 0 background 1 alignment 1  // Ammu-Nation
08D6: set_panel $2421 column 0 alignment 1 
08DB: set_panel $2421 column 0 header 'WEAPON' data 'BOUGHT' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY'  // Weapon // Purchased
08D6: set_panel $2421 column 1 alignment 0 
08DB: set_panel $2421 column 1 header 'COST' data 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY'  // Cost
08EE: set_panel $2421 column 1 row 0 text_1number GXT 'DOLLAR' number $AMMU_WEAPON_COST  // $~1~
09DB: set_panel $2421 column 0 width 140 
09DB: set_panel $2421 column 1 width 46 
$2422 = 1 

:AMUNAT_7466
TIMERB = 0 
$9584 = 7 

:AMUNAT_7480
if 
  $9584 == 7 
jf @AMUNAT_7597 
if 
  TIMERB >= 1000 
jf @AMUNAT_7597 
if 
  $2422 == 1 
jf @AMUNAT_7547 
08DA: remove_panel $2421 
$2422 = 0 

:AMUNAT_7547
$9584 = 0 
if 
  1 > $9584 
jf @AMUNAT_7597 
if 
  $2418 == 0 
jf @AMUNAT_7597 
gosub @AMUNAT_7632 

:AMUNAT_7597
jump @AMUNAT_7611 

:AMUNAT_7604
gosub @AMUNAT_8535 

:AMUNAT_7611
jump @AMUNAT_7625 

:AMUNAT_7618
gosub @AMUNAT_8535 

:AMUNAT_7625
jump @AMUNAT_640 

:AMUNAT_7632
if 
  $2418 == 0 
jf @AMUNAT_8271 
0512: show_permanent_text_box 'AMMU_H3'  // ~k~~PED_SPRINT~ Buy~N~~k~~VEHICLE_ENTER_EXIT~ Back.
if 
04A3:   $CURRENT_LANGUAGE == 0 // == constant 
jf @AMUNAT_7723 
08D4: $2417 = create_panel_with_title 'AMMUN' position 29.0 95.0 width 93.0 columns 2 interactive 0 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_7964 

:AMUNAT_7723
if 
04A3:   $CURRENT_LANGUAGE == 1 // == constant 
jf @AMUNAT_7785 
08D4: $2417 = create_panel_with_title 'AMMUN' position 29.0 95.0 width 93.0 columns 2 interactive 0 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_7964 

:AMUNAT_7785
if 
04A3:   $CURRENT_LANGUAGE == 2 // == constant 
jf @AMUNAT_7847 
08D4: $2417 = create_panel_with_title 'AMMUN' position 29.0 95.0 width 93.0 columns 2 interactive 0 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_7964 

:AMUNAT_7847
if 
04A3:   $CURRENT_LANGUAGE == 3 // == constant 
jf @AMUNAT_7909 
08D4: $2417 = create_panel_with_title 'AMMUN' position 29.0 95.0 width 93.0 columns 2 interactive 0 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_7964 

:AMUNAT_7909
if 
04A3:   $CURRENT_LANGUAGE == 4 // == constant 
jf @AMUNAT_7964 
08D4: $2417 = create_panel_with_title 'AMMUN' position 29.0 95.0 width 93.0 columns 2 interactive 0 background 1 alignment 1  // Ammu-Nation

:AMUNAT_7964
08D6: set_panel $2417 column 0 alignment 1 
08DB: set_panel $2417 column 0 header 'WEAPON' data s$AMMU_WEAPON_NAME 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY'  // Weapon
08D6: set_panel $2417 column 1 alignment 0 
08DB: set_panel $2417 column 1 header 'COST' data 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY' 'DUMMY'  // Cost
08EE: set_panel $2417 column 1 row 0 text_1number GXT 'DOLLAR' number $AMMU_WEAPON_COST  // $~1~
09DB: set_panel $2417 column 0 width 140 
09DB: set_panel $2417 column 1 width 46 
$2418 = 1 

:AMUNAT_8271
return 

:AMUNAT_8273
if 
  $2420 == 1 
jf @AMUNAT_8305 
03E6: remove_text_box 
08DA: remove_panel $2419 
$2420 = 0 

:AMUNAT_8305
if 
  $2424 == 1 
jf @AMUNAT_8337 
03E6: remove_text_box 
08DA: remove_panel $2423 
$2424 = 0 

:AMUNAT_8337
if 
  $2418 == 1 
jf @AMUNAT_8369 
03E6: remove_text_box 
08DA: remove_panel $2417 
$2418 = 0 

:AMUNAT_8369
if 
  $2422 == 1 
jf @AMUNAT_8399 
08DA: remove_panel $2421 
$2422 = 0 

:AMUNAT_8399
if 
  $AMMU_STAGE >= 1 
jf @AMUNAT_8419 
03E6: remove_text_box 

:AMUNAT_8419
03D5: remove_text 'AMMUA'  // ~s~Buying this item will replace the weapon in this slot.
03D5: remove_text 'SHOPNO'  // ~s~You don't have enough money to buy this item.
03D5: remove_text 'AMMUC'  // ~s~You cannot buy any more ammunition for this weapon.
03D5: remove_text 'AMMUD'  // ~s~You cannot buy any more armor.
$2420 = 0 
$2424 = 0 
$9544 = 0 
$9584 = 0 
$2418 = 0 
$2422 = 0 
$2545 = 0 
$2544 = 0 
$9596 = 0 
$AMMU_STAGE = 2 
return 

:AMUNAT_8535
if 
  $2420 == 1 
jf @AMUNAT_8567 
03E6: remove_text_box 
08DA: remove_panel $2419 
$2420 = 0 

:AMUNAT_8567
if 
  $2424 == 1 
jf @AMUNAT_8599 
03E6: remove_text_box 
08DA: remove_panel $2423 
$2424 = 0 

:AMUNAT_8599
if 
  $2418 == 1 
jf @AMUNAT_8631 
03E6: remove_text_box 
08DA: remove_panel $2417 
$2418 = 0 

:AMUNAT_8631
if 
  $2422 == 1 
jf @AMUNAT_8661 
08DA: remove_panel $2421 
$2422 = 0 

:AMUNAT_8661
if 
  $AMMU_STAGE >= 1 
jf @AMUNAT_8681 
03E6: remove_text_box 

:AMUNAT_8681
03D5: remove_text 'AMMUA'  // ~s~Buying this item will replace the weapon in this slot.
03D5: remove_text 'SHOPNO'  // ~s~You don't have enough money to buy this item.
03D5: remove_text 'AMMUC'  // ~s~You cannot buy any more ammunition for this weapon.
03D5: remove_text 'AMMUD'  // ~s~You cannot buy any more armor.
$2420 = 0 
$2424 = 0 
$FLAG_AMMU_SELLER_ATTACK_PLAYER = 0 
$9544 = 0 
$9584 = 0 
$2418 = 0 
$2422 = 0 
$2545 = 0 
$2544 = 0 
$9596 = 0 
$AMMU_STAGE = 0 
Model.Destroy(#COLT45)
Model.Destroy(#SILENCED)
Model.Destroy(#DESERT_EAGLE)
Model.Destroy(#CHROMEGUN)
Model.Destroy(#SAWNOFF)
Model.Destroy(#SHOTGSPA)
Model.Destroy(#GRENADE)
Model.Destroy(#MICRO_UZI)
Model.Destroy(#MP5LNG)
Model.Destroy(#TEC9)
Model.Destroy(#AK47)
Model.Destroy(#M4)
Model.Destroy(#CUNTGUN)
Model.Destroy(#SNIPER)
Model.Destroy(#ARMOUR)
Model.Destroy(#SATCHEL)
Model.Destroy(#BOMB)
03F0: enable_text_draw 0 
Model.Destroy($SELLER_MODEL)
Actor.DestroyInstantly($AMMU_SELLER)
08F8: display_stat_update_box 1 
0581: enable_radar 1 
09BD: allow_other_scripts_to_display_text_boxes 0 
if 
  $5274 == 1 
jf @AMUNAT_8949 
03E5: show_text_box 'ANR_56'  // A new weapon challenge is available.
$5274 = 0 

:AMUNAT_8949
terminate_this_script 
return 

:AMUNAT_8953
Object.Destroy($9543)
return 

:AMUNAT_8960
if or
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 349 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 351 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 355 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 356 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 358 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 357 // == constant 
jf @AMUNAT_9113 
06D1: v$9554 = "SHP_2H_LIFT" // v$ = string 
06D1: v$9558 = "SHP_2H_LIFT_END" // v$ = string 
0086: $9585 = $AMMU_X_SELLER // (float) 
$9585 += 0.231 
0086: $9586 = $AMMU_Y_SELLER // (float) 
$9586 += 0.636 
0086: $9587 = $AMMU_Z_SELLER // (float) 
$9587 += 1.053 

:AMUNAT_9113
if 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 350 // == constant 
jf @AMUNAT_9226 
06D1: v$9554 = "SHP_2H_LIFT" // v$ = string 
06D1: v$9558 = "SHP_2H_LIFT_END" // v$ = string 
0086: $9585 = $AMMU_X_SELLER // (float) 
$9585 += 0.231 
0086: $9586 = $AMMU_Y_SELLER // (float) 
$9586 += 0.636 
0086: $9587 = $AMMU_Z_SELLER // (float) 
$9587 += 1.053 

:AMUNAT_9226
if or
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 346 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 347 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 348 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 342 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 352 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 353 // == constant 
jf @AMUNAT_9379 
06D1: v$9554 = "SHP_1H_LIFT" // v$ = string 
06D1: v$9558 = "SHP_1H_LIFT_END" // v$ = string 
0086: $9585 = $AMMU_X_SELLER // (float) 
$9585 += 0.108 
0086: $9586 = $AMMU_Y_SELLER // (float) 
$9586 += 0.654 
0086: $9587 = $AMMU_Z_SELLER // (float) 
$9587 += 1.053 

:AMUNAT_9379
if or
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 363 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 372 // == constant 
jf @AMUNAT_9500 
06D1: v$9554 = "SHP_1H_LIFT" // v$ = string 
06D1: v$9558 = "SHP_1H_LIFT_END" // v$ = string 
0086: $9585 = $AMMU_X_SELLER // (float) 
$9585 += 0.108 
0086: $9586 = $AMMU_Y_SELLER // (float) 
$9586 += 0.654 
0086: $9587 = $AMMU_Z_SELLER // (float) 
$9587 += 1.053 

:AMUNAT_9500
if 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 373 // == constant 
jf @AMUNAT_9613 
06D1: v$9554 = "SHP_AR_LIFT" // v$ = string 
06D1: v$9558 = "SHP_AR_LIFT_END" // v$ = string 
0086: $9585 = $AMMU_X_SELLER // (float) 
$9585 += 0.175 
0086: $9586 = $AMMU_Y_SELLER // (float) 
$9586 += 0.676 
0086: $9587 = $AMMU_Z_SELLER // (float) 
$9587 += 1.5 

:AMUNAT_9613
return 

:AMUNAT_9615
if or
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 349 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 351 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 355 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 356 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 358 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 357 // == constant 
jf @AMUNAT_9710 
06D1: v$AMMU_SELLER_ANIMATION = "SHP_2H_RET_S" // v$ = string 
06D1: v$9566 = "SHP_2H_RET" // v$ = string 

:AMUNAT_9710
if 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 350 // == constant 
jf @AMUNAT_9765 
06D1: v$AMMU_SELLER_ANIMATION = "SHP_2H_RET_S" // v$ = string 
06D1: v$9566 = "SHP_2H_RET" // v$ = string 

:AMUNAT_9765
if or
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 346 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 347 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 348 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 342 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 352 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 353 // == constant 
jf @AMUNAT_9860 
06D1: v$AMMU_SELLER_ANIMATION = "SHP_1H_RET_S" // v$ = string 
06D1: v$9566 = "SHP_1H_RET" // v$ = string 

:AMUNAT_9860
if or
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 363 // == constant 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 372 // == constant 
jf @AMUNAT_9923 
06D1: v$AMMU_SELLER_ANIMATION = "SHP_1H_RET_S" // v$ = string 
06D1: v$9566 = "SHP_1H_RET" // v$ = string 

:AMUNAT_9923
if 
04A3:   $AMMU_SELECTED_WEAPON_MODEL == 373 // == constant 
jf @AMUNAT_9978 
06D1: v$AMMU_SELLER_ANIMATION = "SHP_AR_RET_S" // v$ = string 
06D1: v$9566 = "SHP_AR_RET" // v$ = string 

:AMUNAT_9978
return 

:AMUNAT_9980
$9597 = 0 
$9616 = 0 
$2515 = 0 
$9598 = 0 
$9599 = 0 
$9600 = 0 
$9601 = 0 
$9602 = 0 
$9603 = 0 
$9604 = 0 
$9605 = 0 
$9606 = 0 
$9607 = 0 
$9608 = 0 
$9609 = 0 
$9610 = 0 
$9611 = 0 
$9612 = 0 
$9613 = 0 
$9614 = 0 
$9615 = 0 

:AMUNAT_10127
if 
001C:   $AMMU_AVAILABLE_WEAPONS > $9597 // (int) 
jf @AMUNAT_10904 
0760: store_shopping_data_index $9597 textureCRC_to $AMMU_SELECTED_WEAPON 
0871: init_jump_table $AMMU_SELECTED_WEAPON total_jumps 16 default_jump 0 @AMUNAT_10890 jumps 16 @AMUNAT_10738 22 @AMUNAT_10282 23 @AMUNAT_10282 24 @AMUNAT_10282 25 @AMUNAT_10358 26 @AMUNAT_10358 27 @AMUNAT_10358 
0872: jump_table_jumps 28 @AMUNAT_10434 29 @AMUNAT_10510 30 @AMUNAT_10586 31 @AMUNAT_10586 32 @AMUNAT_10434 33 @AMUNAT_10662 34 @AMUNAT_10662 39 @AMUNAT_10738 48 @AMUNAT_10814 

:AMUNAT_10282
0084: $9617($9598,3i) = $AMMU_SELECTED_WEAPON // (int) 
$9598 += 1 
if 
  $9607 == 0 
jf @AMUNAT_10351 
05A9: $2450($9616,12s) = 'GUN1' // s$  // Pistols
$9616 += 1 
$9607 = 1 

:AMUNAT_10351
jump @AMUNAT_10890 

:AMUNAT_10358
0084: $9620($9599,3i) = $AMMU_SELECTED_WEAPON // (int) 
$9599 += 1 
if 
  $9608 == 0 
jf @AMUNAT_10427 
05A9: $2450($9616,12s) = 'GUN2' // s$  // Shotguns
$9616 += 1 
$9608 = 1 

:AMUNAT_10427
jump @AMUNAT_10890 

:AMUNAT_10434
0084: $9623($9600,2i) = $AMMU_SELECTED_WEAPON // (int) 
$9600 += 1 
if 
  $9609 == 0 
jf @AMUNAT_10503 
05A9: $2450($9616,12s) = 'GUN3' // s$  // Micro SMGs
$9616 += 1 
$9609 = 1 

:AMUNAT_10503
jump @AMUNAT_10890 

:AMUNAT_10510
0084: $9625($9601,1i) = $AMMU_SELECTED_WEAPON // (int) 
$9601 += 1 
if 
  $9610 == 0 
jf @AMUNAT_10579 
05A9: $2450($9616,12s) = 'GUN4' // s$  // SMG
$9616 += 1 
$9610 = 1 

:AMUNAT_10579
jump @AMUNAT_10890 

:AMUNAT_10586
0084: $9626($9602,2i) = $AMMU_SELECTED_WEAPON // (int) 
$9602 += 1 
if 
  $9611 == 0 
jf @AMUNAT_10655 
05A9: $2450($9616,12s) = 'GUN5' // s$  // Assault
$9616 += 1 
$9611 = 1 

:AMUNAT_10655
jump @AMUNAT_10890 

:AMUNAT_10662
0084: $9628($9604,2i) = $AMMU_SELECTED_WEAPON // (int) 
$9604 += 1 
if 
  $9612 == 0 
jf @AMUNAT_10731 
05A9: $2450($9616,12s) = 'GUN6' // s$  // Rifles
$9616 += 1 
$9612 = 1 

:AMUNAT_10731
jump @AMUNAT_10890 

:AMUNAT_10738
0084: $9630($9603,2i) = $AMMU_SELECTED_WEAPON // (int) 
$9603 += 1 
if 
  $9613 == 0 
jf @AMUNAT_10807 
05A9: $2450($9616,12s) = 'GUN7' // s$  // Thrown
$9616 += 1 
$9613 = 1 

:AMUNAT_10807
jump @AMUNAT_10890 

:AMUNAT_10814
0084: $9632($9605,1i) = $AMMU_SELECTED_WEAPON // (int) 
$9605 += 1 
if 
  $9614 == 0 
jf @AMUNAT_10883 
05A9: $2450($9616,12s) = 'GUN8' // s$  // Armor
$9616 += 1 
$9614 = 1 

:AMUNAT_10883
jump @AMUNAT_10890 

:AMUNAT_10890
$9597 += 1 
jump @AMUNAT_10127 

:AMUNAT_10904
0084: $2515 = $9616 // (int) 

:AMUNAT_10912
if 
  12 > $2515 
jf @AMUNAT_10984 
$2438($2515,12i) = -1 
$2426($2515,12i) = 0 
05A9: $2450($2515,12s) = 'DUMMY' // s$ 
$2515 += 1 
jump @AMUNAT_10912 

:AMUNAT_10984
return 

:AMUNAT_10986
if 
  $2420 == 0 
jf @AMUNAT_11386 
0512: show_permanent_text_box 'AMMU_H'  // Use ~k~~GO_FORWARD~ and ~k~~GO_BACK~ to select a weapon.~N~~k~~PED_SPRINT~ Select~N~~k~~VEHICLE_ENTER_EXIT~ Quit.
if 
04A3:   $CURRENT_LANGUAGE == 0 // == constant 
jf @AMUNAT_11077 
08D4: $2419 = create_panel_with_title 'AMMUN' position 29.0 145.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_11318 

:AMUNAT_11077
if 
04A3:   $CURRENT_LANGUAGE == 1 // == constant 
jf @AMUNAT_11139 
08D4: $2419 = create_panel_with_title 'AMMUN' position 29.0 145.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_11318 

:AMUNAT_11139
if 
04A3:   $CURRENT_LANGUAGE == 2 // == constant 
jf @AMUNAT_11201 
08D4: $2419 = create_panel_with_title 'AMMUN' position 29.0 165.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_11318 

:AMUNAT_11201
if 
04A3:   $CURRENT_LANGUAGE == 3 // == constant 
jf @AMUNAT_11263 
08D4: $2419 = create_panel_with_title 'AMMUN' position 29.0 145.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_11318 

:AMUNAT_11263
if 
04A3:   $CURRENT_LANGUAGE == 4 // == constant 
jf @AMUNAT_11318 
08D4: $2419 = create_panel_with_title 'AMMUN' position 29.0 145.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation

:AMUNAT_11318
08D6: set_panel $2419 column 0 alignment 1 
08DB: set_panel $2419 column 0 header 'DUMMY' data s$2450[0] s$2450[1] s$2450[2] s$2450[3] s$2450[4] s$2450[5] s$2450[6] s$2450[7] s$2450[8] s$2450[9] s$2450[10] s$2450[11] 
$2420 = 1 

:AMUNAT_11386
return 

:AMUNAT_11388
$9636 = 0 
if 
05AD:   s$9549 == 'GUN1' // s$ == short  // Pistols
jf @AMUNAT_11493 

:AMUNAT_11420
if 
001C:   $9598 > $9636 // (int) 
jf @AMUNAT_11493 
078C: get_shopping_item_with_textureCRC $9617($9636,3i) nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
05A9: $2450($9636,12s) = s$AMMU_WEAPON_NAME // s$ 
0084: $9633($9636,3i) = $9617($9636,3i) // (int) 
$9636 += 1 
jump @AMUNAT_11420 

:AMUNAT_11493
if 
05AD:   s$9549 == 'GUN2' // s$ == short  // Shotguns
jf @AMUNAT_11591 

:AMUNAT_11518
if 
001C:   $9599 > $9636 // (int) 
jf @AMUNAT_11591 
078C: get_shopping_item_with_textureCRC $9620($9636,3i) nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
05A9: $2450($9636,12s) = s$AMMU_WEAPON_NAME // s$ 
0084: $9633($9636,3i) = $9620($9636,3i) // (int) 
$9636 += 1 
jump @AMUNAT_11518 

:AMUNAT_11591
if 
05AD:   s$9549 == 'GUN3' // s$ == short  // Micro SMGs
jf @AMUNAT_11689 

:AMUNAT_11616
if 
001C:   $9600 > $9636 // (int) 
jf @AMUNAT_11689 
078C: get_shopping_item_with_textureCRC $9623($9636,2i) nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
05A9: $2450($9636,12s) = s$AMMU_WEAPON_NAME // s$ 
0084: $9633($9636,3i) = $9623($9636,2i) // (int) 
$9636 += 1 
jump @AMUNAT_11616 

:AMUNAT_11689
if 
05AD:   s$9549 == 'GUN4' // s$ == short  // SMG
jf @AMUNAT_11787 

:AMUNAT_11714
if 
001C:   $9601 > $9636 // (int) 
jf @AMUNAT_11787 
078C: get_shopping_item_with_textureCRC $9625($9636,1i) nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
05A9: $2450($9636,12s) = s$AMMU_WEAPON_NAME // s$ 
0084: $9633($9636,3i) = $9625($9636,1i) // (int) 
$9636 += 1 
jump @AMUNAT_11714 

:AMUNAT_11787
if 
05AD:   s$9549 == 'GUN5' // s$ == short  // Assault
jf @AMUNAT_11885 

:AMUNAT_11812
if 
001C:   $9602 > $9636 // (int) 
jf @AMUNAT_11885 
078C: get_shopping_item_with_textureCRC $9626($9636,2i) nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
05A9: $2450($9636,12s) = s$AMMU_WEAPON_NAME // s$ 
0084: $9633($9636,3i) = $9626($9636,2i) // (int) 
$9636 += 1 
jump @AMUNAT_11812 

:AMUNAT_11885
if 
05AD:   s$9549 == 'GUN6' // s$ == short  // Rifles
jf @AMUNAT_11983 

:AMUNAT_11910
if 
001C:   $9604 > $9636 // (int) 
jf @AMUNAT_11983 
078C: get_shopping_item_with_textureCRC $9628($9636,2i) nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
05A9: $2450($9636,12s) = s$AMMU_WEAPON_NAME // s$ 
0084: $9633($9636,3i) = $9628($9636,2i) // (int) 
$9636 += 1 
jump @AMUNAT_11910 

:AMUNAT_11983
if 
05AD:   s$9549 == 'GUN7' // s$ == short  // Thrown
jf @AMUNAT_12081 

:AMUNAT_12008
if 
001C:   $9603 > $9636 // (int) 
jf @AMUNAT_12081 
078C: get_shopping_item_with_textureCRC $9630($9636,2i) nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
05A9: $2450($9636,12s) = s$AMMU_WEAPON_NAME // s$ 
0084: $9633($9636,3i) = $9630($9636,2i) // (int) 
$9636 += 1 
jump @AMUNAT_12008 

:AMUNAT_12081
if 
05AD:   s$9549 == 'GUN8' // s$ == short  // Armor
jf @AMUNAT_12179 

:AMUNAT_12106
if 
001C:   $9605 > $9636 // (int) 
jf @AMUNAT_12179 
078C: get_shopping_item_with_textureCRC $9632($9636,1i) nametag_to s$AMMU_WEAPON_NAME // 8-byte string 
05A9: $2450($9636,12s) = s$AMMU_WEAPON_NAME // s$ 
0084: $9633($9636,3i) = $9632($9636,1i) // (int) 
$9636 += 1 
jump @AMUNAT_12106 

:AMUNAT_12179
0084: $2515 = $9636 // (int) 

:AMUNAT_12187
if 
  12 > $2515 
jf @AMUNAT_12259 
$2438($2515,12i) = -1 
$2426($2515,12i) = 0 
05A9: $2450($2515,12s) = 'DUMMY' // s$ 
$2515 += 1 
jump @AMUNAT_12187 

:AMUNAT_12259
if 
  $2424 == 0 
jf @AMUNAT_12659 
0512: show_permanent_text_box 'AMMU_H2'  // Use ~k~~GO_FORWARD~ and ~k~~GO_BACK~ to select a weapon.~N~~k~~PED_SPRINT~ View~N~~k~~VEHICLE_ENTER_EXIT~ Back.
if 
04A3:   $CURRENT_LANGUAGE == 0 // == constant 
jf @AMUNAT_12350 
08D4: $2423 = create_panel_with_title 'AMMUN' position 29.0 145.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_12591 

:AMUNAT_12350
if 
04A3:   $CURRENT_LANGUAGE == 1 // == constant 
jf @AMUNAT_12412 
08D4: $2423 = create_panel_with_title 'AMMUN' position 29.0 145.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_12591 

:AMUNAT_12412
if 
04A3:   $CURRENT_LANGUAGE == 2 // == constant 
jf @AMUNAT_12474 
08D4: $2423 = create_panel_with_title 'AMMUN' position 29.0 165.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_12591 

:AMUNAT_12474
if 
04A3:   $CURRENT_LANGUAGE == 3 // == constant 
jf @AMUNAT_12536 
08D4: $2423 = create_panel_with_title 'AMMUN' position 29.0 145.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation
jump @AMUNAT_12591 

:AMUNAT_12536
if 
04A3:   $CURRENT_LANGUAGE == 4 // == constant 
jf @AMUNAT_12591 
08D4: $2423 = create_panel_with_title 'AMMUN' position 29.0 145.0 width 186.0 columns 1 interactive 1 background 1 alignment 1  // Ammu-Nation

:AMUNAT_12591
08D6: set_panel $2423 column 0 alignment 1 
08DB: set_panel $2423 column 0 header 'DUMMY' data s$2450[0] s$2450[1] s$2450[2] s$2450[3] s$2450[4] s$2450[5] s$2450[6] s$2450[7] s$2450[8] s$2450[9] s$2450[10] s$2450[11] 
$2424 = 1 

:AMUNAT_12659
return 
terminate_this_script 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
0000: NOP 
hex
 00
end
