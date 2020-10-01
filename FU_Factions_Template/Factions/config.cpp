class CfgPatches
{
    class PAF_faction_units_temp //unique name given for Arma to find the config, must be unique same names will over write other mods.
    {
           name = "Polish Armed Forces"; //name shown in config only
           Author = "Pug, forked from FU-Factions-Template by Bolty";                                                                     //name shown in config only
           units[] = {"PAF_Leader_m_temp","PAF_RiflemanLAT_m_temp","PAF_Medic_m_temp","PAF_Crew_m_temp"};   //Needed for use with Zeus, must be same as below when _temp is changed
           weapons[] = {};
   };
};
class CfgEditorSubcategories
{
	class PAF_Factions_category_temp //unique name needed to not override other names
	{
		displayName = "Men (Army)"; // Name used to define category of your soldiers Men (Combat Patrol) etc
	};

    class PAF_Factions_SF_category
    {
        displayName = "Men (Recon)";
    }
    
};
class Cfgvehicles 
{
#define mags_7(a) a, a, a, a, a, a, a
#define mags_4(a) a, a, a, a
#define mags_3(a) a, a, a
#define mags_2(a) a, a
#define ammo_rifle_b "30Rnd_65x39_caseless_mag" //Ammo name, used to avoid copy pasting ammo for every soldier
#define ammo_pistol_b "16Rnd_9x21_Mag"



class PAF_base_m_B_temp; //_temp unique name from base templates config, copies item loadout faction and voice and faces Currently Blufor


class FU_literadio_bdu; //defines backpacks you wish to use for your units see bottom
class FU_kitbag_black;


//soldier loadouts below



class PAF_Leader_m_temp : PAF_base_m_B_temp                                 //first name Your new unit, second name unit it's copying from. 
      {
      editorSubcategory = "PAF_Factions_category_temp";                  //Displays in editor as Men (Temporary example army)
      icon = "iconManLeader";                                          //Display of unit icon in game for squads. Deleted for Default Rifleman
      scope = 2;                                                      //Allowed to be Displayed in editor
      DisplayName = "Squad Leader";
      linkedItems[] = {"V_PlateCarrier2_wdl","H_HelmetSpecB_wdl","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};    // vest, helmet, radio etc
      weapons[] = {"arifle_MX_GL_Hamr_pointer_F","FU_pistol_b","Throw","Put","Rangefinder"};                                   //Rifle, Pistol, Rocketlauncher, Throw and put explosives and granades. Binos
      magazines[] = {mags_2(ammo_pistol_b),mags_7(ammo_rifle_b),mags_2(HandGrenade),mags_2(SmokeShell)};       //magazines grenades using defined list above.
      backpack = "PAF_Leader_m_pack_temp"                                                                      //backpacks defined at bottom

      };

class PAF_RiflemanLAT_m_temp : PAF_base_m_B_temp
      {
      editorSubcategory = "PAF_Factions_category_temp";
      icon = "iconManAT";
      scope = 2;
      DisplayName = "Rifleman (LAT)";
      linkedItems[] = {"V_PlateCarrier2_wdl","H_HelmetSpecB_wdl","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      weapons[] = {"arifle_MX_GL_Hamr_pointer_F","FU_pistol_b","launch_MRAWS_green_rail_F","Throw","Put","Binocular"};            //this guy has a rocketlauncher
      magazines[] = {mags_2(ammo_pistol_b),mags_7(ammo_rifle_b),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "PAF_LAT_m_pack_temp"

      };


class PAF_Medic_m_temp : PAF_base_m_B_temp
      {
      editorSubcategory = "PAF_Factions_category_temp";
      attendant = 1;                                                   //defines this unit as a medic
      icon = "iconManMedic";
      scope = 2;
      DisplayName = "Support Medic";
      linkedItems[] = {"V_PlateCarrier2_wdl","H_HelmetSpecB_wdl","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      weapons[] = {"arifle_MX_GL_Hamr_pointer_F","FU_pistol_b","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pistol_b),mags_7(ammo_rifle_b),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "PAF_Medic_m_pack_temp"

      };


class PAF_Crew_m_temp : PAF_base_m_B_temp
      {
      editorSubcategory = "PAF_Factions_category_temp";
      engineer = 1;                                                      //defines this unit as a engineer
      uavHacker = 1;                                                     //allows this unit to hack UAV's
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Support Engineer";
      weapons[] = {"arifle_MX_GL_Hamr_pointer_F","FU_pistol_b","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pistol_b),mags_7(ammo_rifle_b),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "PAF_Crew_m_pack_temp"
      };

class PAF_Leader_SF_m : PAF_base_m_B_temp                                 //first name Your new unit, second name unit it's copying from. 
      {
      editorSubcategory = "PAF_Factions_SF_category";                  //Displays in editor as Men (Temporary example army)
      icon = "iconManLeader";                                          //Display of unit icon in game for squads. Deleted for Default Rifleman
      scope = 2;                                                      //Allowed to be Displayed in editor
      DisplayName = "Recon Squad Leader";
      linkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB_light_wdl","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};    // vest, helmet, radio etc
      weapons[] = {"arifle_MX_Hamr_pointer_F","FU_pistol_b","Throw","Put","Rangefinder"};                                   //Rifle, Pistol, Rocketlauncher, Throw and put explosives and granades. Binos
      magazines[] = {mags_2(ammo_pistol_b),mags_7(ammo_rifle_b),mags_2(HandGrenade),mags_2(SmokeShell)};       //magazines grenades using defined list above.
      backpack = "PAF_Leader_m_pack_temp"                                                                      //backpacks defined at bottom

      };

class PAF_Rifleman_SF_m : PAF_base_m_B_temp                                 //first name Your new unit, second name unit it's copying from. 
      {
      editorSubcategory = "PAF_Factions_SF_category";                  //Displays in editor as Men (Temporary example army)
      icon = "iconManLeader";                                          //Display of unit icon in game for squads. Deleted for Default Rifleman
      scope = 2;                                                      //Allowed to be Displayed in editor
      DisplayName = "Recon Rifleman";
      linkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB_light_wdl","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};    // vest, helmet, radio etc
      weapons[] = {"arifle_MX_Hamr_pointer_F","FU_pistol_b","Throw","Put","Rangefinder"};                                   //Rifle, Pistol, Rocketlauncher, Throw and put explosives and granades. Binos
      magazines[] = {mags_2(ammo_pistol_b),mags_7(ammo_rifle_b),mags_2(HandGrenade),mags_2(SmokeShell)};       //magazines grenades using defined list above.                                                                    

      };

class PAF_Medic_SF_m : PAF_base_m_B_temp                                 //first name Your new unit, second name unit it's copying from. 
      {
      editorSubcategory = "PAF_Factions_SF_category";                  //Displays in editor as Men (Temporary example army)
      icon = "iconManLeader";                                          //Display of unit icon in game for squads. Deleted for Default Rifleman
      scope = 2;                                                      //Allowed to be Displayed in editor
      DisplayName = "Recon Medic";
      linkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB_light_wdl","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};    // vest, helmet, radio etc
      weapons[] = {"arifle_MX_Hamr_pointer_F","FU_pistol_b","Throw","Put","Rangefinder"};                                   //Rifle, Pistol, Rocketlauncher, Throw and put explosives and granades. Binos
      magazines[] = {mags_2(ammo_pistol_b),mags_7(ammo_rifle_b),mags_2(HandGrenade),mags_2(SmokeShell)};       //magazines grenades using defined list above.
      backpack = "PAF_Medic_m_pack_temp"                                                                      //backpacks defined at bottom

      };



//backpacks below






class PAF_Medic_m_pack_temp : FU_kitbag_black  //similar to units above, first name your unique name, second copied item name
      {
        displayName = "Medkit";                    
	scope = 1;                                 //not shown in Arsenal
	class TransportItems {
class _fu_Eband {name = "ACE_elasticBandage";count = 50;};
class _fu_epi {name = "ACE_epinephrine";count = 14;};
class _fu_morph {name = "ACE_morphine";count = 5;};
class _fu_torq {name = "ACE_tourniquet";count = 6;};
class _fu_blood {name = "ACE_BloodIV";count = 2;};
class _fu_blood5 {name = "ACE_BloodIV_500";count = 6;};
class _fu_blood2 {name = "ACE_BloodIV_250";count = 2;};
class _fu_splint {name = "ACE_splint";count = 15;};          //Items added to backpack, Items class must be unique for adding new items, cannot exceed backpack storage
	                     };
      };

class PAF_Crew_m_pack_temp : FU_literadio_bdu                //these allow you for your soldiers to have items added to their backpacks
{
        displayName = "Crew Radio Bag";
	scope = 1;
	class TransportItems {
class _fu_tool {name = "ToolKit"; count = 1;};
	                     };
};

class PAF_Leader_m_pack_temp : FU_literadio_bdu
{
        displayName = "Radio Bag";
	scope = 1;
	class TransportItems {
class _fu_flare {name = "ACE_HandFlare_White";count = 6;};
class _fu_smoke {name = "SmokeShell";count = 4;};
class _fu_csmoke {name = "SmokeShellPurple";count = 2;};
	                     };
};

class PAF_LAT_m_pack_temp : FU_kitbag_black 
{
        displayName = "KitBag";
	scope = 1;
	class TransportItems {
class _fu_ammo {name = "MRAWS_HEAT55_F";count = 2;};
	                     };
};




};


