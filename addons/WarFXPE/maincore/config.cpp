class CfgPatches
{
	class Blastcore_MainCore
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Tank",
			"A3_Weapons_F_Mark",
			"A3_Soft_F",
			"A3_Soft_F_Quadbike_01",
			"A3_Soft_F_Gamma",
			"A3_Soft_F_Gamma_Truck_01",
			"A3_Soft_F_Gamma_Truck_02",
			"A3_Soft_F_EPC",
			"A3_Soft_F_Exp",
			"A3_Data_F_ParticleEffects",
			"A3_Data_F_aow_Loadorder"
//			"rhs_c_weapons",
		};
		ammo[]=
		{
			"ShellBase",
			"MissileBase",
			"GrenadeCore",
			"RocketBase",
			"GrenadeBase",
			"Grenade",
			"GrenadeHand",
			"SmokeShell",
			"SmokeShellArty",
			"BulletBase",
			"B_127x33_Ball",
			"B_127x99_Ball",
			"B_127x108_Ball",
			"B_127x108_APDS",
			"B_20mm",
			"B_30mm_AP",
			"B_30mm_APFSDS",
			"Sh_120mm_APFSDS",
			"FlareBase",
			"SubmunitionBase",
			"CMflareAmmo",
			"CMflare_Chaff_Ammo",
			"SmokeLauncherAmmo",
			"F_40mm_White",
			"FuelExplosion",
			"FuelExplosionBig",
			"HelicopterExploSmall",
			"HelicopterExploBig",
			"B_19mm_HE",
			"B_30mm_HE",
			"Gatling_30mm_HE_Plane_CAS_01_F",
			"B_25mm",
			"B_35mm_AA",
			"Sh_120mm_HE",
			"Sh_155mm_AMOS",
			"Sh_82mm_AMOS",
			"M_PG_AT",
			"M_AT",
			"Rocket_04_HE_F",
			"Rocket_04_AP_F",
			"Rocket_03_AP_F",
			"Rocket_03_HE_F",
			"R_80mm_HE",
			"M_RPG32_F",
			"M_RPG32_AA_F",
			"R_PG32V_F",
			"M_NLAW_AT_F",
			"M_Scalpel_AT",
			"Missile_AGM_02_F",
			"M_Titan_AA",
			"M_Air_AA",
			"Missile_AGM_01_F",
			"Missile_AA_04_F",
			"Missile_AA_03_F",
			"M_Titan_AT",
			"M_Titan_AP",
			"Bo_GBU12_LGB",
			"Bomb_04_F",
			"Bomb_03_F",
			"Bo_Mk82",
			"R_230mm_HE",
			"R_230mm_fly",
			"Mo_cluster_AP",
			"SatchelCharge_Remote_Ammo",
			"DemoCharge_Remote_Ammo"
		};
	};
};

class cfgWeapons
{
	class Default
	{
		fireLightDuration=0.003;
		fireLightIntensity = 0.5;
	};
	class MGunCore
	{
		fireLightDuration=0.003;
	};
	class Weapon_Base_F
	{
		fireLightDuration=0.003;
	};
	class MGun: MGunCore
	{
		fireLightDuration=0.003;
	};
	class RifleCore: Default
	{
		fireLightDuration=0.003;
	};
	class GrenadeCore: Default
	{
		fireLightDuration=0.003;
	};
	class Rifle: RifleCore
	{
	};
	class Rifle_Base_F: Rifle
	{
		fireLightDuration=0.003;
		fireLightIntensity = 0.1;
		fireLightDiffuse[] = {2,1.5,0};
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		fireLightDuration=0.003;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		fireLightDuration=0.003;
	};
	class HandGunBase: Rifle
	{
		fireLightDuration=0.003;
	};
	class PistolCore: Default
	{
		fireLightDuration=0.003;
	};
	class Pistol: PistolCore
	{
		fireLightDuration=0.003;
	};
	class Pistol_Base_F: Pistol
	{
		fireLightDuration=0.003;
	};
	class GrenadeLauncher: Default
	{
		fireLightDuration=0.003;
	};
	class GMG_F: MGun
	{
		fireLightDuration=0.003;
	};
	class GMG_20mm: GMG_F
	{
		fireLightDuration=0.003;
	};
	class GMG_40mm: GMG_F
	{
		fireLightDuration=0.003;
	};
	class CannonCore;
	class gatling_20mm: CannonCore
	{
	};
	class gatling_30mm_base: CannonCore
	{
	};
	class gatling_30mm: gatling_30mm_base
	{
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGunCAS";
				positionName="Gatling_barrels_end";
				directionName="Gatling_barrels_start";
			};
		};
	};
	class rhs_weap_azp23: CannonCore
	{
		class gunParticles
		{
			class effect1
			{
				positionName="eject1";
				directionName="eject1dir";
				effectName="MachineGunCartridge2";
			};
			class effect2
			{
				positionName="eject2";
				directionName="eject2dir";
				effectName="MachineGunCartridge2";
			};
			class effect3
			{
				positionName="eject3";
				directionName="eject3dir";
				effectName="MachineGunCartridge2";
			};
			class effect4
			{
				positionName="eject4";
				directionName="eject4dir";
				effectName="MachineGunCartridge2";
			};
			class mg1
			{
				positionName="chase01e";
				directionName="chase01dir";
				effectName="MachineGun1";
			};
			class mg2
			{
				positionName="chase03e";
				directionName="chase03dir";
				effectName="MachineGun1";
			};
			class mg3
			{
				positionName="chase03e";
				directionName="chase03dir";
				effectName="MachineGun1";
			};
			class mg4
			{
				positionName="chase04e";
				directionName="chase04dir";
				effectName="MachineGun1";
			};
		};
	};
	class rhs_weap_2a14: rhs_weap_azp23
	{
		cartridgePos="cartridge_pos";
		cartridgeVel="cartridge_dir";
		fireLightDuration=0.0099999998;
		fireLightIntensity=0.2;
		class GunParticles
		{
			class MuzzleEffect1
			{
				positionName="muzzle_1";
				directionName="chamber_1";
				effectName="35mmFlakFlash";
			};
			class MuzzleEffect2
			{
				positionName="muzzle_2";
				directionName="chamber_2";
				effectName="35mmFlakFlash";
			};
		};
	};
	class LauncherCore;
	class RocketPods: LauncherCore
	{
	};
	class MissileLauncher;
	class autocannon_35mm: CannonCore
	{
		fireLightDuration=0.0099999998;
		fireLightIntensity=0.2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="35mmFlakFlash";
			};
			class SecondEffect
			{
				effectName="35mmFlakFlash";
			};
		};
	};
	class cannon_120mm: CannonCore
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFiredBC";
			};
		};
	};
	class cannon_125mm: CannonCore
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFiredBC";
			};
		};
	};
	class M256_m1: CannonCore
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFiredBC";
			};
		};
	};
	class mortar_155mm_AMOS: CannonCore
	{
		class GunParticles
		{
			class Effect2
			{
				positionName="Usti hlavne3";
			};
			class Effect3
			{
				positionName="Usti hlavne3";
			};
		};
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_rpg75: Launcher_Base_F
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_m80: Launcher_Base_F
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_smaw: Launcher_Base_F
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzlepos";
				directionName = "muzzleend";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_smaw_SR: Launcher_Base_F
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_smaw_green: rhs_weap_smaw
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_maaws: Launcher_Base_F
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "BackBlast2";
				directionName = "BackBlast1";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_M136: Launcher_Base_F
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzlepos";
				directionName = "muzzleend";
				effectName = "RHS_RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_M136_hedp: rhs_weap_M136
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzlepos";
				directionName = "muzzleend";
				effectName = "RHS_RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_M136_hp: rhs_weap_M136
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzlepos";
				directionName = "muzzleend";
				effectName = "RHS_RocketBackEffectsRPGNT";
			};
		};
	};
	class rhs_weap_m72a7: rhs_weap_M136
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzlepos";
				directionName = "muzzleend";
				effectName = "RHS_RocketBackEffectsRPGNT";
			};
		};
	};


	class DEVAS_RPG7: Launcher_Base_F
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
};

class CfgAmmo
{
	class Default;
	class BulletCore;
	class ShellCore;
	class MissileCore;
	class ShellBase: ShellCore
	{
		CraterEffects="HEShellCrater";
		ExplosionEffects="HEShellExplosion";
		class HitEffects
		{
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class MissileBase: MissileCore
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			Hit_Blood="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class GrenadeCore: Default
	{
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
	};
	class BombCore;
	class PipeBombBase;
	class LaserBombCore;
	class RocketCore;
	class RocketBase: RocketCore
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			Hit_Blood="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class GrenadeBase: GrenadeCore
	{
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
	};
	class Grenade: Default
	{
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
	};
	class GrenadeHand: Grenade
	{
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
	};
	class SmokeShell: GrenadeHand
	{
	};
	class SmokeShellArty: SmokeShell
	{
		effectsSmoke="SmokeShellWhiteEffect";
	};
	class FuelExplosion:Default
	{
		explosionEffects="VehicleExplosionEffects";
	};
	class FuelExplosionBig:FuelExplosion
	{
		explosionEffects="VehicleExplosionEffectsBig";
	};
	class FuelExplosionBigger:FuelExplosionBig
	{
		explosionEffects="VehicleExplosionEffectsBigger";
	};
	class FuelExplosionBiggerX:Default
	{
		explosionEffects="VehicleExplosionEffectsBiggerX";
	};
	class HelicopterExploSmall: ShellBase
	{
		explosionEffects="HelicopterExplosionEffects";
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		explosionEffects="HelicopterExplosionEffects2";
	};
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore
	{
	};
	class SubmunitionBullet: SubmunitionBase
	{
		class HitEffects
		{
			hitGlassArmored="ImpactGlassThin";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			default_mat="ImpactEffectsSmall";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitVirtual="ImpactMetal";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="BCImpactConcrete";
			hitConcrete="BCImpactConcrete";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWood="ImpactWood";
			hitMan="ImpactEffectsBlood";
			hitWater="ImpactEffectsWater";
		};
	};
	class BulletBase: BulletCore
	{
		class HitEffects
		{
			hitGlassArmored="ImpactGlassThin";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			default_mat="ImpactEffectsSmall";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitVirtual="ImpactMetal";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="BCImpactConcrete";
			hitConcrete="BCImpactConcrete";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWood="ImpactWood";
			hitMan="ImpactEffectsBlood";
			hitWater="ImpactEffectsWater";
		};
	};
	class ShotgunCore;
	class ShotgunBase: ShotgunCore
	{
		class HitEffects
		{
			hitGlassArmored="ImpactGlassThin";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			default_mat="ImpactEffectsSmall";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitVirtual="ImpactMetal";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="BCImpactConcrete";
			hitConcrete="BCImpactConcrete";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWood="ImpactWood";
			hitMan="ImpactEffectsBlood";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_127x33_Ball: BulletBase
	{
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood_Big";
			hitHay="ImpactHay";
			hitVirtual="ImpactMetalBig";
			HitMetal="ImpactMetalBig";
			HitMetalPlate="ImpactMetalBig";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectBig";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_127x99_Ball: BulletBase
	{
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood_Big";
			hitHay="ImpactHay";
			hitVirtual="ImpactMetalBig";
			HitMetal="ImpactMetalBig";
			HitMetalPlate="ImpactMetalBig";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectBig";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_127x108_Ball: BulletBase
	{
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood_Big";
			hitHay="ImpactHay";
			hitVirtual="ImpactMetalBig";
			HitMetal="ImpactMetalBig";
			HitMetalPlate="ImpactMetalBig";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectBig";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood_Big";
			hitHay="ImpactHay";
			hitVirtual="ImpactMetalBig";
			HitMetal="ImpactMetalBig";
			HitMetalPlate="ImpactMetalBig";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectBig";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
		};
	};
	class ammo_Penetrator_Base: ShellBase
	{
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_20mm_AP: BulletBase
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_30mm_AP: BulletBase
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_30mm_APFSDS: B_30mm_AP
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_120mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class Sh_125mm_APFSDS: Sh_120mm_APFSDS
	{
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_120mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class FlareCore;
	class FlareBase: FlareCore
	{
		intensity=250000;
	};
	class CMflareAmmo: BulletBase
	{
	};
	class CMflare_Chaff_Ammo: CMflareAmmo
	{
	};
	class F_40mm_White: FlareBase
	{
		useFlare=1;
		flareSize=12;
		brightness=2000000;
		intensity=1500000;
	};
	class B_19mm_HE: BulletBase
	{
		explosive=0.4;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_20mm: BulletBase
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_30mm_HE: B_19mm_HE
	{
		explosive=0.4;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_25mm: BulletBase
	{
		explosive=0.4;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class B_35mm_AA: BulletBase
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class Sh_120mm_HE: ShellBase
	{
		explosive=0.2;
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosions";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class Sh_120mm_HEAT_MP: ShellBase
	{
		explosive=0.1;
		CraterEffects="M136_Smoke";
		explosionEffects="M136_ExplodeS";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class Sh_125mm_HE: Sh_120mm_HE
	{
		explosive=0.2;
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosions";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class Sh_125mm_HEAT: Sh_125mm_HE
	{
		explosive=0.1;
		CraterEffects="M136_Smoke";
		explosionEffects="M136_ExplodeS";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class Sh_40_HE: BulletBase
	{
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
	};
	class Sh_40_SABOT: Sh_40_HE
	{
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
	};
	class G_30mm_HE: GrenadeBase
	{
		CraterEffects="GrenadeCrater";
		explosionEffects="40mm_HE_Explode";
	};
	class G_40mm_HE: GrenadeBase
	{
		CraterEffects="GrenadeCrater";
		explosionEffects="40mm_HE_Explode";
	};
	class rhs_g_vog25: G_40mm_HE
	{
	};
	class rhs_g_vg40tb: rhs_g_vog25
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class Sh_155mm_AMOS: ShellBase
	{
		CraterEffects="155mm_Smoke";
		explosionEffects="155mm_Explode";
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
	};
	class M_PG_AT: MissileBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class M_AT: M_PG_AT
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class Rocket_04_HE_F: MissileBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class Rocket_04_AP_F: Rocket_04_HE_F
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class Rocket_03_AP_F: Rocket_04_AP_F
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class Rocket_03_HE_F: Rocket_04_HE_F
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class R_80mm_HE: RocketBase
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class R_MRAAWS_HEAT_F: RocketBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class R_MRAAWS_HE_F: R_MRAAWS_HEAT_F
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class R_PG7_F: RocketBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class M_RPG32_F: MissileBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class M_RPG32_AA_F: M_RPG32_F
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class R_PG32V_F: RocketBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class R_TBG32V_F: R_PG32V_F
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class M_NLAW_AT_F: MissileBase
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class M_Scalpel_AT: MissileBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class Missile_AGM_02_F: MissileBase
	{
		CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
	};
	class M_Titan_AA: MissileBase
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class M_Air_AA: MissileBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class Missile_AA_04_F: MissileBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class Missile_AA_03_F: Missile_AA_04_F
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class M_Titan_AT: MissileBase
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class M_Titan_AP: M_Titan_AT
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class ammo_Bomb_LaserGuidedBase: LaserBombCore
	{
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
	};
	class Bo_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
	};
	class Bomb_03_F: ammo_Bomb_LaserGuidedBase
	{
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
	};
	class Bomb_04_F: ammo_Bomb_LaserGuidedBase
	{
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
	};
	class Bo_Mk82: BombCore
	{
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
	};
	class R_230mm_HE: SubmunitionBase
	{
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
	};
	class R_230mm_fly: ShellBase
	{
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
	};
	class Mo_cluster_AP: ShellBase
	{
		CraterEffects="BCImpactDirt_30mmHE";
		explosionEffects="BCImpactConcrete_30mmHE";
	};
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects="Demo_Charge_Smoke";
		explosionEffects="Demo_Charge_Explode";
	};
	class DemoCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};

	class rhs_ammo_M136_rocket: RocketBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
		effectsMissileInit="RocketBackEffectsRPG";
		effectsMissile="missile3";
		effectsSmoke ="LauncherSmoke";	
	};		
	class rhs_ammo_M136_hedp_rocket: rhs_ammo_M136_rocket
	{
		effectsMissileInit="RocketBackEffectsRPG";
	};
	class rhs_ammo_m72a7_rocket: rhs_ammo_M136_hedp_rocket
	{
		effectsMissileInit="RocketBackEffectsRPG";
	};
	class rhs_ammo_smaw_HEAA: RocketBase
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		effectsMissile="missile3";
	};
	class rhs_ammo_maaws_HE: RocketBase
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class rhs_rpg26_rocket: R_PG32V_F
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class rhs_ammo_m80_rocket: rhs_rpg26_rocket
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
		effectsMissileInit="RocketBackEffectsRPG";
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class rhs_rpg7v2_pg7v: rhs_rpg7v2_pg7vl
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class rhs_rpg7v2_pg7v2: rhs_rpg7v2_pg7vl
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class rhs_rpg7v2_pg7vs: rhs_rpg7v2_pg7vl
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class rhs_rpg7v2_pg7vr: rhs_rpg7v2_pg7vl
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class rhs_ammo_9k32 : M_Titan_AA
	{
		effectsMissile = "RHS_9k32_Fired";
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class rhs_ammo_fim92_missile : M_Titan_AA
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
		effectsMissile = "RHS_9k32_Fired";
		effectsMissileInit = "";
		effectsSmoke ="LauncherSmoke";		
	};
	class rhs_ammo_fim92_ah64: rhs_ammo_fim92_missile
	{
		weaponType = bomb;
	};
	class rhs_ammo_of_base: Sh_125mm_HE
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class rhs_ammo_3of_base: rhs_ammo_of_base
	{
	};
	class rhs_ammo_3UOF17: rhs_ammo_3of_base
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class rhs_ammo_atgmCore_base: M_Titan_AT
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class rhs_ammo_9m119: rhs_ammo_atgmCore_base
	{
	};
	class rhs_ammo_9m119f: rhs_ammo_9m119
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class rhs_ammo_9m115: rhs_ammo_9m119
	{
	};
	class rhs_ammo_9m131: rhs_ammo_9m115
	{
	};
	class rhs_ammo_9m131m: rhs_ammo_9m131
	{
	};
	class rhs_ammo_9m131f: rhs_ammo_9m131m
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};

	class Devas_ammo_M72: R_PG32V_F
	{
		effectsSmoke ="LauncherSmoke";		
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class Devas_ammo_M72_HE: Devas_ammo_M72
	{
		effectsSmoke ="LauncherSmoke";	
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class Devas_ammo_RPG7: RocketBase
	{
		effectsSmoke ="LauncherSmoke";	
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};

	class LIB_Bullet_Vehicle_base: BulletBase
	{
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="BCImpactWood";
			hitHay="ImpactHay";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="BCImpactConcrete";
			hitConcrete="BCImpactConcrete";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
		};
	};
	class LIB_B_127x99_Ball: LIB_Bullet_Vehicle_base
	{
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood_Big";
			hitHay="ImpactHay";
			hitVirtual="ImpactMetalBig";
			HitMetal="ImpactMetalBig";
			HitMetalPlate="ImpactMetalBig";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectBig";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
		};
	};
	class LIB_Bullet_Plane_base: BulletBase
	{
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood_Big";
			hitHay="ImpactHay";
			hitVirtual="ImpactMetalBig";
			HitMetal="ImpactMetalBig";
			HitMetalPlate="ImpactMetalBig";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectBig";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
		};
	};
	class LIB_Bullet_AP_base: BulletBase
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class LIB_ShellHE_base: ShellBase
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_SprGr42_KwK42_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_76mm_Shell_Base_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_OF350_HE: LIB_76mm_Shell_Base_HE
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_M42A1_M1_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_SprGr34_KWK40_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_SprGr39_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_SprGr_KwK36_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_6pdr_mk10T_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_95L18_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_290mm_Petard_HE: LIB_ShellHE_base
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class LIB_SprGr_KwK36_HE_AA: LIB_SprGr_KwK36_HE
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_O365_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_OF471_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_SprGr34_K51_HE: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_S_37L57_M63: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_S_76L55_M42: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_S_76L55_HEMk1: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_S_20L55_SprGr: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_S_50L60_SprGr38: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_S_105L28_Gr39HlC: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_S_105L28_Gr38: LIB_ShellHE_base
	{
		CraterEffects="HEATCrater";
		explosionEffects="HEATExplosion";
	};
	class LIB_Shell_base: ShellBase
	{
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class LIB_S_20L55_PzGr: LIB_Shell_base
	{
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class LIB_ShellAPCR_base: ShellBase
	{
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class LIB_S_20L55_PzGr40: LIB_ShellAPCR_base
	{
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitMan="ImpactEffectsBlood";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
			hitWood="ImpactWood_Big";
			hitWater="ImpactEffectsWater";
		};
	};
	class FIR_GAU8_ammo: Gatling_30mm_HE_Plane_CAS_01_F
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class FIR_GAU12_ammo: Gatling_30mm_HE_Plane_CAS_01_F
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class FIR_GAU8_ammo_API: Gatling_30mm_HE_Plane_CAS_01_F
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class FIR_GAU8_ammo_HEI: Gatling_30mm_HE_Plane_CAS_01_F
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class FIR_GAU8_CM_ammo: Gatling_30mm_HE_Plane_CAS_01_F
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class FIR_Gsh30_ammo: Gatling_30mm_HE_Plane_CAS_01_F
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
	class FIR_M61A2_ammo: Gatling_30mm_HE_Plane_CAS_01_F
	{
		explosive=0.40000001;
		CraterEffects="30mmCrater";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotSmall";
			HitMetal="ImpactMetalSabotSmall";
			HitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
			hitWater="ImpactEffectsWaterRocket";
		};
	};
};
class cfgVehicles
{
	class AllVehicles;
	class Land;
	class LandVehicle;
	class car: LandVehicle
	{
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=20;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=8;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=0;
				lifeTime=0;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=22.4;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class Fire3
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire6:Fire4
			{
				type="fxp_TankExplFireMin3";
			};
			class Smoke1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
		};
	};
	class Car_F: car
	{
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=20;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=8;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=0;
				lifeTime=0;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=22.4;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class Fire3
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire6:Fire4
			{
				type="fxp_TankExplFireMin3";
			};
			class Smoke1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
		};
	};
	class Truck_F: Car_F
	{
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=20;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=8;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=0;
				lifeTime=0;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=22.4;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class Fire3
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire6:Fire4
			{
				type="fxp_TankExplFireMin3";
			};
			class Smoke1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
		};
	};
	class Van_01_base_F: Truck_F
	{
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=20;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=8;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=0;
				lifeTime=0;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=22.4;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class Fire3
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire6:Fire4
			{
				type="fxp_TankExplFireMin3";
			};
			class Smoke1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
		};
	};
	class Van_01_fuel_base_F: Van_01_base_F
	{
		explosionEffect="FuelExplosionBigger";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=50.4;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=18;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=36;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=56;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire1
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire2:Fire1
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire3:Fire2
			{
				type="fxp_TankExplFireMin2";
			};	
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin3";
			};
			class Fire5:Fire4
			{
				type="fxp_TankExplFireMin4";
			};	
			class SmokeBig1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class SmokeBig2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class SmokeBig2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class DestSpark1:FireBig1
			{
				intensity=1;
				type="fxp_TankDestSpark1";
			};
			class DestSpark2:DestSpark1
			{
				type="fxp_TankDestSpark2";
			};
			class SparkBig:DestSpark2
			{
				type="fxp_TankSparkBig";
				lifeTime=0.001;
			};
			class blast_wave_refract
			{
				simulation="particles";
				type="blast_wave_effect_very_large";
				position="destructionEffect2";
				intensity=1;
				interval= 3 * 1;
				lifeTime=0.004;
			};
			class ExplodeRefract
			{
				simulation="particles";
				type="blast_wave_huge";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.01;
			};
			class DustLongMaxMed
			{
				qualityLevel=1;
				simulation="particles";
				type="DustLongMax";
				position="destructionEffect2";
				intensity=1;
				interval=0.5;
				lifetime=0.01;
			};
			class DustLongMax
			{
				qualityLevel=2;
				simulation="particles";
				type="DustLongMax";
				position="destructionEffect2";
				intensity=1;
				interval=0.5;
				lifetime=0.02;
			};
			class ExplosionDustLong
			{
				simulation="particles";
				type="ExplosionDustLong";
				position="destructionEffect2";
				intensity=0.2;
				interval=1;
				lifetime=0.01;
			};
			class ShrapnelFast
			{
				simulation="particles";
				type="ShrapnelFast";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.03;
			};
			class ShrapnelLong
			{
				simulation="particles";
				type="ShrapnelLong";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.025;
			};
			class GrenadeStones
			{
				simulation="particles";
				type="GrenadeStones";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic1
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic2
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic3
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic4
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic5
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic6
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic7
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic8
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic9
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class GrenadeStonesStatic10
			{
				simulation="particles";
				type="GrenadeStonesStatic";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class DustFast
			{
				simulation="particles";
				type="DustFast";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.005;
			};
			class LightExp1
			{
				simulation="light";
				type="fxp_VEELightExp1";
				intensity=0.001;
				interval=1;
				position="destructionEffect2";
				lifeTime=0.004;
				enabled="distToWater";
			};
			class LightExp2:LightExp1
			{
				type="fxp_VEELightExp2";
				lifeTime=0.01;
			};
			class explosion_glow_01
			{
				simulation="particles";
				type="explosion_glow_01";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class MainExplosion
			{
				simulation="particles";
				type="Vehicle_Explosion";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.00500001;
			};
			class Shards
			{
				simulation="particles";
				type="ObjectDestructionShards";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.000500001;
			};
			class Debris01
			{
				simulation="particles";
				type="VehicleExplosionParts01";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.000500001;
			};
			class Debris02
			{
				simulation="particles";
				type="VehicleExplosionParts02";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.000500001;
			};
			class ShardsStatic
			{
				simulation="particles";
				type="ObjectDestructionShardsStatic";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.00400001;
			};
			class ShardsStatic2
			{
				simulation="particles";
				type="ObjectDestructionShardsStatic";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.01;
			};
			class ShardsStatic3
			{
				simulation="particles";
				type="ObjectDestructionShardsStaticSmoking";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.005;
			};
			class ShardsBig
			{
				simulation="particles";
				type="ObjectDestructionShards";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.00300001;
			};
			class ShardsBig1
			{
				simulation="particles";
				type="ObjectDestructionShards1";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.00300001;
			};
			class ShardsBig2
			{
				simulation="particles";
				type="ObjectDestructionShards2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.00300001;
			};
			class ShardsBig3
			{
				simulation="particles";
				type="ObjectDestructionShards3";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.00300001;
			};
			class ShardsBigBurn
			{
				simulation="particles";
				type="ObjectDestructionShardsBurning";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.00300001;
			};
			class ShardsBigBurn1
			{
				simulation="particles";
				type="ObjectDestructionShardsBurning1";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.00300001;
			};
			class ShardsBigBurn2
			{
				simulation="particles";
				type="ObjectDestructionShardsBurning2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.00300001;
			};
			class ShardsBigBurn3
			{
				simulation="particles";
				type="ObjectDestructionShardsBurning3";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.0030001;
			};
			class VehicleFireball
			{
				simulation="particles";
				type="VehicleExplosionFireBall";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.002;
			};
			class ExplosionBigger
			{
				simulation="particles";
				type="FireBallBigger";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.01;
			};
			class Sparks_large
			{
				simulation="particles";
				type="Sparks_large";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.002;
			};
			class Sparks_med
			{
				simulation="particles";
				type="Sparks_med";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.002;
			};
			class SmallSmoke1
			{
				simulation="particles";
				type="VehExpSmoke2";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=0.0040001;
			};
			class Shard1
			{
				simulation="particles";
				type="fxp_Shard1";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.003;
				};
			class Shard2:Shard1
			{
				type="fxp_Shard2";
			};
			class Shard3:Shard2
			{
				type="fxp_Shard3";
			};
			class SharStat1:Shard3
			{
				type="fxp_Shard1Static";
			};
			class SharStat2:SharStat1
			{
				type="fxp_Shard2Static";
			};
			class SharStat3:SharStat2
			{
				type="fxp_Shard3Static";
			};
			class Spark1:SharStat3
			{
				type="fxp_VEESpark1";
			};
			class Spark2:Spark1
			{
				type="fxp_VEESpark2";
			};
			class SmokeExp1
			{
				simulation="particles";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				type="CloudMedDark";
				lifeTime=0.005;
			};
			class SmokeExp2:SmokeExp1
			{
				type="fxp_PlanExplSmokeBig";
				lifeTime=0.0075;
			};
			class fxp_Spark1
			{
				simulation="particles";
				type="fxp_LauSparkBig1";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.002;
			};
			class fxp_Spark2
			{
				simulation="particles";
				type="fxp_LauSparkBig2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.002;
			};
			class BombSmk3
			{
				simulation="particles";
				type="HeavyBombSmk1";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0.02;
			};
		};
	};

	class tank: LandVehicle
	{
		explosionEffect="FuelExplosionBig";
		class DestructionEffects
		{
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=30;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=10;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=30;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=30;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SmokeBig1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=25;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Fire1
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=25;
			};
			class Fire6
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=25;
			};
			class Fire2:Fire1
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire3:Fire2
			{
				type="fxp_TankExplFireMin2";
			};	
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin3";
			};
			class Fire5:Fire4
			{
				type="fxp_TankExplFireMin4";
			};	
			class Spark1:FireBig1
			{
				type="fxp_TankSpark1";
				intensity=1;
			};
			class Spark2:Spark1
			{
				type="fxp_TankSpark2";
			};
			class DestSpark1:Spark2
			{
				type="fxp_TankDestSpark1";
			};
			class DestSpark2:DestSpark1
			{
				type="fxp_TankDestSpark2";
			};
			class SparkBig:DestSpark2
			{
				type="fxp_TankSparkBig";
				lifeTime=0.001;
			};
		};
	};

	class Truck_01_base_F: Truck_F
	{
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=20;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=8;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=0;
				lifeTime=0;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=22.4;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class Fire3
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire6:Fire4
			{
				type="fxp_TankExplFireMin3";
			};
			class Smoke1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
		};
	};
	class B_Truck_01_transport_F: Truck_01_base_F
	{
		explosionEffect="FuelExplosion";
	};
	class B_Truck_01_mover_F: B_Truck_01_transport_F
	{
	};
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		explosionEffect="FuelExplosionBigger";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=50.4;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=18;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=36;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=56;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire1
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire2:Fire1
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire3:Fire2
			{
				type="fxp_TankExplFireMin2";
			};	
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin3";
			};
			class Fire5:Fire4
			{
				type="fxp_TankExplFireMin4";
			};	
			class SmokeBig1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class SmokeBig2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class SmokeBig2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class Spark1:FireBig1
			{
				type="fxp_TankSpark1";
				intensity=1;
			};
			class Spark2:Spark1
			{
				type="fxp_TankSpark2";
			};
			class DestSpark1:Spark2
			{
				type="fxp_TankDestSpark1";
			};
			class DestSpark2:DestSpark1
			{
				type="fxp_TankDestSpark2";
			};
			class SparkBig:DestSpark2
			{
				type="fxp_TankSparkBig";
				lifeTime=0.001;
			};
		};
	};
	class B_Truck_01_ammo_F: B_Truck_01_mover_F
	{
		explosionEffect="FuelExplosionBiggerX";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=50.4;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=18;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=36;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=56;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire1
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire2:Fire1
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire3:Fire2
			{
				type="fxp_TankExplFireMin2";
			};	
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin3";
			};
			class Fire5:Fire4
			{
				type="fxp_TankExplFireMin4";
			};	
			class SmokeBig1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class SmokeBig2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class SmokeBig2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class Spark1:FireBig1
			{
				type="fxp_TankSpark1";
				intensity=1;
			};
			class Spark2:Spark1
			{
				type="fxp_TankSpark2";
			};
			class DestSpark1:Spark2
			{
				type="fxp_TankDestSpark1";
			};
			class DestSpark2:DestSpark1
			{
				type="fxp_TankDestSpark2";
			};
			class SparkBig:DestSpark2
			{
				type="fxp_TankSparkBig";
				lifeTime=0.001;
			};
		};
	};

	class Truck_02_base_F: Truck_F
	{
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=20;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=8;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=0;
				lifeTime=0;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=22.4;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class Fire3
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire6:Fire4
			{
				type="fxp_TankExplFireMin3";
			};
			class Smoke1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
		};
	};
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
		explosionEffect="FuelExplosionBigger";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=50.4;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=18;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=36;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=56;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire1
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire2:Fire1
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire3:Fire2
			{
				type="fxp_TankExplFireMin2";
			};	
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin3";
			};
			class Fire5:Fire4
			{
				type="fxp_TankExplFireMin4";
			};	
			class SmokeBig1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class SmokeBig2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class SmokeBig2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class Spark1:FireBig1
			{
				type="fxp_TankSpark1";
				intensity=1;
			};
			class Spark2:Spark1
			{
				type="fxp_TankSpark2";
			};
			class DestSpark1:Spark2
			{
				type="fxp_TankDestSpark1";
			};
			class DestSpark2:DestSpark1
			{
				type="fxp_TankDestSpark2";
			};
			class SparkBig:DestSpark2
			{
				type="fxp_TankSparkBig";
				lifeTime=0.001;
			};
		};
	};
	class Truck_02_Ammo_base_F: Truck_02_base_F
	{
		explosionEffect="FuelExplosionBiggerX";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=50.4;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=18;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=36;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=56;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire1
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire2:Fire1
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire3:Fire2
			{
				type="fxp_TankExplFireMin2";
			};	
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin3";
			};
			class Fire5:Fire4
			{
				type="fxp_TankExplFireMin4";
			};	
			class SmokeBig1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class SmokeBig2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class SmokeBig2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class Spark1:FireBig1
			{
				type="fxp_TankSpark1";
				intensity=1;
			};
			class Spark2:Spark1
			{
				type="fxp_TankSpark2";
			};
			class DestSpark1:Spark2
			{
				type="fxp_TankDestSpark1";
			};
			class DestSpark2:DestSpark1
			{
				type="fxp_TankDestSpark2";
			};
			class SparkBig:DestSpark2
			{
				type="fxp_TankSparkBig";
				lifeTime=0.001;
			};
		};
	};

	class Truck_03_base_F: Truck_F
	{
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=20;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=8;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=0;
				lifeTime=0;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=22.4;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class Fire3
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire6:Fire4
			{
				type="fxp_TankExplFireMin3";
			};
			class Smoke1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=20;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=35;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
		};
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		explosionEffect="FuelExplosionBiggerX";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=50.4;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=18;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=36;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=56;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire1
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire2:Fire1
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire3:Fire2
			{
				type="fxp_TankExplFireMin2";
			};	
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin3";
			};
			class Fire5:Fire4
			{
				type="fxp_TankExplFireMin4";
			};	
			class SmokeBig1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class SmokeBig2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class SmokeBig2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class Spark1:FireBig1
			{
				type="fxp_TankSpark1";
				intensity=1;
			};
			class Spark2:Spark1
			{
				type="fxp_TankSpark2";
			};
			class DestSpark1:Spark2
			{
				type="fxp_TankDestSpark1";
			};
			class DestSpark2:DestSpark1
			{
				type="fxp_TankDestSpark2";
			};
			class SparkBig:DestSpark2
			{
				type="fxp_TankSparkBig";
				lifeTime=0.001;
			};
		};
	};
	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		explosionEffect="FuelExplosionBigger";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=50.4;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=18;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=36;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=0;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=56;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire1
			{
				type="fxp_ObjectDestructionFire2Small";
				simulation="particles";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class Fire2:Fire1
			{
				type="fxp_TankExplFireMin1";
			};
			class Fire3:Fire2
			{
				type="fxp_TankExplFireMin2";
			};	
			class Fire4:Fire3
			{
				type="fxp_TankExplFireMin3";
			};
			class Fire5:Fire4
			{
				type="fxp_TankExplFireMin4";
			};	
			class SmokeBig1_2_T
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L_T";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=50.4;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig1_2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2_L";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=0.15000001;
				interval=1;
				lifeTime=63;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=2;
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class SmokeBig2Med
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=1;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class SmokeBig2Low
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				qualityLevel=0;
				intensity=1;
				interval=1;
				lifeTime=57.6;
			};
			class Spark1:FireBig1
			{
				type="fxp_TankSpark1";
				intensity=1;
			};
			class Spark2:Spark1
			{
				type="fxp_TankSpark2";
			};
			class DestSpark1:Spark2
			{
				type="fxp_TankDestSpark1";
			};
			class DestSpark2:DestSpark1
			{
				type="fxp_TankDestSpark2";
			};
			class SparkBig:DestSpark2
			{
				type="fxp_TankSparkBig";
				lifeTime=0.001;
			};
		};
	};

	class Air: AllVehicles
	{
	};
	class Helicopter: Air
	{
		class DestructionEffects
		{
			class Shard2
			{
				simulation="particles";
				type="fxp_HeliShard2";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.003;
			};	
			class Shard3:Shard2
			{
				type="fxp_HeliShard3";
			};
			class SharStat2:Shard3
			{
				type="fxp_HeliShard2Static";
			};
			class SharStat3:SharStat2
			{
				type="fxp_HeliShard3Static";
			};
			class Fire:SharStat3
			{
				type="fxp_HeliExplFire";
				lifeTime=0.03;
			};
			class SmokeExp2:Fire
			{
				type="fxp_HeliExplSmoke";
				lifeTime=0.1;
			};	
			class SparkExp1:SmokeExp2
			{
				type="ObjectDestructionSparks";
				lifeTime=20;
			};
			class SparkExp2:SparkExp1
			{
				type="fxp_HeliExplSparks";
				lifeTime=0.013;
			};
			class LightExp:SparkExp2
			{
				type="fxp_HeliExplLight";
				lifeTime=0.015;
			};
			class Explosion:LightExp
			{
				type="ExplosionParticles";
				intensity=3;
				lifeTime=0.015;
			};
		};
	};
	class Plane: Air
	{
		class DestructionEffects
		{
			class Shard1
			{
				simulation="particles";
				type="fxp_PlanShard1";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.003;
			};
			class Shard2:Shard1
			{
				type="fxp_PlanShard2";
			};
			class Shard3:Shard2
			{
				type="fxp_PlanShard3";
			};
			class SharStat1:Shard3
			{
				type="fxp_PlanShard1Static";
			};
			class SharStat2:SharStat1
			{
				type="fxp_PlanShard2Static";
			};
			class SharStat3:SharStat2
			{
				type="fxp_PlanShard3Static";
			};
			class Fire:SharStat3
			{
				type="fxp_PlanExplFire";
				lifeTime=0.03;
			};
			class SmokeExp1:Fire
			{
				type="CloudMedDark";
				lifeTime=0.08;
			};
			class SmokeExp2:SmokeExp1
			{
				type="fxp_PlanExplSmoke";
				lifeTime=0.05;
			};
			class SparkExp1:SmokeExp2
			{
				type="ObjectDestructionSparks";
				lifeTime=20;
			};
			class SparkExp2:SparkExp1
			{
				type="fxp_PlanExplSparks";
				lifeTime=0.013;
			};
			class LightExp:SparkExp2
			{
				type="fxp_PlanExplLight";
				lifeTime=0.015;
			};
			class Explosion:LightExp
			{
				type="ExplosionParticles";
				intensity=3;
				lifeTime=0.015;
			};
			class BombSmk3:Shard1
			{
				type="HeavyBombSmk1";
				lifeTime=0.02;
			};
			class DustLongMax:Shard1
			{
				qualityLevel=2;
				type="DustLongMax";
				lifetime=0.01;
			};
		};
	};
	class Plane_Base_F:Plane
	{
	};
	class Plane_Fighter_02_Base_F:Plane_Base_F
	{
	};
};
