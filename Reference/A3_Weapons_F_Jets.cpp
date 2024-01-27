class CfgPatches
{
	class A3_Weapons_F_Jets
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Jets - Weapons and Accessories";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Jets"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"weapon_AGM_65Launcher",
			"weapon_AGM_KH25Launcher",
			"weapon_AMRAAMLauncher",
			"weapon_BIM9xLauncher",
			"weapon_Cannon_Phalanx",
			"weapon_Fighter_Gun20mm_AA",
			"weapon_Fighter_Gun_30mm",
			"weapon_GBU12Launcher",
			"weapon_KAB250Launcher",
			"weapon_R73Launcher",
			"weapon_R77Launcher",
			"weapon_rim116Launcher",
			"weapon_rim162Launcher"
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
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class BulletBase;
	class RocketBase;
	class LaserBombCore;
	class BombCore;
	class ShellBase;
	class Missile_AA_04_F;
	class ammo_Missile_MediumRangeAABase: MissileBase
	{
		model="\A3\weapons_f\empty";
		proxyShape="\A3\weapons_f\empty";
		hit=200;
		indirectHit=125;
		indirectHitRange=13;
		warheadName="HE";
		proximityExplosionDistance=30;
		fuseDistance=750;
		maneuvrability=23;
		airFriction=0.07;
		sideAirFriction=0.18000001;
		trackOversteer=1.1;
		trackLead=1.0599999;
		initTime=0.60000002;
		timeToLive=35;
		thrustTime=7;
		thrust=210;
		maxSpeed=900;
		simulationStep=0.0020000001;
		activeSensorAlwaysOn=0;
		airLock=2;
		lockType=0;
		cmimmunity=0.94999999;
		weaponLockSystem="8 + 16";
		missileLockCone=70;
		missileKeepLockedCone=90;
		missileLockMaxDistance=12000;
		missileLockMinDistance=800;
		missileLockMaxSpeed=777.77802;
		autoSeekTarget=1;
		flightProfiles[]=
		{
			"LoalDistance"
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent=2000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=12000;
							maxRange=12000;
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
						angleRangeHorizontal=50;
						angleRangeVertical=50;
						groundNoiseDistanceCoef=0.2;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
						maxTrackableSpeed=777.77802;
						minTrackableATL=10;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType="DataLinkSensorComponent";
					};
				};
			};
		};
		cost=1500;
		aiAmmoUsageFlags=256;
		missileFireAnim="rocket_fire_hide";
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		effectsMissile="FX_Missile_AA";
		muzzleEffect="";
	};
	class ammo_Missile_ShortRangeAABase: MissileBase
	{
		model="\A3\weapons_f\empty";
		proxyShape="\A3\weapons_f\empty";
		hit=130;
		indirectHit=85;
		indirectHitRange=10;
		warheadName="HE";
		proximityExplosionDistance=20;
		fuseDistance=100;
		maneuvrability=42;
		airFriction=0.14;
		sideAirFriction=0.23;
		trackOversteer=1.6;
		trackLead=0.89999998;
		initTime=0;
		timeToLive=20;
		thrustTime=5;
		thrust=250;
		maxSpeed=700;
		simulationStep=0.0020000001;
		airLock=2;
		lockType=0;
		cmimmunity=0.92000002;
		weaponLockSystem="2 + 16";
		missileLockCone=180;
		missileKeepLockedCone=180;
		missileLockMaxDistance=5000;
		missileLockMinDistance=250;
		missileLockMaxSpeed=600;
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
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						maxTrackableSpeed=600;
						minTrackableATL=3;
					};
				};
			};
		};
		cost=1000;
		whistleDist=20;
		aiAmmoUsageFlags=256;
		missileFireAnim="rocket_fire_hide";
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		effectsMissile="FX_Missile_AA";
		muzzleEffect="B01_fnc_effectFiredJetMissile";
	};
	class ammo_Gun20mmAABase: BulletBase
	{
		hit=60;
		indirectHit=6;
		indirectHitRange=0.40000001;
		warheadName="AP";
		explosive=0;
		caliber=3.4000001;
		cost=30;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=2;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
		nvgOnly=0;
		typicalSpeed=1030;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		aiAmmoUsageFlags=256;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
			1.7782794,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
			1.7782794,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
			1.7782794,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
			1.7782794,
			1,
			1300
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
		explosionSoundEffect="DefaultExplosion";
		airLock=1;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		airFriction=-0.00078;
		muzzleEffect="";
		class CamShakeExplode
		{
			power=4;
			duration=0.80000001;
			frequency=20;
			distance=43.7771;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
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
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class ammo_Gun30mmAABase: BulletBase
	{
		hit=70;
		indirectHit=6;
		indirectHitRange=1;
		warheadName="AP";
		explosive=0;
		caliber=4.5;
		cost=30;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=2;
		tracerStartTime=0.1;
		tracerEndTime=2;
		nvgOnly=0;
		typicalSpeed=980;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		aiAmmoUsageFlags=256;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
			1.7782794,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
			1.7782794,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
			1.7782794,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
			1.7782794,
			1,
			1300
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
		explosionSoundEffect="DefaultExplosion";
		airLock=1;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		airFriction=-0.00050000002;
		muzzleEffect="";
		class CamShakeExplode
		{
			power=4;
			duration=0.80000001;
			frequency=20;
			distance=43.7771;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
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
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class ammo_Gun35mmAABase: BulletBase
	{
		hit=72;
		indirectHit=6;
		indirectHitRange=1;
		warheadName="AP";
		visibleFire=38;
		audibleFire=200;
		visibleFireTime=5;
		dangerRadiusBulletClose=20;
		dangerRadiusHit=60;
		suppressionRadiusBulletClose=12;
		suppressionRadiusHit=24;
		aiAmmoUsageFlags=256;
		deflecting=0;
		explosive=0;
		airLock=1;
		cost=42;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		explosionSoundEffect="DefaultExplosion";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=2;
		tracerStartTime=0.1;
		tracerEndTime=2;
		airFriction=-0.00034999999;
		muzzleEffect="";
		caliber=4.5;
		typicalSpeed=950;
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
			power=3.5999999;
			duration=0.80000001;
			frequency=20;
			distance=41.941101;
		};
		class CamShakeHit
		{
			power=18;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=1.49535;
			duration=0.40000001;
			frequency=20;
			distance=17.8885;
		};
		class CamShakePlayerFire
		{
			power=0.001;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=2;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
		shotDistractionAI=-0.5;
	};
	class ammo_Missile_rim116: ammo_Missile_ShortRangeAABase
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		airFriction=0.16;
		thrustTime=4;
		thrust=300;
		maxSpeed=800;
		missileLockMaxDistance=4000;
	};
	class ammo_Missile_rim162: ammo_Missile_MediumRangeAABase
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		hit=200;
		indirectHit=200;
		maneuvrability=24;
		trackOversteer=2;
		airFriction=0.090000004;
		sideAirFriction=0.16;
		initTime=0;
		thrust=230;
		missileLockCone=170;
		missileKeepLockedCone=170;
		missileLockMaxSpeed=888.88898;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=12000;
							maxRange=12000;
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
						angleRangeHorizontal=120;
						angleRangeVertical=120;
						maxTrackableSpeed=888.88898;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType="DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Fighter01_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=2;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
	};
	class ammo_Fighter04_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=2;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
	};
	class ammo_Missile_AMRAAM_C: ammo_Missile_MediumRangeAABase
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_10_fly_F";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_AA_10_F";
	};
	class ammo_Missile_AMRAAM_D: ammo_Missile_MediumRangeAABase
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_06_fly_F";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_AA_06_F";
		airFriction=0.064999998;
		thrustTime=7.5;
		cmimmunity=0.95999998;
		missileLockCone=140;
		missileKeepLockedCone=140;
		missileLockMaxDistance=13000;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=13000;
							maxRange=13000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=100;
						angleRangeVertical=100;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType="DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Missile_BIM9X: ammo_Missile_ShortRangeAABase
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
	};
	class ammo_Fighter02_Gun30mm_AA: ammo_Gun30mmAABase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=2;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
	};
	class ammo_Missile_AA_R77: ammo_Missile_MediumRangeAABase
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_05_fly_F";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_AA_05_F";
		maneuvrability=30;
		airFriction=0.079999998;
		sideAirFriction=0.16;
		thrust=240;
		missileLockCone=90;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						angleRangeHorizontal=65;
						angleRangeVertical=65;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType="DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Missile_AA_R73: ammo_Missile_ShortRangeAABase
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_AA_07_F";
		hit=140;
		indirectHit=95;
		maneuvrability=38;
		airFriction=0.16;
		sideAirFriction=0.25;
		cmimmunity=0.92000002;
		missileLockMinDistance=75;
		missileLockMaxDistance=6000;
		missileLockCone=150;
		missileKeepLockedCone=150;
		timeToLive=25;
		thrustTime=6;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class IRSensorComponent: IRSensorComponent
					{
						class AirTarget
						{
							minRange=500;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=150;
						angleRangeVertical=150;
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class magazine_Missile_rim116_x21: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Rim116_x21_magazine_name";
		displayNameShort="$STR_A3_Rim116_x21_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_BIM9_tooltip";
		ammo="ammo_Missile_rim116";
		count=21;
		initSpeed=40;
		maxLeadSpeed=750;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class magazine_Missile_rim162_x8: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Rim162_x8_magazine_name";
		displayNameShort="$STR_A3_Rim162_x8_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=8;
		ammo="ammo_Missile_rim162";
		initSpeed=60;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class magazine_Cannon_Phalanx_x1550: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Phalanx_x1550_magazine_name";
		descriptionShort="$STR_A3_Phalanx_x1550_magazine_description";
		ammo="ammo_AAA_Gun35mm_AA";
		count=1550;
		initSpeed=1440;
		maxLeadSpeed=600;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter01_Gun20mm_AA_x450: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x450_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x450_magazine_description";
		ammo="ammo_Fighter01_Gun20mm_AA";
		count=450;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter04_Gun20mm_AA_x150: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x150_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x150_magazine_description";
		ammo="ammo_Fighter04_Gun20mm_AA";
		count=150;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter04_Gun20mm_AA_x250: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x150_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x150_magazine_description";
		ammo="ammo_Fighter04_Gun20mm_AA";
		count=250;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Missile_AMRAAM_C_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AMRAAM_C_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=1;
		ammo="ammo_Missile_AMRAAM_C";
		initSpeed=0;
		maxLeadSpeed=800;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AMRAAM_D_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AMRAAM_D_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=1;
		ammo="ammo_Missile_AMRAAM_D";
		initSpeed=0;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_BIM9X_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_9x_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_BIM9_tooltip";
		ammo="ammo_Missile_BIM9X";
		count=1;
		initSpeed=0;
		maxLeadSpeed=700;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AGM_02_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AGM_65_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AGM_65_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_Macer_tooltip";
		ammo="Missile_AGM_02_F";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Bomb_GBU12_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Bomb_GBU_12_x1_magazine_name";
		displayNameShort="$STR_A3_Bomb_GBU_12_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_GBU12_tooltip";
		ammo="Bomb_04_F";
		initSpeed=0;
		maxLeadSpeed=30;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AMRAAM_C_x1: magazine_Missile_AMRAAM_C_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_C",
			"I_AMRAAM_C"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonRack_Missile_AMRAAM_C_x1: magazine_Missile_AMRAAM_C_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_Rail_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_C_RAIL",
			"I_AMRAAM_C_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonRack_Missile_AMRAAM_C_x2: magazine_Missile_AMRAAM_C_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AMRAAM_C_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AMRAAM_C_DUAL_RAIL",
			"I_AMRAAM_C_DUAL_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonMissile_Missile_AMRAAM_D_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonMissile_Missile_AMRAAM_D_INT_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_INT"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonRack_Missile_AMRAAM_D_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_RAIL",
			"I_AMRAAM_D_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_AMRAAM_D_x2: magazine_Missile_AMRAAM_D_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AMRAAM_D_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_DUAL_RAIL",
			"I_AMRAAM_D_DUAL_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0099999998,0},
										1
									},
									
									{
										"Center",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{0,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center2",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,0.0098290602},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_BIM9X_x1: magazine_Missile_BIM9X_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_x1_F";
		hardpoints[]=
		{
			"B_BIM9X",
			"I_BIM9X"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_BIM9X_x1: magazine_Missile_BIM9X_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_Rail_x1_F";
		hardpoints[]=
		{
			"B_BIM9X_RAIL",
			"I_BIM9X_RAIL"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_BIM9X_x2: magazine_Missile_BIM9X_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AA_9x_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_DualRail_x2_F";
		hardpoints[]=
		{
			"B_BIM9X_DUAL_RAIL",
			"I_BIM9X_DUAL_RAIL"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0099999998,0},
										1
									},
									
									{
										"Center",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{0,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center2",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,0.0098290602},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AGM_65_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		hardpoints[]=
		{
			"B_AGM65",
			"I_AGM65"
		};
		pylonWeapon="weapon_AGM_65Launcher";
	};
	class PylonMissile_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AGM_65_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x2_F";
		hardpoints[]=
		{
			"B_AGM65_DUAL",
			"I_AGM65_DUAL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AGM_65_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		hardpoints[]=
		{
			"B_AGM65_RAIL",
			"I_AGM65_RAIL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
	};
	class PylonRack_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AGM_65_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AGM65_DUAL_RAIL",
			"I_AGM65_DUAL_RAIL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Bomb_GBU12_x1: magazine_Bomb_GBU12_x1
	{
		count=1;
		displayName="$STR_A3_Bomb_GBU_12_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		hardpoints[]=
		{
			"B_GBU12",
			"I_GBU12"
		};
		pylonWeapon="weapon_GBU12Launcher";
	};
	class PylonRack_Bomb_GBU12_x2: magazine_Bomb_GBU12_x1
	{
		count=2;
		displayName="$STR_A3_Bomb_GBU_12_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		hardpoints[]=
		{
			"B_GBU12_DUAL_RAIL",
			"I_GBU12_DUAL_RAIL"
		};
		pylonWeapon="weapon_GBU12Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class magazine_Fighter02_Gun30mm_AA_x180: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_30mm_x180_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_30mm_x180_magazine_description";
		ammo="ammo_Fighter02_Gun30mm_AA";
		count=180;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=2;
		nameSound="cannon";
	};
	class magazine_Missile_AA_R73_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_R73_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_R73_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_R73_tooltip";
		ammo="ammo_Missile_AA_R73";
		count=1;
		initSpeed=0;
		maxLeadSpeed=700;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.15307701,0.14503001},
									1
								},
								
								{
									{0.15653799,0.141716},
									1
								},
								
								{
									{0.15923101,0.141716},
									1
								},
								
								{
									{0.15923101,0.113314},
									1
								},
								
								{
									{0.155385,0.110473},
									1
								},
								
								{
									{0.155385,0.0560355},
									1
								},
								
								{
									{0.16,0.0560355},
									1
								},
								
								{
									{0.16,0.052721899},
									1
								},
								
								{
									{0.15653799,0.044674601},
									1
								},
								
								{
									{0.15615401,0.034733701},
									1
								},
								
								{
									{0.15576901,0.0228994},
									1
								},
								
								{
									{0.155385,0.0176923},
									1
								},
								
								{
									{0.154231,0.0134319},
									1
								},
								
								{
									{0.15307701,0.0110651},
									1
								},
								
								{
									{0.151923,0.0091716005},
									1
								},
								
								{
									{0.150769,0.0082248496},
									1
								},
								
								{
									{0.149615,0.0082248496},
									1
								},
								
								{
									{0.149231,0.0082248496},
									1
								},
								
								{
									{0.14769199,0.0082248496},
									1
								},
								
								{
									{0.146538,0.0091716005},
									1
								},
								
								{
									{0.145385,0.0110651},
									1
								},
								
								{
									{0.14461499,0.0134319},
									1
								},
								
								{
									{0.143462,0.0176923},
									1
								},
								
								{
									{0.142692,0.0228994},
									1
								},
								
								{
									{0.142692,0.034733701},
									1
								},
								
								{
									{0.142308,0.044674601},
									1
								},
								
								{
									{0.13846201,0.052721899},
									1
								},
								
								{
									{0.13846201,0.0560355},
									1
								},
								
								{
									{0.143462,0.0560355},
									1
								},
								
								{
									{0.143462,0.110473},
									1
								},
								
								{
									{0.139231,0.113314},
									1
								},
								
								{
									{0.139231,0.141716},
									1
								},
								
								{
									{0.142308,0.141716},
									1
								},
								
								{
									{0.145385,0.14503001},
									1
								},
								
								{
									{0.15307701,0.14503001},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="I";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.0099999998
								},
								1
							};
							right[]=
							{
								{0.17,0.0099999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.035
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.17,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.055
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AA_R77_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_R77_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_R77_tooltip";
		count=1;
		ammo="ammo_Missile_AA_R77";
		initSpeed=0;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.160769,0.106213},
									1
								},
								
								{
									{0.15615401,0.086331397},
									1
								},
								
								{
									{0.15615401,0.0243195},
									1
								},
								
								{
									{0.15923101,0.0243195},
									1
								},
								
								{
									{0.15923101,0.019112401},
									1
								},
								
								{
									{0.15653799,0.0153254},
									1
								},
								
								{
									{0.15346199,-0.0097633097},
									1
								},
								
								{
									{0.152308,-0.0121302},
									1
								},
								
								{
									{0.150769,-0.0135503},
									1
								},
								
								{
									{0.148846,-0.014497},
									1
								},
								
								{
									{0.14692301,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0121302},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14115401,0.0153254},
									1
								},
								
								{
									{0.13846201,0.019112401},
									1
								},
								
								{
									{0.13846201,0.0243195},
									1
								},
								
								{
									{0.14153799,0.0243195},
									1
								},
								
								{
									{0.14153799,0.086331397},
									1
								},
								
								{
									{0.136923,0.106213},
									1
								},
								
								{
									{0.136923,0.119941},
									1
								},
								
								{
									{0.143462,0.118047},
									1
								},
								
								{
									{0.143462,0.144556},
									1
								},
								
								{
									{0.143462,0.14787},
									1
								},
								
								{
									{0.14423101,0.149763},
									1
								},
								
								{
									{0.145769,0.151657},
									1
								},
								
								{
									{0.14730801,0.152604},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.15038501,0.152604},
									1
								},
								
								{
									{0.151923,0.151657},
									1
								},
								
								{
									{0.15307701,0.149763},
									1
								},
								
								{
									{0.154231,0.14787},
									1
								},
								
								{
									{0.154231,0.144556},
									1
								},
								
								{
									{0.154231,0.118047},
									1
								},
								
								{
									{0.160769,0.119941},
									1
								},
								
								{
									{0.160769,0.106213},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.168,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.055
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="D";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.168,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.075000003
								},
								1
							};
						};
						class PylonText3
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.07
								},
								1
							};
							right[]=
							{
								{0.168,0.07},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.094999999
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AGM_KH25_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AGM_KH25_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AGM_KH25_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_Sharur_tooltip";
		ammo="Missile_AGM_01_F";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.160769,0.106213},
									1
								},
								
								{
									{0.15615401,0.086331397},
									1
								},
								
								{
									{0.15615401,0.0243195},
									1
								},
								
								{
									{0.15923101,0.0243195},
									1
								},
								
								{
									{0.15923101,0.019112401},
									1
								},
								
								{
									{0.15653799,0.0153254},
									1
								},
								
								{
									{0.15346199,-0.0097633097},
									1
								},
								
								{
									{0.152308,-0.0121302},
									1
								},
								
								{
									{0.150769,-0.0135503},
									1
								},
								
								{
									{0.148846,-0.014497},
									1
								},
								
								{
									{0.14692301,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0121302},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14115401,0.0153254},
									1
								},
								
								{
									{0.13846201,0.019112401},
									1
								},
								
								{
									{0.13846201,0.0243195},
									1
								},
								
								{
									{0.14153799,0.0243195},
									1
								},
								
								{
									{0.14153799,0.086331397},
									1
								},
								
								{
									{0.136923,0.106213},
									1
								},
								
								{
									{0.136923,0.119941},
									1
								},
								
								{
									{0.143462,0.118047},
									1
								},
								
								{
									{0.143462,0.144556},
									1
								},
								
								{
									{0.143462,0.14787},
									1
								},
								
								{
									{0.14423101,0.149763},
									1
								},
								
								{
									{0.145769,0.151657},
									1
								},
								
								{
									{0.14730801,0.152604},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.15038501,0.152604},
									1
								},
								
								{
									{0.151923,0.151657},
									1
								},
								
								{
									{0.15307701,0.149763},
									1
								},
								
								{
									{0.154231,0.14787},
									1
								},
								
								{
									{0.154231,0.144556},
									1
								},
								
								{
									{0.154231,0.118047},
									1
								},
								
								{
									{0.160769,0.119941},
									1
								},
								
								{
									{0.160769,0.106213},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="I";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.168,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.055
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.168,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.075000003
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
				};
			};
		};
	};
	class magazine_Bomb_KAB250_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Bomb_KAB_250_x1_magazine_name";
		displayNameShort="$STR_A3_Bomb_KAB_250_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_LOM250_tooltip";
		ammo="Bomb_03_F";
		initSpeed=0;
		maxLeadSpeed=30;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.148846,-0.023017799},
									1
								},
								
								{
									{0.148462,-0.023017799},
									1
								},
								
								{
									{0.14692301,-0.022071},
									1
								},
								
								{
									{0.146538,-0.020650901},
									1
								},
								
								{
									{0.146538,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0116568},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14423101,-0.00692308},
									1
								},
								
								{
									{0.145,-0.00597633},
									1
								},
								
								{
									{0.146538,-0.00597633},
									1
								},
								
								{
									{0.14730801,-0.0045562098},
									1
								},
								
								{
									{0.146538,0.0053846198},
									1
								},
								
								{
									{0.142692,0.018639101},
									1
								},
								
								{
									{0.142692,0.022426},
									1
								},
								
								{
									{0.136154,0.031893499},
									1
								},
								
								{
									{0.136154,0.0389941},
									1
								},
								
								{
									{0.141923,0.038047299},
									1
								},
								
								{
									{0.142692,0.039467499},
									1
								},
								
								{
									{0.142692,0.057929002},
									1
								},
								
								{
									{0.14,0.074023701},
									1
								},
								
								{
									{0.14,0.119941},
									1
								},
								
								{
									{0.14153799,0.135089},
									1
								},
								
								{
									{0.131923,0.15497001},
									1
								},
								
								{
									{0.134615,0.16727801},
									1
								},
								
								{
									{0.148846,0.16727801},
									1
								},
								
								{
									{0.149615,0.16727801},
									1
								},
								
								{
									{0.163846,0.16727801},
									1
								},
								
								{
									{0.166538,0.15497001},
									1
								},
								
								{
									{0.156923,0.135089},
									1
								},
								
								{
									{0.158462,0.119941},
									1
								},
								
								{
									{0.158462,0.074023701},
									1
								},
								
								{
									{0.155385,0.057929002},
									1
								},
								
								{
									{0.155385,0.039467499},
									1
								},
								
								{
									{0.15653799,0.038047299},
									1
								},
								
								{
									{0.16230799,0.0389941},
									1
								},
								
								{
									{0.16230799,0.031893499},
									1
								},
								
								{
									{0.155385,0.022426},
									1
								},
								
								{
									{0.155385,0.018639101},
									1
								},
								
								{
									{0.151923,0.0053846198},
									1
								},
								
								{
									{0.150769,-0.0045562098},
									1
								},
								
								{
									{0.151923,-0.00597633},
									1
								},
								
								{
									{0.15307701,-0.00597633},
									1
								},
								
								{
									{0.154231,-0.00692308},
									1
								},
								
								{
									{0.154231,-0.0097633097},
									1
								},
								
								{
									{0.15346199,-0.0116568},
									1
								},
								
								{
									{0.151923,-0.0135503},
									1
								},
								
								{
									{0.151923,-0.020650901},
									1
								},
								
								{
									{0.151154,-0.022071},
									1
								},
								
								{
									{0.148846,-0.023017799},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="L";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.059999999
								},
								1
							};
							right[]=
							{
								{0.175,0.059999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.085000001
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="S";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.079999998
								},
								1
							};
							right[]=
							{
								{0.175,0.079999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.105
								},
								1
							};
						};
						class PylonText3
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.1
								},
								1
							};
							right[]=
							{
								{0.175,0.1},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.125
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AA_R73_x1: magazine_Missile_AA_R73_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R73_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_07_x1_F.p3d";
		hardpoints[]=
		{
			"O_R73"
		};
		pylonWeapon="weapon_R73Launcher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_Missile_AA_R77_x1: magazine_Missile_AA_R77_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F.p3d";
		hardpoints[]=
		{
			"O_R77"
		};
		pylonWeapon="weapon_R77Launcher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_Missile_AA_R77_INT_x1: magazine_Missile_AA_R77_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F.p3d";
		hardpoints[]=
		{
			"O_R77_INT"
		};
		pylonWeapon="weapon_R77Launcher";
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonMissile_Missile_AGM_KH25_x1: magazine_Missile_AGM_KH25_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AGM_KH25_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F.p3d";
		hardpoints[]=
		{
			"O_KH25"
		};
		pylonWeapon="weapon_AGM_KH25Launcher";
	};
	class PylonMissile_Missile_AGM_KH25_INT_x1: PylonMissile_Missile_AGM_KH25_x1
	{
		hardpoints[]=
		{
			"O_KH25_INT"
		};
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonMissile_Bomb_KAB250_x1: magazine_Bomb_KAB250_x1
	{
		count=1;
		displayName="$STR_A3_Bomb_KAB_250_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_KAB250_03_x1_F.p3d";
		hardpoints[]=
		{
			"O_KAB250_BOMB"
		};
		pylonWeapon="weapon_KAB250Launcher";
	};
};
class CfgWeapons
{
	class CannonCore;
	class MissileLauncher;
	class RocketPods;
	class SmokeLauncher;
	class Rifle_Base_F;
	class Cannon_105mm;
	class weapon_LGBLauncherBase: RocketPods
	{
		class LoalAltitude;
	};
	class weapon_Cannon_Phalanx: CannonCore
	{
		scope=1;
		displayName="$STR_A3_Phalanx_weapon_name";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"magazine_Cannon_Phalanx_x1550"
		};
		canLock=0;
		ballisticsComputer=4;
		modes[]=
		{
			"manual",
			"close",
			"medium",
			"far"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="pos_fx";
				directionName="pos_fx_dir";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="pos_fx";
				directionName="pos_fx_dir";
			};
		};
		class manual: CannonCore
		{
			displayName="$STR_A3_Phalanx_weapon_name";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_1",
					2,
					1,
					3000
				};
				begin2[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_2",
					2,
					1,
					3000
				};
				begin3[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_3",
					2,
					1,
					3000
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
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.013;
			dispersion=0.0044999998;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=100;
			soundBurst=0;
			aiBurstTerminable=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=1;
			AIRateOfFireDispersion=0;
			minRange=0;
			minRangeProbab=0.94999999;
			midRange=600;
			midRangeProbab=0.89999998;
			maxRange=900;
			maxRangeProbab=0.89999998;
		};
		class medium: close
		{
			burst=50;
			burstRangeMax=100;
			aiBurstTerminable=1;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=1;
			minRange=600;
			minRangeProbab=0.85000002;
			midRange=900;
			midRangeProbab=0.82999998;
			maxRange=1500;
			maxRangeProbab=0.5;
		};
		class far: close
		{
			burst=30;
			burstRangeMax=90;
			aiBurstTerminable=1;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1;
			minRange=900;
			minRangeProbab=0.82999998;
			midRange=1500;
			midRangeProbab=0.80000001;
			maxRange=3000;
			maxRangeProbab=0.1;
		};
	};
	class weapon_rim116Launcher: MissileLauncher
	{
		weaponLockDelay=3;
		cmImmunity=0.60000002;
		weaponLockSystem=2;
		displayName="$STR_A3_Rim116_weapon_name";
		minRange=50;
		minRangeProbab=0.60000002;
		midRange=2000;
		midRangeProbab=0.94999999;
		maxRange=4000;
		maxRangeProbab=0.85000002;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.316228,
			2.5
		};
		reloadTime=2;
		magazineReloadTime=2;
		magazines[]=
		{
			"magazine_Missile_rim116_x21"
		};
		holdsterAnimValue=1;
		textureType="semi";
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSFired";
				positionName="pos_missile_end";
				directionName="pos_missile";
			};
		};
	};
	class weapon_rim162Launcher: MissileLauncher
	{
		displayName="$STR_A3_Rim162_weapon_name";
		textureType="semi";
		weaponLockDelay=1.5;
		weaponLockSystem=8;
		cmImmunity=0.60000002;
		showAimCursorInternal=0;
		reloadTime=1;
		magazineReloadTime=1;
		aiRateOfFire=15;
		aiRateOfFireDispersion=-10;
		aiRateOfFireDistance=10000;
		minRange=800;
		minRangeProbab=0.5;
		midRange=3500;
		midRangeProbab=0.94999999;
		maxRange=12000;
		maxRangeProbab=1;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.316228,
			2.5
		};
		magazines[]=
		{
			"magazine_Missile_rim162_x8"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSFired";
				positionName="pos_missile_end";
				directionName="pos_missile";
			};
		};
		modes[]=
		{
			"LoalDistance"
		};
		class LoalDistance: MissileLauncher
		{
			displayName="$STR_A3_Rim162_weapon_name";
			textureType="semi";
			reloadTime=1;
			magazineReloadTime=1;
			aiRateOfFire=15;
			aiRateOfFireDispersion=-10;
			aiRateOfFireDistance=10000;
			minRange=800;
			minRangeProbab=0.5;
			midRange=3500;
			midRangeProbab=0.94999999;
			maxRange=12000;
			maxRangeProbab=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_2",
					1.12202,
					1.3,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
				1,
				1.5,
				700
			};
			lockingTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_1",
				0.316228,
				1
			};
			lockedTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_3",
				0.316228,
				2.5
			};
		};
	};
	class weapon_Fighter_Gun20mm_AA: CannonCore
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_weapon_name";
		nameSound="cannon";
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"magazine_Fighter04_Gun20mm_AA_x150",
			"magazine_Fighter04_Gun20mm_AA_x250"
		};
		cursor="EmptyCursor";
		cursorAim="mg";
		showAimCursorInternal=0;
		canLock=0;
		ballisticsComputer="4 + 8";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun1";
				positionName="pos_nosegun";
				directionName="pos_nosegun_dir";
			};
		};
		class manual: CannonCore
		{
			displayName="$STR_A3_Gun_Fighter_20mm_weapon_name";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_1",
					2,
					1,
					3000
				};
				begin2[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_2",
					2,
					1,
					3000
				};
				begin3[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_3",
					2,
					1,
					3000
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
			};
			reloadTime=0.015;
			dispersion=0.0099999998;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.02;
			aiRateOfFireDistance=1;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=5;
			burstRangeMax=25;
			aiBurstTerminable=1;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.94999999;
			midRange=250;
			midRangeProbab=0.89999998;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burstRangeMax=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=2;
			minRange=300;
			minRangeProbab=0.55000001;
			midRange=400;
			midRangeProbab=0.40000001;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			aiRateOfFireDispersion=4;
			minRange=500;
			minRangeProbab=0.25;
			midRange=700;
			midRangeProbab=0.2;
			maxRange=900;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=1500;
			aiRateOfFireDispersion=6;
			minRange=800;
			minRangeProbab=0.15000001;
			midRange=1000;
			midRangeProbab=0.1;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class weapon_AMRAAMLauncher: MissileLauncher
	{
		displayName="$STR_A3_Missile_AMRAAM_weapon_name";
		textureType="semi";
		weaponLockDelay=1.5;
		weaponLockSystem=8;
		cmImmunity=0.69999999;
		showAimCursorInternal=0;
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=15;
		aiRateOfFireDispersion=-10;
		aiRateOfFireDistance=12000;
		minRange=800;
		minRangeProbab=0.5;
		midRange=3500;
		midRangeProbab=0.94999999;
		maxRange=13000;
		maxRangeProbab=1;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"magazine_Missile_AMRAAM_x1",
			"PylonMissile_Missile_AMRAAM_C_x1",
			"PylonRack_Missile_AMRAAM_C_x1",
			"PylonRack_Missile_AMRAAM_C_x2",
			"PylonMissile_Missile_AMRAAM_D_x1",
			"PylonMissile_Missile_AMRAAM_D_INT_x1",
			"PylonRack_Missile_AMRAAM_D_x1",
			"PylonRack_Missile_AMRAAM_D_x2"
		};
		modes[]=
		{
			"LoalDistance"
		};
		class LoalDistance: MissileLauncher
		{
			displayName="$STR_A3_Missile_AMRAAM_weapon_name";
			textureType="semi";
			reloadTime=0.1;
			magazineReloadTime=0.1;
			aiRateOfFire=15;
			aiRateOfFireDispersion=-10;
			aiRateOfFireDistance=10000;
			minRange=800;
			minRangeProbab=0.5;
			midRange=3500;
			midRangeProbab=0.94999999;
			maxRange=13000;
			maxRangeProbab=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_2",
					1.12202,
					1.3,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
				1,
				1.5,
				700
			};
			lockingTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_1",
				0.56234133,
				1
			};
			lockedTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_3",
				0.56234133,
				2.5
			};
		};
	};
	class weapon_BIM9xLauncher: MissileLauncher
	{
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.60000002;
		cursor="EmptyCursor";
		showAimCursorInternal=0;
		displayName="$STR_A3_Missile_AA_9x_weapon_name";
		minRange=250;
		minRangeProbab=0.5;
		midRange=1500;
		midRangeProbab=0.94999999;
		maxRange=5000;
		maxRangeProbab=0.80000001;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		magazines[]=
		{
			"magazine_Missile_BIM9X_x1",
			"PylonMissile_Missile_BIM9X_x1",
			"PylonRack_Missile_BIM9X_x1",
			"PylonRack_Missile_BIM9X_x2"
		};
		textureType="semi";
	};
	class weapon_AGM_65Launcher: RocketPods
	{
		autoFire=0;
		displayName="$STR_A3_Missile_AGM_65_weapon_name";
		magazines[]=
		{
			"magazine_Missile_AGM_02_x1",
			"PylonMissile_Missile_AGM_02_x1",
			"PylonMissile_Missile_AGM_02_x2",
			"PylonRack_Missile_AGM_02_x1",
			"PylonRack_Missile_AGM_02_x2"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_1",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.1,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		cursor="EmptyCursor";
		cursorAim="missile";
		showAimCursorInternal=0;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.44999999;
		minRange=500;
		minRangeProbab=0.94999999;
		midRange=4500;
		midRangeProbab=0.89999998;
		maxRange=9000;
		maxRangeProbab=0.64999998;
	};
	class weapon_GBU12Launcher: weapon_LGBLauncherBase
	{
		displayName="$STR_A3_Bomb_GBU_12_weapon_name";
		magazines[]=
		{
			"magazine_Bomb_GBU12_x1",
			"PylonMissile_Bomb_GBU12_x1",
			"PylonRack_Bomb_GBU12_x2"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		class LoalAltitude: LoalAltitude
		{
			displayName="$STR_A3_Bomb_GBU_12_weapon_name";
		};
	};
	class weapon_Fighter_Gun_30mm: CannonCore
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_30mm_weapon_name";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		showAimCursorInternal=0;
		magazines[]=
		{
			"magazine_Fighter02_Gun30mm_AA_x180"
		};
		canLock=0;
		ballisticsComputer="4 + 8";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun1";
				positionName="nosegun";
				directionName="nosegun_dir";
			};
		};
		class manual: CannonCore
		{
			displayName="$STR_A3_Gun_Fighter_30mm_weapon_name";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_02_Shikra_Cannon_01",
					1.5,
					1,
					3000
				};
				begin2[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_02_Shikra_Cannon_02",
					1.5,
					1,
					3000
				};
				begin3[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_02_Shikra_Cannon_03",
					1.5,
					1,
					3000
				};
				begin4[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_02_Shikra_Cannon_04",
					1.5,
					1,
					3000
				};
				begin5[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_02_Shikra_Cannon_05",
					1.5,
					1,
					3000
				};
				begin6[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_02_Shikra_Cannon_06",
					1.5,
					1,
					3000
				};
				begin7[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_02_Shikra_Cannon_07",
					1.5,
					1,
					3000
				};
				begin8[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_02_Shikra_Cannon_08",
					1.5,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					0.125,
					"begin2",
					0.125,
					"begin3",
					0.125,
					"begin4",
					0.125,
					"begin5",
					0.125,
					"begin6",
					0.125,
					"begin7",
					0.125,
					"begin8",
					0.125
				};
			};
			reloadTime=0.035;
			dispersion=0.0089999996;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=5;
			burstRangeMax=20;
			aiBurstTerminable=1;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.94999999;
			midRange=200;
			midRangeProbab=0.89999998;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burstRangeMax=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=2;
			minRange=300;
			minRangeProbab=0.55000001;
			midRange=400;
			midRangeProbab=0.40000001;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			aiRateOfFireDispersion=4;
			minRange=500;
			minRangeProbab=0.25;
			midRange=700;
			midRangeProbab=0.2;
			maxRange=900;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=1500;
			aiRateOfFireDispersion=6;
			minRange=800;
			minRangeProbab=0.15000001;
			midRange=1000;
			midRangeProbab=0.1;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class weapon_R73Launcher: MissileLauncher
	{
		autoFire=0;
		displayName="$STR_A3_Missile_AA_R73_weapon_name";
		cursor="EmptyCursor";
		cursorAim="missile";
		cursorSize=1;
		showAimCursorInternal=0;
		minRange=75;
		minRangeProbab=0.5;
		midRange=1500;
		midRangeProbab=0.94999999;
		maxRange=5000;
		maxRangeProbab=0.80000001;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		magazines[]=
		{
			"PylonMissile_Missile_AA_R73_x1",
			"magazine_Missile_AA_R73_x1"
		};
		holdsterAnimValue=3;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.55000001;
		textureType="semi";
	};
	class weapon_R77Launcher: MissileLauncher
	{
		autoFire=0;
		displayName="$STR_A3_Missile_AA_R77_weapon_name";
		cursor="EmptyCursor";
		cursorAim="missile";
		showAimCursorInternal=0;
		cursorSize=1;
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=15;
		aiRateOfFireDispersion=-10;
		aiRateOfFireDistance=10000;
		minRange=800;
		minRangeProbab=0.5;
		midRange=3500;
		midRangeProbab=0.94999999;
		maxRange=12000;
		maxRangeProbab=1;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"PylonMissile_Missile_AA_R77_x1",
			"PylonMissile_Missile_AA_R77_INT_x1",
			"magazine_Missile_AA_R77_x1"
		};
		weaponLockDelay=1.5;
		weaponLockSystem=8;
		cmImmunity=0.69999999;
		textureType="semi";
		modes[]=
		{
			"LoalDistance"
		};
		class LoalDistance: MissileLauncher
		{
			displayName="$STR_A3_Missile_AA_R77_weapon_name";
			textureType="semi";
			reloadTime=0.1;
			magazineReloadTime=0.1;
			aiRateOfFire=15;
			aiRateOfFireDispersion=-10;
			aiRateOfFireDistance=10000;
			minRange=800;
			minRangeProbab=0.5;
			midRange=3500;
			midRangeProbab=0.94999999;
			maxRange=13000;
			maxRangeProbab=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_2",
					1.12202,
					1.3,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
				1,
				1.5,
				700
			};
			lockingTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_1",
				0.56234133,
				1
			};
			lockedTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_3",
				0.56234133,
				2.5
			};
		};
	};
	class weapon_AGM_KH25Launcher: MissileLauncher
	{
		autoFire=0;
		displayName="$STR_A3_Missile_AGM_KH25_weapon_name";
		magazines[]=
		{
			"PylonMissile_Missile_AGM_KH25_x1",
			"PylonMissile_Missile_AGM_KH25_INT_x1",
			"magazine_Missile_AGM_KH25_x1"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_1",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.1,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		cursor="EmptyCursor";
		cursorAim="missile";
		showAimCursorInternal=0;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.40000001;
		minRange=300;
		minRangeProbab=0.25;
		midRange=2500;
		midRangeProbab=0.89999998;
		maxRange=9000;
		maxRangeProbab=0.0099999998;
	};
	class weapon_KAB250Launcher: weapon_LGBLauncherBase
	{
		displayName="$STR_A3_Bomb_KAB_250_weapon_name";
		magazines[]=
		{
			"PylonMissile_Bomb_KAB250_x1",
			"magazine_Bomb_KAB250_x1"
		};
		reloadTime=0.1;
		magazineReloadTime=0.5;
		class LoalAltitude: LoalAltitude
		{
			displayName="$STR_A3_Bomb_KAB_250_weapon_name";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyMissile_AA_05_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_05_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_05_fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_05_fly_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_06_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_06_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_06_fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_06_fly_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_07_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_07_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_07_fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_08_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_08_fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_09_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_09_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_09_fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_09_fly_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_10_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_10_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_AA_10_fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_10_fly_F";
		simulation="maverickweapon";
	};
	class ProxyPylonPod_Missile_AA_06_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_06_Rail_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_06_DualRail_x2_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_Rail_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_Rail_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_DualRail_x2_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_DualRail_x2_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_Rail_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_DualRail_x2_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Bomb_GBU12_04_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Bomb_GBU12_04_DualRail_x2_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_Rail_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_DualRail_x2_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_05_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AA_07_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_07_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Bomb_KAB250_03_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_KAB250_03_x1_F";
		simulation="pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_01_x1_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F";
		simulation="pylonpod";
	};
	class ProxyMissile_SAM_01_fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F";
		simulation="maverickweapon";
	};
	class ProxyMissile_SAM_02_fly_F: ProxyWeapon
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F";
		simulation="maverickweapon";
	};
};
