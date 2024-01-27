class CfgPatches
{
	class A3_Weapons_F_Tank
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Tank - Weapons and Accessories";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Tank"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_launch_MRAWS_green_F",
			"Weapon_launch_MRAWS_green_rail_F",
			"Weapon_launch_MRAWS_olive_F",
			"Weapon_launch_MRAWS_olive_rail_F",
			"Weapon_launch_MRAWS_sand_F",
			"Weapon_launch_MRAWS_sand_rail_F",
			"Weapon_launch_O_Vorona_brown_F",
			"Weapon_launch_O_Vorona_green_F"
		};
		weapons[]=
		{
			"autocannon_30mm_RCWS",
			"cannon_125mm_advanced",
			"cannon_20mm",
			"HMG_127_AFV",
			"launcher_SPG9",
			"missiles_Firefist",
			"missiles_SAAMI",
			"missiles_Vorona",
			"MMG_01_vehicle",
			"MMG_02_coax"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
	class Default;
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class ammo_Missile_CannonLaunchedBase: MissileBase
	{
		class Components;
	};
	class ShellBase;
	class RocketBase;
	class BulletBase;
	class GrenadeBase;
	class M_125mm_cannon_ATGM: ammo_Missile_CannonLaunchedBase
	{
		model="\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		submunitionAmmo="ammo_Penetrator_125mm_missile";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		warheadName="TandemHEAT";
		hit=150;
		indirectHit=20;
		timeToLive=20;
		thrustTime=5;
		thrust=60;
		maxSpeed=350;
	};
	class M_120mm_cannon_ATGM: ammo_Missile_CannonLaunchedBase
	{
		model="\A3\Weapons_F_Tank\Ammo\Missile_ATGM_01_fly_F";
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_120mm_missile";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=150;
	};
	class M_120mm_cannon_ATGM_LG: M_120mm_cannon_ATGM
	{
		thrustTime=6;
		thrust=40;
		lockType=0;
		autoSeekTarget=1;
		lockSeekRadius=100;
		manualControl=0;
		missileLockCone=180;
		missileKeepLockedCone=180;
		missileLockMaxDistance=8000;
		missileLockMinDistance=100;
		missileLockMaxSpeed=35;
		weaponLockSystem="4 + 16";
		flightProfiles[]=
		{
			"TopDown"
		};
		class TopDown
		{
			ascendHeight=250;
			descendDistance=400;
			minDistance=400;
			ascendAngle=25;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=35;
						angleRangeHorizontal=40;
						angleRangeVertical=25;
					};
				};
			};
		};
	};
	class M_Vorona_HEAT: MissileBase
	{
		model="\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		submunitionAmmo="ammo_Penetrator_Vorona";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=150;
		warheadName="TandemHEAT";
		indirectHit=25;
		indirectHitRange=3.5;
		explosive=0.80000001;
		cost=500;
		aiAmmoUsageFlags="128 + 512";
		lockType=1;
		manualControl=1;
		manualControlOffset=80;
		missileManualControlCone=60;
		maxControlRange=2000;
		weaponLockSystem=0;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		initTime=0.050000001;
		trackOversteer=0.5;
		trackLead=0.85000002;
		timeToLive=30;
		maneuvrability=6;
		simulationStep=0.0020000001;
		airFriction=0.059999999;
		sideAirFriction=0.090000004;
		maxSpeed=200;
		thrustTime=1;
		thrust=70;
		fuseDistance=50;
		effectsMissile="missile2";
		whistleDist=4;
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=91.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=0;
			duration=0.2;
			frequency=20;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class M_Vorona_HE: M_Vorona_HEAT
	{
		model="\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_he_fly";
		warheadName="HE";
		submunitionAmmo="";
		submunitionDirectionType="";
		submunitionInitSpeed=0;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,0};
		triggerOnImpact=0;
		hit=220;
		indirectHit=45;
		indirectHitRange=8;
		explosive=0.80000001;
		cost=30;
	};
	class M_SPG9_HEAT: RocketBase
	{
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		warheadName="HE";
		submunitionAmmo="ammo_Penetrator_SPG9";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=95;
		indirectHit=16;
		indirectHitRange=3.5;
		explosive=0.80000001;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=8;
		airfriction=0.44999999;
		sideAirFriction=0.0099999998;
		maxSpeed=700;
		typicalspeed=700;
		initTime=0.029999999;
		thrustTime=0.44999999;
		thrust=1050;
		fuseDistance=50;
		effectsMissile="missile2";
		whistleDist=4;
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=91.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class M_SPG9_HE: M_SPG9_HEAT
	{
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		warheadName="HE";
		submunitionAmmo="";
		submunitionDirectionType="";
		submunitionInitSpeed=0;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,0};
		triggerOnImpact=0;
		aiAmmoUsageFlags="64 + 128";
		allowAgainstInfantry=1;
		hit=100;
		indirectHit=100;
		indirectHitRange=3.5;
		explosive=0.80000001;
		cost=30;
	};
	class M_127mm_Firefist_AT: MissileBase
	{
		model="\A3\Weapons_F_Tank\Ammo\Missile_Firefist_AT_01_fly_F.p3d";
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_Firefist";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=150;
		indirectHit=25;
		indirectHitRange=4;
		explosive=0.80000001;
		cost=500;
		aiAmmoUsageFlags="128 + 512";
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="PylonBackEffects";
		muzzleEffect="";
		initTime=0.050000001;
		trackOversteer=2;
		trackLead=0.80000001;
		timeToLive=35;
		maneuvrability=10;
		simulationStep=0.0020000001;
		airFriction=0.050000001;
		sideAirFriction=0.80000001;
		maxSpeed=200;
		typicalSpeed=170;
		thrustTime=6;
		thrust=40;
		fuseDistance=50;
		effectsMissile="missile2";
		whistleDist=4;
		airLock=1;
		missileLockCone=4;
		missileKeepLockedCone=90;
		missileLockMaxDistance=4500;
		missileLockMinDistance=65;
		missileLockMaxSpeed=41.666698;
		weaponLockSystem="2 + 16";
		cmImmunity=0.30000001;
		manualControl=0;
		maxControlRange=4500;
		flightProfiles[]=
		{
			"Direct",
			"TopDown"
		};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight=160;
			descendDistance=160;
			minDistance=150;
			ascendAngle=30;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=41.666698;
						angleRangeHorizontal=3.3;
						angleRangeVertical=2;
						maxTrackableATL=50;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=91.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class M_70mm_SAAMI: MissileBase
	{
		model="\A3\Weapons_F_Tank\Ammo\Missile_SAAMI_AA_01_fly_F.p3d";
		warheadName="HE";
		hit=80;
		indirectHit=60;
		indirectHitRange=6;
		proximityExplosionDistance=10;
		maneuvrability=15;
		simulationStep=0.0020000001;
		trackOversteer=1;
		trackLead=0.94999999;
		aiAmmoUsageFlags=256;
		irLock=1;
		cost=1000;
		timeToLive=15;
		airFriction=0.145;
		sideAirFriction=0.1;
		maxSpeed=850;
		initTime=0.25;
		thrustTime=2.25;
		thrust=380;
		fuseDistance=50;
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		effectsMissile="missile3";
		airLock=2;
		missileLockCone=4;
		missileKeepLockedCone=75;
		missileLockMaxDistance=8000;
		missileLockMinDistance=200;
		missileLockMaxSpeed=250;
		weaponLockSystem="2 + 16";
		cmImmunity=0.89999998;
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=147.905;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class R_MRAAWS_HEAT_F: RocketBase
	{
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F.p3d";
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_MRAAWS";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=150;
		indirectHit=14;
		indirectHitRange=3;
		explosive=0.80000001;
		cost=100;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=350;
		initTime=0;
		thrustTime=0.1;
		thrust=0.1;
		fuseDistance=15;
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		effectsMissileInit="";
		effectsMissile="EmptyEffect";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
		irLock=0;
		timeToLive=25;
		maneuvrability=0;
		allowAgainstInfantry=1;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118864,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118864,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118864,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=99.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.1147399;
			duration=0.80000001;
			frequency=20;
			distance=35.7771;
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class R_MRAAWS_HE_F: R_MRAAWS_HEAT_F
	{
		warheadName="HE";
		submunitionAmmo="";
		submunitionDirectionType="";
		submunitionInitSpeed=0;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,0};
		triggerOnImpact=0;
		hit=200;
		indirectHit=50;
		indirectHitRange=6;
		explosive=1;
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		allowAgainstInfantry=1;
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=123.905;
		};
	};
	class R_MRAAWS_HEAT55_F: R_MRAAWS_HEAT_F
	{
		warheadName="HEAT";
		submunitionAmmo="ammo_Penetrator_MRAAWS_HEAT55";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=95;
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F.p3d";
	};
	class B_20mm_AP: BulletBase
	{
		weaponType="cannon";
		warheadName="AP";
		hit=60;
		indirectHit=8;
		indirectHitRange=0.2;
		caliber=3.4000001;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=3;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		cost=35;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=2.5;
		tracerStartTime=0.1;
		tracerEndTime=2;
		airFriction=-0.00042;
		muzzleEffect="";
		deflecting=15;
		typicalSpeed=1120;
		airlock=1;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=1;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=5;
			duration=1;
			frequency=20;
			distance=56;
		};
		class CamShakeHit
		{
			power=50;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.2360699;
			duration=1;
			frequency=20;
			distance=40;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class VehicleMagazine;
	class 130Rnd_338_Mag;
	class 200Rnd_338_Mag: 130Rnd_338_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		displayNameMFDFormat="COAX";
		count=200;
		nameSound="mgun";
	};
	class 4Rnd_120mm_cannon_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_4Rnd_120mm_cannon_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_ATGM0";
		count=4;
		ammo="M_120mm_cannon_ATGM";
		initspeed=120;
		maxLeadSpeed=27.7778;
		nameSound="missiles";
		displayNameMFDFormat="MISL";
	};
	class 4Rnd_120mm_LG_cannon_missiles: 4Rnd_120mm_cannon_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_120mm_LG_cannon_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_LG_ATGM0";
		ammo="M_120mm_cannon_ATGM_LG";
	};
	class 4Rnd_125mm_cannon_missiles: 4Rnd_120mm_cannon_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_125mm_cannon_missiles0";
		count=4;
		ammo="M_125mm_cannon_ATGM";
		displayNameMFDFormat="Р";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green;
	class 60Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=60;
	};
	class Vorona_HEAT: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Vorona_HEAT0";
		displayNameShort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_Vorona_HEAT_descriptionshort0";
		ammo="M_Vorona_HEAT";
		type="6 * 		256";
		model="A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_heat.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		mass=100;
		count=1;
		initSpeed=150;
		maxLeadSpeed=27.7778;
	};
	class Vorona_HE: Vorona_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Vorona_HE0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_Vorona_HE_descriptionshort0";
		ammo="M_Vorona_HE";
		model="A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_he.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HE_F_ca.paa";
		mass=100;
		initSpeed=150;
		maxLeadSpeed=27.7778;
	};
	class SPG9_HEAT: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SPG9_HEAT0";
		displayNameShort="$STR_A3_heat_0";
		ammo="M_SPG9_HEAT";
		type="6 * 		256";
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		mass=10;
		count=1;
		initSpeed=435;
		descriptionShort="TODO";
		muzzleImpulseFactor[]={0,0};
	};
	class 12rnd_SPG9_HEAT: SPG9_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
	};
	class SPG9_HE: SPG9_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SPG9_HE0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo="M_SPG9_HE";
		type="6 * 		256";
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HE_F_ca.paa";
		mass=10;
		count=1;
		initSpeed=435;
		descriptionShort="TODO";
	};
	class 8rnd_SPG9_HE: SPG9_HE
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
	};
	class 4Rnd_70mm_SAAMI_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_4Rnd_70mm_SAAMI_missiles0";
		displayNameShort="$STR_A3_cfgmagazines_titan_aa_dns";
		count=4;
		ammo="M_70mm_SAAMI";
		initspeed=120;
		maxLeadSpeed=277.77802;
		nameSound="missiles";
	};
	class 2Rnd_127mm_Firefist_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_2Rnd_127mm_Firefist_missiles0";
		displayNameShort="$STR_A3_cfgmagazines_titan_at_dns";
		count=2;
		ammo="M_127mm_Firefist_AT";
		initspeed=19;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class MRAWS_HEAT_F: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_MRAWS_HEAT_F0";
		displaynameshort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HEAT_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HEAT_F";
		type="2*		256";
		mass=60;
	};
	class MRAWS_HE_F: MRAWS_HEAT_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_MRAWS_HE_F0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HE_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HE_F";
		mass=40;
	};
	class MRAWS_HEAT55_F: MRAWS_HEAT_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="MAAWS HEAT 55 Round";
		displayNameShort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HEAT_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT55_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HEAT55_F";
		mass=50;
	};
	class 60Rnd_20mm_HE_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo="B_20mm";
		count=60;
		initSpeed=1044;
		maxLeadSpeed=30.555599;
		tracersEvery=5;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class 60Rnd_20mm_AP_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort="$STR_A3_cfgmagazines_titan_ap_dns";
		ammo="B_20mm_AP";
		count=60;
		initSpeed=1100;
		maxLeadSpeed=30.555599;
		tracersEvery=5;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class CannonCore;
	class MissileLauncher;
	class autocannon_Base_F: CannonCore
	{
		class player;
	};
	class cannon_20mm: autocannon_Base_F
	{
		displayName="$STR_A3_cannon_20mm0";
		FCSMaxLeadSpeed=0;
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: autocannon_Base_F
		{
			displayName="$STR_A3_cannon_20mm0";
			magazines[]=
			{
				"60Rnd_20mm_HE_shells"
			};
			magazineReloadTime=40;
			class player: player
			{
				dispersion=0.0018;
				reloadTime=0.2;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName="$STR_A3_cannon_20mm0";
			magazines[]=
			{
				"60Rnd_20mm_AP_shells"
			};
			magazineReloadTime=40;
			class player: player
			{
				dispersion=0.00089999998;
				reloadTime=0.2;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
	};
	class cannon_125mm: CannonCore
	{
		class player;
	};
	class cannon_125mm_advanced: cannon_125mm
	{
		FCSMaxLeadSpeed=30.555599;
		FCSZeroingDelay=0.5;
		class player: player
		{
			dispersion=0.00054400001;
			reloadTime=5;
			magazineReloadTime=5;
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Advanced_Reload_01",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Advanced_Reload_01",
			2.5118864,
			1,
			10
		};
	};
	class missiles_SAAMI: MissileLauncher
	{
		displayName="$STR_A3_missiles_SAAMI0";
		showAimCursorInternal=0;
		reloadTime=1;
		magazineReloadTime=50;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		magazines[]=
		{
			"4Rnd_70mm_SAAMI_missiles"
		};
		minRange=200;
		minRangeProbab=0.25;
		midRange=1500;
		midRangeProbab=0.89999998;
		maxRange=8000;
		maxRangeProbab=0.89999998;
		aiRateOfFire=30;
		aiRateOfFireDistance=8000;
		aiRateOfFireDispersion=-25;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.5;
		textureType="semi";
		class StandardSound
		{
			soundSetShot[]=
			{
				"Static_Launcher_Titan_ATAA_Vehicle_Shot_SoundSet",
				"Static_Launcher_Titan_ATAA_Tail_SoundSet"
			};
		};
	};
	class missiles_Firefist: MissileLauncher
	{
		displayName="$STR_A3_missiles_Firefist0";
		showAimCursorInternal=0;
		reloadTime=1;
		magazineReloadTime=30;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		magazines[]=
		{
			"2Rnd_127mm_Firefist_missiles"
		};
		minRange=75;
		minRangeProbab=0.5;
		midRange=500;
		midRangeProbab=0.89999998;
		maxRange=2500;
		maxRangeProbab=0.89999998;
		aiRateOfFire=45;
		aiRateOfFireDistance=4000;
		aiRateOfFireDispersion=-35;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.30000001;
		textureType="semi";
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234097,
			2.5
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234097,
			1
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			1.1,
			700
		};
		holdsterAnimValue=1;
		modes[]=
		{
			"direct",
			"topDown"
		};
		class Direct: MissileLauncher
		{
			textureType="semi";
			displayName="$STR_A3_FireMode_Direct0";
			minRange=75;
			minRangeProbab=0.5;
			midRange=300;
			midRangeProbab=0.89999998;
			maxRange=2500;
			maxRangeProbab=0.80000001;
			aiRateOfFire=45;
			aiRateOfFireDistance=4000;
			aiRateOfFireDispersion=-35;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"Launcher_Firefist_Shot_SoundSet",
					"Launcher_Firefist_Tail_SoundSet"
				};
			};
		};
		class TopDown: Direct
		{
			textureType="topDown";
			displayName="$STR_A3_FireMode_TopDown0";
			minRange=160;
			minRangeProbab=0.60000002;
			midRange=800;
			midRangeProbab=0.94999999;
			maxRange=2500;
			maxRangeProbab=0.94999999;
		};
	};
	class missiles_Vorona: MissileLauncher
	{
		displayName="$STR_A3_missiles_Vorona0";
		reloadTime=1;
		magazineReloadTime=8;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			1.1,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"Vorona_HEAT",
			"Vorona_HE"
		};
		minRange=50;
		minRangeProbab=0.40000001;
		midRange=500;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.85000002;
		aiRateOfFire=24;
		aiRateOfFireDistance=2000;
		aiRateOfFireDispersion=-16;
		canLock=0;
		weaponLockSystem=0;
		textureType="semi";
	};
	class launcher_SPG9: MissileLauncher
	{
		displayName="$STR_A3_launcher_SPG90";
		reloadTime=6;
		magazineReloadTime=6;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			1.1,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"SPG9_HEAT",
			"SPG9_HE",
			"12rnd_SPG9_HEAT",
			"8rnd_SPG9_HE"
		};
		minRange=20;
		minRangeProbab=0.5;
		midRange=400;
		midRangeProbab=0.80000001;
		maxRange=1200;
		maxRangeProbab=0.80000001;
		aiRateOfFire=5;
		aiRateOfFireDistance=1000;
		aiRateOfFireDispersion=-2;
		modelOptics="\a3\Weapons_F_Tank\acc\reticle_SPG9.p3d";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.175;
				opticsZoomMax=0.175;
				opticsZoomInit=0.175;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		canLock=0;
		weaponLockSystem=0;
		textureType="semi";
	};
	class MGun;
	class LMG_RCWS;
	class MMG_01_vehicle: LMG_RCWS
	{
		displayName="$STR_A3_CfgWeapons_MMG_01_base_F0";
		descriptionShort="$STR_A3_CfgWeapons_MMG_01_hex_F1";
		magazines[]=
		{
			"150Rnd_93x64_Mag"
		};
		magazineReloadTime=10;
		ballisticsComputer=2;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",
			0.17782794,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_reload",
			0.50118721,
			1,
			10
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: MGun
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_01",
					0.63095737,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_02",
					0.63095737,
					1,
					10
				};
				closure3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_03",
					0.63095737,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.33000001,
					"closure2",
					0.33000001,
					"closure3",
					0.34
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_01",
					1.5848932,
					1,
					1200
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_02",
					1.5848932,
					1,
					1200
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_03",
					1.5848932,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_interior",
							1.4125376,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",
					1.5848932,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",
					1.5848932,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",
					1.5848932,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",
							1.4125376,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			soundContinuous=0;
			soundBurst=0;
			dispersion=0.0014;
			reloadTime=0.085714303;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=12;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=250;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=8;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.64999998;
			midRange=800;
			midRangeProbab=0.40000001;
			maxRange=1200;
			maxRangeProbab=0.1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_2_beg";
				directionName="muzzle_2_end";
				effectName="MachineGunCloud";
			};
			class effect2
			{
				positionName="machinegun_2_eject_pos";
				directionName="machinegun_2_eject_dir";
				effectName="MachineGunCartridge338";
			};
		};
	};
	class MMG_02_vehicle: LMG_RCWS
	{
		class manual;
	};
	class MMG_02_coax: MMG_02_vehicle
	{
		showAimCursorInternal=0;
		ballisticsComputer="2 + 16";
		magazines[]=
		{
			"130Rnd_338_Mag",
			"200Rnd_338_Mag"
		};
		magazineReloadTime=10;
		class manual: manual
		{
			reloadTime=0.085714303;
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_2_beg";
				directionName="muzzle_2_end";
				effectName="MachineGunCloud";
			};
		};
	};
	class missiles_titan: MissileLauncher
	{
		holdsterAnimValue=1;
	};
	class autocannon_30mm_RCWS: autocannon_Base_F
	{
		displayName="$STR_A3_GATLING_30MM_CTWS0";
		magazines[]=
		{
			"60Rnd_30mm_MP_shells_Tracer_Green"
		};
		magazineReloadTime=40;
		class player: player
		{
			reloadTime=0.133333;
		};
		class close: player
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=6;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.80000001;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=5;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.80000001;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=3;
			aiRateOfFire=2;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.80000001;
			midRange=1500;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.69999999;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=2;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1800;
			minRange=1800;
			minRangeProbab=0.74000001;
			midRange=2400;
			midRangeProbab=0.64999998;
			maxRange=3000;
			maxRangeProbab=0.050000001;
		};
		class GunParticles
		{
			class Effect
			{
				effectName="AutoCannonFired";
				positionName="Usti hlavne2";
				directionName="Konec hlavne2";
			};
		};
	};
	class HMG_127;
	class HMG_127_AFV: HMG_127
	{
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_beg";
				directionName="muzzle_end";
				effectName="MachineGunCloud";
			};
		};
	};
};
class CfgVehicles
{
	class Launcher_Base_F;
	class Weapon_launch_MRAWS_olive_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_MRAWS_olive_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_olive_F
			{
				weapon="launch_MRAWS_olive_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
	class Weapon_launch_MRAWS_olive_rail_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_MRAWS_olive_rail_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_olive_rail_F
			{
				weapon="launch_MRAWS_olive_rail_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
	class Weapon_launch_MRAWS_green_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_MRAWS_green_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_green_F
			{
				weapon="launch_MRAWS_green_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
	class Weapon_launch_MRAWS_green_rail_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_MRAWS_green_rail_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_green_rail_F
			{
				weapon="launch_MRAWS_green_rail_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
	class Weapon_launch_MRAWS_sand_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_MRAWS_sand_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_sand_F
			{
				weapon="launch_MRAWS_sand_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
	class Weapon_launch_MRAWS_sand_rail_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_MRAWS_sand_rail_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_sand_rail_F
			{
				weapon="launch_MRAWS_sand_rail_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
	class Weapon_launch_O_Vorona_brown_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_O_Vorona_brown_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_O_Vorona_brown_F
			{
				weapon="launch_O_Vorona_brown_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=1;
			};
		};
	};
	class Weapon_launch_O_Vorona_green_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_O_Vorona_green_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_O_Vorona_green_F
			{
				weapon="launch_O_Vorona_green_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=1;
			};
		};
	};
};
