class CfgPatches
{
	class A3_Weapons_F_Mark
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Marksmen - Weapons and Accessories";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Mark"
		};
		requiredVersion=0.1;
		units[]=
		{
			"FxCartridge_127x54_APDS",
			"FxCartridge_338_Ball",
			"FxCartridge_338_NM_Ball",
			"FxCartridge_93x64_Ball",
			"Item_bipod_01_F_blk",
			"Item_bipod_01_F_mtp",
			"Item_bipod_01_F_snd",
			"Item_bipod_02_F_blk",
			"Item_bipod_02_F_hex",
			"Item_bipod_02_F_tan",
			"Item_bipod_03_F_blk",
			"Item_bipod_03_F_oli",
			"Item_Laserdesignator_02",
			"Item_Laserdesignator_03",
			"Item_muzzle_snds_338_black",
			"Item_muzzle_snds_338_green",
			"Item_muzzle_snds_338_sand",
			"Item_muzzle_snds_93mmg",
			"Item_muzzle_snds_93mmg_tan",
			"Item_optic_AMS",
			"Item_optic_AMS_khk",
			"Item_optic_AMS_snd",
			"Item_optic_KHS_blk",
			"Item_optic_KHS_hex",
			"Item_optic_KHS_old",
			"Item_optic_KHS_tan",
			"Weapon_MMG_01_hex_F",
			"Weapon_MMG_01_tan_F",
			"Weapon_MMG_02_black_F",
			"Weapon_MMG_02_camo_F",
			"Weapon_MMG_02_sand_F",
			"Weapon_srifle_DMR_02_camo_F",
			"Weapon_srifle_DMR_02_F",
			"Weapon_srifle_DMR_02_sniper_F",
			"Weapon_srifle_DMR_03_F",
			"Weapon_srifle_DMR_03_khaki_F",
			"Weapon_srifle_DMR_03_multicam_F",
			"Weapon_srifle_DMR_03_tan_F",
			"Weapon_srifle_DMR_03_woodland_F",
			"Weapon_srifle_DMR_04_F",
			"Weapon_srifle_DMR_04_Tan_F",
			"Weapon_srifle_DMR_05_blk_F",
			"Weapon_srifle_DMR_05_hex_F",
			"Weapon_srifle_DMR_05_tan_f",
			"Weapon_srifle_DMR_06_camo_F",
			"Weapon_srifle_DMR_06_olive_F"
		};
		weapons[]=
		{
			"Laserdesignator_02",
			"Laserdesignator_03"
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_338_Ball: BulletBase
	{
		hit=16;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_338_Ball";
		audibleFire=80;
		visibleFireTime=3;
		dangerRadiusBulletClose=10;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=10;
		cost=6;
		airLock=1;
		caliber=2;
		typicalSpeed=890;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00060999999;
		class CamShakeExplode
		{
			power=3.1622801;
			duration=0.60000002;
			frequency=20;
			distance=9.4868298;
		};
		class CamShakeHit
		{
			power=10;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class B_338_NM_Ball: BulletBase
	{
		hit=14;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_338_NM_Ball";
		audibleFire=60;
		visibleFireTime=3;
		dangerRadiusBulletClose=10;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=10;
		cost=6;
		airLock=1;
		caliber=1.8;
		typicalSpeed=760;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00060999999;
		class CamShakeExplode
		{
			power=3.1622801;
			duration=0.60000002;
			frequency=20;
			distance=9.4868298;
		};
		class CamShakeHit
		{
			power=10;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class B_127x54_Ball: BulletBase
	{
		hit=20;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_127x54_APDS";
		visibleFire=1;
		audibleFire=5;
		visibleFireTime=3;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=10;
		cost=15;
		airLock=1;
		caliber=4.5999999;
		typicalSpeed=270;
		timeToLive=6;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.5;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.0014;
		class CamShakeExplode
		{
			power=2.2360699;
			duration=0.40000001;
			frequency=20;
			distance=6.7082;
		};
		class CamShakeHit
		{
			power=15;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class B_93x64_Ball: BulletBase
	{
		hit=18;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_93x64_Ball";
		audibleFire=80;
		visibleFireTime=3;
		dangerRadiusBulletClose=10;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=10;
		cost=6;
		airLock=1;
		caliber=2.2;
		typicalSpeed=785;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00075000001;
		class CamShakeExplode
		{
			power=3.1622801;
			duration=0.60000002;
			frequency=20;
			distance=9.4868298;
		};
		class CamShakeHit
		{
			power=10;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 10Rnd_338_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_10Rnd_338_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_338_CA.paa";
		count=10;
		ammo="B_338_Ball";
		initSpeed=915;
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_338_Mag1";
		mass=14;
	};
	class 130Rnd_338_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_130Rnd_338_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count=130;
		ammo="B_338_NM_Ball";
		initSpeed=807;
		tracersEvery=5;
		lastRoundsTracer=5;
		descriptionShort="$STR_A3_CfgMagazines_130Rnd_338_Mag1";
		mass=60;
	};
	class 10Rnd_127x54_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_10Rnd_127x54_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_127x54_CA.paa";
		count=10;
		ammo="B_127x54_Ball";
		initSpeed=290;
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_127x54_Mag1";
		mass=12;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_150Rnd_93x64_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
		count=150;
		ammo="B_93x64_Ball";
		initSpeed=785;
		tracersEvery=3;
		lastRoundsTracer=6;
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_93x64_Mag1";
		mass=70;
	};
	class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_DMR_05_CA.paa";
		count=10;
		displayName="$STR_A3_CfgMagazines_10Rnd_93x64_DMR_05_Mag0";
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_93x64_DMR_05_Mag1";
		initSpeed=870;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=16;
	};
};
class CfgRecoils
{
	class recoil_default;
	class recoil_dmr_02: recoil_default
	{
		muzzleOuter[]={0.5,2.5,0.60000002,0.5};
		kickBack[]={0.059999999,0.079999998};
		temporary=0.0099999998;
	};
	class recoil_dmr_03: recoil_default
	{
		muzzleOuter[]={0.30000001,1.5,0.5,0.40000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.0049999999;
	};
	class recoil_dmr_04: recoil_default
	{
		muzzleOuter[]={0.40000001,1.5,0.5,0.40000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.015;
	};
	class recoil_dmr_05: recoil_default
	{
		muzzleOuter[]={0.5,2.5,0.80000001,0.60000002};
		kickBack[]={0.079999998,0.1};
		temporary=0.0099999998;
	};
	class recoil_dmr_06: recoil_default
	{
		muzzleOuter[]={0.5,2,0.69999999,0.5};
		kickBack[]={0.050000001,0.1};
		temporary=0.0099999998;
	};
	class recoil_mmg_01: recoil_default
	{
		muzzleOuter[]={0.60000002,1.5,0.80000001,0.30000001};
		kickBack[]={0.02,0.079999998};
		temporary=0.0049999999;
	};
	class recoil_mmg_02: recoil_default
	{
		muzzleOuter[]={0.5,1.5,0.60000002,0.40000001};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.0049999999;
	};
};
class CfgVehicles
{
	class FxCartridge;
	class FxCartridge_338_Ball: FxCartridge
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.07;
		_generalMacro="FxCartridge_338_Ball";
		model="\A3\Weapons_F_Mark\Ammo\cartridge_338_LM.p3d";
	};
	class FxCartridge_338_NM_Ball: FxCartridge
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.07;
		_generalMacro="FxCartridge_338_NM_Ball";
		model="\A3\Weapons_F_Mark\Ammo\cartridge_338_NM.p3d";
	};
	class FxCartridge_127x54_APDS: FxCartridge
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.050000001;
		_generalMacro="FxCartridge_127x54_APDS";
		model="\A3\Weapons_F_Mark\Ammo\cartridge_127x54.p3d";
	};
	class FxCartridge_93x64_Ball: FxCartridge
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.07;
		_generalMacro="FxCartridge_93x64_Ball";
		model="\A3\Weapons_F_Mark\Ammo\cartridge_93x64.p3d";
	};
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Item_Base_F;
	class Headgear_Base_F;
	class Vest_Base_F;
	class Weapon_srifle_DMR_02_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_02_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_02_F
			{
				weapon="srifle_DMR_02_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_02_camo_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_02_camo_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_02_camo_F
			{
				weapon="srifle_DMR_02_camo_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_02_sniper_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_02_sniper_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_02_sniper_F
			{
				weapon="srifle_DMR_02_sniper_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_03_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_03_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_03_F
			{
				weapon="srifle_DMR_03_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_03_khaki_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_03_khaki_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_03_khaki_F
			{
				weapon="srifle_DMR_03_khaki_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_03_tan_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_03_tan_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_03_tan_F
			{
				weapon="srifle_DMR_03_tan_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_03_multicam_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_03_multicam_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_03_multicam_F
			{
				weapon="srifle_DMR_03_multicam_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_03_woodland_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_03_woodland_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_03_woodland_F
			{
				weapon="srifle_DMR_03_woodland_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_04_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_04_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_04_F
			{
				weapon="srifle_DMR_04_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_127x54_Mag
			{
				magazine="10Rnd_127x54_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_04_Tan_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_04_Tan_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_04_Tan_F
			{
				weapon="srifle_DMR_04_Tan_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_127x54_Mag
			{
				magazine="10Rnd_127x54_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_05_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_05_blk_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_05_blk_F
			{
				weapon="srifle_DMR_05_blk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_05_hex_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_05_hex_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_05_hex_F
			{
				weapon="srifle_DMR_05_hex_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_05_tan_f: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_05_tan_f0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_05_tan_f
			{
				weapon="srifle_DMR_05_tan_f";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_06_camo_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_srifle_DMR_06_camo_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_06_camo_F
			{
				weapon="srifle_DMR_06_camo_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_06_olive_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_srifle_DMR_06_olive_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_DMR_06_olive_F
			{
				weapon="srifle_DMR_06_olive_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_MMG_01_hex_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_MMG_01_hex_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class MMG_01_hex_F
			{
				weapon="MMG_01_hex_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 150Rnd_93x64_Mag
			{
				magazine="150Rnd_93x64_Mag";
				count=1;
			};
		};
	};
	class Weapon_MMG_01_tan_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_MMG_01_tan_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class MMG_01_tan_F
			{
				weapon="MMG_01_tan_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 150Rnd_93x64_Mag
			{
				magazine="150Rnd_93x64_Mag";
				count=1;
			};
		};
	};
	class Weapon_MMG_02_camo_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_MMG_02_camo_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class MMG_02_camo_F
			{
				weapon="MMG_02_camo_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=1;
			};
		};
	};
	class Weapon_MMG_02_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_MMG_02_black_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class MMG_02_black_F
			{
				weapon="MMG_02_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=1;
			};
		};
	};
	class Weapon_MMG_02_sand_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_MMG_02_sand_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class MMG_02_sand_F
			{
				weapon="MMG_02_sand_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_338_black: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_muzzle_snds_338_black0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_338_green: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_muzzle_snds_338_green0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_338_green
			{
				name="muzzle_snds_338_green";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_338_sand: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_muzzle_snds_338_sand0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_93mmg: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_muzzle_snds_93mmg0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_93mmg
			{
				name="muzzle_snds_93mmg";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_93mmg_tan: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_muzzle_snds_93mmg_tan0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_93mmg_tan
			{
				name="muzzle_snds_93mmg_tan";
				count=1;
			};
		};
	};
	class Item_optic_AMS: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_optic_AMS0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_AMS
			{
				name="optic_AMS";
				count=1;
			};
		};
	};
	class Item_optic_AMS_khk: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_optic_AMS_khk0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_AMS_khk
			{
				name="optic_AMS_khk";
				count=1;
			};
		};
	};
	class Item_optic_AMS_snd: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_optic_AMS_snd0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_AMS_snd
			{
				name="optic_AMS_snd";
				count=1;
			};
		};
	};
	class Item_optic_KHS_blk: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_optic_KHS_blk0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_KHS_blk
			{
				name="optic_KHS_blk";
				count=1;
			};
		};
	};
	class Item_optic_KHS_tan: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_optic_KHS_tan0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_KHS_tan
			{
				name="optic_KHS_tan";
				count=1;
			};
		};
	};
	class Item_optic_KHS_hex: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_optic_KHS_hex0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_KHS_hex
			{
				name="optic_KHS_hex";
				count=1;
			};
		};
	};
	class Item_optic_KHS_old: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_optic_KHS_old0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_KHS_old
			{
				name="optic_KHS_old";
				count=1;
			};
		};
	};
	class Item_Laserdesignator: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_Laserdesignator0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_InventoryItems";
		vehicleClass="Items";
		model="\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class Laserdesignator
			{
				name="Laserdesignator";
				count=1;
			};
		};
	};
	class Item_Laserdesignator_02: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_Laserdesignator_020";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_InventoryItems";
		vehicleClass="Items";
		model="\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class Laserdesignator_02
			{
				name="Laserdesignator_02";
				count=1;
			};
		};
	};
	class Item_Laserdesignator_03: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_Laserdesignator_030";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_InventoryItems";
		vehicleClass="Items";
		model="\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class Laserdesignator_03
			{
				name="Laserdesignator_03";
				count=1;
			};
		};
	};
	class Item_bipod_01_F_snd: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_bipod_01_F_snd0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_01_F_snd
			{
				name="bipod_01_F_snd";
				count=1;
			};
		};
	};
	class Item_bipod_01_F_blk: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_bipod_01_F_blk0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=1;
			};
		};
	};
	class Item_bipod_01_F_mtp: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_bipod_01_F_mtp0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_01_F_mtp
			{
				name="bipod_01_F_mtp";
				count=1;
			};
		};
	};
	class Item_bipod_02_F_blk: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_bipod_02_F_blk0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_02_F_blk
			{
				name="bipod_02_F_blk";
				count=1;
			};
		};
	};
	class Item_bipod_02_F_tan: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_bipod_02_F_tan0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_02_F_tan
			{
				name="bipod_02_F_tan";
				count=1;
			};
		};
	};
	class Item_bipod_02_F_hex: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_bipod_02_F_hex0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_02_F_hex
			{
				name="bipod_02_F_hex";
				count=1;
			};
		};
	};
	class Item_bipod_03_F_blk: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_bipod_03_F_blk0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=1;
			};
		};
	};
	class Item_bipod_03_F_oli: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_bipod_03_F_oli0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_03_F_oli
			{
				name="bipod_03_F_oli";
				count=1;
			};
		};
	};
};
class CfgNonAIVehicles
{
};
class SlotInfo;
class CowsSlot: SlotInfo
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	compatibleItems[]=
	{
		"optic_Nightstalker",
		"optic_tws",
		"optic_tws_mg",
		"optic_NVS",
		"optic_DMS",
		"optic_LRPS",
		"optic_ams",
		"optic_AMS_snd",
		"optic_AMS_khk",
		"optic_KHS_blk",
		"optic_KHS_tan",
		"optic_KHS_hex",
		"optic_KHS_old",
		"optic_SOS",
		"optic_MRCO",
		"optic_Arco",
		"optic_aco",
		"optic_ACO_grn",
		"optic_aco_smg",
		"optic_ACO_grn_smg",
		"optic_hamr",
		"optic_Holosight",
		"optic_Holosight_smg"
	};
};
class PointerSlot: SlotInfo
{
	linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
	displayName="$STR_A3_PointerSlot0";
	compatibleItems[]=
	{
		"acc_flashlight",
		"acc_pointer_IR"
	};
};
class CfgWeapons
{
	class Binocular;
	class Laserdesignator: Binocular
	{
		displayName="$STR_A3_cfgWeapons_Laserdesignator0";
		descriptionShort="$STR_A3_cfgWeapons_Laserdesignator1";
		model="\A3\Weapons_F\Binocular\laserdesignator_f.p3d";
		picture="\A3\Weapons_F_Mark\Data\UI\gear_laserdesignator_ca.paa";
	};
	class Laserdesignator_02: Laserdesignator
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Laserdesignator_02";
		displayName="$STR_A3_cfgWeapons_Laserdesignator_020";
		descriptionShort="$STR_A3_cfgWeapons_Laserdesignator_021";
		model="\A3\Weapons_F\Binocular\laserdesignator_02_f.p3d";
		DLC="Mark";
		picture="\A3\Weapons_F_Mark\Data\UI\gear_laserdesignator_02_X_ca.paa";
		modelOptics="\A3\Weapons_F_Mark\Reticle\optics_laserDesignator_02.p3d";
		weaponInfoType="RscOptics_LaserDesignator_02";
		opticsZoomMin=0.0125;
		opticsZoomMax=0.25;
		opticsZoomInit=0.25;
	};
	class Laserdesignator_03: Laserdesignator
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Laserdesignator_03";
		displayName="$STR_A3_cfgWeapons_Laserdesignator_030";
		descriptionShort="$STR_A3_cfgWeapons_Laserdesignator_031";
		model="\A3\Weapons_F\Binocular\laserdesignator_03_f.p3d";
		DLC="Mark";
		picture="\A3\Weapons_F_Mark\Data\UI\gear_laserdesignator_03_X_ca.paa";
	};
	class Default;
};
