class CfgPatches
{
    class PAF_faction_m_groups_i //unique name given for Arma to find the config, same names will over write other mods.
    {
           name = "Polish Armed Forces";
           Author = "Pug, forked from FU-Factions-Template by Bolty";
           units[] = {};
           weapons[] = {};
   };
};


class CfgGroups {
    
class Indep
{
class PAF_Faction_m_Indep
                          {
name = "Polish Armed Forces (IND)";                      //Display name in editor and Zeus menus

class PAF_custom_temp                                  //unique name for your groups
{
name = "Infantry";                                  //display name of your unit types IE Spec ops

class PAF_Command_m_temp
       {
name = "1: Commander Squad";       //display name of group to be placed down in editor or Zeus
side = 2;
faction = "PAF_Faction_m_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;


                    class Unit0 {
                        position[] = {0,0,0};             //zeus and editor placement from marker this unit is on the crosshair
                        rank = "SERGEANT";               //rank deciding who takes Squad leadership if leader is respawning
                        side = 2;                       // side is indep
                        vehicle = "PAF_Leader_m_temp";  //your units name
                    };
                    class Unit1 {
                        position[] = {5,-5,0};      //this makes a triangle of soldiers
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "PAF_Medic_m_temp";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};    //this makes a triangle of soldiers
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_Crew_m_temp";
                    };

       };
class PAF_Squad_m_a_temp
       {
name = "2: Squad";
side = 2;
faction = "PAF_Faction_m_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "PAF_Leader_m_temp";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "PAF_Medic_m_temp";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
       };
class PAF_Squad_m_b_temp
       {
name = "3: Squad (AT)";
side = 2;
faction = "PAF_Faction_m_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "PAF_Leader_m_temp";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "PAF_Medic_m_temp";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
       };
class PAF_Squad_m_c_temp
       {
name = "4: Fireteam";
side = 2;
faction = "PAF_Faction_m_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "PAF_Leader_m_temp";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "PAF_Medic_m_temp";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "PAF_RiflemanLAT_m_temp";
                    };

       };
                          };



};
                };
};
