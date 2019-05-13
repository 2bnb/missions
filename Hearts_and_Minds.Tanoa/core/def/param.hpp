class Params {
    class btc_p_time_title {  // << Time options >>
        title = $STR_BTC_HAM_PARAM_TIME_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_time { // Set the start time:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_TIME_START"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"};
        default = 12;
    };
    class btc_p_acctime { // Acceleration time multiplier:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_TIME_MULTIP"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12"};
        default = 1;
    };
    class btc_p_load { // Load the savegame (if available)
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_LOAD"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_auto_db { // Auto savegame (can break player immersion)
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ASAVE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,24,48,72};
        texts[]={$STR_DISABLED,"1h","2h","3h","4h","5h","6h","7h","8h","9h","10h","11h","12h","24h","48h","72h"}; // texts[]={"Off","1h","2h","3h","4h","5h","6h","7h","8h","9h","10h","11h","12h","24h","48h","72h"};
        default = 0;
    };
    class btc_p_type_title { // << Faction options >>
        title = $STR_BTC_HAM_PARAM_FAC_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_en { // Enemy type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETYPE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110};
        texts[]={"0 - Bohemia Interactive: 2035 FIA (Side: WEST)","1 - Bohemia Interactive: 2035 AAF (Side: GUER)","2 - Bohemia Interactive: 2035 FIA (Side: GUER)","3 - Bohemia Interactive: 2035 CSAT (Side: EAST)","4 - Bohemia Interactive: 2035 FIA (Side: EAST)","5 -CFP Drew: Afghan Army (Side: WEST)","6 -CFP Drew: Afghan Police (Side: WEST)","7 -CFP Tupolov: Army of the Czech Rep. (Jungle / Woodland) (Side: WEST)","8 -CFP Drew: Bundeswehr (Jungle / Woodland) (Side: WEST)","9 -CFP Drew: Israeli Defense Force (Side: WEST)","10 -CFP Bohemia Interactive: Iraqi Army (Side: WEST)","11 -CFP Bohemia Interactive: Iraqi Police (Side: WEST)","12 -CFP Drew: Kenyan Defense Force (Side: WEST)","13 -CFP Drew: Nigerian Army (Side: WEST)","14 -CFP Bohemia Interactive: Peshmerga (Side: WEST)","15 -CFP Archduke: Sudanese Armed Forces (Side: WEST)","16 -CFP Archduke: Sudan Rapid Support Forces / Janjaweed (Side: WEST)","17 -CFP Drew: Uganda People's Defense Force (Side: WEST)","18 -CFP Tupolov: US Marine Corps (Arid / Desert) (Side: WEST)","19 -CFP Drew: US 75th Rangers (Jungle/Woodland) (Side: WEST)","20 -CFP Drew: US Navy Seals (Arid / Desert) (Side: WEST)","21 -CFP Drew: US Navy Seals (Jungle / Woodland) (Side: WEST)","22 -CFP Bohemia Interactive: YPG (Side: WEST)","23 -CFP Bohemia Interactive: al-Nusra Front (Side: GUER)","24 -CFP Bohemia Interactive: Islamic State (Side: GUER)","25 -CFP Archduke: Sudan People's Liberation Movement North (Side: GUER)","26 -CFP Archduke: South Sudan People's Defense Force (Side: GUER)","27 -CFP Drew: Tuareg Rebels (Side: GUER)","28 -CFP Tupolov: Western Ultranationalists (Side: GUER)","29 -CFP Drew: Al Qaeda (Side: EAST)","30 -CFP Drew: Al-Shabaab (Side: EAST)","31 -CFP Tupolov: Ansar Allah (Houthis) (Side: EAST)","32 -CFP Drew: Boko Haram (Side: EAST)","33 -CFP jarrad96: Central African Rebels (Side: EAST)","34 -CFP Drew: Hamas Al Qassam Brigades (Side: EAST)","35 -CFP Drew: Hezbollah (Side: EAST)","36 -CFP Drew: Islamic Republic of Iran Army (Side: EAST)","37 -CFP Bohemia Interactive: Islamic State (Side: EAST)","38 -CFP Tupolov: Russian National Guard (Side: EAST)","39 -CFP Bohemia Interactive: Sudan Revolutionary Front (Side: EAST)","40 -CFP Drew: Somali Rebels (Side: EAST)","41 -CFP Bohemia Interactive: Sudan People's Liberation Movement In Opposition (Side: EAST)","42 -CFP Bohemia Interactive: Syrian Arab Army (Side: EAST)","43 -CFP Drew: Taliban Insurgents (Side: EAST)","44 -CUP Community Upgrade Project: Army of the Czech Rep. (Arid / Desert) (Side: WEST)","45 -CUP Bohemia Interactive: Bundeswehr (Arid / Desert) (Side: WEST)","46 -CUP Bohemia Interactive: US Army (Arid / Desert) (Side: WEST)","47 -CUP Bohemia Interactive: National Party of Chernarus (Side: GUER)","48 -CUP Bohemia Interactive: Royal Army Corps of Sahrani (Side: GUER)","49 -CUP Bohemia Interactive: Takistani Army (Side: EAST)","50 -CUP_Units Community Upgrade Project: British Army (Jungle / Woodland) (Side: WEST)","51 -CUP_Units Tupolov: US CIA (Middle East) (Side: WEST)","52 -CUP_Units Community Upgrade Project: British Army (Arid / Desert) (Side: WEST)","53 -CUP_Units Bohemia Interactive: Takistani Locals (Side: GUER)","54 -CUP_Units Community Upgrade Project: United Nations (Side: GUER)","55 -CUP_Units Community Upgrade Project: Chernarussian Movement of the Red Star (Side: EAST)","56 -CUP_Units Bohemia Interactive: Takistani Militia (Side: EAST)","57 -CUP_Vehicles Tupolov: US Army (Jungle / Woodland) (Side: WEST)","58 -CUP_Vehicles Tupolov: Russian Ground Forces (Arid / Desert) (Side: EAST)","59 -CUP_Vehicles Community Upgrade Project: Chernarus Defense Forces (Side: WEST)","60 -CUP_Vehicles Community Upgrade Project: Royal New Zealand Navy (Side: WEST)","61 -CUP_Vehicles Community Upgrade Project: US Marine Corps (Jungle / Woodland) (Side: WEST)","62 -CUP_Vehicles Community Upgrade Project: Russian Ground Forces (Jungle / Woodland) (Side: EAST)","63 -CUP_Vehicles Community Upgrade Project: Sahrani Liberation Army (Side: EAST)","64 -Expansion Bohemia Interactive: 2035 CTRG (Side: WEST)","65 -Expansion Bohemia Interactive: 2035 Gendarmerie (Side: WEST)","66 -Expansion Bohemia Interactive: 2035 NATO (Pacific) (Side: WEST)","67 -Expansion Community Upgrade Project: ION PMC (Side: GUER)","68 -Expansion Bohemia Interactive: 2035 Syndikat (Side: GUER)","69 -Expansion Bohemia Interactive: 2035 CSAT (Pacific) (Side: EAST)","70 -Jets Bravo Zero One Studios: 2035 NATO (Side: WEST)","71 -RHS_AFRF Red Hammer Studios: Eastern Militia (Side: GUER)","72 -RHS_AFRF Red Hammer Studios: Russia (MSV) (Side: EAST)","73 -RHS_AFRF Red Hammer Studios: Russia (RVA) (Side: EAST)","74 -RHS_AFRF Red Hammer Studios: Russia (TV) (Side: EAST)","75 -RHS_AFRF Bohemia Interactive: Russia (VDV) (Side: EAST)","76 -RHS_AFRF Red Hammer Studios: Russia (VMF) (Side: EAST)","77 -RHS_AFRF RHS: Russia (VPVO) (Side: EAST)","78 -RHS_AFRF Red Hammer Studios: Russia (VV) (Side: EAST)","79 -RHS_AFRF Bohemia Interactive: Russia (VVS - Grey) (Side: EAST)","80 -RHS_AFRF Red Hammer Studios: Russia (VVS - Camo) (Side: EAST)","81 -RHS_GREF Red Hammer Studios: Chernarus (Air Force) (Side: GUER)","82 -RHS_GREF Red Hammer Studios: Chernarus (Air Force) (Side: WEST)","83 -RHS_GREF RHS (A2 port): Chernarus (Ground Forces) (Side: GUER)","84 -RHS_GREF Red Hammer Studios: Chernarus (Ground Forces) (Side: WEST)","85 -RHS_GREF Red Hammer Studios: Chernarus (National Guard) (Side: GUER)","86 -RHS_GREF Red Hammer Studios: Chernarus (National Guard) (Side: WEST)","87 -RHS_GREF Red Hammer Studios: ChDKZ Insurgents (Side: EAST)","88 -RHS_GREF Red Hammer Studios: ChDKZ Insurgents (Side: GUER)","89 -RHS_GREF Red Hammer Studios: Chernarus (U.N. Peacekeepers) (Side: GUER)","90 -RHS_USAF Red Hammer Studios: USA (SOCOM) (Side: WEST)","91 -RHS_USAF Red Hammer Studios: USA (USAF) (Side: WEST)","92 -RHS_USAF Red Hammer Studios: USA (Army - D) (Side: WEST)","93 -RHS_USAF Red Hammer Studios: USA (Army - W) (Side: WEST)","94 -RHS_USAF Red Hammer Studios: USA (USMC - D) (Side: WEST)","95 -RHS_USAF Red Hammer Studios: USA (USMC - W) (Side: WEST)","96 -RHS_USAF Red Hammer Studios: USA (Navy) (Side: WEST)","97 -RHSGREF Red Hammer Studios: Horizon Islands Defence Force (Side: WEST)","98 -RHSGREF Red Hammer Studios: Nationalist Troops (Side: GUER)","99 -UK3CB www.3commandobrigade.com: BAF-3CB (Side: WEST)","100 -UK3CB www.3commandobrigade.com: BAF-3CB, AirForce MTP (Side: WEST)","101 -UK3CB www.3commandobrigade.com: BAF-3CB, Army DDPM (Side: WEST)","102 -UK3CB www.3commandobrigade.com: BAF-3CB, Army MTP (Side: WEST)","103 -UK3CB www.3commandobrigade.com: BAF-3CB, Army Temperate (Side: WEST)","104 -UK3CB www.3commandobrigade.com: BAF-3CB, Army Woodland (Side: WEST)","105 -UK3CB www.3commandobrigade.com: BAF-3CB, Navy Arctic (Side: WEST)","106 -UK3CB www.3commandobrigade.com: BAF-3CB, Navy DDPM (Side: WEST)","107 -UK3CB www.3commandobrigade.com: BAF-3CB, Navy MTP (Side: WEST)","108 -UK3CB www.3commandobrigade.com: BAF-3CB, Navy Temperate (Side: WEST)","109 -UK3CB www.3commandobrigade.com: BAF-3CB, Navy Woodland (Side: WEST)","110 -VSM VanSchmoozin: VSM - Gear Pack (Side: WEST)"};
        default = 34;
    };
    class btc_p_AA { // Anti-Air infantry:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_EAA"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_tank { // Enemy uses Tank:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETANK"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_civ { // Civil type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        texts[]={"0 - EricJ: Afghan Civilians (Side: CIV)","1 - Bohemia Interactive: Civils (Side: CIV)","2 -btc_militia_mod Giallustio: Afghan Civilians (Side: CIV)","3 -CAF CAF MOD TEAM: African (Side: CIV)","4 -CAF CAF MOD TEAM: Middle Eastern (Side: CIV)","5 -CUP_Units Community Upgrade Project: Civilians (Russian) (Side: CIV)","6 -CUP_Vehicles Community Upgrade Project: Civilians (Chernarus) (Side: CIV)","7 -CUP_Vehicles Bohemia Interactive: Civilians (Sahrani) (Side: CIV)","8 -CUP_Vehicles Community Upgrade Project: Civilians (Takistan) (Side: CIV)","9 -LIB IFA3 Team: 40s Civilians (Side: CIV)","10 -LOP_LeightsOPFOR Project OPFOR: Civilians (African) (Side: CIV)","11 -LOP_LeightsOPFOR Project OPFOR: Civilians (Eastern European) (Side: CIV)","12 -LOP_LeightsOPFOR Project OPFOR: Civilians (Middle Eastern) (Side: CIV)","13 -OPTRE Article 2 Studios: Civilians (UEG) (Side: CIV)","14 -ORANGE Bohemia Interactive: IDAP (Side: CIV)","15 -RDS_CIV_PACK reyhard: Russians (Side: CIV)","16 -UNSUNG Bohemia Interactive: Vietnamese (UNSUNG) (Side: CIV)"};
        default = 1;
    };
    class btc_p_civ_veh { // Civil vehicle type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPEVEH"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        texts[]={"0 - EricJ: Afghan Civilians (Side: CIV)","1 - Bohemia Interactive: Civils (Side: CIV)","2 -btc_militia_mod Giallustio: Afghan Civilians (Side: CIV)","3 -CAF CAF MOD TEAM: African (Side: CIV)","4 -CAF CAF MOD TEAM: Middle Eastern (Side: CIV)","5 -CUP_Units Community Upgrade Project: Civilians (Russian) (Side: CIV)","6 -CUP_Vehicles Community Upgrade Project: Civilians (Chernarus) (Side: CIV)","7 -CUP_Vehicles Bohemia Interactive: Civilians (Sahrani) (Side: CIV)","8 -CUP_Vehicles Community Upgrade Project: Civilians (Takistan) (Side: CIV)","9 -LIB IFA3 Team: 40s Civilians (Side: CIV)","10 -LOP_LeightsOPFOR Project OPFOR: Civilians (African) (Side: CIV)","11 -LOP_LeightsOPFOR Project OPFOR: Civilians (Eastern European) (Side: CIV)","12 -LOP_LeightsOPFOR Project OPFOR: Civilians (Middle Eastern) (Side: CIV)","13 -OPTRE Article 2 Studios: Civilians (UEG) (Side: CIV)","14 -ORANGE Bohemia Interactive: IDAP (Side: CIV)","15 -RDS_CIV_PACK reyhard: Russians (Side: CIV)","16 -UNSUNG Bohemia Interactive: Vietnamese (UNSUNG) (Side: CIV)"};
        default = 1;
    };
    class btc_p_IED_title { // << IED options >>
        title = $STR_BTC_HAM_PARAM_IED_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_ied { // IEDs ratio:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_RATIO"]);
        values[]={0, 1, 2, 3};
        texts[]={$STR_DISABLED,$STR_BTC_HAM_PARAM_IED_RATIO_LOW,$STR_BTC_HAM_PARAM_IED_RATIO_NORMAL,$STR_BTC_HAM_PARAM_IED_RATIO_HIGH}; //texts[]={"Off","Low","Normal","High"};
        default = 1;
    };
    class btc_p_ied_spot { // IEDs spotting difficulty:
        title = __EVAL(format ["      %1",(localize "STR_BTC_HAM_PARAM_IED_SPOT")]);
        values[]={0, 1, 2};
        texts[]={$STR_BTC_HAM_PARAM_IED_SPOT_VERYEASY,$STR_BTC_HAM_PARAM_IED_SPOT_EASY,$STR_BTC_HAM_PARAM_IED_RATIO_NORMAL}; //texts[]={"Very easy","Easy","Normal"};
        default = 2;
    };
    class btc_p_ied_drone { // Drone bomber:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_DRONE"]);
        values[]={0, 1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_hideout_cache_title { // << Hideout/Cache options >>
        title = $STR_BTC_HAM_PARAM_HIDE_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_hideout_n { // Hideout numbers:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_HIDE_NUMBERS"]);
        values[]={99,1,2,3,4,5};
        texts[]={$STR_BTC_HAM_PARAM_HIDE_NUMBERS_RND,"1","2","3","4","5"}; //texts[]={"Random","1","2","3","4","5"};
        default = 5;
    };
    class btc_p_cache_info_def { // Info cache distance:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DISTANCE"]);
        values[]={500,1000,1500,2000,2500,3000,3500,4000,5000};
        texts[]={"500 m","1000 m","1500 m","2000 m","2500 m","3000 m","3500 m","4000 m","5000 m"};
        default = 1500;
    };
    class btc_p_cache_info_ratio { //Cache info ratio:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_RATIO"]);
        values[]={50,100};
        texts[]={"50 m","100 m"};
        default = 50;
    };
    class btc_p_info_chance { // Intel from dead bodies chance:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DEADINFO"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"100 %","90 %","80 %","70 %","60 %","50 %","40 %","30 %","20 %","10 %","0 %"};
        default = 40;
    };
    class btc_p_medical_title { // << Medical options >>
        title = $STR_BTC_HAM_MEDI_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_redeploy { // Allow re-deploy?
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_MEDI_REDEPLOY"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_skill_title { // << A3 Skill options >>
        title = $STR_BTC_HAM_PARAM_SKILL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_set_skill { // Set skill?
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_ONOFF"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_set_skill_general {  // Set skill, general
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_GEN"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 0;
    };
    class btc_p_set_skill_aimingAccuracy { // Set skill, aimingAccuracy
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_AIMACC"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 1;
    };
    class btc_p_set_skill_aimingShake {  // Set skill, aimingShake
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_AIMSKILL"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 4;
    };
    class btc_p_set_skill_aimingSpeed { // Set skill, aimingSpeed
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_AIMSPEED"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 3;
    };
    class btc_p_set_skill_endurance { // Set skill, endurance
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_ENDURANCE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 5;
    };
    class btc_p_set_skill_spotDistance { // Set skill, spotDistance
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_SPOTDIST"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 9;
    };
    class btc_p_set_skill_spotTime { // Set skill, spotTime
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_SPOTTIME"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 7;
    };
    class btc_p_set_skill_courage { // Set skill, courage
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_COURAGE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 2;
    };
    class btc_p_set_skill_reloadSpeed { // Set skill, reloadSpeed
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_RELOAD"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_commanding { // Set skill, commanding
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SKILL_COMMANDING"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 7;
    };
    class btc_p_gameplay_title { // << Gameplay options >>
        title = $STR_BTC_HAM_PARAM_GAMEPLAY_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_sea { // Extend battlefield to sea:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SEA"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_veh_armed_ho { // Add armed vehicles in Hideout:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_ARMEDHIDEOUT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_veh_armed_spawn_more { // Add armed vehicles in Side mission/Cache:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_ARMEDOTHER"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_side_mission_cycle {  // Side mission cycle:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SIDEM"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_main_title { // << Other options >>
        title = $STR_BTC_HAM_PARAM_OTHER_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_arsenalType { // Type of the arsenal:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_ARSENALTYPE"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_BTC_HAM_PARAM_OTHER_ARSENALTYPE_BIS,$STR_BTC_HAM_PARAM_OTHER_ARSENALTYPE_BA,$STR_BTC_HAM_PARAM_OTHER_ARSENALTYPE_BA_PLUS,$STR_BTC_HAM_PARAM_OTHER_ARSENALTYPE_ACE,$STR_BTC_HAM_PARAM_OTHER_ARSENALTYPE_ACE_PLUS}; //texts[]={"BIS - Vanilla","BIS - Vanilla and ACE 3","BIS - Vanilla and ACE 3 (scroll wheel action)","ACE 3","ACE 3 (scroll wheel action)"};
        default = 2;
    };
    class btc_p_rep { // Reputation at start:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_REPSTART"]);
        values[]={0, 200, 500, 750};
        texts[]={$STR_BTC_HAM_PARAM_OTHER_REPSTART_VLOW,$STR_BTC_HAM_PARAM_IED_RATIO_LOW,$STR_BTC_HAM_PARAM_IED_RATIO_NORMAL,$STR_BTC_HAM_PARAM_IED_RATIO_HIGH}; //texts[]={"Very Low","Low","Normal","High"};
        default = 200;
    };
    class btc_p_garage { // Activate garage for admin:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_GARAGEADMIN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_city_radius { // Spawn city radius offset:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_SPAWNRAD"]);
        values[]={0,1,2,3,4,5,6,7,11};
        texts[]={"0 m","100 m","200 m",$STR_BTC_HAM_PARAM_OTHER_SPAWNRAD_DEF,"400 m","500 m (Takistan)","600 m","700 m","1100 m"}; // texts[]={"0 m","100 m","200 m","300 m","400 m","500 m (Takistan)","600 m","700 m","800 m"};
        default = 7;
    };
    class btc_p_trigger { // Disable city activation when a plane or helicopter (>190Km/h) is flying above:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DISABLESPAWN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_debug { // Debug:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DEBUG"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_ENABLED, $STR_BTC_HAM_PARAM_OTHER_DEBUG_LOGONLY}; // texts[]={"Off","On","Log only"};
        default = 0;
    };
};
