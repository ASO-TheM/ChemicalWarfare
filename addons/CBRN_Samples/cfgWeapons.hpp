class cfgWeapons
{
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
};