class CfgPatches
{
	class WarFXPE
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Data_F_aow_Loadorder"
		};
	};
};
class cfgFunctions
{
	class WarFXPE
	{
		class effects
		{
			file = "WarFXPE\scripts\functions";
			class heatHaze {};

			// Refract effects
			class blastRefractEffectVeryLarge {};
			class blastRefractEffectLarge {};
			class blastRefractEffectMedium {};
			class blastRefractEffectSmall {};
			class blastRefractEffectTiny {};

			// Blast wave effects
			class blastWaveEffectHuge {};
			class blastWaveEffectLarge {};
			class blastWaveEffectMedium {};
			class blastWaveEffectSmall {};
		};
	};
};
class CfgCloudletShapes
{
	cloudletUniversal="\A3\data_f\ParticleEffects\Universal\Universal.p3d";
	Afterburner="WarFXPE\ParticleEffects\Universal\Afterburner.p3d";
	Explosion_01="WarFXPE\ParticleEffects\Universal\Explosion_01.p3d";
	Explosion_04="WarFXPE\ParticleEffects\Universal\Explosion_04.p3d";
	Explosion_05="WarFXPE\ParticleEffects\Universal\Explosion_05.p3d";
	Explosion_07="WarFXPE\ParticleEffects\Universal\Explosion_07.p3d";
	Explosion_08="WarFXPE\ParticleEffects\Universal\Explosion_08.p3d";
	Explosion_09="WarFXPE\ParticleEffects\Universal\Explosion_09.p3d";
	Explosion_11="WarFXPE\ParticleEffects\Universal\Explosion_11.p3d";
	Explosion_12="WarFXPE\ParticleEffects\Universal\Explosion_12.p3d";
	LargeFire_01="WarFXPE\ParticleEffects\Universal\LargeFire_01.p3d";
	Smoke="WarFXPE\ParticleEffects\Universal\Smoke.p3d";
	Smoke_01="WarFXPE\ParticleEffects\Universal\Smoke_01.p3d";
	Smoke_02="WarFXPE\ParticleEffects\Universal\Smoke_02.p3d";
	Smoke_03="WarFXPE\ParticleEffects\Universal\Smoke_03.p3d";
	Smoke_W="warfxWeps\ParticleEffects\Universal\Smoke.p3d";
	Smoke_01_W="warfxWeps\ParticleEffects\Universal\Smoke_01.p3d";
	Smoke_02_W="warfxWeps\ParticleEffects\Universal\Smoke_02.p3d";
	Smoke_03_W="warfxWeps\ParticleEffects\Universal\Smoke_03.p3d";
	RocketSparks="WarFXPE\ParticleEffects\Universal\rocketSparks.p3d";
	Dirt="WarFXPE\ParticleEffects\Universal\Dirt.p3d";
	Dirt_big="WarFXPE\ParticleEffects\Universal\Dirt_big.p3d";
};
class PreloadTextures
{
	class CfgCloudletShapes
	{
		Explosion_01="@*";
		Explosion_04="@*";
		Explosion_05="@*";
		Explosion_07="@*";
		Explosion_08="@*";
		Explosion_09="@*";
		Explosion_11="@*";
		Explosion_12="@*";
		LargeFire_01="@*";
		Smoke="@*";
		Smoke_01="@*";
		Smoke_02="@*";
		Smoke_03="@*";
		smoke_W="@*";
		smoke_01_W="@*";
		smoke_02_W="@*";
		smoke_03_W="@*";
		RocketSparks="@*";
		Dirt="@*";
		Dirt_big="@*";
	};
};
