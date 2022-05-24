class CfgPatches
{
	class 89th_Section_Flags
	{
		author="89th JTF Mod Team"
		units[]=
		{
			"89th_Flag_89thJTF",
			"89th_Flag_Goliath",
			"89th_Flag_Legion",
			"89th_Flag_Platoon1",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_structures_f",
			"A3_structures_f_mil",
			"OPTRE_Core",
			"89th_Core",
			
		};
	};
};
class CfgVehicles
{
	//Dependency Classes
	class OPTRE_CTF_Flag_Base;
	class Flag_White_F;
	//CTF Flags
	class 89th_Flag_89thJTF: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] JTF Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_Objects\data\flags\89th_flag_JTF.paa"
		};
		editorCategory="89th_EdCat_Objects";
		editorSubcategory="89th_EdSubCat_Objects_Flags"
	};
	class 89th_Flag_Goliath: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] Goliath Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_Objects\data\flags\89th_flag_Goliath.paa"
		};
		editorCategory="89th_EdCat_Objects";
		editorSubcategory="89th_EdSubCat_Objects_Flags";
	};
	class 89th_Flag_Legion: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] Legion Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_Objects\data\flags\89th_flag_Legion.paa"
		};
		editorCategory="89th_EdCat_Objects";
		editorSubcategory="89th_EdSubCat_Objects_Flags";
	};
	class 89th_Flag_Platoon1: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 1st Platoon Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_Objects\data\flags\Anvil\89th_flag_Platoon1.paa"
		};
		editorCategory="89th_EdCat_Objects";
		editorSubcategory="89th_EdSubCat_Objects_Flags";
	};
	//Flagpole Flags
	class 89th_Flagpole_JTF: Flag_White_F
	{
		dlc="89thJTF";
		author="SOUP";
		scope=2;
		scopeCurator=0;
		displayName="[89th]  JTF Flagpole";
		editorCategory="89th_EdCat_Objects";
		editorSubcategory="89th_EdSubCat_Objects_Flags";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\89th_Objects\data\Flags\89th_flagpole_JTF.paa""";
		};
	};
};
