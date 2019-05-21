EOS_Spawn = compile preprocessfilelinenumbers "eos\core\eos_launch.sqf";Bastion_Spawn=compile preprocessfilelinenumbers "eos\core\b_launch.sqf";null=[] execVM "eos\core\spawn_fnc.sqf";onplayerConnected {[] execVM "eos\Functions\EOS_Markers.sqf";};
/* EOS 1.98 by BangaBob 
GROUP SIZES
 0 = 1
 1 = 2,4
 2 = 4,8
 3 = 8,12
 4 = 12,16
 5 = 16,20

EXAMPLE CALL - EOS
 null = [["MARKERNAME","MARKERNAME2"],[2,1,70],[0,1],[1,2,30],[2,60],[2],[1,0,10],[1,0,250,WEST]] call EOS_Spawn;
 null=[["M1","M2","M3"],[HOUSE GROUPS,SIZE OF GROUPS,PROBABILITY],[PATROL GROUPS,SIZE OF GROUPS,PROBABILITY],[LIGHT VEHICLES,SIZE OF CARGO,PROBABILITY],[ARMOURED VEHICLES,PROBABILITY], [STATIC VEHICLES,PROBABILITY],[HELICOPTERS,SIZE OF HELICOPTER CARGO,PROBABILITY],[FACTION,MARKERTYPE,DISTANCE,SIDE,HEIGHTLIMIT,DEBUG]] call EOS_Spawn;

EXAMPLE CALL - BASTION
 null = [["BAS_zone_1"],[3,1],[2,1],[2],[0,0],[0,0,EAST,false,false],[10,2,120,TRUE,TRUE]] call Bastion_Spawn;
 null=[["M1","M2","M3"],[PATROL GROUPS,SIZE OF GROUPS],[LIGHT VEHICLES,SIZE OF CARGO],[ARMOURED VEHICLES],[HELICOPTERS,SIZE OF HELICOPTER CARGO],[FACTION,MARKERTYPE,SIDE,HEIGHTLIMIT,DEBUG],[INITIAL PAUSE, NUMBER OF WAVES, DELAY BETWEEN WAVES, INTEGRATE EOS, SHOW HINTS]] call Bastion_Spawn;
*/
VictoryColor="colorGreen";	// Colour of marker after completion
hostileColor="colorRed";	// Default colour when enemies active
bastionColor="colorOrange";	// Colour for bastion marker
EOS_DAMAGE_MULTIPLIER=1;	// 1 is default
EOS_KILLCOUNTER=false;		// Counts killed units

null = [["EOSzone","EOSzone_1","EOSzone_2","EOSzone_3","EOSzone_4","EOSzone_5","EOSzone_6","EOSzone_7","EOSzone_8","EOSzone_9","EOSzone_10","EOSzone_11","EOSzone_12","EOSzone_13","EOSzone_14","EOSzone_15","EOSzone_16","EOSzone_17","EOSzone_18","EOSzone_19","EOSzone_20","EOSzone_21","EOSzone_22","EOSzone_23","EOSzone_24","EOSzone_25","EOSzone_26","EOSzone_27","EOSzone_28","EOSzone_29","EOSzone_30","EOSzone_31","EOSzone_32","EOSzone_33","EOSzone_34","EOSzone_35","EOSzone_36","EOSzone_37","EOSzone_38","EOSzone_39","EOSzone_40","EOSzone_41","EOSzone_42","EOSzone_43","EOSzone_44","EOSzone_45","EOSzone_46","EOSzone_47","EOSzone_48","EOSzone_49","EOSzone_50","EOSzone_51","EOSzone_52","EOSzone_53","EOSzone_54","EOSzone_55","EOSzone_56","EOSzone_57","EOSzone_58","EOSzone_59","EOSzone_60","EOSzone_61","EOSzone_62","EOSzone_63","EOSzone_64","EOSzone_65","EOSzone_66","EOSzone_67","EOSzone_68","EOSzone_69","EOSzone_70","EOSzone_71","EOSzone_72","EOSzone_73","EOSzone_74","EOSzone_75","EOSzone_76","EOSzone_77","EOSzone_78","EOSzone_79","EOSzone_80","EOSzone_81","EOSzone_82","EOSzone_83","EOSzone_84","EOSzone_85","EOSzone_86"],[4,2],[0,0],[0,0],[0],[0],[0,0],[5,1,600,EAST,TRUE,FALSE]] call EOS_Spawn;