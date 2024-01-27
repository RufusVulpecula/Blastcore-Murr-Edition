class CfgPatches
{
	class fxp_adat
	{
		units[]={};weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Data_F_ParticleEffects",
			"A3_Weapons_F"
		};
	};
};
class CfgVideoOptions
{
	class ObjectsQuality
	{
		class VeryHigh1
		{
			text="ULTRA+1";
			value=2400000;
		};
		class VeryHigh2
		{
			text="ULTRA+2";
			value=3900000;
		};
		class VeryHigh3
		{
			text="ULTRA+3";
			value=7000000;
		};
	};
	class Particles
	{
		class Low
		{
			smokeGenMinDist=1;
		};
		class Normal
		{
			smokeGenMinDist=1;
			highQualityShader=1;
			particlesSoftLimit=17000;
			particlesHardLimit=20000;
		};
		class High
		{
			particlesSoftLimit=18000;
			particlesHardLimit=20000;
			smokeGenMinDist=1;
			smokeGenMaxDist=2000;
			smokeSizeCoef=2;
			smokeIntervalCoef=4;
			smokeZoomCoef=1.42857;
			highQualityShader=1;
			numFullSizeParticles=100;
		};
	};
	class DynamicLights
	{
		class Extreme
		{
			text="Ultra+";
			value=32;
		};
	};
	class TextureQuality
	{
		class VeryHigh2
		{
			text="More Ultra";
			mipBias=-1;
			vramNeeded=796;
		};
	};
	class TerrainQuality
	{
		class VeryHigh2
		{
			text="Ultra+";
			terrainGrid=2.5999999;
		};
	};
	class CloudQuality
	{
		class Extreme
		{
			text="Heavenly";
			value=256;
		};
	};
	class WaterSSReflectionsQuality
	{
		class High2
		{
			text="Splendid";
			value=1.5;
		};
	};
};
class CfgCloudletShapes
{
	bleed_1_f="fxp_adat\universal\bleed_1";
	bleed_2_f="fxp_adat\universal\bleed_2";
	explosion_02_f="fxp_adat\universal\explosion_02";
	explosion_04_f="fxp_adat\universal\explosion_04";
	explosion_05_f="fxp_adat\universal\explosion_05";
	explosion_08_f="fxp_adat\universal\explosion_08";
	explosion_09_f="fxp_adat\universal\explosion_09";
	explosion_11_f="fxp_adat\universal\explosion_11";
	dir_f="fxp_adat\universal\dir";
	dirt_f="fxp_adat\universal\dirt";
	dirt_big_f="fxp_adat\universal\dirt_big";
	stones_f="fxp_adat\universal\stones";
	smoke_f="fxp_adat\universal\smoke";
	smoke_01_f="fxp_adat\universal\smoke_01";
	smoke_02_f="fxp_adat\universal\smoke_02";
	smoke_03_f="fxp_adat\universal\smoke_03";
};
class CfgMuzzleFlashes
{
	MuzzleFlashflare="fxp_adat\universal\flare";
	MuzzleFlashsparkseffect="fxp_adat\universal\sparkseffect";
};
class PreloadTextures
{
	class CfgMuzzleFlashes
	{
		MuzzleFlashflare="@*";
		MuzzleFlashsparkseffect="@*";
	};	
	class CfgCloudletShapes
	{
		bleed_1_f="@*";
		bleed_2_f="@*";
		explosion_02_f="@*";
		explosion_04_f="@*";
		explosion_05_f="@*";
		explosion_08_f="@*";
		explosion_09_f="@*";
		explosion_11_f="@*";
		dir_f="@*";
		dirt_f="@*";
		dirt_big_f="@*";
		stones_f="@*";
		smoke_f="@*";
		smoke_01_f="@*";
		smoke_02_f="@*";
		smoke_03_f="@*";
	};
};
class CfgCloudlets
{
	class Default;
	class ObjectDestructionFire2Small;
	class objectdestructionfire1small;
	class objectdestructionfire2;
	
	class fxp_objectdestructionfire1:objectdestructionfire2{size[]={1.7,0.4};
	};
	
	class fxp_objectdestructionfire1a:fxp_objectdestructionfire1{position[]={0,0,-1};
	};
	
	class fxp_objectdestructionfire1b:fxp_objectdestructionfire1{position[]={0,0,-2};
	};
	
	class fxp_objectdestructionfire2:objectdestructionfire2{size[]={1.4,0.4};
	};
	
	class fxp_objectdestructionfire1small:objectdestructionfire1small{size[]={1.4,0.3};
	};
	
	class fxp_ObjectDestructionFire2Small:ObjectDestructionFire2Small
	{
		size[]={1.4,0.2};
		positionVar[]={0.70000001,0.30000001,0.70000001};
	};
	
	class fxp_ObjectDestructionFire3Small:ObjectDestructionFire2Small{positionVar[]={0,0,0};
	interval="0.005/((speed+0.01)*0.8+5)";
	size[]={0.2,0.02};
	lifeTime="0.005/((speed+0.01)/2+5)";
	};
//////////////////////////Shard
	class fxp_Shard1:Default
	{
		particleEffects="fxp_ShardFire3";
		size[]={1.2};
		interval=0.05;
		particleShape="A3\data_f\ParticleEffects\Shard\shard";
		particleFSLoop=0;
		angleVar=1;
		particleType="SpaceObject";
		lifeTime=120;
		moveVelocity[]={0,5,0};
		rotationVelocity=3;
		weight=40;
		volume=7.9;
		color[]={{1,1,1,1}};
		bounceOnSurface=0;
		lifeTimeVar=0;
		MoveVelocityVar[]={10,10,10};
		rotationVelocityVar=3;
		sizeVar=0.75;
	};
	class fxp_Shard1Static:fxp_Shard1
	{
		particleEffects="fxp_ShardFire1";
		interval=0.03;
		circleRadius=10;
		circleVelocity[]={0.001,0,0.001};
		lifeTime=120;
		weight=1.275;
		volume=1;
		rubbing=0;
		lifeTimeVar=0;
		positionVar[]={5,0,5};
		moveVelocity[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
	};
	
	class fxp_Shard2:fxp_Shard1
	{
		size[]={0.7};
		moveVelocity[]={0,6,0};
		rotationVelocity=2;
		lifeTimeVar=0;
		MoveVelocityVar[]={15,15,15};
		rotationVelocityVar=2;
		sizeVar=0.35;
	};
	
	class fxp_Shard2Static:fxp_Shard1Static
	{
		particleEffects="fxp_ShardFire2";
		size[]={0.7};
		interval=0.02;
		sizeVar=0.35;
	};
	
class fxp_Shard3:fxp_Shard2{size[]={0.5};
	interval=0.03;
	moveVelocity[]={0,8,0};
	rotationVelocity=1;
	lifeTimeVar=0;
	MoveVelocityVar[]={20,20,20};
	rotationVelocityVar=1;
	sizeVar=0.25;
	};
	
class fxp_Shard3Static:fxp_Shard1Static{particleEffects="fxp_ShardFire3";
	size[]={0.5};
	interval=0.01;
	sizeVar=0.25;
	};
	
//++++++++++++++++++++++++++++++++++++++++++++++
class fxp_ShardSmokeLink:Default{interval="0.08/((speed+0.01)*0.8+1)";
	particleShape="fxp_adat\universal\smoke_03";angleVar=1;lifeTime=1.2;moveVelocity[]={0,0.6,0};weight=0.05;volume=0.04;rubbing=0.22;size[]={0.1,0.6};color[]={{0.1,0.1,0.1,0.6},{0.2,0.2,0.2,0.4},{0.2,0.2,0.2,0.2},{0.3,0.3,0.3,0.1},{0.4,0.4,0.4,0.005}};animationSpeed[]={1.5,0.5};randomDirectionPeriod=0.4;randomDirectionIntensity=0.02;lifeTimeVar=0.5;positionVar[]={0.08,0.04,0.08};MoveVelocityVar[]={0.08,0.1,0.08};sizeVar=0.1;randomDirectionPeriodVar=0.1;randomDirectionIntensityVar=0.01;};
//class DirtArtyMed:Default{interval=0.004;particleShape="fxp_adat\universal\dirt";particleFSLoop=0;angleVar=360;lifeTime=2;moveVelocity[]={0,70,0};rotationVelocity=5;weight=30;volume=1;rubbing=2;size[]={8};color[]={{0.3,0.2,0.1,3},{0.3,0.2,0.1,0}};lifeTimeVar=0.5;positionVar[]={0.5,5,0.5};MoveVelocityVar[]={30,70,30};rotationVelocityVar=1;sizeVar=0.5;destroyOnWaterSurface=1;};
//class DirtArtyBig:Default{interval=0.001;particleShape="fxp_adat\universal\dirt";particleFSLoop=0;angleVar=360;lifeTime=6;moveVelocity[]={0,45,0};rotationVelocity=5;weight=30;volume=1;rubbing=2;size[]={6};color[]={{0.31,0.2,0.1,3},{0.31,0.2,0.1,0}};lifeTimeVar=0.5;positionVar[]={1,1,1};MoveVelocityVar[]={25,45,25};rotationVelocityVar=1;sizeVar=0.5;randomDirectionPeriodVar=0destroyOnWaterSurface=1;};
};
class fxp_ShardFire1{class Light{simulation="light";
	type="fxp_ShardLightLink";
	intensity=1;
	interval=1;
	position[]={0,0,0};
	lifeTime=30;
	enabled="distToWater";
	};
	
class Smoke:Light{simulation="particles";
	type="fxp_ShardSmokeLink";
	};
	class Firee:Smoke{type="fxp_ObjectDestructionFire3Small";
	};
	};
	
class fxp_ShardFire2{class Light{simulation="light";
	type="fxp_ShardLightLink";
	intensity=1;
	interval=1;
	position[]={0,0,0};
	lifeTime=20;
	enabled="distToWater";
	};
	
class Smoke:Light{simulation="particles";
	type="fxp_ShardSmokeLink";
	};
	class Firee:Smoke{type="fxp_ObjectDestructionFire3Small";
	};
	};
	
class fxp_ShardFire3{class Light{simulation="light";
	type="fxp_ShardLightLink";
	intensity=1;
	interval=1;
	position[]={0,0,0};
	lifeTime=12;
	enabled="distToWater";
	};
	
class Smoke:Light{simulation="particles";
	type="fxp_ShardSmokeLink";
	};
	class Firee:Smoke{type="fxp_ObjectDestructionFire3Small";
	};
	};

class CfgLights{
class fxp_ShardLightLink{diffuse[]={1,0.5,0.2};color[]={1,0.5,0.2};ambient[]={0,0,0,0};brightness=10;intensity=3000;blinking=0;drawLight=0;flareSize=0.1;flareMaxDistance=6500;useFlare=1;class Attenuation{start=0;constant=0;linear=0;quadratic=5;};position[]={0,0,0};};
class fxp_VEELight{diffuse[]={0,0,0};color[]={1,0.45,0.15};ambient[]={0.1,0.04,0.015};brightness=200;intensity=50000;size=1;drawLight=0;blinking=0;flareSize=15;flareMaxDistance=5000;useFlare=0;class Attenuation{start=4;constant=0;linear=0;quadratic=0.2;hardLimitStart=1000;hardLimitEnd=2000;};position[]={0,0,0};};
class fxp_VEEBLight{diffuse[]={0,0,0};color[]={1,0.45,0.15};ambient[]={0.1,0.04,0.015};brightness=100;intensity=30000;size=1;drawLight=0;blinking=0;flareSize=15;flareMaxDistance=5000;useFlare=0;class Attenuation{start=4;constant=0;linear=0;quadratic=0.2;hardLimitStart=1000;hardLimitEnd=2000;};position[]={0,0,0};};
};