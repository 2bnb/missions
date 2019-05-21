btc_custom_loc = [[[2021.04,4173.93],"Ambush","Mountain 1",200,200,true],[[7961.73,7052.46],"Ambush","Mountain x2",200,200,true],[[7961.73,7052.46],"Ambush","Mountain 3",200,200,true],[[669.737,2151.01],"Ambush","Mountain 4",200,200,true]
,[[14754.8,16216.9],"LAmbush","Mountain 5",100,100,true],[[19912.3,17501.9] ,"LAmbush","Mountain 6",100,100,true],[[9759.52,16852.3],"Ambush","Mountain 7",200,200,true],[[468.005,7549.65] ,"LAmbush","Mountain 8",100,100,true],[[855.81,15918.6] ,"LAmbush","Mountain 9",100,100,true]
,[[5282.39,16670.2] ,"LAmbush","Mountain 11",100,100,true],[[10987.8,14092.2] ,"LAmbush","Mountain 12",100,100,true],[[16322.9,16849.3] ,"LAmbush","Mountain 13",100,100,true]
,[[20089.4,14520.1] ,"Ambush","Mountain 14",200,200,true],[[19284,9216.67] ,"LAmbush","Mountain 15",75,75,true],[[16657.4,8141.95] ,"LAmbush","Mountain 16",75,75,true],[[19336.7,8188.23] ,"LAmbush","Mountain 17",75,75,true]
,[[18116.1,3716.28] ,"LAmbush","Mountain 18",100,100,true],[[16209.7,4116.41] ,"LAmbush","Mountain 19",100,100,true],[[14365.5,1978.21] ,"LAmbush","Mountain 21",100,100,true],[[18113.1,325.31] ,"LAmbush","Mountain 21",100,100,true]
,[[19857.1,3287.47] ,"LAmbush","Mountain 21",100,100,true],[[6446.57,770.191] ,"LAmbush","Mountain 21",25,25,true],[[11502.1,562.958] ,"LAmbush","Mountain 21",25,25,true]
];

/*
    Here you can specify which equipment should be added or removed from the arsenal.
    Please take care that there are different categories (weapons, magazines, items, backpacks) for different pieces of equipment into which you have to classify the classnames.
    In all cases, you need the classname of an object.

    Attention: The function of these lists depends on the setting in the mission parameter (Restrict arsenal).
        - "Full": here you have only the registered items in the arsenal available.
        - "Remove only": here all registered items are removed from the arsenal. This only works for the ACE3 arsenal!

    Example(s):
        private _weapons = [
            "arifle_MX_F",          //Classname for the rifle MX
            "arifle_MX_SW_F",       //Classname for the rifle MX LSW
            "arifle_MXC_F"          //Classname for the rifle MXC
        ];

        private _items = [
            "G_Shades_Black",
            "G_Shades_Blue",
            "G_Shades_Green"
        ];
*/
private _weapons = [];
private _magazines = [];
private _items = [];
private _backpacks = [];

btc_custom_arsenal = [_weapons, _magazines, _items, _backpacks];

/*
    Here you can specify which equipment is loaded on player connection.
*/

private _radio = ["tf_anprc152", "ACRE_PRC148"] select (isClass(configFile >> "cfgPatches" >> "acre_main"));
//Array of colored item: 0 - Desert, 1 - Tropic, 2 - Black
private _uniforms = ["U_B_CombatUniform_mcam", "U_B_CTRG_Soldier_F", "U_B_CTRG_1"];
private _vests = ["V_PlateCarrierH_CTRG", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrierH_CTRG"];
private _helmets = ["H_HelmetSpecB_paint2", "H_HelmetB_Enh_tna_F", "H_HelmetSpecB_blk"];
private _hoods = ["G_Balaclava_combat", "G_Balaclava_TI_G_tna_F", "G_Balaclava_combat"];
private _laserdesignators = ["Laserdesignator", "Laserdesignator_03", "Laserdesignator_01_khk_F"];
private _night_visions = ["NVGoggles", "NVGoggles_INDEP", "NVGoggles_OPFOR"];
private _weapons = ["arifle_MXC_F", "arifle_MXC_khk_F", "arifle_MXC_Black_F"];
private _weapons_machineGunner = ["arifle_MX_SW_F", "arifle_MX_SW_khk_F", "arifle_MX_SW_Black_F"];
private _weapons_sniper = ["arifle_MXM_F", "arifle_MXM_khk_F", "arifle_MXM_Black_F"];
private _bipods = ["bipod_01_F_snd", "bipod_01_F_khk", "bipod_01_F_blk"];
private _pistols = ["hgun_P07_F", "hgun_P07_khk_F", "hgun_P07_F"];
private _launcher_AT = ["launch_B_Titan_short_F", "launch_B_Titan_short_tna_F", "launch_O_Titan_short_F"];
private _launcher_AA = ["launch_B_Titan_F", "launch_B_Titan_tna_F", "launch_O_Titan_F"];
private _backpacks = ["B_AssaultPack_Kerry", "B_AssaultPack_Kerry", "B_AssaultPack_blk"];
private _backpacks_big = ["B_Kitbag_mcamo", "B_Kitbag_rgr", "B_Kitbag_rgr"];

btc_arsenal_loadout = [_uniforms, _vests, _helmets, _hoods, _laserdesignators, _night_visions, _weapons, _weapons_sniper, _weapons_machineGunner, _bipods, _pistols, _launcher_AT, _launcher_AA, _backpacks, _backpacks_big, [_radio, _radio, _radio]];
