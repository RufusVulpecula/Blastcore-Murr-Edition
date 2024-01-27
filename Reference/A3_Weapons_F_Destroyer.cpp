class CfgPatches
{
	class A3_Weapons_F_Destroyer
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Destroyer - Weapons and Accessories";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F_Destroyer"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"weapon_Artillery_rockets_230mm_GAT",
			"weapon_ShipCannon_120mm"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgAmmo
{
	class BulletBase;
	class ShellBase;
	class Sh_155mm_AMOS;
	class Sh_155mm_AMOS_guided;
	class Sh_155mm_AMOS_LG;
	class Cluster_155mm_AMOS;
	class Mine_155mm_AMOS_range;
	class Smoke_120mm_AMOS_White;
	class AT_Mine_155mm_AMOS_range;
	class ammo_Missile_CruiseBase;
	class ammo_ShipCannon_120mm_HE: Sh_155mm_AMOS
	{
	};
	class ammo_ShipCannon_120mm_HE_guided: Sh_155mm_AMOS_guided
	{
	};
	class ammo_ShipCannon_120mm_HE_LG: Sh_155mm_AMOS_LG
	{
	};
	class ammo_ShipCannon_120mm_HE_cluster: Cluster_155mm_AMOS
	{
	};
	class ammo_ShipCannon_120mm_mine: Mine_155mm_AMOS_range
	{
	};
	class ammo_ShipCannon_120mm_smoke: Smoke_120mm_AMOS_White
	{
	};
	class ammo_ShipCannon_120mm_AT_mine: AT_Mine_155mm_AMOS_range
	{
	};
	class ammo_Missile_Cruise_01: ammo_Missile_CruiseBase
	{
		cameraViewAvailable=1;
		model="\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape="\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
	};
	class ammo_Missile_Cruise_01_Cluster: ammo_Missile_Cruise_01
	{
		cameraViewAvailable=1;
		model="\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape="\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		triggerDistance=250;
		triggerSpeedCoef[]={0.5,1};
		submunitionConeAngle=19;
		submunitionConeType[]=
		{
			"randomcenter",
			50
		};
		submunitionAmmo[]=
		{
			"Mo_cluster_AP",
			0.93000001,
			"Mo_cluster_AP_UXO_deploy",
			0.07
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 32Rnd_155mm_Mo_shells;
	class 6Rnd_155mm_Mo_smoke;
	class 2Rnd_155mm_Mo_guided;
	class 2Rnd_155mm_Mo_LG;
	class 6Rnd_155mm_Mo_mine;
	class 2Rnd_155mm_Mo_Cluster;
	class 6Rnd_155mm_Mo_AT_mine;
	class magazine_Missiles_Cruise_01_x18: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Missile_Cruise_HE_x18_magazine_name";
		displayNameShort="$STR_A3_Missile_Cruise_HE_x18_magazine_shortName";
		descriptionShort="$STR_A3_Missile_Cruise_HE_x18_magazine_description";
		ammo="ammo_Missile_Cruise_01";
		initSpeed=12;
		maxLeadSpeed=1.38889;
		count=18;
		nameSound="missiles";
	};
	class magazine_Missiles_Cruise_01_Cluster_x18: magazine_Missiles_Cruise_01_x18
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Missile_Cruise_C_x18_magazine_name";
		displayNameShort="$STR_A3_Missile_Cruise_C_x18_magazine_shortName";
		descriptionShort="$STR_A3_Missile_Cruise_C_x18_magazine_description";
		ammo="ammo_Missile_Cruise_01_Cluster";
	};
	class magazine_ShipCannon_120mm_HE_shells_x32: 32Rnd_155mm_Mo_shells
	{
		displayName="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells0";
		displayNameShort="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
		ammo="ammo_ShipCannon_120mm_HE";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_smoke_shells_x6: 6Rnd_155mm_Mo_smoke
	{
		ammo="ammo_ShipCannon_120mm_smoke";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_guided_shells_x2: 2Rnd_155mm_Mo_guided
	{
		ammo="ammo_ShipCannon_120mm_HE_guided";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_LG_shells_x2: 2Rnd_155mm_Mo_LG
	{
		ammo="ammo_ShipCannon_120mm_HE_LG";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_mine_shells_x6: 6Rnd_155mm_Mo_mine
	{
		ammo="ammo_ShipCannon_120mm_mine";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_cluster_shells_x2: 2Rnd_155mm_Mo_Cluster
	{
		ammo="ammo_ShipCannon_120mm_HE_cluster";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_AT_mine_shells_x6: 6Rnd_155mm_Mo_AT_mine
	{
		ammo="ammo_ShipCannon_120mm_AT_mine";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
};
class CfgWeapons
{
	class CannonCore;
	class RocketPods;
	class MissileLauncher;
	class mortar_155mm_AMOS;
	class weapon_VLSBase: MissileLauncher
	{
		class Cruise;
	};
	class cannon_120mm;
	class weapon_VLS_01: weapon_VLSBase
	{
		displayName="$STR_A3_Missile_Cruise_weapon_name";
		magazines[]=
		{
			"magazine_Missiles_Cruise_01_x18",
			"magazine_Missiles_Cruise_01_Cluster_x18"
		};
		class Cruise: Cruise
		{
		};
		class EventHandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class weapon_ShipCannon_120mm: mortar_155mm_AMOS
	{
		displayName="$STR_A3_cannon_120mm0";
		magazines[]=
		{
			"magazine_ShipCannon_120mm_HE_shells_x32",
			"magazine_ShipCannon_120mm_HE_guided_shells_x2",
			"magazine_ShipCannon_120mm_HE_LG_shells_x2",
			"magazine_ShipCannon_120mm_HE_cluster_shells_x2",
			"magazine_ShipCannon_120mm_mine_shells_x6",
			"magazine_ShipCannon_120mm_smoke_shells_x6",
			"magazine_ShipCannon_120mm_AT_mine_shells_x6"
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Single4",
			"Single5",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single10";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			reloadTime=8;
			artilleryDispersion=0.80000001;
			artilleryCharge=0.18000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single20";
			artilleryCharge=0.25;
		};
		class Single3: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single30";
			artilleryCharge=0.5;
		};
		class Single4: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single40";
			artilleryCharge=0.75;
		};
		class Single5: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single50";
			artilleryCharge=1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst10";
			burst=6;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			soundBurst=0;
			reloadTime=6;
			minRange=800;
			minRangeProbab=0.5;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.5;
			artilleryDispersion=2.5;
			artilleryCharge=0.18000001;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst20";
			minRange=2000;
			minRangeProbab=0.40000001;
			midRange=3000;
			midRangeProbab=0.60000002;
			maxRange=5200;
			maxRangeProbab=0.40000001;
			artilleryCharge=0.25;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst30";
			minRange=5200;
			minRangeProbab=0.30000001;
			midRange=8000;
			midRangeProbab=0.40000001;
			maxRange=13300;
			maxRangeProbab=0.30000001;
			artilleryCharge=0.5;
		};
		class Burst4: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst40";
			minRange=14600;
			minRangeProbab=0.2;
			midRange=25000;
			midRangeProbab=0.30000001;
			maxRange=37000;
			maxRangeProbab=0.2;
			artilleryCharge=0.75;
		};
		class Burst5: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst50";
			minRange=25000;
			minRangeProbab=0.1;
			midRange=40000;
			midRangeProbab=0.2;
			maxRange=58000;
			maxRangeProbab=0.1;
			artilleryCharge=1;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyMissile_Cruise_01_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_Cruise_01_Fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		simulation="maverickweapon";
	};
};
