class cfgVehicles
{
	// Samples
    class Item_Base_F;
    class CBRN_Item_Sample_1: Item_Base_F {
        author = "The_M";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sample 1";
        vehicleClass = "Items";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg";
        class TransportItems { 
				class CBRN_Sample_1 {
			    name = CBRN_Sample_1;
                count = 1;  }         
        };
    };
	class CBRN_Item_Sample_2: Item_Base_F {
        author = "The_M";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sample 2";
        vehicleClass = "Items";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg";
        class TransportItems { 
				class CBRN_Sample_2 {
			    name = CBRN_Sample_2;
                count = 1;  }         
        };
    };
	class CBRN_Item_Sample_3: Item_Base_F {
        author = "The_M";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sample 3";
        vehicleClass = "Items";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg";
        class TransportItems { 
				class CBRN_Sample_3 {
			    name = CBRN_Sample_3;
                count = 1;  }         
        };
    };
	class CTRG_GER_Sample_4: Item_Base_F {
        author = "The_M";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sample 4";
        vehicleClass = "Items";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\MedicalGarbage_01_Injector_F.jpg";
        class TransportItems { 
				class CBRN_Sample_4 {
			    name = CBRN_Sample_4;
                count = 1;  }         
        };
    };
	
	// Units
	class B_CTRG_Soldier_base_F;
	class B_CTRG_GER_S_Arid_Unarmed: B_CTRG_Soldier_base_F
	{
	scope = 1;
	displayName = "00 Uniform Test Soldier";
	uniformClass = "U_B_CTRG_GER_S_Arid";
	editorSubcategory = "GER";
	author = "The_M";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\clothing1_CTRG_GER_arid_co.paa"};
	
	modelSides[] = {0, 1, 2, 3};
	
	model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
	

	
	};

	class B_CTRG_GER_S_Tropic_Unarmed: B_CTRG_Soldier_base_F
	{
	scope = 1;
	editorSubcategory = "GER";
	
	//editorPreview = "\bonusUnits_CSF\editorPreviews\O_CSF_Unarmed.jpg";
	author = "The_M";
	
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\GER_Gear_2035\data\clothing1_CTRG_GER_tropic_co.paa"};
	
	modelSides[] = {0, 1, 2, 3};
	
	model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
	
	uniformClass = "U_B_CTRG_GER_S_Tropic";

	};
};

class CfgEditorSubcategories
{
	class GER
	{
		displayName = "Men (GER)";
	};
};