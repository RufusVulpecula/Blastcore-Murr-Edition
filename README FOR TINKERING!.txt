Reference folder consists of some relevant vanilla arma 3 config files.
	They are there to provide a reference to vanilla behavior just to compare.

Check "WarFXPE\maincore\config.cpp" for "cfgammo" part of the mod.
	

----------------------------------------------

	class G_40mm_HE: GrenadeBase
	{
		CraterEffects="GrenadeCrater";
		explosionEffects="40mm_HE_Explode";
	};

----------------------------------------------


	The above part defines the explosion and crater effect of 40mm grenades.

	"class 40mm_HE_Explode" is a complex effect. It is defined in "\WarFXPE\ParticleEffects\config.cpp"


----------------------------------------------

		class 40mm_HE_Explode
		{
			class fxp_Spark1
			{
				simulation="particles";
				type="fxp_LauSpark1";
				position[]={0,0,0};
				intensity=1;
				interval=1;
				lifeTime=0.075;
			};
			class DarkSmokeSmall
			{
				simulation="particles";
				type="DarkSmokeSmall";
				position[]={0,0,0};
				intensity=1;
				interval=1;
				lifeTime=0.5;
			};
			class FlashSmokeSmall
			{
				simulation="particles";
				type="FlashSmokeSmall";
				position[]={0,0,0};
				intensity=1;
				interval=1;
				lifeTime=0.5;
			};
			class LightExp
			{
				position[]={0,0,0};
				simulation="light";
				type="Goko_bulletexplo";
				intensity=1;
				interval=1;
				lifeTime=0.2;
			};
			class Dirt
			{
				simulation="particles";
				type="Dirtsmall";
				position[]={0,0,0};
				intensity=0.1;
				interval=1;
				lifeTime=0.2;
			};
			class debris_small
			{
				simulation="particles";
				type="debris_grenade";
				position[]={0,0,0};
				intensity=0.1;
				interval=1;
				lifeTime=0;
			};
			class GrenadeExp1
			{
				simulation="particles";
				type="GrenadeExp";
				position[]={0,0,0};
				intensity=0.1;
				interval=1;
				lifeTime=0.2;
			};
			class SparkSmallFast
			{
				simulation="particles";
				type="30mmsparks";
				position[]={0,0,0};
				intensity=0.1;
				interval=1;
				lifeTime=0.1;
			};
			class Sparks_small
			{
				simulation="particles";
				type="Sparks_small";
				position[]={0,0,0};
				intensity=0.1;
				interval=1;
				lifeTime=0.1;
			};
			class ExploAmmoSmoke1
			{
				simulation="particles";
				type="ExploAmmoSmoke1";
				position[]={0,0,0};
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class RocketDust
			{
				simulation="particles";
				type="ExplosionDustSmall";
				position[]={0,0,0};
				intensity=0.1;
				interval=1;
				lifeTime=1;
			};
		};

----------------------------------------------

	"class DarkSmokeSmall" is a particle. It is defined in the same file in "cfgParticles" part.



	Complex effects can be defined in another config.cpp file, anywhere.
		Check "\blast_refract\config.cpp"
		You can see that "40mm_HE_Explode" is defined here again. Any additional particles defined under this complex effect is added to the previous one. If one particle name, such as "class DarkSmokeSmall" is defined here again, it will override the previous one, depending on the load order of the config.cpp files.
			To define the load order, check the "cfgPatches" part of the files.


	For "WarFXPE\maincore\config.cpp" file:

----------------------------------------------

		class CfgPatches
		{
			class Blastcore_VEP
			{
				units[]={};
				weapons[]={};
				requiredVersion=0.1;
				requiredAddons[]=
				{
					"A3_Data_F",
					"A3_Data_F_ParticleEffects",
					"A3_Weapons_F",
					"A3_Soft_F",
					"A3_Soft_F_Quadbike_01",
					"A3_Soft_F_Gamma",
					"A3_Soft_F_Gamma_Truck_01",
					"A3_Soft_F_Gamma_Truck_02",
					"A3_Weapons_F_Exp",
					"A3_Weapons_F_Tank",
					"WarFXPE",
					"blast_refract",
					"fxp_VehExpEffect",
					"fxp_VehExpEffectBig",
					"fxp_VehTank",
					"fxp_VehHeli",
					"fxp_VehPlane",
					"fxp_adat",
					"CBA_Extended_EventHandlers",
					"CBA_MAIN"
				};
			};
		};

----------------------------------------------

	"requiredAddons[]=" part defines the required files that need to be loaded before this one. So any definitions made previously by these files will be overwrittern or if not mentioned, will be inherited.















