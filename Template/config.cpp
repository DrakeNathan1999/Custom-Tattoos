class CfgPatches
{
	class Changeme
	{
		units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Tattoos"
		};
	};
};
class CfgMods
{
	class changeme
	{
		dir = "Template";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Template";
		credits = "CysgodHir";
		author = "CysgodHir";
		authorID = "0";
		version = "1.0";
		extra = 0;
		inputs = "";
		type = "mod";
	};	
};
class CfgVehicles
{
	class Tattoo_Body_Base;
	class ChangeMe: Tattoo_Body_Base
	{
		scope=2;
		displayName="Changeme";
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"tattoos\Template\Data\mytexture_CO.paa",
			"tattoos\Template\Data\mytexture_CO.paa",
			"tattoos\Template\Data\mytexture_CO.paa"
		};
	};
};