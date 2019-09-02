class cfgWeapons
{
	//Uniforms
	class UniformItem;
	class U_B_CTRG_Soldier_F;
	class U_B_CTRG_GER_S_Arid: U_B_CTRG_Soldier_F 
	{
		author = "The M/IndeedPete";
        scope = 2;
        displayName = "CTRG Stealth Uniform GER (arid)";
		picture = "\GER_Gear_2035\ui\icons\icon_u_ia_soldier_01_clothing_CTRG_GER_arid_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\clothing1_CTRG_GER_arid_co.paa"};
 
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_CTRG_GER_S_Arid_Unarmed";
            containerClass = Supply40;
            mass = 40;
        };
	};
	class U_B_CTRG_GER_S_Tropic: U_B_CTRG_Soldier_F 
	{
		author = "The M/IndeedPete";
        scope = 2;
        displayName = "CTRG Stealth Uniform GER (tropic)";
		picture = "\GER_Gear_2035\ui\icons\icon_u_ia_soldier_01_clothing_CTRG_GER_tropic_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\clothing1_CTRG_GER_tropic_co.paa"};
		

 
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_CTRG_GER_S_Tropic_Unarmed";
            containerClass = Supply40;
            mass = 40;
        };
	};

	
	
	//Vests----------------------------------------
	class V_PlateCarrierH_CTRG;
	class V_PlateCarrierL_CTRG;
	class V_Chestrig_rgr;
	class V_HarnessO_gry;
	class V_HarnessOGL_gry;
	class Vest_Camo_Base;
	class VestItem;
	
	
    class U_B_GER_Tropic_Vest_2: V_PlateCarrierH_CTRG
    {

        scope = 2;
		displayName = "CTRG Plate Carrier Rig Mk2 GER (tropic)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_v_plate_carrier_2_CTRG_GER_tropic_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\vests_CTRG_GER_tropic_co.paa"};

        class ItemInfo: VestItem {



            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01";

            containerClass = "Supply140";

            mass = 80;

            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 35;
                    PassThrough = 0.2;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 35;
                    PassThrough = 0.2;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 35;
                    passThrough = 0.2;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };

    };	
    class U_B_GER_Tropic_Vest_1: V_PlateCarrierL_CTRG
    {

        scope = 2;
		displayName = "CTRG Plate Carrier Rig Mk1 GER (tropic)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_v_plate_carrier_1_CTRG_GER_tropic_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\vests_CTRG_GER_tropic_co.paa"};

        class ItemInfo: VestItem {



            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02";

            containerClass = "Supply140";

            mass = 80;

            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 35;
                    PassThrough = 0.2;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 35;
                    PassThrough = 0.2;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 35;
                    passThrough = 0.2;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };

    };
    class U_B_GER_Arid_Vest_2: V_PlateCarrierH_CTRG
    {

        scope = 2;
		displayName = "CTRG Plate Carrier Rig Mk2 GER (arid)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_v_plate_carrier_2_CTRG_GER_arid_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\vests_CTRG_GER_arid_co.paa"};

        class ItemInfo: VestItem {



            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01";

            containerClass = "Supply140";

            mass = 80;

            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 35;
                    PassThrough = 0.2;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 35;
                    PassThrough = 0.2;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 35;
                    passThrough = 0.2;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };

    };	
    class U_B_GER_Arid_Vest_1: V_PlateCarrierL_CTRG
    {

        scope = 2;
		displayName = "CTRG Plate Carrier Rig Mk1 GER (arid)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_v_plate_carrier_1_CTRG_GER_arid_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\vests_CTRG_GER_arid_co.paa"};

        class ItemInfo: VestItem {



            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02";

            containerClass = "Supply140";

            mass = 80;

            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 35;
                    PassThrough = 0.2;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 35;
                    PassThrough = 0.2;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 35;
                    passThrough = 0.2;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };

    };	
    class U_B_GER_Tropic_chestrig: V_Chestrig_rgr
    {

        scope = 2;
		displayName = "Chestrig CTRG GER (tropic)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_V_F_Chestrig_CTRG_GER_tropic_CA.paa";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\equip_chestrig_CTRG_GER_tropic_co.paa","\GER_Gear_2035\data\armor1_CTRG_GER_tropic_co.paa"};

    };	
    class U_B_GER_Arid_chestrig: V_Chestrig_rgr
    {

        scope = 2;
		displayName = "Chestrig CTRG GER (arid)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_V_F_Chestrig_CTRG_GER_arid_CA.paa";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\equip_chestrig_CTRG_GER_arid_co.paa","\GER_Gear_2035\data\armor1_CTRG_GER_tropic_co.paa"};

    };	
	class U_B_GER_Arid_Harness: V_HarnessO_gry
    {

        scope = 2;
		displayName = "LBV Harness CTRG GER (arid)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_V_HarnessO_CTRG_GER_arid_CA.paa";
        hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\clothing_CTRG_GER_arid_co.paa","\GER_Gear_2035\data\tech_CTRG_GER_arid_co.paa"};

    };	
	class U_B_GER_Tropic_Harness: V_HarnessO_gry
    {

        scope = 2;
		displayName = "LBV Harness CTRG GER (tropic)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_V_HarnessO_CTRG_GER_tropic_CA.paa";
        hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\clothing_CTRG_GER_tropic_co.paa","\GER_Gear_2035\data\tech_CTRG_GER_tropic_co.paa"};

    };	
	class U_B_GER_Arid_Harness_GL: V_HarnessOGL_gry
    {

        scope = 2;
		displayName = "LBV Harness GL CTRG GER (arid)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_V_HarnessO_CTRG_GER_arid_CA.paa";
        hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\clothing_CTRG_GER_arid_co.paa","\GER_Gear_2035\data\tech_CTRG_GER_arid_co.paa"};

    };	
	class U_B_GER_Tropic_Harness_GL: V_HarnessOGL_gry
    {

        scope = 2;
		displayName = "LBV Harness GL CTRG GER (tropic)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_V_HarnessO_CTRG_GER_tropic_CA.paa";
        hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\clothing_CTRG_GER_tropic_co.paa","\GER_Gear_2035\data\tech_CTRG_GER_tropic_co.paa"};

    };
	
	//Vests----------------------------------------
	class H_HelmetB;
	class H_HelmetB_light;
	class H_HelmetSpecB;
	
	class U_B_GER_Tropic_H_HelmetB: H_HelmetB
    {

        scope = 2;
		displayName = "Combat Helmet CTRG (tropic)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_h_helmet_plain_CTRG_GER_tropic_ca.paa";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\equip1_CTRG_GER_tropic_co.paa"};

    };
	class U_B_GER_Arid_H_HelmetB: H_HelmetB
    {

        scope = 2;
		displayName = "Combat Helmet CTRG (arid)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_h_helmet_plain_CTRG_GER_arid_ca.paa";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\equip1_CTRG_GER_arid_co.paa"};

    };
	class U_B_GER_Tropic_H_HelmetB_light: H_HelmetB_light
    {

        scope = 2;
		displayName = "Light Combat Helmet CTRG (tropic)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_h_helmetspecb_CTRG_GER_tropic_ca.paa";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\equip1_CTRG_GER_tropic_co.paa"};

    };
	class U_B_GER_Arid_H_HelmetB_light: H_HelmetB_light
    {

        scope = 2;
		displayName = "Light Combat Helmet CTRG (arid)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_h_helmetspecb_CTRG_GER_arid_ca.paa";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\equip1_CTRG_GER_arid_co.paa"};

    };
	class U_B_GER_Tropic_H_HelmetSpecB: H_HelmetSpecB
    {

        scope = 2;
		displayName = "Enhanced Combat Helmet CTRG (tropic)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_h_helmetspecb_CTRG_GER_tropic_ca.paa";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\equip1_CTRG_GER_tropic_co.paa"};

    };
	class U_B_GER_Arid_H_HelmetSpecB: H_HelmetSpecB
    {

        scope = 2;
		displayName = "Enhanced Combat Helmet CTRG (arid)";
        author = "The M/IndeedPeten";
        picture = "\GER_Gear_2035\ui\icons\icon_h_helmetspecb_CTRG_GER_arid_ca.paa";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\equip1_CTRG_GER_arid_co.paa"};

    };

	//Samples
	class itemCore;
	class InventoryItem_Base_F;
	
	class CBRN_Sample_itemBase: itemCore {
		type = 4096;//4;
		detectRange = -1;
		simulation = "ItemMineDetector";
		author = "The M";
		scope = 1;
		icon = "iconObject_circle";
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Injector_F";
		mapSize = 0.034;
		class ItemInfo: InventoryItem_Base_F {
			mass = 1;
		};
		
	};
	
	
    class CBRN_Sample_1: CBRN_Sample_itemBase {
        author = "The_M";
        scope = 2;
		ace_arsenal_hide = 1
        scopeCurator = 2;
        displayName = "Sample 1"		
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg";
		picture = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg"; 
    };
	
	class CBRN_Sample_2: CBRN_Sample_itemBase {
        author = "The_M";
        scope = 2;
		ace_arsenal_hide = 1
        scopeCurator = 2;
        displayName = "Sample 2"
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Injector_F";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg";
		picture = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg"; 
    };
	
	class CBRN_Sample_3: CBRN_Sample_itemBase {
        author = "The_M";
        scope = 2;
		ace_arsenal_hide = 1
        scopeCurator = 2;
        displayName = "Sample 3"
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Injector_F";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg";
		picture = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg"; 
    };
	
	class CBRN_Sample_4: CBRN_Sample_itemBase {
        author = "The_M";
        scope = 2;
		ace_arsenal_hide = 1
        scopeCurator = 2;
        displayName = "Sample 4"
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Injector_F";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg";
		picture = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg"; 
    };
	
	//Weapons----------------------------------------
	class MMG_01_base_F;
	
	class U_B_GER_MMG_01: MMG_01_base_F
    {
	BaseWeapon = U_B_GER_MMG_01;
	ACE_RailHeightAboveBore = 4.73961;
	ACE_IronSightBaseAngle = -0.0101613;
	initSpeed = -0.985613;
	ACE_barrelTwist = 359.918;
	ACE_barrelLength = 549.91;
	modes[] = {"manual", "burst"};
	class manual {
		class BaseSoundModeType {
			closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_01", 0.630957, 1, 10};
			closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_02", 0.630957, 1, 10};
			closure3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_03", 0.630957, 1, 10};
			soundClosure[] = {"closure1", 0.33, "closure2", 0.33, "closure3", 0.34};
		};
		class StandardSound: BaseSoundModeType {
			soundSetShot[] = {"MMG01_Shot_SoundSet", "MMG01_Tail_SoundSet", "MMG01_InteriorTail_SoundSet"};
			begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_01", 1.58489, 1, 1200};
			begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_02", 1.58489, 1, 1200};
			begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_03", 1.58489, 1, 1200};
			soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
			class SoundTails {
				class TailInterior {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_interior", 1.41254, 1, 1200};
					frequency = 1;
					volume = "interior";
				};
				class TailForest {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_forest", 1, 1, 1200};
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailHouses {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_houses", 1, 1, 1200};
					frequency = 1;
					volume = "(1-interior/1.4)*houses";
				};
				class TailMeadows {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_meadows", 1, 1, 1200};
					frequency = 1;
					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailTrees {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_trees", 1, 1, 1200};
					frequency = 1;
					volume = "(1-interior/1.4)*trees";
				};
			};
			// BaseSoundModeType
			closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_01", 0.630957, 1, 10};
			closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_02", 0.630957, 1, 10};
			closure3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_03", 0.630957, 1, 10};
			soundClosure[] = {"closure1", 0.33, "closure2", 0.33, "closure3", 0.34};
		};
		class SilencedSound: BaseSoundModeType {
			SoundSetShot[] = {"MMG01_silencerShot_SoundSet", "MMG01_silencerTail_SoundSet", "MMG01_silencerInteriorTail_SoundSet"};
			begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01", 1.58489, 1, 400};
			begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02", 1.58489, 1, 400};
			begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03", 1.58489, 1, 400};
			soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
			class SoundTails {
				class TailInterior {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior", 1.41254, 1, 400};
					frequency = 1;
					volume = "interior";
				};
				class TailForest {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest", 1, 1, 400};
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailHouses {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses", 1, 1, 400};
					frequency = 1;
					volume = "(1-interior/1.4)*houses";
				};
				class TailMeadows {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows", 1, 1, 400};
					frequency = 1;
					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailTrees {
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees", 1, 1, 400};
					frequency = 1;
					volume = "(1-interior/1.4)*trees";
				};
			};
			// BaseSoundModeType
			closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_01", 0.630957, 1, 10};
			closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_02", 0.630957, 1, 10};
			closure3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_03", 0.630957, 1, 10};
			soundClosure[] = {"closure1", 0.33, "closure2", 0.33, "closure3", 0.34};
		};
		sounds[] = {"StandardSound", "SilencedSound"};
		reloadTime = 0.075;
		dispersion = 0.0008;
		soundContinuous = 0;
		soundBurst = 0;
		// Mode_FullAuto
		sound[] = {"", 10, 1};
		soundEnd[] = {"sound", 1};
		autoFire = 1;
		minRange = 1;
		minRangeProbab = 0.2;
		midRange = 30;
		midRangeProbab = 0.58;
		maxRange = 80;
		maxRangeProbab = 0.04;
		displayName = "Full";
		textureType = "fullAuto";
		recoil = "recoil_auto_mx"; 
		recoilProne = "recoil_auto_prone_mx";
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		// Mode_SemiAuto
		multiplier = 1;
		burst = 1;
		burstRangeMax = -1;
		soundBegin[] = {"sound", 1};
		soundBeginWater[] = {"sound", 1};
		soundClosure[] = {"sound", 1};
		soundLoop[] = {};
		weaponSoundEffect = "";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		artilleryDispersion = 1;
		artilleryCharge = 1;
		canShootInWater = 0;
		requiredOpticType = -1;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
	};
    scope = 2;
	ace_arsenal_hide = 2
	ace_overheating_mrbs = 4500;
	ace_overheating_slowdownFactor = 1;
	ace_overheating_dispersion = 1;
    scopeCurator = 2;
	ace_overheating_allowSwapBarrel = 1;
	descriptionShort = "Medium Machine Gun<br />Caliber: 7.62x51 mm";
	displayName = "HK121 MG 5";
	dispersion = 0.00029;
    author = "The M";
    recoil = "recoil_mk20";
	recoilProne = "recoil_saw";
	magazines[] = {"150Rnd_762x51_Box_Tracer"};
	magazineWell[] = {"CBA_762x51_LINKS"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_sand_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_sand_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_sand_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_sand.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_sand.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_sand.rvmat"};
	};
};