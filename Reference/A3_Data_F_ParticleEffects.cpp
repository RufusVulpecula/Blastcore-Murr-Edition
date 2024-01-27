class CfgPatches
{
	class A3_Data_F_ParticleEffects
	{
		addonRootClass="A3_Data_F";
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Crater",
			"CraterLong",
			"CraterLong_small"
		};
		weapons[]={};
	};
};
class ScrollBar
{
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.30000001};
	thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow=0;
	scrollSpeed=0.059999999;
};
class CfgCloudlets
{
	class Flare1
	{
		animationSpeedCoef=1;
		colorCoef[]={0.69999999,0.69999999,0.69999999,0.69999999};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angle=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.278;
		volume=1;
		rubbing=0.5;
		size[]={0.15000001,1.8,2.8};
		color[]=
		{
			{0.22,0.22,0.22,0.34999999},
			{0.25,0.25,0.25,0.22},
			{0.25,0.25,0.25,0.1},
			{0.25,0.25,0.25,0.039999999},
			{0.25,0.25,0.25,0.0099999998}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		positionVarConst[]={0,0,0};
		MoveVelocityVar[]={0.25,0.25,0.25};
		MoveVelocityVarConst[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Flare2: Flare1
	{
		interval=0.00069999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angle=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.050000001;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=0;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={0.079999998,0.07};
		color[]=
		{
			{1,1,1,-1.6},
			{1,1,1,-1.6},
			{1,1,1,-1.6},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.0099999998;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1,0.2,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Cmeasures1
	{
		animationSpeedCoef=1;
		colorCoef[]={0.69999999,0.69999999,0.69999999,0.69999999};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angle=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={0.30000001,3,3.125,3.25,3.375,3.5,3.625,3.75,3.875,4};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.40000001},
			{1,1,1,0.25},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		positionVarConst[]={0,0,0};
		MoveVelocityVar[]={0.5,0.5,0.5};
		MoveVelocityVarConst[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Cmeasures1M: Cmeasures1
	{
		interval=0.02;
		lifeTime=2;
		size[]={0.30000001,3,3.125,3.25,3.375,3.5,3.625,3.75,3.875,4};
		lifeTimeVar=0.5;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.5,0.5,0.5};
		sizeVar=0.30000001;
	};
	class Cmeasures1L: Cmeasures1M
	{
		interval=0.02;
		lifeTime=0.80000001;
		size[]={0.30000001,3,3.125,3.25,3.375,3.5,3.625,3.75,3.875,4};
		lifeTimeVar=0.30000001;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.5,0.5,0.5};
		sizeVar=0.30000001;
	};
	class Cmeasures2: Cmeasures1
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angle=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.079999998;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={2,0};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-4},
			{1,1,1,-2},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.02;
		positionVar[]={0.15000001,0.15000001,0.15000001};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Cmeasures3
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth=16;
		particleFSIndex=14;
		particleFSFrameCount=5;
		particleFSLoop=1;
		angle=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={2,4,4,4,4,4,4};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=3;
		positionVar[]={2,2,2};
		positionVarConst[]={0,0,0};
		MoveVelocityVar[]={3,3,3};
		MoveVelocityVarConst[]={0,0,0};
		rotationVelocityVar=10;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		position[]={0,0,0};
	};
	class Default
	{
		interval="0.5 * interval + 0.5";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\Data_f\cl_basic.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angle=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1;
		volume=1;
		rubbing=0.050000001;
		size[]={1,1};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		position[]={0,0,0};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		positionVarConst[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		MoveVelocityVarConst[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		animationSpeedCoef=1;
	};
	class TestEmitterEffect: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0;
		size[]={0.1};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmallDestructionFire: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=0.0515;
		volume=0.039999999;
		rubbing=0;
		size[]={0.15000001,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.80000001,0.80000001,-80},
			{1,0.80000001,0.80000001,-80},
			{0,0,0,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.02,0.0099999998};
		moveVelocityVar[]={0.0099999998,0.0099999998,0.0099999998};
		rotationVelocityVar=0;
		sizeVar=0.059999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmallDestructionSmoke: Default
	{
		interval=0.064999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,0.60000002,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.15000001,3};
		sizeCoef=1;
		color[]=
		{
			{0.1,0.1,0.1,0.059999999},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.40000001,0.40000001,0.40000001,0.0049999999}
		};
		colorCoef[]={3,3,3,1.5};
		animationSpeed[]={1.5,0.5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		position[]={0,0,0};
		positionVar[]={0.079999998,0.039999999,0.079999998};
		MoveVelocityVar[]={0.079999998,0.1,0.079999998};
		rotationVelocityVar=10;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=0.0099999998;
	};
	class MediumDestructionFire: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.60000002;
		moveVelocity[]={0,0.69999999,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.64999998,0.050000001};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.15000001;
		positionVar[]={0.30000001,0.1,0.30000001};
		moveVelocityVar[]={0.050000001,0.15000001,0.050000001};
		rotationVelocityVar=10;
		sizeVar=0.029999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
	};
	class MediumDestructionSmoke: Default
	{
		interval=0.090000004;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=12;
		moveVelocity[]={0,1.2,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.80000001,9};
		sizeCoef=1;
		color[]=
		{
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.40000001,0.40000001,0.40000001,0.0049999999}
		};
		colorCoef[]={3,3,3,3.2};
		animationSpeed[]={1.5,0.5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=4;
		position[]={0,0,0};
		positionVar[]={0.2,0.1,0.2};
		MoveVelocityVar[]={0.15000001,0.2,0.15000001};
		rotationVelocityVar=10;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=0.050000001;
	};
	class MediumSmoke: Default
	{
		interval=0.079999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		moveVelocity[]={0,1.2,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.1;
		size[]={1.2,10};
		sizeCoef=1;
		color[]=
		{
			{0.1,0.1,0.1,0.059999999},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.40000001,0.40000001,0.40000001,0.0049999999}
		};
		colorCoef[]={1.6,1.6,1.6,1.8};
		animationSpeed[]={1.5,0.5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=4;
		position[]={0,0,0};
		positionVar[]={0.5,0.30000001,0.5};
		MoveVelocityVar[]={0.15000001,0.2,0.15000001};
		rotationVelocityVar=10;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=0.050000001;
	};
	class BigDestructionFire: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={1.8,0.12};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.40000001;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.1;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
	};
	class BigDestructionSmoke: Default
	{
		interval=0.079999998;
		circleRadius=1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=22;
		moveVelocity[]={0,2.5,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={2,20};
		color[]=
		{
			{0.34999999,0.34999999,0.34999999,0.60000002},
			{0.34999999,0.34999999,0.34999999,0.75},
			{0.34999999,0.34999999,0.34999999,0.44999999},
			{0.41999999,0.41999999,0.41999999,0.28},
			{0.41999999,0.41999999,0.41999999,0.16},
			{0.41999999,0.41999999,0.41999999,0.090000004},
			{0.41999999,0.41999999,0.41999999,0.059999999},
			{0.5,0.5,0.5,0.02},
			{0.5,0.5,0.5,0}
		};
		colorCoef[]={0.5,0.5,0.5,0.60000002};
		animationSpeed[]={1,0.55000001,0.34999999};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=8;
		positionVar[]={0.15000001,0.15000001,0.15000001};
		MoveVelocityVar[]={0.25,0.5,0.25};
		rotationVelocityVar=0.5;
		sizeVar=0;
		colorVar[]={0,0,0,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DustMan: Default
	{
		interval=0.039999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,0.15000001,0};
		rotationVelocity=1;
		weight=1.277;
		volume=1;
		rubbing=0.1;
		size[]={0.079999998,0.5,1.1,2.2};
		sizeCoef=1;
		color[]=
		{
			{0.25,0.25,0.2,0.80000001},
			{0.25,0.25,0.2,0.5},
			{0.25,0.25,0.2,0.40000001},
			{0.25,0.25,0.2,0.33000001},
			{0.25,0.25,0.2,0.25},
			{0.25,0.25,0.2,0.18000001},
			{0.25,0.25,0.2,0.0099999998},
			{0.25,0.25,0.2,0}
		};
		colorCoef[]={0.60000002,0.60000002,0.60000002,0.14};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.12;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.30000001;
		position[]={0,0,0};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=5;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AmmoExplosionParticles: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.25999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.27;
		volume=1;
		rubbing=0.050000001;
		size[]={1.2};
		color[]=
		{
			{1,1,1,-15},
			{1,1,1,-12}
		};
		animationSpeed[]={2};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={0.2,0.30000001,0.2};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AmmoSmokeParticles1: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=0;
		weight=1.27;
		volume=1;
		rubbing=0.15000001;
		size[]={0.60000002,2.8,3.5,4};
		color[]=
		{
			{0.5,0.5,0.5,0.69999999},
			{0.60000002,0.60000002,0.60000002,0.40000001},
			{0.69999999,0.69999999,0.69999999,0.2},
			{0.80000001,0.80000001,0.80000001,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.60000002,0.60000002,0.60000002};
		rotationVelocityVar=10;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AmmoSmokeParticles2: Default
	{
		interval=0.079999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=0;
		weight=1.265;
		volume=1;
		rubbing=0.15000001;
		size[]={0.60000002,2.8,3.5,4};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.60000002},
			{0.80000001,0.80000001,0.80000001,0.44999999},
			{0.89999998,0.89999998,0.89999998,0.25},
			{1,1,1,0.12},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={0.2};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.80000001,0.40000001,0.80000001};
		rotationVelocityVar=10;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AmmoBulletCore: Default
	{
		interval=0.039999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.050000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.1};
		color[]=
		{
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=2;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		particleEffects="AmmoBulletEffect";
		blockAIVisibility=0;
		lifeTimeVar=0;
		positionVar[]={0.34999999,0.60000002,0.34999999};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AmmoExpSparks: Default
	{
		interval=0.045000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.050000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.02};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.60000002,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=2;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AmmoLightSmokeParticles: Default
	{
		interval=0.045000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=1;
		particleFSFrameCount=4;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.050000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.25};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.30000001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=30;
		sizeVar=0.079999998;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExplosionParticles: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=1;
		particleFSFrameCount=20;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.13;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 1",
			"0.0125 * intensity + 8",
			"0.0125 * intensity + 1"
		};
		color[]=
		{
			{1,1,1,-8},
			{1,1,1,-1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={0.2,0.5,0.2};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineExplosionParticles: Default
	{
		interval=0.079999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.40000001;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]={1,2,3,1};
		color[]=
		{
			{1,1,1,-2},
			{1,1,1,-2},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,0.30000001,0};
		MoveVelocityVar[]={0.2,0.30000001,0.2};
		rotationVelocityVar=15;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ATMineExplosionParticles: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.40000001;
		moveVelocity[]={0,4,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]={1,2,3,1};
		color[]=
		{
			{1,1,1,-10},
			{1,1,1,-8},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,1,0};
		MoveVelocityVar[]={0.2,6,0.2};
		rotationVelocityVar=15;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SecondaryExp: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1.5;
		lifeTime=0.89999998;
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.1;
		size[]={1.5,4};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-1.5},
			{1,1,1,-0.30000001},
			{1,1,1,0}
		};
		animationSpeed[]={0.75};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={1.5,1,1.5};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class VehExplosionParticles: Default
	{
		interval="0.03 * interval + 0.03";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.25;
		moveVelocity[]={0,4,0};
		rotationVelocity=0;
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.1;
		size[]={5,7};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.33000001};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={2,1,2};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class VehExplosionParticlesSmall: Default
	{
		interval="0.03 * interval + 0.03";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.25;
		moveVelocity[]={0,4,0};
		rotationVelocity=0;
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.1;
		size[]={3,4.5};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.33000001};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={2,1,2};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class FireBallBright: Default
	{
		interval="0.05 * interval + 0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.039999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 4",
			"0.0125 * intensity + 6"
		};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={1.3};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={1.5,2,1.5};
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class FireBallBrightSmall: Default
	{
		interval="0.05 * interval + 0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=0;
		weight=0.039999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 6"
		};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class VehExpSmoke: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.025;
		size[]={7,12,15};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0},
			{0.40000001,0.40000001,0.40000001,0.30000001},
			{0.60000002,0.5,0.5,0.40000001},
			{0.69999999,0.69999999,0.69999999,0.30000001},
			{0.80000001,0.80000001,0.80000001,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5,0.30000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={1.8,1.5,1.8};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class VehExpSmokeSmall: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.025;
		size[]={3,7,10};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0},
			{0.40000001,0.40000001,0.40000001,0.30000001},
			{0.60000002,0.5,0.5,0.40000001},
			{0.69999999,0.69999999,0.69999999,0.30000001},
			{0.80000001,0.80000001,0.80000001,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5,0.30000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2.5;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={1.8,1,1.8};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class VehExpSmoke2: Default
	{
		interval="0.03 * interval + 0.03";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.079999998;
		size[]=
		{
			"0.0125 * intensity + 3",
			"0.0125 * intensity + 6",
			"0.0125 * intensity + 8"
		};
		color[]=
		{
			{0.5,0.5,0.5,0.69999999},
			{0.5,0.5,0.5,0.64999998},
			{0.5,0.5,0.5,0.55000001},
			{0.5,0.5,0.5,0.30000001},
			{0.60000002,0.60000002,0.60000002,0.059999999},
			{0.80000001,0.80000001,0.80000001,0}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={1,2,1};
		MoveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class VehExpSmoke2Small: Default
	{
		interval="0.035 * interval + 0.035";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,1.3,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.11;
		size[]=
		{
			"0.0125 * intensity + 3",
			"0.0125 * intensity + 6",
			"0.0125 * intensity + 8"
		};
		color[]=
		{
			{0.5,0.5,0.5,0.69999999},
			{0.5,0.5,0.5,0.64999998},
			{0.5,0.5,0.5,0.55000001},
			{0.5,0.5,0.5,0.30000001},
			{0.60000002,0.60000002,0.60000002,0.059999999},
			{0.80000001,0.80000001,0.80000001,0}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={1,2,1};
		MoveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WPCloud: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=12;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]={5,10,13,16,18,20,21,22};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=4;
		positionVar[]={4,3,4};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WPTrails: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.07;
		lifeTime=5;
		moveVelocity[]={0,6,0};
		rotationVelocity=0;
		weight=15;
		volume=7.9000001;
		rubbing=0.1;
		size[]={0.5};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		particleEffects="WPTrailEffectMain2";
		lifeTimeVar=1;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={10,5,10};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class FuelStationSmk1: Default
	{
		interval="0.0005 * interval + 0.0005";
		circleRadius=10;
		circleVelocity[]={5,0,5};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 8",
			"0.0125 * intensity + 9",
			"0.0125 * intensity + 10",
			"0.0125 * intensity + 11"
		};
		color[]=
		{
			{0.1,0.1,0.1,0},
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0.050000001},
			{0.1,0.1,0.1,0.050000001},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.5,0.5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.34999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={3,2,3};
		MoveVelocityVar[]={5,5,5};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class FuelFire1: Default
	{
		interval="0.01 * fireInterval + 0.01";
		circleRadius=1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=2.3;
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.25 * intensity + 2",
			"1.25 * intensity + 0.3"
		};
		color[]=
		{
			{1,1,1,0},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.69999999;
		positionVar[]=
		{
			"2 + 1.1 * intensity",
			0.30000001,
			"2 + 1.1 * intensity"
		};
		moveVelocityVar[]={0.1,1.2,0.1};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=5;
		coreDistance=3.5;
		damageTime=0.1;
		constantDistance=0.30000001;
		damageType="Fire";
	};
	class SmallSmokeFast1: Default
	{
		interval="0.03 * interval + 0.03";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125 * intensity + 7",
			"0.0125 * intensity + 11",
			"0.0125 * intensity + 14",
			"0.0125 * intensity + 16"
		};
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,1},
			{0.69999999,0.69999999,0.69999999,0.60000002},
			{0.89999998,0.89999998,0.89999998,0.30000001},
			{1,1,1,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=4;
		positionVar[]={4,3,4};
		MoveVelocityVar[]={3,2,3};
		rotationVelocityVar=20;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudBigLight: Default
	{
		interval="0.02 * interval + 0.015";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125 * intensity + 7",
			"0.0125 * intensity + 11",
			"0.0125 * intensity + 14",
			"0.0125 * intensity + 16"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.28},
			{0.89999998,0.89999998,0.89999998,0.16},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=4;
		positionVar[]={4,3,4};
		MoveVelocityVar[]={3,2,3};
		rotationVelocityVar=20;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudMediumLight: Default
	{
		interval="0.02 * interval + 0.015";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.2;
		size[]=
		{
			"0.0125 * intensity + 5",
			"0.0125 * intensity + 8",
			"0.0125 * intensity + 10",
			"0.0125 * intensity + 12"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.16},
			{0.80000001,0.80000001,0.80000001,0.090000004},
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=4;
		positionVar[]={3,2.5,3};
		MoveVelocityVar[]={3,2,3};
		rotationVelocityVar=12;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudSmallLight: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,3.2,0};
		rotationVelocity=0;
		weight=0.51999998;
		volume=0.40000001;
		rubbing=0.40000001;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 4",
			"0.0125 * intensity + 5",
			"0.0125 * intensity 6"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.22},
			{0.80000001,0.80000001,0.80000001,0.13},
			{0.80000001,0.80000001,0.80000001,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.029999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.5,1.5,0.5};
		MoveVelocityVar[]={1.7,3.5,1.7};
		rotationVelocityVar=10;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ATCloudSmallLight: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,23,0};
		rotationVelocity=0;
		weight=0.51999998;
		volume=0.40000001;
		rubbing=0.44999999;
		size[]={2,4,5,6};
		color[]=
		{
			{0.25,0.25,0.25,0.40000001},
			{0.30000001,0.30000001,0.30000001,0.34999999},
			{0.30000001,0.30000001,0.30000001,0.28},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.5,1.5,0.5};
		MoveVelocityVar[]={2.5,30,2.5};
		rotationVelocityVar=10;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ATCloudSmallLightM: ATCloudSmallLight
	{
		interval=0.003;
	};
	class CloudSmallLight1: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=0;
		weight=0.51999998;
		volume=0.40000001;
		rubbing=0.40000001;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 4",
			"0.0125 * intensity + 5",
			"0.0125 * intensity 6"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.22},
			{0.80000001,0.80000001,0.80000001,0.13},
			{0.80000001,0.80000001,0.80000001,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.029999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.5,0.5,0.5};
		MoveVelocityVar[]={3.5,3.5,3.5};
		rotationVelocityVar=10;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudSmallLight2: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]=
		{
			"13 * explosionDirX",
			1.5,
			"13 * explosionDirZ"
		};
		rotationVelocity=0;
		weight=1.272;
		volume=1;
		rubbing=0.60000002;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 4",
			"0.0125 * intensity + 5",
			"0.0125 * intensity 6"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.25999999},
			{0.80000001,0.80000001,0.80000001,0.16},
			{0.80000001,0.80000001,0.80000001,0.1},
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.5,1.5,0.5};
		MoveVelocityVar[]={11,1.8,11};
		rotationVelocityVar=10;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudSmallLight3: Default
	{
		interval=0.00050000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]=
		{
			"13 * explosionDirX",
			1.5,
			"13 * explosionDirZ"
		};
		rotationVelocity=0;
		weight=1.272;
		volume=1;
		rubbing=0.60000002;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 5",
			"0.0125 * intensity + 6.5",
			"0.0125 * intensity + 7.5"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.22},
			{0.80000001,0.80000001,0.80000001,0.14},
			{0.80000001,0.80000001,0.80000001,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.5,1.5,0.5};
		MoveVelocityVar[]={6,1.8,6};
		rotationVelocityVar=10;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudSmallLight3L: Default
	{
		interval=0.0015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]=
		{
			"13 * explosionDirX",
			1.5,
			"13 * explosionDirZ"
		};
		rotationVelocity=0;
		weight=1.272;
		volume=1;
		rubbing=0.60000002;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 5",
			"0.0125 * intensity + 6.5",
			"0.0125 * intensity + 7.5"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.22},
			{0.80000001,0.80000001,0.80000001,0.14},
			{0.80000001,0.80000001,0.80000001,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.5,1.5,0.5};
		MoveVelocityVar[]={6,1.8,6};
		rotationVelocityVar=10;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineJumpEffect: Default
	{
		interval=0.00050000002;
		circleRadius=0.001;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=0;
		weight=0.51999998;
		volume=0.40000001;
		rubbing=0.40000001;
		size[]={0.2,0.40000001,0.5,0.56};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.15000001},
			{1,1,1,0.090000004},
			{1,1,1,0.050000001},
			{1,1,1,0.025},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.44999999,0.34999999,0.44999999};
		rotationVelocityVar=10;
		sizeVar=0.079999998;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudMedLight: Default
	{
		interval="0.01 * interval + 0.005";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125 * intensity + 6",
			"0.0125 * intensity + 9",
			"0.0125 * intensity + 11",
			"0.0125 * intensity + 12"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.5},
			{0.69999999,0.69999999,0.69999999,0.60000002},
			{0.80000001,0.80000001,0.80000001,0.44999999},
			{0.80000001,0.80000001,0.80000001,0.30000001},
			{0.89999998,0.89999998,0.89999998,0.18000001},
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{1,1,1,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={2.5,3,2.5};
		MoveVelocityVar[]={1,2,1};
		rotationVelocityVar=20;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudBigDark: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,4,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0.25;
		size[]={4,7,10,12};
		color[]=
		{
			{0.44999999,0.44999999,0.44999999,0.69999999},
			{0.5,0.5,0.5,0.5},
			{0.60000002,0.60000002,0.60000002,0.25},
			{0.64999998,0.64999998,0.64999998,0.0099999998}
		};
		animationSpeed[]={0.5,0.30000001,0.25,0.2,0.18000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=3;
		positionVar[]={2,12,2};
		MoveVelocityVar[]={1.5,5,1.5};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CloudMedDark: Default
	{
		interval="0.02 * interval + 0.01";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125 * intensity + 6",
			"0.0125 * intensity + 9",
			"0.0125 * intensity + 13",
			"0.015 * intensity + 18"
		};
		color[]=
		{
			{0.2,0.2,0.2,0.60000002},
			{0.40000001,0.40000001,0.40000001,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.69999999,0.69999999,0.69999999,0.079999998},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={2.5,3,2.5};
		MoveVelocityVar[]={1.5,3,1.5};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmallSmokeFast2: Default
	{
		interval="0.05 * interval + 0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,5,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.125 * intensity + 12",
			"0.0.125 * intensity + 15"
		};
		color[]=
		{
			{1,0.87,0.62,0.69999999},
			{1,0.87,0.62,0.2},
			{1,1,1,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={1,2,1};
		MoveVelocityVar[]={0.5,3,0.5};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmallSmokeSlow1: Default
	{
		interval="0.05 * interval + 0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,2.5,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.125 * intensity + 10"
		};
		color[]=
		{
			{0.1,0.1,0.1,0.69999999},
			{0.25,0.25,0.25,0.050000001},
			{0.25,0.25,0.25,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.5,2,0.5};
		MoveVelocityVar[]={1,2.5,1};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmallSmokeSlow2: Default
	{
		interval="0.05 * interval + 0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,2.5,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 10"
		};
		color[]=
		{
			{0.1,0.1,0.1,0.69999999},
			{0.25,0.25,0.25,0.050000001},
			{0.25,0.25,0.25,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.5,2,0.5};
		MoveVelocityVar[]={1,2.5,1};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeBig: Default
	{
		interval="0.025 * interval + 0.025";
		circleRadius=2;
		circleVelocity[]={-0.2,0,-0.2};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,5,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 6",
			"0.0125 * intensity + 11"
		};
		color[]=
		{
			{0.80000001,0.67000002,0.51999998,0.69999999},
			{1,0.89999998,0.85000002,0.5},
			{0.80000001,0.67000002,0.51999998,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.5,2,0.5};
		MoveVelocityVar[]={1.5,3,1.5};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeMed: Default
	{
		interval="0.002 * interval + 0.002";
		circleRadius=1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Smoke";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=7;
		moveVelocity[]={0,11,0};
		rotationVelocity=20;
		weight=0.050999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 2.5",
			"0.0125 * intensity + 5",
			"0.0125 * intensity + 10"
		};
		color[]=
		{
			{0.029999999,0.029999999,0.029999999,0.050000001},
			{0.029999999,0.029999999,0.029999999,0.55000001},
			{0.029999999,0.029999999,0.029999999,0.40000001},
			{0.029999999,0.029999999,0.029999999,0.25},
			{0.029999999,0.029999999,0.029999999,0.1},
			{0.029999999,0.029999999,0.029999999,0.02}
		};
		animationSpeed[]={0};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={2,4,2};
		rotationVelocityVar=8;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeTrails: Default
	{
		interval=0.15000001;
		circleRadius=1;
		circleVelocity[]={5,5,5};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		animationName="";
		particleType="BillBoard";
		timerPeriod=0.1;
		lifeTime=1.3;
		moveVelocity[]={0,10,0};
		rotationVelocity=0;
		weight=30;
		volume=0.0099999998;
		rubbing=0;
		size[]={0};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		beforeDestroyScript="";
		particleEffects="SmokeTrailEffectMain1";
		lifeTimeVar=3;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={1,5,1};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustBig: Default
	{
		interval=0.0020000001;
		circleRadius=4;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.02;
		size[]=
		{
			"0.0125 * intensity + 4.5",
			"0.0125 * intensity + 9"
		};
		color[]=
		{
			{0.60000002,0.5,0.40000001,0.079999998},
			{0.60000002,0.5,0.40000001,0.059999999},
			{0.60000002,0.5,0.40000001,0.039999999},
			{0.60000002,0.5,0.40000001,0.02},
			{0.60000002,0.5,0.40000001,0.0099999998},
			{0.60000002,0.5,0.40000001,0.001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={10,1,10};
		MoveVelocityVar[]={2,0.5,2};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustMed: Default
	{
		interval=0.001;
		circleRadius=1.3;
		circleVelocity[]={0.80000001,0,0.80000001};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={6,11};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.1},
			{0.40000001,0.30000001,0.2,0.07},
			{0.40000001,0.30000001,0.2,0.039999999},
			{0.40000001,0.30000001,0.2,0.02},
			{0.40000001,0.30000001,0.2,0.0099999998},
			{0.40000001,0.30000001,0.2,0.001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={10,1,10};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineCircleDust: Default
	{
		interval=0.001;
		circleRadius=1;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=0;
		weight=0.052499998;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={1.6,3.5};
		color[]=
		{
			{0.5,0.40000001,0.30000001,0.059999999},
			{0.5,0.40000001,0.30000001,0.11},
			{0.5,0.40000001,0.30000001,0.059999999},
			{0.5,0.40000001,0.30000001,0.050000001},
			{0.5,0.40000001,0.30000001,0.015},
			{0.60000002,0.5,0.40000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={2,0.2,2};
		MoveVelocityVar[]={3,0.15000001,3};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineCircleDust1: Default
	{
		interval=0.001;
		circleRadius=1;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			"10 * explosionDirX",
			0.80000001,
			"10 * explosionDirZ"
		};
		rotationVelocity=0;
		weight=0.052499998;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={1.6,3.5};
		color[]=
		{
			{0.5,0.40000001,0.30000001,0.059999999},
			{0.5,0.40000001,0.30000001,0.11},
			{0.5,0.40000001,0.30000001,0.059999999},
			{0.5,0.40000001,0.30000001,0.050000001},
			{0.5,0.40000001,0.30000001,0.015},
			{0.60000002,0.5,0.40000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={2,0.2,2};
		MoveVelocityVar[]={13,0.5,13};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineCircleDust2: Default
	{
		interval=0.001;
		circleRadius=1;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			"10 * explosionDirX",
			0.80000001,
			"10 * explosionDirZ"
		};
		rotationVelocity=0;
		weight=0.052499998;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={1.6,3.5};
		color[]=
		{
			{0.5,0.40000001,0.30000001,0.059999999},
			{0.5,0.40000001,0.30000001,0.11},
			{0.5,0.40000001,0.30000001,0.059999999},
			{0.5,0.40000001,0.30000001,0.050000001},
			{0.5,0.40000001,0.30000001,0.015},
			{0.60000002,0.5,0.40000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={2,0.2,2};
		MoveVelocityVar[]={6,0.5,6};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustSmall: Default
	{
		interval=0.012;
		circleRadius=0.5;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.02;
		size[]={2,4};
		color[]=
		{
			{0.079999998,0.067000002,0.052000001,0.31999999},
			{0.079999998,0.067000002,0.052000001,0.25},
			{0.60000002,0.5,0.40000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={4,4,4};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustTankSmall: Default
	{
		interval="0.02 * isWaterSurface";
		circleRadius=1.5;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.02;
		size[]={3,6};
		color[]=
		{
			{0.205,0.185,0.15000001,0.16},
			{0.205,0.185,0.15000001,0.059999999},
			{0.205,0.185,0.15000001,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={2.5,2.5,2.5};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeCoef=1;
		colorCoef[]=
		{
			1,
			1,
			1,
			"(distToSurface interpolate [0.2,10,1.2,0.01])"
		};
		animationSpeedCoef=1;
		position[]={0,0,0};
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustTankBig: Default
	{
		interval="0.005 * isWaterSurface";
		circleRadius=0.5;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.02;
		size[]={3,6};
		color[]=
		{
			{0.205,0.185,0.15000001,0.16},
			{0.205,0.185,0.15000001,0.059999999},
			{0.205,0.185,0.15000001,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={4,4,4};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeCoef=1;
		colorCoef[]=
		{
			1,
			1,
			1,
			"(distToSurface interpolate [0.2,10,1.2,0.01])"
		};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustTankLong: Default
	{
		interval="0.002 * isWaterSurface";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			"20*directionX",
			0.30000001,
			"20*directionZ"
		};
		rotationVelocity=0;
		weight=0.053300001;
		volume=0.039999999;
		rubbing=0.30000001;
		size[]={3,9};
		color[]=
		{
			{0.205,0.185,0.15000001,0.12},
			{0.205,0.185,0.15000001,0.045000002},
			{0.205,0.185,0.15000001,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={30,1.2,30};
		rotationVelocityVar=30;
		sizeCoef=1;
		colorCoef[]=
		{
			1,
			1,
			1,
			"(distToSurface interpolate [0.2,10,1.2,0.01])"
		};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX + (directionLocalX * 3)",
			"positionY + (directionLocalY * 3)",
			"positionZ + (directionLocalZ * 3)"
		};
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustTank: Default
	{
		interval="0.005 * isWaterSurface";
		circleRadius=0.5;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.02;
		size[]={3,6};
		color[]=
		{
			{0.205,0.185,0.15000001,0.16},
			{0.205,0.185,0.15000001,0.059999999},
			{0.205,0.185,0.15000001,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={4,4,4};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustTankL: CircleDustTank
	{
		interval="0.008 * isWaterSurface";
		circleRadius=0.5;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.8;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.02;
		size[]={3,6};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={4,4,4};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustArtillery: Default
	{
		interval="0.0035 * isWaterSurface";
		circleRadius=0.30000001;
		circleVelocity[]={4,0,4};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]={0,0.15000001,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]={3,8};
		color[]=
		{
			{0.205,0.185,0.15000001,0.22},
			{0.205,0.185,0.15000001,0.1},
			{0.205,0.185,0.15000001,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={4,4,4};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CircleDustMortar: Default
	{
		interval="0.005 * isWaterSurface";
		circleRadius=0.2;
		circleVelocity[]={1,0,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,0.1,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.02;
		size[]={1.5,2.5};
		color[]=
		{
			{0.205,0.185,0.15000001,0.090000004},
			{0.205,0.185,0.15000001,0.039999999},
			{0.205,0.185,0.15000001,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GrenadeExp: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.30000001;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 4",
			"0.0125 * intensity + 1"
		};
		color[]=
		{
			{1,1,1,-6},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0.40000001,0.1,0.40000001};
		MoveVelocityVar[]={0.2,0.5,0.2};
		rotationVelocityVar=90;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MortarExp: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]=
		{
			"0.05 * intensity + 3",
			"0.05 * intensity + 2"
		};
		color[]=
		{
			{1,1,1,-20},
			{1,1,1,-15}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={2.5,0.1,2.5};
		MoveVelocityVar[]={0.2,0.5,0.2};
		rotationVelocityVar=90;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineExp: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=16;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]=
		{
			"0.1 * intensity + 0.5",
			"0.1 * intensity + 3.5"
		};
		color[]=
		{
			{1,1,1,-20},
			{1,1,1,-15}
		};
		animationSpeed[]={2};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={0.2,0.5,0.2};
		rotationVelocityVar=90;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GrenadeSmoke1: Default
	{
		interval="0.008 * interval + 0.008";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=9;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=0;
		weight=0.052200001;
		volume=0.039999999;
		rubbing=0.23999999;
		size[]=
		{
			"0.013 * intensity + 3",
			"0.0125 * intensity + 6",
			"0.013 * intensity + 8",
			"0.013 * intensity + 10"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.36000001},
			{0.80000001,0.80000001,0.80000001,0.23999999},
			{0.85000002,0.85000002,0.85000002,0.14},
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=2;
		positionVar[]={0.80000001,0.2,0.80000001};
		MoveVelocityVar[]={2.5,3.5,2.5};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineSmoke1: Default
	{
		interval="0.0015 * interval + 0.0015";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,8,0};
		rotationVelocity=0;
		weight=0.052200001;
		volume=0.039999999;
		rubbing=0.13;
		size[]=
		{
			"0.1 * intensity + 2",
			"0.1 * intensity + 6",
			"0.1 * intensity + 9",
			"0.1 * intensity + 12"
		};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.69999999,0.69999999,0.69999999,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.27000001},
			{0.89999998,0.89999998,0.89999998,0.18000001},
			{0.89999998,0.89999998,0.89999998,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={0.40000001,0.30000001,0.2,0.029999999};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=5;
		positionVar[]={1,5,1};
		MoveVelocityVar[]={3,8,3};
		rotationVelocityVar=5;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.25};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineSmokeLow1: Default
	{
		interval="0.0025 * interval + 0.0025";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,7,0};
		rotationVelocity=0;
		weight=0.052200001;
		volume=0.039999999;
		rubbing=0.13;
		size[]=
		{
			"0.1 * intensity + 2",
			"0.1 * intensity + 6",
			"0.1 * intensity + 9",
			"0.1 * intensity + 12"
		};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.69999999,0.69999999,0.69999999,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.27000001},
			{0.89999998,0.89999998,0.89999998,0.18000001},
			{0.89999998,0.89999998,0.89999998,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={0.40000001,0.30000001,0.2,0.029999999};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=5;
		positionVar[]={1,4.5,1};
		MoveVelocityVar[]={2.5,7,2.5};
		rotationVelocityVar=5;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.25};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineSmoke2: Default
	{
		interval="0.0025 * interval + 0.0025";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,5,0};
		rotationVelocity=0;
		weight=0.052200001;
		volume=0.039999999;
		rubbing=0.13;
		size[]=
		{
			"0.1 * intensity + 1.5",
			"0.1 * intensity + 4.5",
			"0.1 * intensity + 8",
			"0.1 * intensity + 10"
		};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.69999999,0.69999999,0.69999999,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.27000001},
			{0.89999998,0.89999998,0.89999998,0.18000001},
			{0.89999998,0.89999998,0.89999998,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={0.40000001,0.30000001,0.2,0.029999999};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=5;
		positionVar[]={0.80000001,3,0.80000001};
		MoveVelocityVar[]={2,5,2};
		rotationVelocityVar=5;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.25};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineSmokeLow2: Default
	{
		interval="0.0035 * interval + 0.0035";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,4,0};
		rotationVelocity=0;
		weight=0.052200001;
		volume=0.039999999;
		rubbing=0.13;
		size[]=
		{
			"0.1 * intensity + 1.5",
			"0.1 * intensity + 4.5",
			"0.1 * intensity + 8",
			"0.1 * intensity + 10"
		};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.69999999,0.69999999,0.69999999,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.27000001},
			{0.89999998,0.89999998,0.89999998,0.18000001},
			{0.89999998,0.89999998,0.89999998,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={0.40000001,0.30000001,0.2,0.029999999};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=5;
		positionVar[]={0.80000001,2.5,0.80000001};
		MoveVelocityVar[]={2,4,2};
		rotationVelocityVar=5;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.25};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineUnderwaterWater1: Default
	{
		interval="(0.0016 * interval + 0.0016) * (distToWater interpolate [-16,-3.5,10,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			0,
			"14 * (distToWater interpolate [-16,-3.5,0.1,1])",
			0
		};
		rotationVelocity=0;
		weight=30;
		volume=0.1;
		rubbing=0;
		size[]=
		{
			"0.1 * intensity + 3",
			"0.1 * intensity + 7",
			"0.1 * intensity + 12",
			"0.1 * intensity + 15"
		};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.07},
			{0.85000002,0.85000002,0.85000002,0.12},
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{0.94999999,0.94999999,0.94999999,0.039999999},
			{0.94999999,0.94999999,0.94999999,0.015},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		position[]=
		{
			0,
			"(-distToWater) + (7.5 * (distToWater interpolate [-16,-3.5,0.1,1]))",
			0
		};
		destroyOnWaterSurfaceOffset=-5;
		destroyOnWaterSurface=1;
		lifeTimeVar=5;
		positionVar[]=
		{
			3,
			"8 * (distToWater interpolate [-16,-3.5,0.1,1])",
			3
		};
		MoveVelocityVar[]=
		{
			2.5,
			"13 * (distToWater interpolate [-16,-3.5,0.1,1])",
			2.5
		};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineUnderwaterWater1M: MineUnderwaterWater1
	{
		interval="(0.0025 * interval + 0.0025) * (distToWater interpolate [-16,-3.5,10,1])";
		lifeTime=8;
		moveVelocity[]=
		{
			0,
			"14 * (distToWater interpolate [-16,-3.5,0.1,1])",
			0
		};
		size[]=
		{
			"0.1 * intensity + 3.5",
			"0.1 * intensity + 8",
			"0.1 * intensity + 14",
			"0.1 * intensity + 17"
		};
		position[]=
		{
			0,
			"(-distToWater) + (7.5 * (distToWater interpolate [-16,-3.5,0.1,1]))",
			0
		};
		lifeTimeVar=3;
		positionVar[]=
		{
			2,
			"8 * (distToWater interpolate [-16,-3.5,0.1,1])",
			2
		};
		MoveVelocityVar[]=
		{
			2,
			"13 * (distToWater interpolate [-16,-3.5,0.1,1])",
			2
		};
		sizeVar=0.40000001;
	};
	class MineUnderwaterWater2: Default
	{
		interval="(0.0035 * interval + 0.0035) * (distToWater interpolate [-16,-3.5,10,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=16;
		moveVelocity[]=
		{
			0,
			"9 * (distToWater interpolate [-16,-3.5,0.1,1])",
			0
		};
		rotationVelocity=0;
		weight=30;
		volume=0.1;
		rubbing=0;
		size[]=
		{
			"0.1 * intensity + 2",
			"0.1 * intensity + 4",
			"0.1 * intensity + 6",
			"0.1 * intensity + 8"
		};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.34999999,0.34999999,0.34999999,0.27000001},
			{0.40000001,0.40000001,0.40000001,0.2},
			{0.44999999,0.44999999,0.44999999,0.13},
			{0.5,0.5,0.5,0.039999999},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		position[]=
		{
			0,
			"(-distToWater) + (6.5 * (distToWater interpolate [-16,-3.5,0.1,1]))",
			0
		};
		destroyOnWaterSurfaceOffset=-3;
		destroyOnWaterSurface=1;
		lifeTimeVar=5;
		positionVar[]=
		{
			1,
			"7 * (distToWater interpolate [-16,-3.5,0.1,1])",
			1
		};
		MoveVelocityVar[]=
		{
			0.5,
			"8 * (distToWater interpolate [-16,-3.5,0.1,1])",
			0.5
		};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineWave: Default
	{
		interval="(0.0022 * interval + 0.0022) * (distToWater interpolate [-26,-3.5,4,1]) * (distToWater interpolate [-26.0001,-26,4,1])";
		circleRadius="5 * (distToWater interpolate [-26,-3.5,0.25,1])";
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=9;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=30;
		volume=0.1;
		rubbing=0.2;
		size[]=
		{
			"0.1 * intensity + 2",
			"0.1 * intensity + 5",
			"0.1 * intensity + 8",
			"0.1 * intensity + 11"
		};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.2},
			{0.34999999,0.34999999,0.34999999,0.22},
			{0.40000001,0.40000001,0.40000001,0.16},
			{0.44999999,0.44999999,0.44999999,0.11},
			{0.5,0.5,0.5,0.029999999},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		keepOnSurface=1;
		surfaceOffset=0.15000001;
		lifeTimeVar=3;
		positionVar[]={1,0,1};
		MoveVelocityVar[]=
		{
			"5 * (distToWater interpolate [-26,-3.5,0.25,1])",
			0,
			"5 * (distToWater interpolate [-26,-3.5,0.25,1])"
		};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineWaveM: MineWave
	{
		interval="(0.004 * interval + 0.004) * (distToWater interpolate [-26,-3.5,4,1]) * (distToWater interpolate [-26.0001,-26,4,1])";
		circleRadius="2 * (distToWater interpolate [-26,-3.5,0.25,1])";
		lifeTime=4;
		lifeTimeVar=1;
	};
	class MineWaveSmall: Default
	{
		interval="(0.003 * interval + 0.003) * (distToWater interpolate [-8,-2,4,1])";
		circleRadius="2.5 * (distToWater interpolate [-8,-2,0.25,1])";
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=30;
		volume=0.1;
		rubbing=0.2;
		size[]=
		{
			"0.1 * intensity + 2",
			"0.1 * intensity + 4",
			"0.1 * intensity + 6",
			"0.1 * intensity + 8"
		};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.2},
			{0.34999999,0.34999999,0.34999999,0.22},
			{0.40000001,0.40000001,0.40000001,0.16},
			{0.44999999,0.44999999,0.44999999,0.11},
			{0.5,0.5,0.5,0.029999999},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		keepOnSurface=1;
		surfaceOffset=0.15000001;
		lifeTimeVar=2;
		positionVar[]={1,0,1};
		MoveVelocityVar[]=
		{
			"2.5 * (distToWater interpolate [-8,-2,0.25,1])",
			0,
			"2.5 * (distToWater interpolate [-8,-2,0.25,1])"
		};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineUnderwaterSmoke1: Default
	{
		interval=0.00015000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=0.048;
		volume=0.039999999;
		rubbing=0.34999999;
		size[]={5,10,13,15,16};
		color[]=
		{
			{1,1,1,0},
			{1,1,1,0.34},
			{1,1,1,0.28},
			{1,1,1,0.22},
			{0.89999998,0.89999998,0.89999998,0.14},
			{0.69999999,0.69999999,0.69999999,0.059999999},
			{0.5,0.5,0.5,0.029999999},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.15000001,0.15000001,0.15000001,0}
		};
		animationSpeed[]={0.5,0.40000001,0.1,0.050000001,0.050000001};
		randomDirectionPeriod=0.15000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		destroyOnWaterSurfaceOffset=1;
		lifeTimeVar=3;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={60,180,60};
		rotationVelocityVar=1.5;
		sizeVar=1;
		colorVar[]={0.1,0.1,0.1,0.02};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineUnderwaterWaterAB1: Default
	{
		interval="(0.002 * interval + 0.002) * (distToWater interpolate [-16,-3.5,10,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			0,
			"10 * (distToWater interpolate [-16,-3.5,0.1,1])",
			0
		};
		rotationVelocity=0;
		weight=30;
		volume=0.1;
		rubbing=0;
		size[]=
		{
			"0.1 * intensity + 3",
			"0.1 * intensity + 7",
			"0.1 * intensity + 13",
			"0.1 * intensity + 15"
		};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.07},
			{0.85000002,0.85000002,0.85000002,0.12},
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{0.94999999,0.94999999,0.94999999,0.039999999},
			{0.94999999,0.94999999,0.94999999,0.015},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		position[]=
		{
			0,
			"(-distToWater) + (5.5 * (distToWater interpolate [-16,-3.5,0.1,1]))",
			0
		};
		destroyOnWaterSurfaceOffset=-5;
		destroyOnWaterSurface=1;
		lifeTimeVar=5;
		positionVar[]=
		{
			3,
			"5.5 * (distToWater interpolate [-16,-3.5,0.1,1])",
			3
		};
		MoveVelocityVar[]=
		{
			2.5,
			"9 * (distToWater interpolate [-16,-3.5,0.1,1])",
			2.5
		};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineUnderwaterWaterAB1M: MineUnderwaterWaterAB1
	{
		interval="(0.003 * interval + 0.003) * (distToWater interpolate [-16,-3.5,10,1])";
		lifeTime=6;
		moveVelocity[]=
		{
			0,
			"10 * (distToWater interpolate [-16,-3.5,0.1,1])",
			0
		};
		size[]=
		{
			"0.1 * intensity + 4",
			"0.1 * intensity + 8",
			"0.1 * intensity + 15",
			"0.1 * intensity + 19"
		};
		position[]=
		{
			0,
			"(-distToWater) + (5.5 * (distToWater interpolate [-16,-3.5,0.1,1]))",
			0
		};
		lifeTimeVar=3;
		positionVar[]=
		{
			2,
			"5.5 * (distToWater interpolate [-16,-3.5,0.1,1])",
			2
		};
		MoveVelocityVar[]=
		{
			1.5,
			"9 * (distToWater interpolate [-16,-3.5,0.1,1])",
			1.5
		};
		sizeVar=0.40000001;
	};
	class MineUnderwaterWaterPDM: Default
	{
		interval="(0.004 * interval + 0.004) * (distToWater interpolate [-5,-2,10,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			0,
			"3 * (distToWater interpolate [-5,-2,0.1,1])",
			0
		};
		rotationVelocity=0;
		weight=30;
		volume=0.1;
		rubbing=0;
		size[]=
		{
			"0.1 * intensity + 2",
			"0.1 * intensity + 5",
			"0.1 * intensity + 8",
			"0.1 * intensity + 10"
		};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.07},
			{0.85000002,0.85000002,0.85000002,0.12},
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{0.94999999,0.94999999,0.94999999,0.039999999},
			{0.94999999,0.94999999,0.94999999,0.015},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		position[]=
		{
			0,
			"(-distToWater) + (2 * (distToWater interpolate [-5,-2,0.1,1]))",
			0
		};
		destroyOnWaterSurfaceOffset=-5;
		destroyOnWaterSurface=1;
		lifeTimeVar=2;
		positionVar[]=
		{
			1,
			"2 * (distToWater interpolate [-5,-2,0.1,1])",
			1
		};
		MoveVelocityVar[]=
		{
			1,
			"3 * (distToWater interpolate [-5,-2,0.1,1])",
			1
		};
		rotationVelocityVar=3;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineUnderwaterWaterAB2: Default
	{
		interval="(0.004 * interval + 0.004) * (distToWater interpolate [-16,-3.5,10,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=16;
		moveVelocity[]=
		{
			0,
			"6 * (distToWater interpolate [-16,-3.5,0.1,1])",
			0
		};
		rotationVelocity=0;
		weight=30;
		volume=0.1;
		rubbing=0;
		size[]=
		{
			"0.1 * intensity + 2",
			"0.1 * intensity + 4",
			"0.1 * intensity + 6",
			"0.1 * intensity + 7"
		};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.34999999,0.34999999,0.34999999,0.23999999},
			{0.40000001,0.40000001,0.40000001,0.2},
			{0.44999999,0.44999999,0.44999999,0.13},
			{0.5,0.5,0.5,0.039999999},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		position[]=
		{
			0,
			"(-distToWater) + (4.5 * (distToWater interpolate [-16,-3.5,0.1,1]))",
			0
		};
		destroyOnWaterSurfaceOffset=-3;
		destroyOnWaterSurface=1;
		lifeTimeVar=5;
		positionVar[]=
		{
			1,
			"5 * (distToWater interpolate [-16,-3.5,0.1,1])",
			1
		};
		MoveVelocityVar[]=
		{
			0.5,
			"5.5 * (distToWater interpolate [-16,-3.5,0.1,1])",
			0.5
		};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MineUnderwaterSmokeAB1: Default
	{
		interval=0.00015000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=0.048;
		volume=0.039999999;
		rubbing=0.34999999;
		size[]={3,7,9,11,12.5};
		color[]=
		{
			{1,1,1,0},
			{1,1,1,0.34},
			{1,1,1,0.28},
			{1,1,1,0.22},
			{0.89999998,0.89999998,0.89999998,0.14},
			{0.69999999,0.69999999,0.69999999,0.059999999},
			{0.5,0.5,0.5,0.029999999},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.15000001,0.15000001,0.15000001,0}
		};
		animationSpeed[]={0.5,0.40000001,0.1,0.050000001,0.050000001};
		randomDirectionPeriod=0.15000001;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		destroyOnWaterSurfaceOffset=1;
		lifeTimeVar=3;
		positionVar[]={1.5,1.5,1.5};
		MoveVelocityVar[]={40,100,40};
		rotationVelocityVar=1.5;
		sizeVar=1;
		colorVar[]={0.1,0.1,0.1,0.02};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class GrenadeWaveSmall: Default
	{
		interval="(0.003 * interval + 0.003) * (distToWater interpolate [-10,-2,4,1])";
		circleRadius="2.5 * (distToWater interpolate [-10,-2,0.25,1])";
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=30;
		volume=0.1;
		rubbing=0.2;
		size[]=
		{
			"0.1 * intensity + 2",
			"0.1 * intensity + 4",
			"0.1 * intensity + 6",
			"0.1 * intensity + 8"
		};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.2},
			{0.34999999,0.34999999,0.34999999,0.22},
			{0.40000001,0.40000001,0.40000001,0.16},
			{0.44999999,0.44999999,0.44999999,0.11},
			{0.5,0.5,0.5,0.029999999},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		keepOnSurface=1;
		surfaceOffset=0.15000001;
		lifeTimeVar=2;
		positionVar[]={1,0,1};
		MoveVelocityVar[]=
		{
			"2.5 * (distToWater interpolate [-10,-2,0.25,1])",
			0,
			"2.5 * (distToWater interpolate [-10,-2,0.25,1])"
		};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class SecondarySmoke: Default
	{
		interval="0.018 * interval + 0.018";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,2,0};
		rotationVelocity=10;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"0.013 * intensity + 1.5",
			"0.0125 * intensity + 4.5",
			"0.013 * intensity + 6",
			"0.013 * intensity + 8"
		};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.89999998},
			{0.34999999,0.34999999,0.34999999,0.64999998},
			{0.40000001,0.40000001,0.40000001,0.5},
			{0.5,0.5,0.5,0.30000001},
			{0.5,0.5,0.5,0.2},
			{0.5,0.5,0.5,0.050000001}
		};
		animationSpeed[]={0.89999998,0.69999999,0.30000001,0.2,0.2};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=5;
		positionVar[]={0.80000001,0.2,0.80000001};
		MoveVelocityVar[]={1,1.6,1};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class CraterSmoke: Default
	{
		interval=0.079999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4.5;
		moveVelocity[]={0.2,0.1,0};
		rotationVelocity=4;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.23999999;
		size[]=
		{
			"0.013 * intensity + 0.3",
			"0.0125 * intensity + 1.5",
			"0.013 * intensity + 3.5",
			"0.013 * intensity + 6.5"
		};
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0.34999999},
			{0.40000001,0.40000001,0.40000001,0.30000001},
			{0.40000001,0.40000001,0.40000001,0.22},
			{0.40000001,0.40000001,0.40000001,0.16},
			{0.40000001,0.40000001,0.40000001,0.079999998},
			{0.40000001,0.40000001,0.40000001,0}
		};
		animationSpeed[]={0};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=1.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0,0.1,0};
		rotationVelocityVar=1.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.1;
	};
	class CraterSmoke_Orange: Default
	{
		interval=0.079999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4.5;
		moveVelocity[]={0.2,0.1,0};
		rotationVelocity=4;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.23999999;
		size[]=
		{
			"0.013 * intensity + 0.3",
			"0.0125 * intensity + 1.5",
			"0.013 * intensity + 3.5",
			"0.013 * intensity + 6.5"
		};
		color[]=
		{
			{0.98000002,0.46000001,0,0.34999999},
			{0.98000002,0.46000001,0,0.30000001},
			{0.98000002,0.46000001,0,0.22},
			{0.98000002,0.46000001,0,0.16},
			{0.98000002,0.46000001,0,0.079999998},
			{0.98000002,0.46000001,0,0}
		};
		animationSpeed[]={0};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=1.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0,0.1,0};
		rotationVelocityVar=1.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.1;
	};
	class CraterSmokeBig: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4.5;
		moveVelocity[]={0.2,0.1,0};
		rotationVelocity=4;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.23999999;
		size[]=
		{
			"0.013 * intensity + 0.3",
			"0.0125 * intensity + 1.5",
			"0.013 * intensity + 3.5",
			"0.013 * intensity + 6.5"
		};
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0.40000001},
			{0.40000001,0.40000001,0.40000001,0.34999999},
			{0.40000001,0.40000001,0.40000001,0.25},
			{0.40000001,0.40000001,0.40000001,0.2},
			{0.40000001,0.40000001,0.40000001,0.079999998},
			{0.40000001,0.40000001,0.40000001,0}
		};
		animationSpeed[]={0};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.40000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.5,0.1,0.5};
		rotationVelocityVar=1.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.1;
	};
	class CraterSmokeMine: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4.5;
		moveVelocity[]={0.2,0.1,0};
		rotationVelocity=4;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.12;
		size[]=
		{
			"0.013 * intensity + 0.3",
			"0.0125 * intensity + 1.5",
			"0.013 * intensity + 3.5",
			"0.013 * intensity + 6.5"
		};
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0.40000001},
			{0.40000001,0.40000001,0.40000001,0.34999999},
			{0.40000001,0.40000001,0.40000001,0.25},
			{0.40000001,0.40000001,0.40000001,0.2},
			{0.40000001,0.40000001,0.40000001,0.079999998},
			{0.40000001,0.40000001,0.40000001,0}
		};
		animationSpeed[]={0};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0,0.1,0};
		rotationVelocityVar=1.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.1;
	};
	class MineStones: Default
	{
		interval="0.005";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\StoneSmall.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=20;
		moveVelocity[]={0,12,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.12};
		color[]=
		{
			{0.1,0.1,0.1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.12;
		blockAIVisibility=0;
		lifeTimeVar=10;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={14,14,14};
		rotationVelocityVar=1;
		sizeVar=0.079999998;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineStones1: Default
	{
		interval=0.0089999996;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\StoneSmall.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=20;
		moveVelocity[]={0,5,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.079999998};
		color[]=
		{
			{0.1,0.1,0.1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.12;
		blockAIVisibility=0;
		lifeTimeVar=10;
		positionVar[]={0.5,0.5,0.5};
		MoveVelocityVar[]={7,8,7};
		rotationVelocityVar=1;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineStones2: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\StoneSmall.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=20;
		moveVelocity[]={0,8,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.1};
		color[]=
		{
			{0.1,0.1,0.1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.12;
		blockAIVisibility=0;
		lifeTimeVar=10;
		positionVar[]={0.5,0.5,0.5};
		MoveVelocityVar[]={9,10,9};
		rotationVelocityVar=1;
		sizeVar=0.079999998;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GrenadeStones: Default
	{
		interval="0.01";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=4;
		moveVelocity[]={0,4,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.30000001};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		blockAIVisibility=0;
		lifeTimeVar=0;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={4,7,4};
		rotationVelocityVar=1;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GrenadeStonesStatic: Default
	{
		interval="0.03";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=20;
		moveVelocity[]={0,4,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.30000001};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.15000001;
		bounceOnSurfaceVar=0.30000001;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		blockAIVisibility=0;
		lifeTimeVar=10;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={4,7,4};
		rotationVelocityVar=1;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDMineStones: Default
	{
		interval=0.035;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=60;
		moveVelocity[]={0,8,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.30000001};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.050000001;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={7,20,7};
		rotationVelocityVar=1;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDMineStonesBig: Default
	{
		interval=0.017999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=60;
		moveVelocity[]={0,16,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.30000001};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.050000001;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={14,40,14};
		rotationVelocityVar=1;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDMineFireStones: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=1;
		lifeTime=0.1;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.0099999998};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		postEffects="IEDMineFlame";
		blockAIVisibility=0;
		lifeTimeVar=0.60000002;
		positionVar[]={4,0,4};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDMineFireStonesBig: Default
	{
		interval=0.079999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=1;
		lifeTime=0.1;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.0099999998};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		postEffects="IEDMineFlame";
		blockAIVisibility=0;
		lifeTimeVar=0.60000002;
		positionVar[]={7,0,7};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDMineGarbage1: Default
	{
		interval=0.035;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=60;
		moveVelocity[]={0,3,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.5};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.050000001;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={5,10,5};
		rotationVelocityVar=1;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDMineGarbageBig1: Default
	{
		interval=0.017999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=60;
		moveVelocity[]={0,6,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.5};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.050000001;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={10,20,10};
		rotationVelocityVar=1;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDMineGarbage2: Default
	{
		interval=0.035;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\WallPart\WallPart.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=60;
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.5};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.050000001;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={5,8,5};
		rotationVelocityVar=1;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDMineGarbageBig2: Default
	{
		interval=0.017999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\WallPart\WallPart.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=60;
		moveVelocity[]={0,4,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={0.5};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.050000001;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={1,0.5,1};
		MoveVelocityVar[]={10,16,10};
		rotationVelocityVar=1;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineDust1: Default
	{
		interval=0.022;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0.1;
		size[]={3,6};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.40000001,0.30000001,0},
			{0.40000001,0.40000001,0.30000001,0.1},
			{0.5,0.40000001,0.30000001,0.079999998},
			{0.5,0.40000001,0.30000001,0.039999999},
			{0.5,0.40000001,0.30000001,0}
		};
		colorCoef[]={0.94999999,0.89999998,0.69999999,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=4;
		position[]={0,0,0};
		positionVar[]={1.5,0.5,1.5};
		MoveVelocityVar[]={0.89999998,0.89999998,0.89999998};
		rotationVelocityVar=20;
		sizeVar=1.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineDust2: Default
	{
		interval=0.0020000001;
		circleRadius=6;
		circleVelocity[]={0,0,5};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=7;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0.1;
		size[]={1,5};
		sizeCoef=1;
		color[]=
		{
			{0.89999998,0.80000001,0.69999999,0},
			{0.89999998,0.80000001,0.69999999,0.059999999},
			{0.89999998,0.80000001,0.69999999,0.079999998},
			{0.89999998,0.80000001,0.69999999,0.039999999},
			{0.89999998,0.80000001,0.69999999,0.02},
			{0.89999998,0.80000001,0.69999999,0}
		};
		colorCoef[]={0.94999999,0.89999998,0.69999999,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.059999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=3;
		position[]={0,0,0};
		positionVar[]={3,2,3};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MineDust3: Default
	{
		interval=0.0020000001;
		circleRadius=5;
		circleVelocity[]={0,0,5};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=7;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0.1;
		size[]={1,4};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.30000001,0.2,0},
			{0.40000001,0.30000001,0.2,0.059999999},
			{0.40000001,0.30000001,0.2,0.039999999},
			{0.40000001,0.30000001,0.2,0.02},
			{0.40000001,0.30000001,0.2,0.0099999998},
			{0.40000001,0.30000001,0.2,0}
		};
		colorCoef[]={0.94999999,0.89999998,0.69999999,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.059999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=3;
		position[]={0,0,0};
		positionVar[]={4,1,4};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketSmokeTrails: Default
	{
		interval=0.0099999998;
		circleRadius=1;
		circleVelocity[]={50,50,50};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		animationName="";
		particleType="BillBoard";
		timerPeriod=0.0099999998;
		lifeTime=0.1;
		moveVelocity[]={0,13,0};
		rotationVelocity=0;
		weight=30;
		volume=0.0099999998;
		rubbing=0;
		size[]={0};
		color[]=
		{
			{0.1,0.1,0.1,1}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		beforeDestroyScript="";
		particleEffects="SmokeTrailEffectMain1";
		lifeTimeVar=0.050000001;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.5,5,0.5};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.5;
	};
	class RocketSmokeTrails2: Default
	{
		interval=0.0099999998;
		circleRadius=1;
		circleVelocity[]={50,50,50};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		animationName="";
		particleType="BillBoard";
		timerPeriod=0.0099999998;
		lifeTime=0.1;
		moveVelocity[]={0,13,0};
		rotationVelocity=0;
		weight=30;
		volume=0.0099999998;
		rubbing=0;
		size[]={0};
		color[]=
		{
			{0.1,0.1,0.1,1}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		beforeDestroyScript="";
		particleEffects="SmokeTrailEffectMain2";
		lifeTimeVar=0.050000001;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={2,5,2};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.5;
	};
	class ExploRocks: Default
	{
		interval=0.02;
		circleRadius=0.1;
		circleVelocity[]={1.5,1,1.5};
		angleVar=1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		animationName="";
		particleType="BillBoard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,7,0};
		rotationVelocity=0;
		weight=50;
		volume=0.0099999998;
		rubbing=0;
		size[]={2,5};
		color[]=
		{
			{0.5,0.5,0.5,1},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={4,7,4};
		rotationVelocityVar=20;
		sizeVar=1;
		colorVar[]={0.1,0.1,0.1,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExploRocksDark: Default
	{
		interval=0.02;
		circleRadius=0.1;
		circleVelocity[]={1.5,1,1.5};
		angleVar=1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		animationName="";
		particleType="BillBoard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,7,0};
		rotationVelocity=0;
		weight=50;
		volume=0.0099999998;
		rubbing=0;
		size[]={2,4};
		color[]=
		{
			{0.2,0.2,0.2,1},
			{0.2,0.2,0.2,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={2,7,2};
		rotationVelocityVar=20;
		sizeVar=1;
		colorVar[]={0.1,0.1,0.1,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ShellSmokeTrail1: Default
	{
		interval=11;
		circleRadius=1;
		circleVelocity[]={7,2,7};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		animationName="";
		particleType="BillBoard";
		timerPeriod=0.1;
		lifeTime=1.3;
		moveVelocity[]={0,6,0};
		rotationVelocity=0;
		weight=30;
		volume=0.0099999998;
		rubbing=0;
		size[]={0};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=1;
		beforeDestroyScript="";
		particleEffects="SmokeTrailEffectMain1";
		lifeTimeVar=0.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.5,1,0.5};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=1;
	};
	class ShellSmokeTrail2: Default
	{
		interval=11;
		circleRadius=1;
		circleVelocity[]={7,2,7};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		animationName="";
		particleType="BillBoard";
		timerPeriod=0.1;
		lifeTime=1.3;
		moveVelocity[]={0,6,0};
		rotationVelocity=0;
		weight=30;
		volume=0.0099999998;
		rubbing=0;
		size[]={0};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=1;
		beforeDestroyScript="";
		particleEffects="SmokeTrailEffectMain1";
		lifeTimeVar=0.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.5,1,0.5};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=1;
	};
	class ShellSmokeTrail3: Default
	{
		interval=11;
		circleRadius=1;
		circleVelocity[]={7,2,7};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=0;
		animationName="";
		particleType="BillBoard";
		timerPeriod=0.1;
		lifeTime=1.3;
		moveVelocity[]={0,6,0};
		rotationVelocity=1;
		weight=30;
		volume=0.0099999998;
		rubbing=0;
		size[]={0};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=1;
		beforeDestroyScript="";
		particleEffects="SmokeTrailEffectMain1";
		lifeTimeVar=0.5;
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.5,1,0.5};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=1;
	};
	class ShellSmoke: Default
	{
		interval="0.01 * interval + 0.01";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.07;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 7",
			"0.0125 * intensity + 8"
		};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.40000001},
			{0.5,0.5,0.5,0.2},
			{1,1,1,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0.25,0.5,0.25};
		MoveVelocityVar[]={1,7,1};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DirtBig: Default
	{
		interval="0.01 * interval + 0.01";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.1;
		lifeTime=5;
		moveVelocity[]=
		{
			0,
			"0.1 * intensity + 10",
			0
		};
		rotationVelocity=1;
		weight=24;
		volume=0.1;
		rubbing=0;
		size[]={6,12};
		color[]=
		{
			{0.60000002,0.60000002,1,1},
			{0.60000002,0.60000002,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={2,4,2};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DirtMed: Default
	{
		interval="0.08 * interval + 0.04";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.1;
		lifeTime=5;
		moveVelocity[]=
		{
			0,
			"0.4 * intensity + 2",
			0
		};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=0;
		size[]={4,6};
		color[]=
		{
			{0.60000002,0.60000002,1,1},
			{0.60000002,0.60000002,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={5,3,5};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DirtSmall: Default
	{
		interval="0.05 * interval + 0.01";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.1;
		lifeTime=3;
		moveVelocity[]=
		{
			0,
			"0.125 * intensity + 3",
			0
		};
		rotationVelocity=1;
		weight=11;
		volume=0.1;
		rubbing=0;
		size[]=
		{
			"1*(dustness factor [0.1,0.3])",
			"2*(dustness factor [0.1,0.3])"
		};
		color[]=
		{
			{0.60000002,0.60000002,1,1},
			{0.60000002,0.60000002,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		lifeTimeVar=0.2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={3,4,3};
		rotationVelocityVar=1;
		sizeVar=1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DirtIEDMine: Default
	{
		interval="0.02 * interval + 0.005";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.1;
		lifeTime=3;
		moveVelocity[]={0,3,0};
		rotationVelocity=1;
		weight=11;
		volume=0.1;
		rubbing=0;
		size[]={1,2};
		color[]=
		{
			{0.60000002,0.60000002,1,1},
			{0.60000002,0.60000002,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		lifeTimeVar=0.2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={3,5,3};
		rotationVelocityVar=1;
		sizeVar=1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DirtIEDMineBig: Default
	{
		interval="0.01 * interval + 0.002";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.1;
		lifeTime=3;
		moveVelocity[]={0,4,0};
		rotationVelocity=1;
		weight=11;
		volume=0.1;
		rubbing=0;
		size[]={1.5,3};
		color[]=
		{
			{0.60000002,0.60000002,1,1},
			{0.60000002,0.60000002,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		lifeTimeVar=0.30000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={5,7,5};
		rotationVelocityVar=1;
		sizeVar=1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExploAmmoSmoke: Default
	{
		interval="0.013 * interval + 0.009";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4.5;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.2;
		size[]=
		{
			"0.018 * intensity + 1.2",
			"0.018 * intensity + 3",
			"0.018 * intensity + 5",
			"0.018 * intensity + 7.5"
		};
		color[]=
		{
			{1,1,1,0.60000002},
			{1,1,1,0.40000001},
			{1,1,1,0.22},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={1.7,0.60000002,0.40000001,0.30000001,0.30000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		MoveVelocityVar[]={1.5,2,1.5};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExploAmmoFlash: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,1,0};
		rotationVelocity=1;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 1",
			"0.0125 * intensity + 0.5"
		};
		color[]=
		{
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={2};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,0.1,0};
		MoveVelocityVar[]={0.2,0.5,0.2};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BombExp1: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,2.5,0};
		rotationVelocity=0;
		weight=2;
		volume=1;
		rubbing=0.1;
		size[]={5,8};
		color[]=
		{
			{1,1,1,-20},
			{1,1,1,-15},
			{1,1,1,-10},
			{1,1,1,-6},
			{1,1,1,-2}
		};
		animationSpeed[]={0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={5,6,5};
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=25;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HeavyBombExp1: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,2.5,0};
		rotationVelocity=0;
		weight=2;
		volume=1;
		rubbing=0.1;
		size[]={25,38};
		color[]=
		{
			{1,1,1,-20},
			{1,1,1,-15},
			{1,1,1,-10},
			{1,1,1,-6},
			{1,1,1,-2}
		};
		animationSpeed[]={0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={5,6,5};
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=25;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class BombSmk1: Default
	{
		interval=0.0070000002;
		circleRadius=2;
		circleVelocity[]={0.30000001,0,0.30000001};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]={0,12,0};
		rotationVelocity=1;
		weight=3;
		volume=1;
		rubbing=0.15000001;
		size[]={6,20};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.5,0.5,0.5,0.22},
			{0.60000002,0.60000002,0.60000002,0.090000004},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={0.5,12,0.5};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class BombSmk2: BombSmk1
	{
		interval=0.0049999999;
		circleRadius=3.5;
		circleVelocity[]={8,0,8};
		lifeTime=9;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.15000001;
		size[]={8,16};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.5,0.5,0.5,0.22},
			{0.60000002,0.60000002,0.60000002,0.090000004},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		lifeTimeVar=0.5;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class BombSmk3: BombSmk1
	{
		interval=0.02;
		circleRadius=4;
		circleVelocity[]={4,0,4};
		lifeTime=12;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.15000001;
		size[]={12,15};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.15000001},
			{0.69999999,0.69999999,0.69999999,0.059999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		lifeTimeVar=2;
		positionVar[]={3,1,3};
		MoveVelocityVar[]={7,0.5,7};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HeavyBombSmk1: Default
	{
		interval=0.0070000002;
		circleRadius=9;
		circleVelocity[]={0.89999998,0,0.89999998};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=26;
		moveVelocity[]={0,12,0};
		rotationVelocity=1;
		weight=1.1;
		volume=1;
		rubbing=0.15000001;
		size[]={6,40};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.5,0.5,0.5,0.22},
			{0.60000002,0.60000002,0.60000002,0.15000001},
			{0.80000001,0.80000001,0.80000001,0.050000001}
		};
		animationSpeed[]={1.5,0.5,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={0.2,5.1999998,0.2};
		MoveVelocityVar[]={0.5,22,0.5};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HeavyBombSmk2: HeavyBombSmk1
	{
		interval=0.0049999999;
		circleRadius=6.5;
		circleVelocity[]={8,0,8};
		lifeTime=29;
		moveVelocity[]={0,6,0};
		rotationVelocity=1;
		weight=1.175;
		volume=1;
		rubbing=0.15000001;
		size[]={12,26};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.5,0.5,0.5,0.22},
			{0.60000002,0.60000002,0.60000002,0.090000004},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		lifeTimeVar=0.5;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HeavyBombSmk3: HeavyBombSmk1
	{
		interval=0.02;
		circleRadius=7;
		circleVelocity[]={7,0,7};
		lifeTime=32;
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.15000001;
		size[]={18,25};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.15000001},
			{0.69999999,0.69999999,0.69999999,0.059999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		lifeTimeVar=2;
		positionVar[]={3,1,3};
		MoveVelocityVar[]={7,0.5,7};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class BombDust: Default
	{
		interval=0.029999999;
		circleRadius=5;
		circleVelocity[]={10,0,10};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		moveVelocity[]={0,1,0};
		rotationVelocity=1;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]={13,15};
		color[]=
		{
			{0.079999998,0.067000002,0.052000001,0},
			{0.60000002,0.5,0.40000001,0.5},
			{0.60000002,0.5,0.40000001,0.40000001},
			{0.60000002,0.5,0.40000001,0.30000001},
			{0.60000002,0.5,0.40000001,0.15000001},
			{0.60000002,0.5,0.40000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=5;
		positionVar[]={5,1,5};
		MoveVelocityVar[]={5,1,5};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ERASmoke: Default
	{
		interval="0.0025 * interval + 0.0025";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.30000001;
		lifeTime=1;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.052200001;
		volume=0.039999999;
		rubbing=0.13;
		size[]=
		{
			"0.1 * intensity + 1",
			"0.1 * intensity + 2",
			"0.1 * intensity + 3.5",
			"0.1 * intensity + 5"
		};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.30000001},
			{0.69999999,0.69999999,0.69999999,0.2},
			{0.80000001,0.80000001,0.80000001,0.15000001}
		};
		animationSpeed[]={0.30000001,0.2,0.1,0.029999999};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0.5;
		positionVar[]={0.80000001,3,0.80000001};
		MoveVelocityVar[]={0.5,1,0.5};
		rotationVelocityVar=1;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.25};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class MachineGunEject: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\AmmoBelt_Links.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]=
		{
			"-directionX/4",
			"-directionY/4",
			"-directionZ/4"
		};
		rotationVelocity=1;
		weight=6;
		volume=1;
		rubbing=0;
		size[]={1.8};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{0.89999998,0.89999998,0.89999998,0.017999999},
			{0.89999998,0.89999998,0.89999998,0.0060000001},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.12;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MachineGunEject1: MachineGunEject
	{
		lifeTime=2;
		moveVelocity[]=
		{
			"-directionX*2",
			"-directionY*2",
			"-directionZ*2"
		};
		size[]={1.6};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
	};
	class MachineGunEject2: MachineGunEject
	{
		lifeTime=2;
		moveVelocity[]=
		{
			"-directionX*1.5",
			"-directionY*1.5",
			"-directionZ*1.5"
		};
		size[]={1.2};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
	};
	class MachineGunCartridge: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\weapons_f\ammo\cartridge_762.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]=
		{
			"directionX/2",
			"directionY/2",
			"directionZ/2"
		};
		rotationVelocity=1;
		weight=6;
		volume=1;
		rubbing=0;
		size[]={1.8};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,1}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.12;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MachineGunCartridgeMed: MachineGunCartridge
	{
		interval="0.06 * randomGen";
	};
	class MachineGunCartridge1: MachineGunCartridge
	{
		angleVar=0;
		lifeTime=10;
	};
	class MachineGunCartridge1Med: MachineGunCartridge1
	{
		interval="0.06 * randomGen";
		lifeTime=6;
	};
	class MachineGunCartridge338: MachineGunCartridge
	{
		particleShape="\A3\weapons_f\ammo\cartridge_762.p3d";
		angleVar=0;
		lifeTime=10;
		size[]={1.12};
	};
	class MachineGunCartridge338Med: MachineGunCartridge338
	{
		interval="0.06 * randomGen";
		lifeTime=6;
	};
	class MachineGunCartridgeShort1: MachineGunCartridge1
	{
		lifeTime=0.60000002;
	};
	class MachineGunCartridge2: MachineGunCartridge
	{
		lifeTime=6;
		moveVelocity[]=
		{
			"-directionX * 2",
			"- directionY * 2",
			"- directionZ * 2"
		};
		size[]={1.6};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.12;
		lifeTimeVar=0;
	};
	class HeavyGunCartridge1: MachineGunCartridge1
	{
		size[]={4};
	};
	class RifleAssaultCloud1: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"3*directionX",
			"3*directionY",
			"3*directionZ"
		};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.55000001;
		size[]={0.30000001,1.5};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{0.89999998,0.89999998,0.89999998,0.017999999},
			{0.89999998,0.89999998,0.89999998,0.0060000001},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,0.60000002};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX + 0.12 * directionLocalX",
			"positionY + 0.12 * directionLocalY",
			"positionZ + 0.12 * directionLocalZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RifleAssaultCloud2: Default
	{
		interval=0.023;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"3*directionX",
			"3*directionY",
			"3*directionZ"
		};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.55000001;
		size[]={0.33000001,1.8};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.055},
			{0.89999998,0.89999998,0.89999998,0.025},
			{0.89999998,0.89999998,0.89999998,0.0080000004},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,0.60000002};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX + 0.12 * directionLocalX",
			"positionY + 0.12 * directionLocalY",
			"positionZ + 0.12 * directionLocalZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RifleAssaultDust1: Default
	{
		interval="0.0035 * (dustness interpolate [0,1,3,1])";
		circleRadius=0.1;
		circleVelocity[]={0.80000001,0,0.80000001};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.89999998;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.12;
		size[]={0.40000001,0.69999999};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.079999998},
			{0.40000001,0.30000001,0.2,0.059999999},
			{0.40000001,0.30000001,0.2,0.039999999},
			{0.40000001,0.30000001,0.2,0.02},
			{0.40000001,0.30000001,0.2,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		sizeCoef=1;
		colorCoef[]=
		{
			1,
			1,
			1,
			"(distToSurface interpolate [0.2,1.3,1.2,0.01])"
		};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX + 0.3 * directionLocalX",
			0,
			"positionZ + 0.3 * directionLocalZ"
		};
		lifeTimeVar=0.1;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class PistolDust1: Default
	{
		interval="0.0035 * (dustness interpolate [0,1,3,1])";
		circleRadius=0.1;
		circleVelocity[]={0.80000001,0,0.80000001};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.89999998;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.12;
		size[]={0.40000001,0.69999999};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.079999998},
			{0.40000001,0.30000001,0.2,0.059999999},
			{0.40000001,0.30000001,0.2,0.039999999},
			{0.40000001,0.30000001,0.2,0.02},
			{0.40000001,0.30000001,0.2,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		sizeCoef=1;
		colorCoef[]=
		{
			1,
			1,
			1,
			"(distToSurface interpolate [0.2,1,0.9,0.01])"
		};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX + 0.3 * directionLocalX",
			0,
			"positionZ + 0.3 * directionLocalZ"
		};
		lifeTimeVar=0.1;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MachineGunDust1: Default
	{
		interval="0.0035 * (dustness interpolate [0,1,3,1])";
		circleRadius=0.25;
		circleVelocity[]={1.3,0,1.3};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.89999998;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.12;
		size[]={0.5,1.2};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.079999998},
			{0.40000001,0.30000001,0.2,0.059999999},
			{0.40000001,0.30000001,0.2,0.039999999},
			{0.40000001,0.30000001,0.2,0.02},
			{0.40000001,0.30000001,0.2,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		sizeCoef=1;
		colorCoef[]=
		{
			1,
			1,
			1,
			"(distToSurface interpolate [0.2,1.5,1.2,0.01])"
		};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX + 0.3 * directionLocalX",
			0,
			"positionZ + 0.3 * directionLocalZ"
		};
		lifeTimeVar=0.1;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SniperDust1: Default
	{
		interval="0.0025 * (dustness interpolate [0,1,3,1])";
		circleRadius=0.1;
		circleVelocity[]={0.80000001,0,0.80000001};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.12;
		size[]={0.5,2};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.079999998},
			{0.40000001,0.30000001,0.2,0.059999999},
			{0.40000001,0.30000001,0.2,0.039999999},
			{0.40000001,0.30000001,0.2,0.02},
			{0.40000001,0.30000001,0.2,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		sizeCoef=1;
		colorCoef[]=
		{
			1,
			1,
			1,
			"2.4 * (distToSurface interpolate [0.2,1.6,1.2,0.01])"
		};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			0,
			"positionZ"
		};
		lifeTimeVar=0.40000001;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CaselessAmmoCloud1: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.44999999;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.15000001,0.89999998};
		color[]=
		{
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0.059999999},
			{0.1,0.1,0.1,0.0099999998}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.2;
		colorCoef[]={1,1,1,0.60000002};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.029999999,0.029999999,0.029999999};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GrenadeLauncherCloud1: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"3*directionX",
			"3*directionY",
			"3*directionZ"
		};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.55000001;
		size[]={0.30000001,1.5};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{0.89999998,0.89999998,0.89999998,0.017999999},
			{0.89999998,0.89999998,0.89999998,0.0060000001},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,0.5};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MachineGun1: Default
	{
		interval="0.01/(vehicleSpeedSize interpolate [0,250,1,2])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]=
		{
			"directionX + vehicleSpeedLocalX",
			"directionY + vehicleSpeedLocalY",
			"directionZ + vehicleSpeedLocalZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.44999999;
		size[]={0.60000002,2.5,3.8};
		sizeCoef="0.8*(vehicleSpeedSize interpolate [0,250,1,8])";
		color[]=
		{
			{0.85000002,0.85000002,0.85000002,0.079999998},
			{0.88,0.88,0.88,0.025},
			{0.89999998,0.89999998,0.89999998,0.015},
			{0.89999998,0.89999998,0.89999998,0.0070000002},
			{0.89999998,0.89999998,0.89999998,0.0040000002}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"1 * (vehicleSpeedSize interpolate [0,250,1,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]=
		{
			"0.1*(vehicleSpeedSize interpolate [0,250,1,5])",
			"0.1*(vehicleSpeedSize interpolate [0,250,1,5])",
			"0.1*(vehicleSpeedSize interpolate [0,250,1,5])"
		};
		MoveVelocityVar[]=
		{
			"1*(vehicleSpeedSize interpolate [0,250,1,5])",
			"1*(vehicleSpeedSize interpolate [0,250,1,5])",
			"1*(vehicleSpeedSize interpolate [0,250,1,5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MachineGun2: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]=
		{
			"directionX",
			"directionY",
			"directionZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.44999999;
		size[]={0.30000001,1.2,1.6};
		sizeCoef=1;
		color[]=
		{
			{0.85000002,0.85000002,0.85000002,0.079999998},
			{0.88,0.88,0.88,0.025},
			{0.89999998,0.89999998,0.89999998,0.015},
			{0.89999998,0.89999998,0.89999998,0.0070000002},
			{0.89999998,0.89999998,0.89999998,0.0040000002}
		};
		colorCoef[]={1,1,1,0.75};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MachineGun3: Default
	{
		interval=0.0012000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		position[]=
		{
			"positionX + (directionLocalX * vehicleSpeedSize/45)",
			"positionY + (directionLocalY * vehicleSpeedSize/45)",
			"positionZ + (directionLocalZ * vehicleSpeedSize/45)"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.15000001;
		moveVelocity[]=
		{
			"directionX",
			"directionY",
			"directionZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.079999998;
		size[]={1,2};
		sizeCoef=1;
		color[]=
		{
			{0.85000002,0.85000002,0.85000002,0.07},
			{0.88,0.88,0.88,0.035},
			{0.89999998,0.89999998,0.89999998,0.02},
			{0.89999998,0.89999998,0.89999998,0.0099999998},
			{0.89999998,0.89999998,0.89999998,0.0040000002}
		};
		colorCoef[]={1,1,1,0.75};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]=
		{
			"0.1 + (0.4 * directionLocalX)",
			"0.1 + (0.4 * directionLocalY)",
			"0.1 + (0.4 * directionLocalZ)"
		};
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MachineGunCloud1: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"2*directionX",
			"2*directionY",
			"2*directionZ"
		};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=1.05;
		size[]={0.30000001,0.69999999,1,1.2,1.4,1.6,1.8};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.035999998},
			{0.89999998,0.89999998,0.89999998,0.012},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=1.2;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX + 0.12 * directionLocalX",
			"positionY + 0.12 * directionLocalY",
			"positionZ + 0.12 * directionLocalZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionShards: Default
	{
		interval=0.31999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=50;
		moveVelocity[]={0,8,0};
		rotationVelocity=3;
		weight=40;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.69999999};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.029999999;
		bounceOnSurfaceVar=0.015;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={10,9,10};
		rotationVelocityVar=2.5;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionShards1: ObjectDestructionShards
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard2.p3d";
	};
	class ObjectDestructionShards2: ObjectDestructionShards
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard3.p3d";
	};
	class ObjectDestructionShards3: ObjectDestructionShards
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard4.p3d";
	};
	class ObjectDestructionShardsBurning: Default
	{
		interval=0.51999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=50;
		moveVelocity[]={0,6,0};
		rotationVelocity=3;
		weight=40;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.69999999};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.029999999;
		bounceOnSurfaceVar=0.015;
		particleEffects="ExplosionShardsFire";
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={6,8,6};
		rotationVelocityVar=2.5;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionShardsBurning1: ObjectDestructionShardsBurning
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard2.p3d";
	};
	class ObjectDestructionShardsBurning2: ObjectDestructionShardsBurning
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard3.p3d";
	};
	class ObjectDestructionShardsBurning3: ObjectDestructionShardsBurning
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard4.p3d";
	};
	class ObjectDestructionShardsSmall: Default
	{
		interval=0.31999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=50;
		moveVelocity[]={0,8,0};
		rotationVelocity=3;
		weight=40;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.60000002};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.029999999;
		bounceOnSurfaceVar=0.015;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={10,9,10};
		rotationVelocityVar=2.5;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionShardsSmall1: ObjectDestructionShardsSmall
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard2.p3d";
	};
	class ObjectDestructionShardsSmall2: ObjectDestructionShardsSmall
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard3.p3d";
	};
	class ObjectDestructionShardsSmall3: ObjectDestructionShardsSmall
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard4.p3d";
	};
	class ObjectDestructionShardsBurningSmall: Default
	{
		interval=0.51999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=50;
		moveVelocity[]={0,6,0};
		rotationVelocity=3;
		weight=40;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.60000002};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.029999999;
		bounceOnSurfaceVar=0.015;
		particleEffects="ExplosionShardsFire";
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={8,8,8};
		rotationVelocityVar=2.5;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionShardsBurningSmall1: ObjectDestructionShardsBurningSmall
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard2.p3d";
	};
	class ObjectDestructionShardsBurningSmall2: ObjectDestructionShardsBurningSmall
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard3.p3d";
	};
	class ObjectDestructionShardsBurningSmall3: ObjectDestructionShardsBurningSmall
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard4.p3d";
	};
	class ExpSparks: Default
	{
		interval=0.0060000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=24;
		volume=8;
		rubbing=0;
		size[]={0.1,0.090000004,0.079999998,0.079999998,0.079999998,0.059999999,0.059999999,0.059999999,0.059999999,0};
		color[]=
		{
			{1,1,1,-50}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={6,9,6};
		rotationVelocityVar=2;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExpSparks1: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.69999999;
		moveVelocity[]={0,6,0};
		rotationVelocity=1;
		weight=24;
		volume=8;
		rubbing=0.40000001;
		size[]={0.079999998,0.050000001,0.050000001,0.050000001,0.050000001,0.039999999,0.039999999,0.039999999,0.039999999,0};
		color[]=
		{
			{1,1,1,-50}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.60000002;
		positionVar[]={0.30000001,0.2,0.30000001};
		MoveVelocityVar[]={10,3,10};
		rotationVelocityVar=2;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AirFireSparks: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3.5;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=1;
		weight=1.05;
		volume=1;
		rubbing=0.17;
		size[]={0.1,0.1,0.1,0.1,0.1,0.079999998,0.079999998,0.079999998,0.079999998,0};
		color[]=
		{
			{1,0.30000001,0.30000001,-6.5},
			{1,0.30000001,0.30000001,-6},
			{1,0.30000001,0.30000001,-5.5},
			{1,0.30000001,0.30000001,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.55000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=2.5;
		positionVar[]={0,0.2,0};
		MoveVelocityVar[]={0.2,1,0.2};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0.30000001;
		randomDirectionIntensityVar=0.15000001;
	};
	class FireSparks: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3.5;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=1;
		weight=1.05;
		volume=1;
		rubbing=0.17;
		size[]={0.1,0.1,0.1,0.1,0.1,0.079999998,0.079999998,0.079999998,0.079999998,0};
		color[]=
		{
			{1,0.30000001,0.30000001,-6.5},
			{1,0.30000001,0.30000001,-6},
			{1,0.30000001,0.30000001,-5.5},
			{1,0.30000001,0.30000001,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.55000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=2.5;
		positionVar[]={0,0.2,0};
		MoveVelocityVar[]={0.2,1,0.2};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0.30000001;
		randomDirectionIntensityVar=0.15000001;
	};
	class FireSparksSmall: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.40000001;
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		weight=1.6;
		volume=1;
		rubbing=0.079999998;
		size[]={0.07,0.07,0.07,0.07,0.07,0.045000002,0.045000002,0.045000002,0.035,0};
		color[]=
		{
			{1,0.30000001,0.30000001,-6.5},
			{1,0.30000001,0.30000001,-6},
			{1,0.30000001,0.30000001,-5.5},
			{1,0.30000001,0.30000001,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.80000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={12,12,12};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class FireSparksSmall1: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.40000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.6;
		volume=1;
		rubbing=0.079999998;
		size[]={0.07,0.07,0.07,0.07,0.07,0.045000002,0.045000002,0.045000002,0.035,0};
		color[]=
		{
			{1,0.30000001,0.30000001,-6.5},
			{1,0.30000001,0.30000001,-6},
			{1,0.30000001,0.30000001,-5.5},
			{1,0.30000001,0.30000001,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.80000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={12,12,12};
		rotationVelocityVar=2;
		sizeVar=0.050000001;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class FireSparksSmall2: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.15000001;
		moveVelocity[]=
		{
			"30 * explosionDirX",
			"3",
			"30 * explosionDirZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.079999998;
		size[]={0.07,0.07,0.07,0.07,0.07,0.045000002,0.045000002,0.045000002,0.035,0};
		color[]=
		{
			{1,0.60000002,0.60000002,-10},
			{1,0.60000002,0.60000002,-8},
			{1,0.60000002,0.60000002,-6},
			{1,0.60000002,0.60000002,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.60000002;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.40000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={15,5,15};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class FireSparksSmall3: Default
	{
		interval=0.00025000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.15000001;
		moveVelocity[]=
		{
			"30 * explosionDirX",
			"3",
			"30 * explosionDirZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.079999998;
		size[]={0.2,0.2,0.2,0.2,0.2,0.12,0.12,0.12,0.12,0};
		color[]=
		{
			{1,0.60000002,0.60000002,-10},
			{1,0.60000002,0.60000002,-8},
			{1,0.60000002,0.60000002,-6},
			{1,0.60000002,0.60000002,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.60000002;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.40000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={8,8,8};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HeliDestructionShards1: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,8,0};
		rotationVelocity=1;
		weight=40;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.80000001};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1.5;
		positionVar[]={5,4,5};
		MoveVelocityVar[]={8,8,8};
		rotationVelocityVar=1;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HeliDestructionShards2: Default
	{
		interval=0.025;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=50;
		moveVelocity[]={0,9,0};
		rotationVelocity=1;
		weight=40;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.80000001};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.02;
		bounceOnSurfaceVar=0.25;
		blockAIVisibility=0;
		lifeTimeVar=20;
		positionVar[]={5,4,5};
		MoveVelocityVar[]={8,8,8};
		rotationVelocityVar=1;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBackfireNLAW: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.1;
		moveVelocity[]=
		{
			"-speedX/30",
			"-speedY/30",
			"-speedZ/30"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.25,0.55000001};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,-2},
			{0.40000001,0.40000001,0.40000001,-1},
			{0.40000001,0.40000001,0.40000001,-0.60000002},
			{0.40000001,0.40000001,0.40000001,-0.40000001},
			{0.40000001,0.40000001,0.40000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]={0,0,-1.4};
		positionVar[]={0.039999999,0.039999999,0.039999999};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBackfireRPG: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.1;
		moveVelocity[]=
		{
			"-speedX/30",
			"-speedY/30",
			"-speedZ/30"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.30000001,0.80000001};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,-2},
			{0.40000001,0.40000001,0.40000001,-1},
			{0.40000001,0.40000001,0.40000001,-0.60000002},
			{0.40000001,0.40000001,0.40000001,-0.40000001},
			{0.40000001,0.40000001,0.40000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]={0,0,-1.5};
		positionVar[]={0.079999998,0.079999998,0.079999998};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBacksmokeNLAW: Default
	{
		interval=4.9999999e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]=
		{
			"-speedX/4",
			"-speedY/4",
			"-speedZ/4"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.5,2,2.9000001,3.5999999,4.3000002,4.9000001};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.31999999},
			{0.69999999,0.69999999,0.69999999,0.18000001},
			{0.69999999,0.69999999,0.69999999,0.1},
			{0.69999999,0.69999999,0.69999999,0.059999999},
			{0.69999999,0.69999999,0.69999999,0.02},
			{0.69999999,0.69999999,0.69999999,0.0099999998},
			{0.69999999,0.69999999,0.69999999,0.001}
		};
		colorCoef[]={1,1,1,0.40000001};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]={0,0,-1.5};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={4,4,4};
		rotationVelocityVar=10;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBacksmokeRPG: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			"-speedX/20",
			"-speedY/20",
			"-speedZ/20"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.40000001,1.4,2.0999999,2.5,2.8499999,3.0999999};
		sizeCoef=1;
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.5},
			{0.80000001,0.80000001,0.80000001,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.31999999},
			{0.80000001,0.80000001,0.80000001,0.23999999},
			{0.80000001,0.80000001,0.80000001,0.16},
			{0.80000001,0.80000001,0.80000001,0.079999998},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]={0,0,-1.4};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.60000002,0.60000002,0.60000002};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0.1,0.1,0.1,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketFrontsmokeRPG: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]=
		{
			"speedX/15",
			"speedY/15",
			"speedZ/15"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.40000001,2.4000001,3.5,4.1999998,4.5999999};
		sizeCoef=1;
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.16},
			{0.80000001,0.80000001,0.80000001,0.1},
			{0.80000001,0.80000001,0.80000001,0.039999999},
			{0.80000001,0.80000001,0.80000001,0.02},
			{0.80000001,0.80000001,0.80000001,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.80000001,0.80000001,0.80000001,0.001}
		};
		colorCoef[]={0.60000002,0.60000002,0.60000002,1.2};
		animationSpeed[]={5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={1.4,1.4,1.4};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBackfireRPGNT: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.079999998;
		moveVelocity[]=
		{
			"directionX * 5",
			"directionY * 5",
			"directionZ * 5"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.30000001,0.80000001};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,-2},
			{0.40000001,0.40000001,0.40000001,-1},
			{0.40000001,0.40000001,0.40000001,-0.60000002},
			{0.40000001,0.40000001,0.40000001,-0.40000001},
			{0.40000001,0.40000001,0.40000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]=
		{
			"positionX + directionLocalX * 0.5",
			"positionY + directionLocalY * 0.5",
			"positionZ + directionLocalZ * 0.5"
		};
		positionVar[]={0.079999998,0.079999998,0.079999998};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBackfireSmallRPGNT: Default
	{
		interval=0.0089999996;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.079999998;
		moveVelocity[]=
		{
			"directionX * 5",
			"directionY * 5",
			"directionZ * 5"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.050000001,0.2};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,-2},
			{0.40000001,0.40000001,0.40000001,-1},
			{0.40000001,0.40000001,0.40000001,-0.60000002},
			{0.40000001,0.40000001,0.40000001,-0.40000001},
			{0.40000001,0.40000001,0.40000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]=
		{
			"positionX + directionLocalX * 0.5",
			"positionY + directionLocalY * 0.5",
			"positionZ + directionLocalZ * 0.5"
		};
		positionVar[]={0.079999998,0.079999998,0.079999998};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBacksmokeRPGNT: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			"directionX * 3",
			"directionY * 3",
			"directionZ * 3"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.40000001,1.4,2.0999999,2.5,2.8499999,3.0999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,0.40000001},
			{1,1,1,0.31999999},
			{1,1,1,0.23999999},
			{1,1,1,0.16},
			{1,1,1,0.079999998},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={0.64999998,0.64999998,0.64999998,0.55000001};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]=
		{
			"positionX + directionLocalX * 0.5",
			"positionY + directionLocalY * 0.5",
			"positionZ + directionLocalZ * 0.5"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1.85,1.85,1.85};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0.1,0.1,0.1,0.029999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketFrontsmokeRPGNT: RocketBacksmokeRPGNT
	{
		interval=0.0099999998;
		lifeTime=3;
		moveVelocity[]=
		{
			"- directionX * 0.5",
			"- directionY * 0.5",
			"- directionZ * 0.5"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.2,0.80000001,1.2,1.4,1.53};
		sizeCoef=1;
		colorCoef[]={0.64999998,0.64999998,0.64999998,0.18000001};
		animationSpeed[]={5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		position[]=
		{
			"positionX - directionLocalX * 0.9",
			"positionY - directionLocalY * 0.9",
			"positionZ - directionLocalZ * 0.9"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
	};
	class RocketBackfireStaticRPG: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.1;
		moveVelocity[]=
		{
			"-speedX/220",
			"-speedY/220",
			"-speedZ/220"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.30000001,0.80000001};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,-2},
			{0.40000001,0.40000001,0.40000001,-1},
			{0.40000001,0.40000001,0.40000001,-0.60000002},
			{0.40000001,0.40000001,0.40000001,-0.40000001},
			{0.40000001,0.40000001,0.40000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]={0,0,-1.5};
		positionVar[]={0.079999998,0.079999998,0.079999998};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBacksmokeStaticRPG: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			"-speedX/150",
			"-speedY/150",
			"-speedZ/150"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.40000001,1.4,2.0999999,2.5,2.8499999,3.0999999};
		sizeCoef=1;
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.5},
			{0.80000001,0.80000001,0.80000001,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.31999999},
			{0.80000001,0.80000001,0.80000001,0.23999999},
			{0.80000001,0.80000001,0.80000001,0.16},
			{0.80000001,0.80000001,0.80000001,0.079999998},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]={0,0,-1.4};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.60000002,0.60000002,0.60000002};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0.1,0.1,0.1,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketFrontsmokeStaticRPG: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]=
		{
			"speedX/115",
			"speedY/115",
			"speedZ/115"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.40000001,2.4000001,3.5,4.1999998,4.5999999};
		sizeCoef=1;
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.16},
			{0.80000001,0.80000001,0.80000001,0.1},
			{0.80000001,0.80000001,0.80000001,0.039999999},
			{0.80000001,0.80000001,0.80000001,0.02},
			{0.80000001,0.80000001,0.80000001,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.80000001,0.80000001,0.80000001,0.001}
		};
		colorCoef[]={0.60000002,0.60000002,0.60000002,1.2};
		animationSpeed[]={5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={1.4,1.4,1.4};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionSmoke: Default
	{
		interval=0.18000001;
		circleRadius=1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.1 * intensity + 50";
		moveVelocity[]={0,5,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1 * intensity + 1",
			"1.8 * intensity + 35"
		};
		color[]=
		{
			{0.34999999,0.34999999,0.34999999,0.60000002},
			{0.34999999,0.34999999,0.34999999,0.75},
			{0.34999999,0.34999999,0.34999999,0.44999999},
			{0.41999999,0.41999999,0.41999999,0.28},
			{0.41999999,0.41999999,0.41999999,0.16},
			{0.41999999,0.41999999,0.41999999,0.090000004},
			{0.41999999,0.41999999,0.41999999,0.059999999},
			{0.5,0.5,0.5,0.02},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1,0.55000001,0.34999999};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=36;
		positionVar[]={0.5,0.30000001,0.5};
		MoveVelocityVar[]={0.5,0.75,0.5};
		rotationVelocityVar=0.5;
		sizeVar=0;
		colorVar[]={0,0,0,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionSmokeFuelS: ObjectDestructionSmoke
	{
		size[]=
		{
			"1 * intensity + 2",
			"1.8 * intensity + 45"
		};
		positionVar[]={3,0.30000001,3};
		MoveVelocityVar[]={0.5,0.75,0.5};
	};
	class ObjectDestructionSmoke1_2: Default
	{
		interval=0.22;
		circleRadius=1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.1 * intensity + 50";
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1 * intensity + 1",
			"1.8 * intensity + 30"
		};
		color[]=
		{
			
			{
				0.039999999,
				"0.04.",
				0.039999999,
				0.40000001
			},
			
			{
				0.039999999,
				"0.04.",
				0.039999999,
				0.60000002
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.44999999
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.31999999
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.2
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.1
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.059999999
			},
			
			{
				0.16,
				"0.16.",
				0.16,
				0.0099999998
			},
			
			{
				0.16,
				"0.16.",
				0.16,
				0
			}
		};
		animationSpeed[]={1,0.44999999,0.34999999};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=20;
		positionVar[]={0.5,0.30000001,0.5};
		MoveVelocityVar[]={0.5,0.75,0.5};
		rotationVelocityVar=0.5;
		sizeVar=0;
		colorVar[]={0,0,0,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionSmokeFuelS1_2: ObjectDestructionSmoke1_2
	{
		size[]=
		{
			"1 * intensity + 2",
			"1.8 * intensity + 40"
		};
		positionVar[]={3,0.30000001,3};
		MoveVelocityVar[]={0.5,0.75,0.5};
	};
	class ObjectDestructionSmokeSmall: Default
	{
		interval=0.12;
		circleRadius=0.2;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.1 * intensity + 32";
		moveVelocity[]={0,4,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1 * intensity + 1",
			"1.6 * intensity + 22"
		};
		color[]=
		{
			{0.41999999,0.41999999,0.41999999,0.60000002},
			{0.41999999,0.41999999,0.41999999,0.75},
			{0.41999999,0.41999999,0.41999999,0.44999999},
			{0.56,0.56,0.56,0.28},
			{0.56,0.56,0.56,0.16},
			{0.56,0.56,0.56,0.090000004},
			{0.56,0.56,0.56,0.059999999},
			{0.64999998,0.64999998,0.64999998,0.02},
			{0.64999998,0.64999998,0.64999998,0}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		lifeTimeVar=22;
		positionVar[]={0.5,0.30000001,0.5};
		MoveVelocityVar[]={0.34999999,0.75,0.34999999};
		rotationVelocityVar=12;
		sizeVar=0;
		colorVar[]={0,0,0,0.050000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionSmokeSmallx: Default
	{
		interval=0.12;
		circleRadius=0.2;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=52;
		moveVelocity[]={0,4,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={2.0999999,24};
		color[]=
		{
			{0.41999999,0.41999999,0.41999999,0.60000002},
			{0.41999999,0.41999999,0.41999999,0.75},
			{0.41999999,0.41999999,0.41999999,0.44999999},
			{0.56,0.56,0.56,0.28},
			{0.56,0.56,0.56,0.16},
			{0.56,0.56,0.56,0.090000004},
			{0.56,0.56,0.56,0.059999999},
			{0.64999998,0.64999998,0.64999998,0.02},
			{0.64999998,0.64999998,0.64999998,0}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		lifeTimeVar=36;
		positionVar[]={0.5,0.30000001,0.5};
		MoveVelocityVar[]={0.34999999,0.75,0.34999999};
		rotationVelocityVar=12;
		sizeVar=0;
		colorVar[]={0,0,0,0.050000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionSmoke1_2Small: Default
	{
		interval=0.16;
		circleRadius=0.2;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.1 * intensity + 32";
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.0502;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1 * intensity + 1",
			"1.6 * intensity + 25"
		};
		color[]=
		{
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.60000002},
			{0.2,0.2,0.2,0.41999999},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.059999999},
			{0.34999999,0.34999999,0.34999999,0.0099999998},
			{0.34999999,0.34999999,0.34999999,0}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		lifeTimeVar=12;
		positionVar[]={0.5,0.30000001,0.5};
		MoveVelocityVar[]={0.34999999,0.75,0.34999999};
		rotationVelocityVar=12;
		sizeVar=0;
		colorVar[]={0,0,0,0.050000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionSmoke1_2Smallx: Default
	{
		interval=0.16;
		circleRadius=0.2;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=52;
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.0502;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={2.0999999,25};
		color[]=
		{
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.60000002},
			{0.2,0.2,0.2,0.41999999},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.059999999},
			{0.34999999,0.34999999,0.34999999,0.0099999998},
			{0.34999999,0.34999999,0.34999999,0}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		lifeTimeVar=36;
		positionVar[]={0.5,0.30000001,0.5};
		MoveVelocityVar[]={0.34999999,0.75,0.34999999};
		rotationVelocityVar=12;
		sizeVar=0;
		colorVar[]={0,0,0,0.050000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionSmoke2: Default
	{
		interval=0.039999999;
		circleRadius=1.2;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.2 * intensity + 3";
		moveVelocity[]={0,0,0};
		rotationVelocity=18;
		weight=0.050799999;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"0.25 * intensity + 0.3",
			"0.25 * intensity + 0.6",
			"0.25 * intensity + 1.2"
		};
		color[]=
		{
			
			{
				0.050000001,
				"0.05.",
				0.050000001,
				0.30000001
			},
			
			{
				0.050000001,
				"0.05.",
				0.050000001,
				0.60000002
			},
			{0.1,0.1,0.1,0.55000001},
			{0.1,0.1,0.1,0.55000001},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.34999999},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.1,0.89999998,0.60000002};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		lifeTimeVar=0.69999999;
		positionVar[]={0.40000001,0,0.40000001};
		MoveVelocityVar[]={0.5,0.1,0.5};
		rotationVelocityVar=0.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WeaponWreckSmoke: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.5;
		size[]={0.2,0.80000001,1.6};
		color[]=
		{
			{1,1,1,0.12},
			{1,1,1,0.079999998},
			{1,1,1,0.039999999},
			{1,1,1,0.02},
			{1,1,1,0.001}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=9;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVWreckSmoke: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.5;
		size[]={0.36000001,0.75,1.8,3.3};
		color[]=
		{
			{1,1,1,0.14},
			{1,1,1,0.1},
			{1,1,1,0.059999999},
			{1,1,1,0.029999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=3;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=9;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVCrashSmoke: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]={0,0.75,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.5;
		size[]={0.80000001,1.8,3.2,5.1999998};
		color[]=
		{
			{1,1,1,0.30000001},
			{1,1,1,0.23999999},
			{1,1,1,0.12},
			{1,1,1,0.050000001},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=2.5;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={1.2,1,1.2};
		rotationVelocityVar=9;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmallWreckSmoke: Default
	{
		interval=0.025;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.5;
		size[]={0.36000001,0.75,1.8,3.3};
		color[]=
		{
			{0.5,0.5,0.5,0.28},
			{0.5,0.5,0.5,0.2},
			{0.5,0.5,0.5,0.12},
			{0.5,0.5,0.5,0.059999999},
			{0.5,0.5,0.5,0.0099999998}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=3;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=9;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WinchDestructionExplo: Default
	{
		interval=0.0015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.30000001;
		moveVelocity[]={0,-1,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.001;
		size[]={0.2,2,3};
		color[]=
		{
			{0.2,0.2,0.2,0.18000001},
			{0.2,0.2,0.2,0.12},
			{0.2,0.2,0.2,0.059999999},
			{0.2,0.2,0.2,0.02},
			{0.2,0.2,0.2,0.001}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=2;
		position[]={0,0.30000001,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.80000001,0.80000001,0.80000001};
		rotationVelocityVar=30;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WinchDestructionSparks: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.25;
		moveVelocity[]={0,-2.5,0};
		rotationVelocity=1;
		weight=0.13;
		volume=0.1;
		rubbing=0;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={3,3,3};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WinchDestructionSmoke: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,-0.25,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.2,0.60000002,1.2};
		color[]=
		{
			{0.75,0.75,0.75,0.22},
			{0.75,0.75,0.75,0.12},
			{0.75,0.75,0.75,0.059999999},
			{0.75,0.75,0.75,0.029999999},
			{0.75,0.75,0.75,0.001}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=2;
		position[]={0,0.30000001,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.0099999998,0.0099999998,0.0099999998};
		rotationVelocityVar=9;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionSmoke2x: Default
	{
		interval=0.039999999;
		circleRadius=1.2;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.2 * 1.5 + 3";
		moveVelocity[]={0,0,0};
		rotationVelocity=18;
		weight=0.050799999;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"0.25 * 1.5 + 0.3",
			"0.25 * 1.5 + 0.7",
			"0.25 * 1.5 + 1.4"
		};
		color[]=
		{
			
			{
				0.050000001,
				"0.05.",
				0.050000001,
				0.30000001
			},
			
			{
				0.050000001,
				"0.05.",
				0.050000001,
				0.60000002
			},
			{0.1,0.1,0.1,0.55000001},
			{0.1,0.1,0.1,0.55000001},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.34999999},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.1,0.89999998,0.60000002};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=0;
		lifeTimeVar=0.69999999;
		positionVar[]={0.5,0,0.5};
		MoveVelocityVar[]={0.5,0.1,0.5};
		rotationVelocityVar=0.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionFire1: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.3;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.2 * intensity + 1.8",
			"0.1 * intensity + 0.3"
		};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		lifeTimeVar=0.5;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=2;
		damageType="Fire";
	};
	class ObjectDestructionFire2: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.3;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.2 * intensity + 1.8",
			0.30000001
		};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.2;
		constantDistance=2;
		damageType="Fire";
	};
	class AirObjectDestructionFire: Default
	{
		interval="0.02/((speed factor [0,200])*2 + 1)";
		lifeTime="2.3/((speed factor [0,200])*2 + 1)";
		lifeTimeVar=0;
		moveVelocity[]=
		{
			"0 + (speedX * 0.5)",
			"5 + (speedY * 0.5)",
			"0 + (speedZ * 0.5)"
		};
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={1.6,0.30000001};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.2;
		constantDistance=2;
		damageType="Fire";
	};
	class AirObjectDestructionSmoke: Default
	{
		interval="0.18/((speed factor [0,200])*10 + 1)";
		lifeTime="26/((speed factor [0,200])*10 + 1)";
		lifeTimeVar=0;
		moveVelocity[]=
		{
			"0 + (speedX * 0.5)",
			"3 + (speedY * 0.5)",
			"0 + (speedZ * 0.5)"
		};
		size[]={4,16};
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		color[]=
		{
			{0.34999999,0.34999999,0.34999999,0.60000002},
			{0.34999999,0.34999999,0.34999999,0.75},
			{0.34999999,0.34999999,0.34999999,0.44999999},
			{0.41999999,0.41999999,0.41999999,0.28},
			{0.41999999,0.41999999,0.41999999,0.16},
			{0.41999999,0.41999999,0.41999999,0.090000004},
			{0.41999999,0.41999999,0.41999999,0.059999999},
			{0.5,0.5,0.5,0.02},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1,0.55000001,0.34999999};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		sizeCoef="(speed/400) + 1";
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		positionVar[]={0.80000001,0.30000001,0.80000001};
		MoveVelocityVar[]={0.5,0.75,0.5};
		rotationVelocityVar=0.5;
		sizeVar=0;
		colorVar[]={0,0,0,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AirObjectDestructionSmoke1: Default
	{
		interval="0.22/((speed factor [0,200])*10 + 1)";
		lifeTime="25/((speed factor [0,200])*10 + 1)";
		lifeTimeVar=0;
		moveVelocity[]=
		{
			"0 + (speedX * 0.5)",
			"2 + (speedY * 0.5)",
			"0 + (speedZ * 0.5)"
		};
		size[]={2,30};
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		rotationVelocity=0;
		weight=0.050099999;
		volume=0.039999999;
		rubbing=0.050000001;
		color[]=
		{
			
			{
				0.039999999,
				"0.04.",
				0.039999999,
				0.40000001
			},
			
			{
				0.039999999,
				"0.04.",
				0.039999999,
				0.60000002
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.44999999
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.31999999
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.2
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.1
			},
			
			{
				0.090000004,
				"0.09.",
				0.090000004,
				0.059999999
			},
			
			{
				0.16,
				"0.16.",
				0.16,
				0.0099999998
			},
			
			{
				0.16,
				"0.16.",
				0.16,
				0
			}
		};
		animationSpeed[]={1,0.44999999,0.34999999};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		sizeCoef="(speed/400) + 1";
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		positionVar[]={0.80000001,0.30000001,0.80000001};
		MoveVelocityVar[]={0.5,0.75,0.5};
		rotationVelocityVar=0.5;
		sizeVar=0;
		colorVar[]={0,0,0,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionFire1Small: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.2 * intensity + 1",
			"0.1 * intensity + 0.2"
		};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.40000001;
		positionVar[]={0.1,0.30000001,0.1};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
	};
	class ObjectDestructionFire1Tiny: Default
	{
		interval=0.017999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.25;
		moveVelocity[]={0,0.69999999,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.36000001,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-100},
			{1,1,1,-100},
			{0,0,0,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.15000001;
		position[]={0,0,0};
		positionVar[]={0.059999999,0.15000001,0.059999999};
		moveVelocityVar[]={0.039999999,0.2,0.039999999};
		rotationVelocityVar=0;
		sizeVar=0.039999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=2;
		coreDistance=0.1;
		damageTime=0.1;
		constantDistance=0.2;
		damageType="Fire";
	};
	class ObjectDestructionRefract: Default
	{
		interval=0.012;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5;
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		weight=0.80000001;
		volume=1;
		rubbing=0.1;
		size[]={1.8,2.4000001};
		sizeCoef=1;
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.25999999},
			{0.30000001,0.30000001,0.30000001,0.23999999},
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.30000001,0.30000001,0.30000001,0.16},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.02}
		};
		colorCoef[]={1,1,1,1.4};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.5;
		positionVar[]={3.5,0,3.5};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.029999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionRefractSmall: Default
	{
		interval=0.017999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5999999;
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		weight=0.80000001;
		volume=1;
		rubbing=0.1;
		size[]={1.3,2.5999999};
		sizeCoef=1;
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.25999999},
			{0.30000001,0.30000001,0.30000001,0.23999999},
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.30000001,0.30000001,0.30000001,0.16},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.02}
		};
		colorCoef[]={1,1,1,1.1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.5;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.029999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ObjectDestructionFire1Smallx: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.2 * 1.5 + 1",
			"0.1 * 1.5 + 0.2"
		};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.40000001;
		positionVar[]={0.1,0.30000001,0.1};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
	};
	class ObjectDestructionFire2Small: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.8;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.2 * intensity + 1",
			0.2
		};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.40000001;
		positionVar[]={0.15000001,0.30000001,0.15000001};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
	};
	class ObjectDestructionFire2Smallx: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.8;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.2 * 1.5 + 1",
			0.2
		};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.40000001;
		positionVar[]={0.15000001,0.30000001,0.15000001};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
	};
	class ObjectDestructionSparks: Default
	{
		interval="1.5 * fireInterval";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\cl_fire";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="6 * random + 3";
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=0.0049999999;
		volume=0.0041999999;
		rubbing=0.050000001;
		size[]={0.02};
		color[]=
		{
			{1,1,1,1},
			{0,0,0,0}
		};
		animationSpeed[]={0,1};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.30000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.80000001;
		positionVar[]={0,0,0};
		moveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=0;
		sizeVar=0.0099999998;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BarelDestructionFire: Default
	{
		interval="0.06 * fireInterval + 0.06";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=60;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.5;
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.25 * intensity + 0.7"
		};
		color[]=
		{
			{1,1,1,0},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]=
		{
			"0.1 + 1.25 * intensity",
			0.30000001,
			"0.1 + 1.25 * intensity"
		};
		moveVelocityVar[]={0.1,1.2,0.1};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BarelDestructionSmoke: Default
	{
		interval="0.07 * interval + 0.07";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.25 * intensity + 1.5";
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		weight=0.050799999;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.25 * intensity + 0.3",
			"1.25 * intensity + 2",
			"1.25 * intensity + 3.5"
		};
		color[]=
		{
			{0.0099999998,0.0099999998,0.0099999998,0},
			{0.1,0.1,0.1,0.69999999},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0.02},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.090000004;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar="0.2 + 1.25 * intensity";
		positionVar[]=
		{
			"0.2 + 1.25 * intensity",
			"0.2 + 1.25 * intensity",
			"0.2 + 1.25 * intensity"
		};
		MoveVelocityVar[]={0.050000001,0.5,0.050000001};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class SmallFireF: Default
	{
		interval=0.022;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.25;
		moveVelocity[]={0,0.69999999,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.23999999,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-100},
			{1,1,1,-100},
			{0,0,0,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.15000001;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.15000001,0.0099999998};
		moveVelocityVar[]={0.039999999,0.2,0.039999999};
		rotationVelocityVar=0;
		sizeVar=0.039999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=2;
		coreDistance=0.1;
		damageTime=0.1;
		constantDistance=0.2;
		damageType="Fire";
	};
	class SmallFireFPlace: Default
	{
		interval=0.032000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.15000001;
		moveVelocity[]={0,0.15000001,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.18000001,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-100},
			{1,1,1,-100},
			{0,0,0,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.07;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.050000001,0.0099999998};
		moveVelocityVar[]={0.039999999,0.1,0.039999999};
		rotationVelocityVar=0;
		sizeVar=0.039999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1;
		coreDistance=0.1;
		damageTime=0.1;
		constantDistance=0.1;
		damageType="Fire";
	};
	class SmallFireFRefract: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.44999999;
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		weight=0.80000001;
		volume=1;
		rubbing=0.1;
		size[]={0.2,0.5};
		sizeCoef=1;
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.25999999},
			{0.30000001,0.30000001,0.30000001,0.23999999},
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.30000001,0.30000001,0.30000001,0.16},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.02}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.059999999;
		positionVar[]={0.050000001,0.1,0.050000001};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.029999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IncinerateFire: SmallFireF
	{
		coreIntensity=3.75;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
		size[]={1.7,0};
		sizeVar=0.36000001;
		sizeCoef=3;
	};
	class IEDFlameF: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.30000001;
		moveVelocity[]={0,0.15000001,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.16;
		size[]={0.30000001,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.60000002,-80},
			{1,0.60000002,0.60000002,-80},
			{0,0,0,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.15000001;
		position[]={0,0,0};
		positionVar[]={0.017999999,0.079999998,0.017999999};
		moveVelocityVar[]={0.029999999,0.090000004,0.029999999};
		rotationVelocityVar=0;
		sizeVar=0.059999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExpSparksSmoke: Default
	{
		interval="0.04/(((speed factor [0,200])+0.01)*0.8 + 1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.2;
		moveVelocity[]={0,0.60000002,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.22;
		size[]={0.1,0.60000002};
		sizeCoef=1;
		color[]=
		{
			{0.1,0.1,0.1,0.059999999},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.40000001,0.40000001,0.40000001,0.0049999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1.5,0.5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.079999998,0.039999999,0.079999998};
		MoveVelocityVar[]={0.079999998,0.1,0.079999998};
		rotationVelocityVar=0;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=0.0099999998;
	};
	class ExpSparksFire: Default
	{
		interval="0.03/(((speed factor [0,200])+0.01)*0.8 + 1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="0.3/((speed+0.01)/2 + 1)";
		moveVelocity[]={0,0.15000001,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.16;
		size[]={0.30000001,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.80000001,0.80000001,-80},
			{1,0.80000001,0.80000001,-80},
			{0,0,0,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.15000001;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.039999999,0.0099999998};
		moveVelocityVar[]={0.0099999998,0.039999999,0.0099999998};
		rotationVelocityVar=0;
		sizeVar=0.059999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class IEDFlameS: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.2;
		moveVelocity[]={0,0.60000002,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.22;
		size[]={0.14,0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0.1,0.1,0.1,0.029999999},
			{0.2,0.2,0.2,0.050000001},
			{0.2,0.2,0.2,0.025},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.40000001,0.40000001,0.40000001,0.0049999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1.5,0.5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.029999999,0.029999999,0.029999999};
		MoveVelocityVar[]={0.25,0.5,0.25};
		rotationVelocityVar=0;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=0.0099999998;
	};
	class SmallFireBarrel: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.64999998;
		moveVelocity[]={0,0.80000001,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.029999999;
		size[]={0.41999999,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0},
			{1,1,1,-1.7},
			{1,1,1,-2.5},
			{1,1,1,-2},
			{1,1,1,-1.7},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.2;
		position[]={0,0,0};
		positionVar[]={0.02,0.2,0.02};
		moveVelocityVar[]={0.050000001,0.69999999,0.050000001};
		rotationVelocityVar=0;
		sizeVar=0.039999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmallFireS: Default
	{
		interval=-0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.2;
		moveVelocity[]={0,0.60000002,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.2,0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0.1,0.1,0.1,0},
			{0.2,0.2,0.2,0.0099999998},
			{0.2,0.2,0.2,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.039999999},
			{0.40000001,0.40000001,0.40000001,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1.5,0.5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.2;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.02,0.5,0.02};
		rotationVelocityVar=0;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=0.0099999998;
	};
	class Refract: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0.60000002,0};
		rotationVelocity=0;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.2,0.80000001,2.5999999};
		sizeCoef=1;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.69999999,0.69999999,0.69999999,0.2},
			{0.80000001,0.80000001,0.80000001,0.1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1.5,0.5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.090000004;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.30000001;
		position[]={0,0,0};
		positionVar[]={0.1,0.2,0.1};
		MoveVelocityVar[]={0.050000001,0.5,0.050000001};
		rotationVelocityVar=0;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HouseDestructionSmoke1: Default
	{
		interval="0.002 * interval + 0.002";
		circleRadius=18;
		circleVelocity[]=
		{
			"-0.6 - 1.6 * intensity",
			0,
			"-0.6 - 1.6 * intensity"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.8 * intensity + 5";
		moveVelocity[]=
		{
			0,
			"4 + 2 * intensity",
			0
		};
		rotationVelocity=0;
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.059999999;
		size[]=
		{
			"1 * intensity + 5",
			"1 * intensity + 16"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.60000002},
			{0.14,0.14,0.14,0.41999999},
			{0.14,0.14,0.14,0.28},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.090000004},
			{0.14,0.14,0.14,0.039999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar="4 + 2 * intensity";
		positionVar[]=
		{
			"1 + 1.25 * intensity",
			"3 + 4 * intensity",
			"1 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			1.2,
			"4 + 2 * intensity",
			1.2
		};
		rotationVelocityVar=40;
		sizeVar=0.30000001;
		colorVar[]={0.07,0.07,0.07,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HouseDestructionSmoke2: Default
	{
		interval="0.004 * interval + 0.004";
		circleRadius=16;
		circleVelocity[]=
		{
			"1.2 + 0.8 * intensity",
			0,
			"1.2 + 0.8 * intensity"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.25 * intensity + 10";
		moveVelocity[]={0,0.050000001,0};
		rotationVelocity=0;
		weight=0.050999999;
		volume=0.039999999;
		rubbing=0.059999999;
		size[]=
		{
			"1 * intensity + 3",
			"1 * intensity + 10"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.44999999},
			{0.14,0.14,0.14,0.34999999},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.090000004;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar="2.5 + 1.25 * intensity";
		positionVar[]=
		{
			"0.2 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.2 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			"0.6 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.6 + 1.25 * intensity"
		};
		rotationVelocityVar=40;
		sizeVar=0.30000001;
		colorVar[]={0.07,0.07,0.07,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HouseDestructionSmoke3: Default
	{
		interval="0.0025 * interval + 0.0025";
		circleRadius=8;
		circleVelocity[]=
		{
			"-0.6 - 1.6 * intensity",
			0,
			"-0.6 - 1.6 * intensity"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.8 * intensity + 5";
		moveVelocity[]=
		{
			0,
			"3 + 1.5 * intensity",
			0
		};
		rotationVelocity=0;
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.059999999;
		size[]=
		{
			"1 * intensity + 1.5",
			"1 * intensity + 10"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.40000001},
			{0.14,0.14,0.14,0.33000001},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar="4 + 2 * intensity";
		positionVar[]=
		{
			"0.5 + 1.25 * intensity",
			"1 + 1.5 * intensity",
			"0.5 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			1.2,
			"1.5 + 0.6 * intensity",
			1.2
		};
		rotationVelocityVar=40;
		sizeVar=0.30000001;
		colorVar[]={0.07,0.07,0.07,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HouseDestructionSmoke4: Default
	{
		interval="0.0065 * interval + 0.0065";
		circleRadius=10;
		circleVelocity[]=
		{
			"1.2 + 0.8 * intensity",
			0,
			"1.2 + 0.8 * intensity"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1.25 * intensity + 10";
		moveVelocity[]={0,0.050000001,0};
		rotationVelocity=0;
		weight=0.050999999;
		volume=0.039999999;
		rubbing=0.059999999;
		size[]=
		{
			"1 * intensity + 2",
			"1 * intensity + 8"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.44999999},
			{0.14,0.14,0.14,0.34999999},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.090000004;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar="2.5 + 1.25 * intensity";
		positionVar[]=
		{
			"0.2 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.2 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			"0.6 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.6 + 1.25 * intensity"
		};
		rotationVelocityVar=40;
		sizeVar=0.30000001;
		colorVar[]={0.07,0.07,0.07,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HouseDestrSmokeLong: Default
	{
		interval=0.039999999;
		circleRadius=10;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=20;
		moveVelocity[]={0,0.0099999998,0};
		rotationVelocity=0;
		weight=1.276;
		volume=1;
		rubbing=0.029999999;
		size[]={0.80000001,5,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12};
		color[]=
		{
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.16},
			{0.2,0.2,0.2,0.12},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.079999998},
			{0.2,0.2,0.2,0.059999999},
			{0.2,0.2,0.2,0.029999999},
			{0.2,0.2,0.2,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=12;
		positionVar[]={10,1,10};
		MoveVelocityVar[]={0.40000001,0.1,0.40000001};
		rotationVelocityVar=30;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HouseDestructionSmoke3Small: Default
	{
		interval="0.008 * interval + 0.008";
		circleRadius=3;
		circleVelocity[]=
		{
			"-0.6 - 1.4 * intensity",
			0,
			"-0.6 - 1.4 * intensity"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="2 * intensity + 3.5";
		moveVelocity[]=
		{
			0,
			"2 + 1 * intensity",
			0
		};
		rotationVelocity=0;
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.059999999;
		size[]=
		{
			"0.8 * intensity + 1.2",
			"0.8 * intensity + 6"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.40000001},
			{0.14,0.14,0.14,0.33000001},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar="2 + 1 * intensity";
		positionVar[]=
		{
			"0.3 + 1 * intensity",
			"0.6 + 1 * intensity",
			"0.3 + 1 * intensity"
		};
		MoveVelocityVar[]=
		{
			1,
			"1.2 + 0.6 * intensity",
			1
		};
		rotationVelocityVar=30;
		sizeVar=0.2;
		colorVar[]={0.07,0.07,0.07,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HouseDestructionSmoke4Small: Default
	{
		interval="0.015 * interval + 0.015";
		circleRadius=4.5;
		circleVelocity[]=
		{
			"1 + 0.6 * intensity",
			0,
			"1 + 0.6 * intensity"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="1 * intensity + 8";
		moveVelocity[]={0,0.050000001,0};
		rotationVelocity=0;
		weight=0.050999999;
		volume=0.039999999;
		rubbing=0.059999999;
		size[]=
		{
			"1 * intensity + 1.6",
			"1 * intensity + 6"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.44999999},
			{0.14,0.14,0.14,0.34999999},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.090000004;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar="1.5 + 1 * intensity";
		positionVar[]=
		{
			"0.1 + 1 * intensity",
			"0.1 + 0.75 * intensity",
			"0.1 + 1 * intensity"
		};
		MoveVelocityVar[]=
		{
			"0.5 + 1 * intensity",
			"0.1 + 0.75 * intensity",
			"0.5 + 1 * intensity"
		};
		rotationVelocityVar=30;
		sizeVar=0.2;
		colorVar[]={0.07,0.07,0.07,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class HouseDestrSmokeLongSmall: Default
	{
		interval=0.059999999;
		circleRadius=6;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=12;
		moveVelocity[]={0,0.0099999998,0};
		rotationVelocity=0;
		weight=1.276;
		volume=1;
		rubbing=0.029999999;
		size[]={0.80000001,4,8,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
		color[]=
		{
			{0.2,0.2,0.2,0.16},
			{0.2,0.2,0.2,0.14},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.079999998},
			{0.2,0.2,0.2,0.059999999},
			{0.2,0.2,0.2,0.029999999},
			{0.2,0.2,0.2,0.0099999998},
			{0.2,0.2,0.2,0.001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=8;
		positionVar[]={5,1,5};
		MoveVelocityVar[]={0.25,0.1,0.25};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HouseDestructionSmoke1Med: HouseDestructionSmoke1
	{
		interval="0.0035 * interval + 0.0035";
		circleRadius=18;
		circleVelocity[]=
		{
			"-0.6 - 1.6 * intensity",
			0,
			"-0.6 - 1.6 * intensity"
		};
		lifeTime="1.5 * intensity + 4";
		moveVelocity[]=
		{
			0,
			"4 + 2 * intensity",
			0
		};
		size[]=
		{
			"1 * intensity + 6",
			"1 * intensity + 20"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.60000002},
			{0.14,0.14,0.14,0.41999999},
			{0.14,0.14,0.14,0.28},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.090000004},
			{0.14,0.14,0.14,0.039999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		lifeTimeVar="3 + 1.5 * intensity";
		positionVar[]=
		{
			"1 + 1.25 * intensity",
			"3 + 4 * intensity",
			"1 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			1.2,
			"4 + 2 * intensity",
			1.2
		};
		sizeVar=0.30000001;
	};
	class HouseDestructionSmoke2Med: HouseDestructionSmoke2
	{
		interval="0.004 * interval + 0.004";
		circleRadius=16;
		circleVelocity[]=
		{
			"1.2 + 0.8 * intensity",
			0,
			"1.2 + 0.8 * intensity"
		};
		lifeTime="1.25 * intensity + 10";
		moveVelocity[]={0,0.050000001,0};
		size[]=
		{
			"1 * intensity + 3",
			"1 * intensity + 10"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.44999999},
			{0.14,0.14,0.14,0.34999999},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		lifeTimeVar="2.5 + 1.25 * intensity";
		positionVar[]=
		{
			"0.2 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.2 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			"0.6 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.6 + 1.25 * intensity"
		};
		sizeVar=0.30000001;
	};
	class HouseDestructionSmoke3Med: HouseDestructionSmoke3
	{
		interval="0.004 * interval + 0.004";
		circleRadius=8;
		circleVelocity[]=
		{
			"-0.6 - 1.6 * intensity",
			0,
			"-0.6 - 1.6 * intensity"
		};
		lifeTime="1.6 * intensity + 4.5";
		moveVelocity[]=
		{
			0,
			"3 + 1.5 * intensity",
			0
		};
		size[]=
		{
			"1 * intensity + 2",
			"1 * intensity + 12"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.40000001},
			{0.14,0.14,0.14,0.33000001},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		lifeTimeVar="3.2 + 1.7 * intensity";
		positionVar[]=
		{
			"0.5 + 1.25 * intensity",
			"1 + 1.5 * intensity",
			"0.5 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			1.2,
			"1.5 + 0.6 * intensity",
			1.2
		};
		sizeVar=0.30000001;
	};
	class HouseDestructionSmoke4Med: HouseDestructionSmoke4
	{
		interval="0.0085 * interval + 0.0085";
		circleRadius=10;
		circleVelocity[]=
		{
			"1.2 + 0.8 * intensity",
			0,
			"1.2 + 0.8 * intensity"
		};
		lifeTime="1.25 * intensity + 10";
		moveVelocity[]={0,0.050000001,0};
		size[]=
		{
			"1 * intensity + 3",
			"1 * intensity + 10"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.44999999},
			{0.14,0.14,0.14,0.34999999},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		lifeTimeVar="2.5 + 1.25 * intensity";
		positionVar[]=
		{
			"0.2 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.2 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			"0.6 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.6 + 1.25 * intensity"
		};
		sizeVar=0.30000001;
	};
	class HouseDestrSmokeLongMed: HouseDestrSmokeLong
	{
		interval=0.059999999;
		circleRadius=10;
		circleVelocity[]={0,0,0};
		lifeTime=14;
		moveVelocity[]={0,0.0099999998,0};
		size[]={0.80000001,5,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12};
		color[]=
		{
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.16},
			{0.2,0.2,0.2,0.12},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.80000001},
			{0.2,0.2,0.2,0.60000002},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.0099999998}
		};
		lifeTimeVar=8;
		positionVar[]={10,1,10};
		MoveVelocityVar[]={0.40000001,0.1,0.40000001};
		sizeVar=0.30000001;
	};
	class HouseDestructionSmoke1Low: HouseDestructionSmoke1
	{
		interval="0.005 * interval + 0.005";
		circleRadius=18;
		circleVelocity[]=
		{
			"-0.6 - 1.6 * intensity",
			0,
			"-0.6 - 1.6 * intensity"
		};
		lifeTime="1.3 * intensity + 3.5";
		moveVelocity[]=
		{
			0,
			"4 + 2 * intensity",
			0
		};
		size[]=
		{
			"1 * intensity + 8",
			"1 * intensity + 25"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.60000002},
			{0.14,0.14,0.14,0.41999999},
			{0.14,0.14,0.14,0.28},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.090000004},
			{0.14,0.14,0.14,0.039999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		lifeTimeVar="2.8 + 1.2 * intensity";
		positionVar[]=
		{
			"1 + 1.25 * intensity",
			"3 + 4 * intensity",
			"1 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			1.2,
			"4 + 2 * intensity",
			1.2
		};
		sizeVar=0.30000001;
	};
	class HouseDestructionSmoke2Low: HouseDestructionSmoke2
	{
		interval="0.004 * interval + 0.004";
		circleRadius=16;
		circleVelocity[]=
		{
			"1.2 + 0.8 * intensity",
			0,
			"1.2 + 0.8 * intensity"
		};
		lifeTime="1.25 * intensity + 10";
		moveVelocity[]={0,0.050000001,0};
		size[]=
		{
			"1 * intensity + 3",
			"1 * intensity + 10"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.44999999},
			{0.14,0.14,0.14,0.34999999},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		lifeTimeVar="2.5 + 1.25 * intensity";
		positionVar[]=
		{
			"0.2 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.2 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			"0.6 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.6 + 1.25 * intensity"
		};
		sizeVar=0.30000001;
	};
	class HouseDestructionSmoke3Low: HouseDestructionSmoke3
	{
		interval="0.0075 * interval + 0.0075";
		circleRadius=8;
		circleVelocity[]=
		{
			"-0.6 - 1.6 * intensity",
			0,
			"-0.6 - 1.6 * intensity"
		};
		lifeTime="1.2 * intensity + 4";
		moveVelocity[]=
		{
			0,
			"3 + 1.5 * intensity",
			0
		};
		size[]=
		{
			"1 * intensity + 3",
			"1 * intensity + 15"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.40000001},
			{0.14,0.14,0.14,0.33000001},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		lifeTimeVar="2.8 + 1.5 * intensity";
		positionVar[]=
		{
			"0.5 + 1.25 * intensity",
			"1 + 1.5 * intensity",
			"0.5 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			1.2,
			"1.5 + 0.6 * intensity",
			1.2
		};
		sizeVar=0.30000001;
	};
	class HouseDestructionSmoke4Low: HouseDestructionSmoke4
	{
		interval="0.01 * interval + 0.01";
		circleRadius=10;
		circleVelocity[]=
		{
			"1.2 + 0.8 * intensity",
			0,
			"1.2 + 0.8 * intensity"
		};
		lifeTime="1.25 * intensity + 10";
		moveVelocity[]={0,0.050000001,0};
		size[]=
		{
			"1 * intensity + 3",
			"1 * intensity + 14"
		};
		color[]=
		{
			{0.14,0.14,0.14,0.44999999},
			{0.14,0.14,0.14,0.34999999},
			{0.14,0.14,0.14,0.25999999},
			{0.14,0.14,0.14,0.18000001},
			{0.14,0.14,0.14,0.079999998},
			{0.14,0.14,0.14,0.029999999},
			{0.14,0.14,0.14,0.0099999998}
		};
		lifeTimeVar="2.5 + 1.25 * intensity";
		positionVar[]=
		{
			"0.2 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.2 + 1.25 * intensity"
		};
		MoveVelocityVar[]=
		{
			"0.6 + 1.25 * intensity",
			"0.1 + 1 * intensity",
			"0.6 + 1.25 * intensity"
		};
		sizeVar=0.30000001;
	};
	class HouseDestrSmokeLongLow: HouseDestrSmokeLong
	{
		interval=0.090000004;
		circleRadius=10;
		circleVelocity[]={0,0,0};
		lifeTime=9;
		moveVelocity[]={0,0.0099999998,0};
		size[]={0.80000001,5,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12};
		color[]=
		{
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.16},
			{0.2,0.2,0.2,0.12},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.80000001},
			{0.2,0.2,0.2,0.60000002},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.0099999998}
		};
		lifeTimeVar=5;
		positionVar[]={10,1,10};
		MoveVelocityVar[]={0.40000001,0.1,0.40000001};
		sizeVar=0.30000001;
	};
	class HousePartDust: Default
	{
		interval=0.0015;
		circleRadius=1.5;
		circleVelocity[]={0.5,0,0.5};
		onSurface=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=0;
		weight=0.055;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={3,5};
		color[]=
		{
			{0.1,0.090000004,0.079999998,0.5},
			{0.60000002,0.5,0.40000001,0.40000001},
			{0.60000002,0.5,0.40000001,0.2},
			{0.60000002,0.5,0.40000001,0.1},
			{0.60000002,0.5,0.40000001,0.050000001},
			{0.60000002,0.5,0.40000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.25;
		positionVar[]={0.75,2,0.75};
		MoveVelocityVar[]={0.2,1,0.2};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HousePartDustLong: Default
	{
		interval=0.0015;
		circleRadius=1.5;
		circleVelocity[]={0,0,0};
		onSurface=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.029999999;
		size[]={3,6,8};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.60000002},
			{0.30000001,0.30000001,0.30000001,0.40000001},
			{0.30000001,0.30000001,0.30000001,0.25},
			{0.30000001,0.30000001,0.30000001,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.25;
		positionVar[]={3,3,3};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=10;
		sizeVar=0.25;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.2;
	};
	class HousePartWall: Default
	{
		interval=0.015;
		circleRadius=1.5;
		circleVelocity[]={0,0,0};
		onSurface=0;
		particleShape="\A3\data_f\ParticleEffects\WallPart\WallPart.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=0.5;
		weight=10;
		volume=1;
		rubbing=0;
		size[]={2};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.25;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={1,0.0099999998,1};
		rotationVelocityVar=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeShellWhite: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=20;
		moveVelocity[]={0.2,0.1,0.1};
		rotationVelocity=1;
		weight=1.2776999;
		volume=1;
		rubbing=0.050000001;
		size[]={0.1,2,6};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.60000002,0.60000002,0.60000002,0}
		};
		animationSpeed[]={1.5,0.5};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.60000002;
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.34999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeShellWhiteWater: SmokeShellWhite
	{
		colorCoef[]={1,1,1,1};
		interval=0.25;
	};
	class SmokeShellRedWater: SmokeShellWhiteWater
	{
		colorCoef[]={0.84380001,0.1383,0.1353,1};
	};
	class SmokeShellGreenWater: SmokeShellWhiteWater
	{
		colorCoef[]={0.21250001,0.62580001,0.48909998,1};
	};
	class SmokeShellYellowWater: SmokeShellWhiteWater
	{
		colorCoef[]={0.98830003,0.86059999,0.071900003,1};
	};
	class SmokeShellPurpleWater: SmokeShellWhiteWater
	{
		colorCoef[]={0.4341,0.1388,0.41439998,1};
	};
	class SmokeShellBlueWater: SmokeShellWhiteWater
	{
		colorCoef[]={0.1183,0.1867,1,1};
	};
	class SmokeShellOrangeWater: SmokeShellWhiteWater
	{
		colorCoef[]={0.66970003,0.22750001,0.10053,1};
	};
	class SmokeShellWhite2: SmokeShellWhite
	{
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=4;
		particleFSLoop=0;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,1},
			{0.60000002,0.60000002,0.60000002,0.5},
			{0.60000002,0.60000002,0.60000002,0}
		};
	};
	class SmokeShellWhiteSmall: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			1.8
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.2;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=14;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=1;
		weight=1.26;
		volume=1;
		rubbing=0.050000001;
		size[]={0.2,6,10};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.23999999},
			{0.69999999,0.69999999,0.69999999,0.25999999},
			{0.69999999,0.69999999,0.69999999,0.25},
			{0.69999999,0.69999999,0.69999999,0.22},
			{0.69999999,0.69999999,0.69999999,0.18000001},
			{0.69999999,0.69999999,0.69999999,0.1},
			{0.69999999,0.69999999,0.69999999,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1.2,0.34999999,1.2};
		rotationVelocityVar=25;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.050000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeShellWhiteUW: Default
	{
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.050000001;
		size[]={0.2};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=8;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=0;
		sizeVar=0.0040000002;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeShellRedUW: SmokeShellWhiteUW
	{
		color[]=
		{
			{0.84380001,0.1383,0.1353,1}
		};
	};
	class SmokeShellGreenUW: SmokeShellWhiteUW
	{
		color[]=
		{
			{0.21250001,0.62580001,0.48909998,1}
		};
	};
	class SmokeShellYellowUW: SmokeShellWhiteUW
	{
		color[]=
		{
			{0.98830003,0.86059999,0.071900003,1}
		};
	};
	class SmokeShellPurpleUW: SmokeShellWhiteUW
	{
		color[]=
		{
			{0.4341,0.1388,0.41439998,1}
		};
	};
	class SmokeShellBlueUW: SmokeShellWhiteUW
	{
		color[]=
		{
			{0.1183,0.1867,1,1}
		};
	};
	class SmokeShellOrangeUW: SmokeShellWhiteUW
	{
		color[]=
		{
			{0.66970003,0.22750001,0.10053,1}
		};
	};
	class SmokeShellWhite2UW: SmokeShellWhiteUW
	{
		postEffects="SmokeShellWhiteWater";
	};
	class SmokeShellRed2UW: SmokeShellRedUW
	{
		postEffects="SmokeShellRedWater";
	};
	class SmokeShellGreen2UW: SmokeShellGreenUW
	{
		postEffects="SmokeShellGreenWater";
	};
	class SmokeShellYellow2UW: SmokeShellYellowUW
	{
		postEffects="SmokeShellYellowWater";
	};
	class SmokeShellPurple2UW: SmokeShellPurpleUW
	{
		postEffects="SmokeShellPurpleWater";
	};
	class SmokeShellBlue2UW: SmokeShellBlueUW
	{
		postEffects="SmokeShellBlueWater";
	};
	class SmokeShellOrange2UW: SmokeShellOrangeUW
	{
		postEffects="SmokeShellOrangeWater";
	};
	class CannonFlash: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval="0.03";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.2;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=10;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={5,12};
		color[]=
		{
			{1,1,1,-2},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={3};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.5,0.5,0.5};
		MoveVelocityVar[]={5,5,5};
		rotationVelocityVar=1;
		sizeVar=6;
		colorVar[]={0,0,0,0.34999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CannonSmoke: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval="0.01";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.40000001;
		size[]={2,12};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0},
			{0.69999999,0.69999999,0.69999999,0.80000001},
			{0.69999999,0.69999999,0.69999999,0.69999999},
			{0.80000001,0.80000001,0.80000001,0.34999999},
			{0.89999998,0.89999998,0.89999998,0.15000001},
			{1,1,1,0}
		};
		animationSpeed[]={2,0.69999999,0.5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.5,0.5,0.5};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=20;
		sizeVar=6;
		colorVar[]={0,0,0,0.34999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class heavyCaliber1: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval="0.1";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.30000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.104;
		rubbing=0.5;
		size[]={0.40000001,2.5};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0},
			{0.5,0.5,0.5,0.25},
			{0.69999999,0.69999999,0.69999999,0}
		};
		animationSpeed[]={2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class heavyCaliber2: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval="0.1";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.30000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.104;
		rubbing=0.5;
		size[]={0.40000001,2.5};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.2},
			{0.80000001,0.80000001,0.80000001,0}
		};
		animationSpeed[]={2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CannonFired1: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Explosion_4x4";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.07;
		moveVelocity[]=
		{
			"120*directionX",
			"120*directionY",
			"120*directionZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={3,8,10};
		color[]=
		{
			{1,1,1,-8},
			{1,1,1,-20},
			{1,1,1,-20},
			{1,1,1,-20},
			{1,1,1,-8}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		position[]=
		{
			"positionX + (directionLocalX * 1.3)",
			"positionY + (directionLocalY * 1.3)",
			"positionZ + (directionLocalZ * 1.3)"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CannonFired2: Default
	{
		interval=0.0023000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			"35*directionX",
			"35*directionY",
			"35*directionZ"
		};
		rotationVelocity=1;
		weight=1.278;
		volume=1;
		rubbing=0.80000001;
		size[]={3,10,14,16};
		color[]=
		{
			{0.5,0.5,0.5,0.1},
			{0.5,0.5,0.5,0.059999999},
			{0.5,0.5,0.5,0.015},
			{0.5,0.5,0.5,0.0080000004},
			{0.5,0.5,0.5,0.001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.029999999;
		onTimerScript="";
		beforeDestroyScript="";
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1.6};
		sizeCoef=1;
		position[]=
		{
			"positionX + (directionLocalX * 1.3)",
			"positionY + (directionLocalY * 1.3)",
			"positionZ + (directionLocalZ * 1.3)"
		};
		lifeTimeVar=0.60000002;
		positionVar[]={2.2,2.2,2.2};
		MoveVelocityVar[]={8,8,8};
		rotationVelocityVar=14;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CannonFired3: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.0999999;
		moveVelocity[]=
		{
			"directionX * 2.2",
			"directionY * 2.2",
			"directionZ * 2.2"
		};
		rotationVelocity=1;
		weight=0.1285;
		volume=0.1;
		rubbing=0.80000001;
		size[]={0.25,0.60000002,1.1};
		sizeCoef="1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.30000001},
			{0.80000001,0.80000001,0.80000001,0.050000001},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AutoCannonFired: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.1;
		moveVelocity[]=
		{
			"3*directionX",
			"3*directionY",
			"3*directionZ"
		};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=1.05;
		size[]={0.30000001,0.69999999,1,1.2,1.4,1.6,1.8};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.035999998},
			{0.89999998,0.89999998,0.89999998,0.012},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		sizeCoef=2.4000001;
		colorCoef[]={1,1,1,1.8};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX + 0.12 * directionLocalX",
			"positionY + 0.12 * directionLocalY",
			"positionZ + 0.12 * directionLocalZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={4,4,4};
		rotationVelocityVar=15;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MortarFired1: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]=
		{
			"2.8*directionX",
			"2.8*directionY",
			"2.8*directionZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.69999999;
		size[]={0.60000002,3};
		color[]=
		{
			{0.55000001,0.55000001,0.55000001,0.12},
			{0.55000001,0.55000001,0.55000001,0.079999998},
			{0.55000001,0.55000001,0.55000001,0.050000001},
			{0.55000001,0.55000001,0.55000001,0.029999999},
			{0.55000001,0.55000001,0.55000001,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,0.80000001};
		sizeCoef=1;
		position[]=
		{
			"positionX + directionLocalX/4",
			"positionY + directionLocalY/4",
			"positionZ + directionLocalZ/4"
		};
		lifeTimeVar=0.40000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={2.8,2.8,2.8};
		rotationVelocityVar=30;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ArtilleryFired1: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			"4*directionX",
			"4*directionY",
			"4*directionZ"
		};
		rotationVelocity=1;
		weight=1.278;
		volume=1;
		rubbing=0.60000002;
		size[]={0.80000001,5.5,5.9000001,6.3000002,6.5999999,6.9000001,7.0999999,7.1999998,7.3000002};
		color[]=
		{
			{0.85000002,0.85000002,0.85000002,0.1},
			{0.85000002,0.85000002,0.85000002,0.07},
			{0.85000002,0.85000002,0.85000002,0.039999999},
			{0.85000002,0.85000002,0.85000002,0.0099999998},
			{0.85000002,0.85000002,0.85000002,0.001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.15000001;
		randomDirectionIntensity=0.30000001;
		onTimerScript="";
		beforeDestroyScript="";
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		position[]=
		{
			"positionX - 0.45 * directionLocalX",
			"positionY - 0.45 * directionLocalY",
			"positionZ - 0.45 * directionLocalZ"
		};
		lifeTimeVar=1;
		positionVar[]={0.5,0.5,0.5};
		positionVarConst[]=
		{
			"0.5*directionLocalX",
			"0.5*directionLocalY",
			"0.5*directionLocalZ"
		};
		MoveVelocityVar[]={4,4,4};
		MoveVelocityVarConst[]=
		{
			"2.5*directionX",
			"2.5*directionY",
			"2.5*directionZ"
		};
		rotationVelocityVar=12;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ArtilleryFired2: ArtilleryFired1
	{
		interval=0.003;
		moveVelocity[]=
		{
			"0.4*directionX",
			"0.4*directionY",
			"0.4*directionZ"
		};
		rotationVelocity=1;
		size[]={0.80000001,4.5,5.8000002,6.5};
		randomDirectionPeriod=0.15000001;
		randomDirectionIntensity=0.30000001;
		colorCoef[]={1,1,1,1};
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		positionVarConst[]={0,0,0};
		MoveVelocityVar[]={1.6,1.6,1.6};
		MoveVelocityVarConst[]=
		{
			"0.4*directionX",
			"0.4*directionY",
			"0.4*directionZ"
		};
		rotationVelocityVar=32;
	};
	class ArtilleryFiredL: ArtilleryFired1
	{
		interval=0.0020000001;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]=
		{
			"5*directionX",
			"5*directionY",
			"5*directionZ"
		};
		rotationVelocity=1;
		size[]={0.5,2.5,2.8,3};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.15000001;
		randomDirectionIntensity=0.30000001;
		onTimerScript="";
		beforeDestroyScript="";
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		position[]=
		{
			"positionX",
			"positionY ",
			"positionZ"
		};
		lifeTimeVar=1.5;
		positionVar[]={0.1,0.1,0.1};
		positionVarConst[]=
		{
			"directionLocalX",
			"directionLocalY",
			"directionLocalZ"
		};
		MoveVelocityVar[]={0.5,0.5,0.5};
		MoveVelocityVarConst[]=
		{
			"4.5*directionX",
			"4.5*directionY",
			"4.5*directionZ"
		};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ArtilleryFiredR: ArtilleryFiredL
	{
		moveVelocity[]=
		{
			"-5*directionX",
			"-5*directionY",
			"-5*directionZ"
		};
		MoveVelocityVarConst[]=
		{
			"-4.5*directionX",
			"-4.5*directionY",
			"-4.5*directionZ"
		};
		position[]=
		{
			"positionX",
			"positionY ",
			"positionZ"
		};
		positionVarConst[]=
		{
			"-directionLocalX",
			"-directionLocalY",
			"-directionLocalZ"
		};
	};
	class MLRSFired1: Default
	{
		interval=0.00030000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			"5*directionX",
			"5*directionY",
			"5*directionZ"
		};
		rotationVelocity=1;
		weight=1.22;
		volume=1;
		rubbing=0.40000001;
		size[]={1,8};
		color[]=
		{
			{0.5,0.5,0.5,0.22},
			{0.5,0.5,0.5,0.12},
			{0.5,0.5,0.5,0.079999998},
			{0.5,0.5,0.5,0.050000001},
			{0.5,0.5,0.5,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=1;
		positionVar[]={0.5,0.5,0.5};
		MoveVelocityVar[]={3.5,3.5,3.5};
		rotationVelocityVar=10;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MLRSFired1M: MLRSFired1
	{
		interval=0.00060000003;
		lifeTime=4;
		size[]={1.2,9};
		lifeTimeVar=0.60000002;
	};
	class MLRSFired1L: MLRSFired1
	{
		interval=0.0015;
		lifeTime=2.5;
		size[]={1.2,9};
		lifeTimeVar=0.5;
	};
	class FireDamage1: Default
	{
		animationSpeedCoef=1;
		colorCoef[]={1,1,1};
		sizeCoef=1;
		position[]={0,0,0};
		interval=100;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=1;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.1;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1;
		volume=0.104;
		rubbing=0;
		size[]={0.0099999998};
		color[]=
		{
			{1,1,1,0}
		};
		animationSpeed[]={0};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
	};
	class WreckSmokeSmall: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.6;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=1;
		weight=1.27;
		volume=1;
		rubbing=0.5;
		size[]={0.15000001,0.55000001};
		color[]=
		{
			{1,1,1,0.14},
			{1,1,1,0.1},
			{1,1,1,0.059999999},
			{1,1,1,0.029999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.40000001;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=9;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AvionicsSmoke: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.6;
		moveVelocity[]={0,0.079999998,0};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0;
		size[]={0.1,0.22};
		color[]=
		{
			{1,1,1,0.059999999},
			{1,1,1,0.039999999},
			{1,1,1,0.02},
			{1,1,1,0.0099999998},
			{1,1,1,0.001}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.40000001;
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=9;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AvionicsSparks: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.039999999,0.079999998,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.0099999998;
		position[]={0,0,0};
		positionVar[]={0.029999999,0.029999999,0.029999999};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LaptopSmoke: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0.079999998,0};
		rotationVelocity=1;
		weight=1.26;
		volume=1;
		rubbing=0;
		size[]={0.25,0.55000001};
		color[]=
		{
			{1,1,1,0.059999999},
			{1,1,1,0.039999999},
			{1,1,1,0.02},
			{1,1,1,0.0099999998},
			{1,1,1,0.001}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1;
		positionVar[]={0.079999998,0.0099999998,0.079999998};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=9;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LaptopSparks: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.090000004,0.18000001,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.0099999998;
		position[]={0,0,0};
		positionVar[]={0.12,0.029999999,0.12};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class PylonBacksmoke: RocketBacksmokeRPG
	{
		lifeTime=2;
		rotationVelocityVar=4;
		sizeCoef=2;
		colorCoef[]={1,1,1,0.30000001};
		randomDirectionIntensity=0.40000001;
		moveVelocity[]=
		{
			"-speedX/10",
			"-speedY/10",
			"-speedZ/10"
		};
		positionVar[]={1,1,1};
		position[]={0,0,-1.2};
	};
	class PylonBacksmoke2: PylonBacksmoke
	{
		interval=0.00050000002;
		lifeTime=2;
		moveVelocity[]=
		{
			"-speedX/4",
			"-speedY/4",
			"-speedZ/4"
		};
	};
	class PylonBackfire: RocketBackfireRPG
	{
		rubbing=0.40000001;
		sizeCoef=1.5;
		colorCoef[]={1,1,1,0.1};
		lifeTime=0.050000001;
		position[]={0,0,-1};
	};
	class PylonBackfireFFAR: RocketBackfireRPG
	{
		rubbing=0.039999999;
		sizeCoef=2.5;
		colorCoef[]={1,1,1,0.1};
		lifeTime=0.15000001;
		position[]={0,0,-1};
	};
	class PylonBackfireRockets: RocketBackfireRPG
	{
		interval=9.9999997e-005;
		rubbing=0;
		sizeCoef=2.5;
		colorCoef[]={1,1,1,0.1};
		lifeTime=0.2;
		position[]=
		{
			0,
			0,
			"-0.15s"
		};
		size[]={0.30000001,0.75};
		sizeVar=0.30000001;
		moveVelocity[]=
		{
			"-0.06 * speedX + parentSpeedX",
			"-0.06 * speedY + parentSpeedY",
			"-0.06 * speedZ + parentSpeedZ"
		};
		MoveVelocityVar[]={0.5,0.1,1.5};
	};
	class ImpactDustSabot2: Default
	{
		interval=0.0014;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="1 + (4.2 * dustness)";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * 4.2",
			"1 + (surfNormalY / 2) * 4.2",
			"(surfNormalZ / 2) * 4.2"
		};
		rotationVelocity=1;
		weight=1.36;
		volume=1;
		rubbing=0.40000001;
		size[]={0.60000002,8};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.2,
				0.175,
				0.15000001,
				"(0.3 * dustness) + 0.05"
			},
			
			{
				0.40000001,
				0.31999999,
				0.25,
				"(0.21 * dustness) + 0.035"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.1 * dustness) + 0.016"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.036 * dustness) + 0.006"
			},
			{0.44999999,0.37,0.30000001,0}
		};
		colorCoef[]={1,1,1,1.1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={1.4,3.2,1.4};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.050000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactConcreteSabot: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=10;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * 5.3",
			"(surfNormalY / 2) * 5.3",
			"(surfNormalZ / 2) * 5.3"
		};
		rotationVelocity=1;
		weight=5;
		volume=1;
		rubbing=0.029999999;
		size[]={0.1};
		color[]=
		{
			{0.5,0.5,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.30000001;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=5;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2,2,2};
		rotationVelocityVar=1;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSandSmokeSabot2: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * 6.4",
			"(surfNormalY / 2) * 6.4",
			"(surfNormalZ / 2) * 6.4"
		};
		rotationVelocity=0;
		weight=2.5;
		volume=0.1;
		rubbing=0.2;
		size[]={0.60000002,1};
		color[]=
		{
			
			{
				0.80000001,
				0.80000001,
				1,
				"0.3 + (0.3 * dustness)"
			},
			
			{
				0.80000001,
				0.80000001,
				1,
				"0.2 + (0.18 * dustness)"
			},
			
			{
				0.80000001,
				0.80000001,
				1,
				"0.04 + (0.06 * dustness)"
			}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=0;
		positionVar[]={0,0.1,0};
		MoveVelocityVar[]=
		{
			2,
			"4 * intensity * 0.66",
			2
		};
		rotationVelocityVar=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSandSmoke2: Default
	{
		interval=0.0040000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=9;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 150 * 0.8",
			"(surfNormalY / 2) * inSpeed / 150 * 0.8",
			"(surfNormalZ / 2) * inSpeed / 150 * 0.8"
		};
		rotationVelocity=0;
		weight=2.5;
		volume=0.1;
		rubbing=0.2;
		size[]={0.30000001,0.5};
		color[]=
		{
			
			{
				0.80000001,
				0.80000001,
				1,
				"0.3 + (0.3 * dustness)"
			},
			
			{
				0.80000001,
				0.80000001,
				1,
				"0.2 + (0.18 * dustness)"
			},
			
			{
				0.80000001,
				0.80000001,
				1,
				"0.04 + (0.06 * dustness)"
			}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=0;
		positionVar[]={0,0.1,0};
		MoveVelocityVar[]=
		{
			1,
			"2 * intensity * 0.66",
			1
		};
		rotationVelocityVar=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Blood: Default
	{
		interval="0.01/((hit interpolate [0.1,100,0.1,100])/30)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.1 + 0.05*((hit interpolate [0,100,0,100])/10)";
		moveVelocity[]=
		{
			"(- inDirX * 2 + surfNormalX / 4) * inSpeed / 3500 * 0.05",
			"( - inDirY * 2 + surfNormalY / 4) * inSpeed / 3500 * 0.05",
			"( - inDirZ * 2 + surfNormalZ / 4) * inSpeed / 3500 * 0.05"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.050000001;
		size[]=
		{
			"0.02 * ((hit interpolate [0,100,0,100])/26 + 0.26)",
			"0.6 * ((hit interpolate [0,100,0,100])/26 + 0.26)"
		};
		color[]=
		{
			{0.40000001,0.30000001,0.30000001,2},
			{0.40000001,0.30000001,0.30000001,2},
			{0.40000001,0.30000001,0.30000001,1.4},
			{0.40000001,0.30000001,0.30000001,0.80000001},
			{0.40000001,0.30000001,0.30000001,0.40000001},
			{0.40000001,0.30000001,0.30000001,0.050000001},
			{0.40000001,0.30000001,0.30000001,0.001}
		};
		animationSpeed[]={0.1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=1;
		sizeVar=0.1;
		colorVar[]={0,0,0,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BloodMist: Blood
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=4;
		particleFSFrameCount=1;
		particleFSLoop=0;
		lifeTime=0.30000001;
		size[]=
		{
			"((hit factor [3,100])/80 + 0.30)",
			"2*((hit factor [3,100])/80 + 0.4)"
		};
		color[]=
		{
			{1,0,0,0.12},
			{1,0,0,0.050000001}
		};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.30000001;
		weight=0.127;
	};
	class Blood1: Default
	{
		interval="0.004 * (hit interpolate [20,20.01,-1,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.12;
		moveVelocity[]=
		{
			"(inDirX * 2 - surfNormalX / 4) * inSpeed / 350 * 2",
			"(inDirY * 2 - surfNormalY / 4) * inSpeed / 350 * 2",
			"(inDirZ * 2 - surfNormalZ / 4) * inSpeed / 350 * 2"
		};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.02,0.5,0.80000001};
		color[]=
		{
			{1,0.80000001,0.80000001,0.69999999},
			{1,0.80000001,0.80000001,0.69999999},
			{1,0.80000001,0.80000001,0.69999999},
			{1,0.80000001,0.80000001,0.5},
			{1,0.80000001,0.80000001,0.30000001},
			{1,0.80000001,0.80000001,0.1},
			{1,0.80000001,0.80000001,0.050000001}
		};
		animationSpeed[]={0.1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		MoveVelocityVar[]={0.80000001,0.80000001,0.80000001};
		rotationVelocityVar=1;
		sizeVar=0.1;
		colorVar[]={0,0,0,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Blood2: Default
	{
		interval="(0.02 + 0.1/((hit interpolate [0.1,45,0.1,45])+0.001)) * (hit interpolate [20,20.01,-1,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Meat_ca";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=1;
		weight=22;
		volume=1;
		rubbing=0.2;
		size[]={1.5};
		color[]=
		{
			{0.25,0.050000001,0.050000001,0.69999999},
			{0.25,0.050000001,0.050000001,0.69999999},
			{0.25,0.050000001,0.050000001,0.69999999},
			{0.25,0.050000001,0.050000001,0.5},
			{0.25,0.050000001,0.050000001,0.30000001},
			{0.25,0.050000001,0.050000001,0.1},
			{0.25,0.050000001,0.050000001,0.050000001}
		};
		animationSpeed[]={0.1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0;
		bounceOnSurfaceVar=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		MoveVelocityVar[]=
		{
			"1.8*((hit interpolate [0,45,0,45])/30)",
			"1.8*((hit interpolate [0,45,0,45])/30)",
			"1.8*((hit interpolate [0,45,0,45])/30)"
		};
		rotationVelocityVar=8;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Blood3: Default
	{
		interval="0.015 + 0.1/((hit interpolate [0.1,45,0.1,45])+0.001))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Meat_ca";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=1;
		weight=22;
		volume=1;
		rubbing=0.2;
		size[]={0.30000001};
		color[]=
		{
			{0.25,0.050000001,0.050000001,0.69999999},
			{0.25,0.050000001,0.050000001,0.69999999},
			{0.25,0.050000001,0.050000001,0.69999999},
			{0.25,0.050000001,0.050000001,0.5},
			{0.25,0.050000001,0.050000001,0.30000001},
			{0.25,0.050000001,0.050000001,0.1},
			{0.25,0.050000001,0.050000001,0.050000001}
		};
		animationSpeed[]={0.1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0;
		bounceOnSurfaceVar=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		MoveVelocityVar[]=
		{
			"2*((hit interpolate [0,45,0,45])/10)",
			"2*((hit interpolate [0,45,0,45])/10)",
			"2*((hit interpolate [0,45,0,45])/10)"
		};
		rotationVelocityVar=8;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BloodUnderwater1: Default
	{
		interval="0.009 * (1.1 - damage)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		position[]={0,0,0};
		moveVelocity[]=
		{
			"(- (inDirX * 2 - surfNormalX / 4) * inSpeed / 200) * (damage + 0.2)",
			"(- (inDirY * 2 - surfNormalY / 4) * inSpeed / 200) * (damage + 0.2)",
			"(- (inDirZ * 2 - surfNormalZ / 4) * inSpeed / 200) * (damage + 0.2)"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=10;
		size[]=
		{
			"0.02 + (0.06 * damage)",
			"0.17 + (0.51 * damage)",
			"0.23 + (0.69 * damage)",
			"0.27 + (0.8 * damage)",
			"0.31 + (0.93 * damage)",
			"0.34 + (1.01 * damage)"
		};
		color[]=
		{
			{1,0.80000001,0.80000001,0.5},
			{1,0.80000001,0.80000001,0.40000001},
			{1,0.80000001,0.80000001,0.30000001},
			{1,0.80000001,0.80000001,0.22},
			{1,0.80000001,0.80000001,0.16},
			{1,0.80000001,0.80000001,0.079999998},
			{1,0.80000001,0.80000001,0.0099999998}
		};
		animationSpeed[]={0.1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		destroyOnWaterSurfaceOffset=0;
		lifeTimeVar=4;
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		MoveVelocityVar[]=
		{
			"0.5 * damage",
			"0.5 * damage",
			"0.5 * damage"
		};
		rotationVelocityVar=1;
		sizeVar=0.02;
		colorVar[]={0,0,0,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater1: Default
	{
		interval="0.03+(0.2/(hit interpolate [0.1,40,0.1,40]))";
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=3;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]=
		{
			"0.05+(0.008*((hit interpolate [0,40,0,40])/8))",
			"1.7+(0.19*((hit interpolate [0,40,0,40])/8))",
			"2.92+(0.33*((hit interpolate [0,40,0,40])/8))",
			"3.8+(0.45*((hit interpolate [0,40,0,40])/8))",
			"4.3+(0.5*((hit interpolate [0,40,0,40])/8))"
		};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.89999998},
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.60000002,0.60000002,0.60000002,0.30000001},
			{0.60000002,0.60000002,0.60000002,0.17},
			{0.60000002,0.60000002,0.60000002,0.13},
			{0.60000002,0.60000002,0.60000002,0.090000004},
			{0.60000002,0.60000002,0.60000002,0.059999999},
			{0.60000002,0.60000002,0.60000002,0.039999999},
			{0.60000002,0.60000002,0.60000002,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		keepOnSurface=1;
		surfaceOffset=0.02;
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater1Med: Default
	{
		interval="0.06+(0.4/(hit interpolate [0.1,40,0.1,40]))";
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=3;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]=
		{
			"0.05+(0.008*((hit interpolate [0,40,0,40])/8))",
			"1.7+(0.19*((hit interpolate [0,40,0,40])/8))",
			"2.92+(0.33*((hit interpolate [0,40,0,40])/8))",
			"3.8+(0.45*((hit interpolate [0,40,0,40])/8))",
			"4.3+(0.5*((hit interpolate [0,40,0,40])/8))"
		};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.89999998},
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.60000002,0.60000002,0.60000002,0.30000001},
			{0.60000002,0.60000002,0.60000002,0.17},
			{0.60000002,0.60000002,0.60000002,0.13},
			{0.60000002,0.60000002,0.60000002,0.090000004},
			{0.60000002,0.60000002,0.60000002,0.059999999},
			{0.60000002,0.60000002,0.60000002,0.039999999},
			{0.60000002,0.60000002,0.60000002,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		keepOnSurface=1;
		surfaceOffset=0.02;
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater2: Default
	{
		interval="0.018/(hit interpolate [0.1,40,0.1,40])";
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.3;
		moveVelocity[]={0,1.1,0};
		rotationVelocity=0;
		weight=8;
		volume=1;
		rubbing=1;
		size[]=
		{
			"0.075+(0.0025*(hit interpolate [0,40,0,40]))",
			"0.45+(0.015*(hit interpolate [0,40,0,40]))",
			"0.675+(0.0225*(hit interpolate [0,40,0,40]))"
		};
		color[]=
		{
			{1,1,1,0.2},
			{1,1,1,0.18000001},
			{1,1,1,0.16},
			{1,1,1,0.059999999},
			{1,1,1,0.0099999998},
			{1,1,1,0.0049999999}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0.2;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]=
		{
			"0.45+(0.015*(hit interpolate [0,40,0,40]))",
			1.1,
			"0.45+(0.015*(hit interpolate [0,40,0,40]))"
		};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater2Med: Default
	{
		interval="0.03/(hit interpolate [0.1,40,0.1,40])";
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.3;
		moveVelocity[]={0,1.1,0};
		rotationVelocity=0;
		weight=8;
		volume=1;
		rubbing=1;
		size[]=
		{
			"0.075+(0.0025*(hit interpolate [0,40,0,40]))",
			"0.45+(0.015*(hit interpolate [0,40,0,40]))",
			"0.675+(0.0225*(hit interpolate [0,40,0,40]))"
		};
		color[]=
		{
			{1,1,1,0.2},
			{1,1,1,0.18000001},
			{1,1,1,0.16},
			{1,1,1,0.059999999},
			{1,1,1,0.0099999998},
			{1,1,1,0.0049999999}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0.2;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]=
		{
			"0.45+(0.015*(hit interpolate [0,40,0,40]))",
			1.1,
			"0.45+(0.015*(hit interpolate [0,40,0,40]))"
		};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater3: Default
	{
		interval="0.0008 + 0.003/(hit interpolate [0.1,40,0.1,40])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.6;
		moveVelocity[]=
		{
			0,
			"1.2 + 0.08*(hit interpolate [0,40,0,40])",
			0
		};
		rotationVelocity=0;
		weight=24;
		volume=1;
		rubbing=1;
		size[]=
		{
			"0.15+(0.005*(hit interpolate [0,40,0,40]))",
			"0.24+(0.006*(hit interpolate [0,40,0,40]))",
			"0.32+(0.008*(hit interpolate [0,40,0,40]))"
		};
		color[]=
		{
			{1,1,1,0.16},
			{1,1,1,0.090000004},
			{1,1,1,0.050000001},
			{1,1,1,0.02},
			{1,1,1,0.0080000004},
			{1,1,1,0.003}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0.2;
		positionVar[]={0.050000001,0.2,0.050000001};
		MoveVelocityVar[]=
		{
			"0.025+0.0025*(hit interpolate [0,40,0,40])",
			"0.9 + 0.04*(hit interpolate [0,40,0,40])",
			"0.025+0.0025*(hit interpolate [0,40,0,40])"
		};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater3Med: Default
	{
		interval="0.0016 + 0.006/(hit interpolate [0.1,40,0.1,40])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.6;
		moveVelocity[]=
		{
			0,
			"1.2 + 0.08*(hit interpolate [0,40,0,40])",
			0
		};
		rotationVelocity=0;
		weight=24;
		volume=1;
		rubbing=1;
		size[]=
		{
			"0.15+(0.005*(hit interpolate [0,40,0,40]))",
			"0.24+(0.006*(hit interpolate [0,40,0,40]))",
			"0.32+(0.008*(hit interpolate [0,40,0,40]))"
		};
		color[]=
		{
			{1,1,1,0.16},
			{1,1,1,0.090000004},
			{1,1,1,0.050000001},
			{1,1,1,0.02},
			{1,1,1,0.0080000004},
			{1,1,1,0.003}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0.2;
		positionVar[]={0.050000001,0.2,0.050000001};
		MoveVelocityVar[]=
		{
			"0.025+0.0025*(hit interpolate [0,40,0,40])",
			"0.9 + 0.04*(hit interpolate [0,40,0,40])",
			"0.025+0.0025*(hit interpolate [0,40,0,40])"
		};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater4: Default
	{
		interval="0.0014 + (0.00007/(hit interpolate [0.1,40,0.1,40]))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4.5;
		moveVelocity[]=
		{
			0,
			"1 + 0.05 * (hit interpolate [0,40,0,40])",
			0
		};
		rotationVelocity=0;
		weight=1.65;
		volume=1;
		rubbing=0.44999999;
		size[]=
		{
			"0.5+0.02*(hit interpolate [0,40,0,40])",
			"1.45+0.055*(hit interpolate [0,40,0,40])",
			"2.0+0.09*(hit interpolate [0,40,0,40])"
		};
		color[]=
		{
			{1,1,1,0.026000001},
			{1,1,1,0.012},
			{1,1,1,0.0080000004},
			{1,1,1,0.0040000002},
			{1,1,1,0.0020000001},
			{1,1,1,0.00050000002}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=1.5;
		positionVar[]={0.2,0.80000001,0.2};
		MoveVelocityVar[]=
		{
			"0.35 + 0.015 * (hit interpolate [0,40,0,40])",
			"0.8 + 0.04 * (hit interpolate [0,40,0,40])",
			"0.35 + 0.015 * (hit interpolate [0,40,0,40])"
		};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater4Med: Default
	{
		interval="0.0028 + (0.00014/(hit interpolate [0.1,40,0.1,40]))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4.5;
		moveVelocity[]=
		{
			0,
			"1 + 0.05 * (hit interpolate [0,40,0,40])",
			0
		};
		rotationVelocity=0;
		weight=1.65;
		volume=1;
		rubbing=0.44999999;
		size[]=
		{
			"0.5+0.02*(hit interpolate [0,40,0,40])",
			"1.45+0.055*(hit interpolate [0,40,0,40])",
			"2.0+0.09*(hit interpolate [0,40,0,40])"
		};
		color[]=
		{
			{1,1,1,0.026000001},
			{1,1,1,0.012},
			{1,1,1,0.0080000004},
			{1,1,1,0.0040000002},
			{1,1,1,0.0020000001},
			{1,1,1,0.00050000002}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		onSurface=1;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=1.5;
		positionVar[]={0.2,0.80000001,0.2};
		MoveVelocityVar[]=
		{
			"0.35 + 0.015 * (hit interpolate [0,40,0,40])",
			"0.8 + 0.04 * (hit interpolate [0,40,0,40])",
			"0.35 + 0.015 * (hit interpolate [0,40,0,40])"
		};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater5: Default
	{
		interval="0.0005+(0.004/(hit interpolate [0.1,40,0.1,40]))";
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.3;
		moveVelocity[]={0,1.8,0};
		rotationVelocity=1;
		weight=10;
		volume=0.1;
		rubbing=1;
		size[]={0.2,0.60000002,1,1.3};
		color[]=
		{
			{1,1,1,0.059999999},
			{1,1,1,0.2},
			{1,1,1,0.30000001},
			{1,1,1,0.18000001},
			{1,1,1,0.039999999}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.2;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.5,1.8,0.5};
		rotationVelocityVar=1;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater6: Default
	{
		interval="0.01 * interval + 0.01";
		circleRadius=0.0099999998;
		circleVelocity[]={0.1,1,0.1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=16;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.40000001;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=2;
		volume=0.1;
		rubbing=0;
		size[]={0,20};
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,0.69999999},
			{1,1,1,0.050000001},
			{1,1,1,0.050000001},
			{1,1,1,0.050000001},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,3,0};
		rotationVelocityVar=1;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater7: Default
	{
		interval="0.0025 * interval + 0.0025";
		circleRadius=0.0099999998;
		circleVelocity[]={0.0099999998,1,0.0099999998};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=16;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=1;
		weight=2;
		volume=1;
		rubbing=0.050000001;
		size[]={0,0.029999999,0.02,0.0099999998,0.0049999999,0};
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,0.69999999},
			{1,1,1,0.69999999},
			{1,1,1,0.69999999},
			{1,1,1,0.69999999},
			{1,1,1,0.69999999}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.40000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.5,1.5,0.5};
		rotationVelocityVar=1;
		sizeVar=0.1;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater8: Default
	{
		interval=0.00039999999;
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,"10",0};
		rotationVelocity=0;
		weight=14;
		volume=1;
		rubbing=0;
		size[]={"5","11","13","15","17"};
		color[]=
		{
			{1,1,1,0.050000001},
			{1,1,1,0.079999998},
			{1,1,1,0.079999998},
			{1,1,1,0.029999999},
			{1,1,1,0.0099999998},
			{1,1,1,0.0049999999}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-10;
		lifeTimeVar=0.30000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={3,"4",3};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactEffectsWater9: Default
	{
		interval="0.005+(0.04/(hit interpolate [0.1,45,0.1,45]))";
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.4;
		moveVelocity[]=
		{
			0,
			"4.8+(0.15*((hit interpolate [0,45,0,45])/6.5))",
			0
		};
		rotationVelocity=0;
		weight=15;
		volume=1;
		rubbing=0;
		size[]=
		{
			"0.05+((hit interpolate [0,45,0,45])*0.005)",
			"0.3+((hit interpolate [0,45,0,45])*0.03)",
			"0.55+((hit interpolate [0,45,0,45])*0.055)",
			"0.8+((hit interpolate [0,45,0,45])*0.08)",
			"0.95+((hit interpolate [0,45,0,45])*0.095)"
		};
		color[]=
		{
			{1,1,1,0.12},
			{1,1,1,0.1},
			{1,1,1,0.079999998},
			{1,1,1,0.029999999},
			{1,1,1,0.0099999998},
			{1,1,1,0.0049999999}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			0.30000001,
			"0.6+(0.07*((hit interpolate [0,45,0,45])/6.5))",
			0.30000001
		};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSparks0: Default
	{
		interval=10;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\SparksBall.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.0049999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={1};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSparks1: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.079999998;
		moveVelocity[]=
		{
			"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 100",
			"( - inDirY * 2 + surfNormalY / 2) * inSpeed / 100",
			"( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 100"
		};
		rotationVelocity=1;
		weight=0.13;
		volume=0.1;
		rubbing=0;
		size[]={0.016000001,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.059999999;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={5,5,5};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSparks2: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.02;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]=
		{
			"0.05 + intensity * 0.1",
			"0.05 + intensity * 0.08",
			0
		};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSparksMed2: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.02;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]=
		{
			"0.05 + intensity * 0.1",
			"0.05 + intensity * 0.08",
			0
		};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSparksSabot0: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\SparksBall.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.0049999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={5};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSparksSabot1: Default
	{
		interval=0.0014;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=3.5;
		moveVelocity[]=
		{
			"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 200",
			"( - inDirY * 2 + surfNormalY / 2) * inSpeed / 200",
			"( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 200"
		};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,10,10,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={10,10,10};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSparksSabot1Small: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=3.5;
		moveVelocity[]=
		{
			"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 200",
			"( - inDirY * 2 + surfNormalY / 2) * inSpeed / 200",
			"( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 200"
		};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,10,10,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={10,10,10};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSparksSabot2: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.89999998,0.44999999,0};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSmokeSabot2: Default
	{
		interval="0.013 * interval + 0.013";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=9;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,3,0};
		rotationVelocity=0;
		weight=0.052200001;
		volume=0.039999999;
		rubbing=0.34999999;
		size[]=
		{
			"0.013 * intensity + 3",
			"0.0125 * intensity + 6",
			"0.013 * intensity + 8",
			"0.013 * intensity + 10"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.36000001},
			{0.80000001,0.80000001,0.80000001,0.23999999},
			{0.85000002,0.85000002,0.85000002,0.14},
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={1,1,1,0.44999999};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=2;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={3.5,5,3.5};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class ImpactSmokeSabot3: Default
	{
		interval="0.002 * interval + 0.002";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=9;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=0.052200001;
		volume=0.039999999;
		rubbing=0.40000001;
		size[]=
		{
			"0.013 * intensity + 3",
			"0.0125 * intensity + 6",
			"0.013 * intensity + 8",
			"0.013 * intensity + 10"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.36000001},
			{0.80000001,0.80000001,0.80000001,0.23999999},
			{0.85000002,0.85000002,0.85000002,0.14},
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={1,1,1,0.5};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=2;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={3,4,3};
		rotationVelocityVar=3;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensityVar=0.02;
	};
	class ImpactSmoke: Default
	{
		interval=0.0040000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"surfNormalX * inSpeed / 250 * 0.66",
			"surfNormalY * inSpeed / 250 * 0.66",
			"surfNormalZ * inSpeed / 250 * 0.66"
		};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.5;
		size[]={0.5,0.69999999};
		sizeCoef=1;
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.5},
			{0.40000001,0.40000001,0.40000001,0.25},
			{0.5,0.5,0.5,0.15000001},
			{0.60000002,0.60000002,0.60000002,0.07},
			{0.80000001,0.80000001,0.80000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0.2,0.2,0.2};
		moveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=0;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.30000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSmoke2: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.69999999;
		moveVelocity[]=
		{
			"surfNormalX * inSpeed / 250 * 0.3",
			"surfNormalY * inSpeed / 250 * 0.3",
			"surfNormalZ * inSpeed / 250 * 0.3"
		};
		rotationVelocity=12;
		weight=1.271;
		volume=1;
		rubbing=0.1;
		size[]={0.050000001,0.44999999};
		sizeCoef=1;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.035},
			{0.64999998,0.64999998,0.64999998,0.02},
			{0.69999999,0.69999999,0.69999999,0.014},
			{0.80000001,0.80000001,0.80000001,0.0080000004},
			{0.80000001,0.80000001,0.80000001,0.0040000002}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.15000001;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=6;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSmokeMed2: Default
	{
		interval=0.0080000004;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"surfNormalX * inSpeed / 250 * 0.3",
			"surfNormalY * inSpeed / 250 * 0.3",
			"surfNormalZ * inSpeed / 250 * 0.3"
		};
		rotationVelocity=12;
		weight=1.271;
		volume=1;
		rubbing=0.1;
		size[]={0.050000001,0.44999999};
		sizeCoef=1;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.035},
			{0.64999998,0.64999998,0.64999998,0.02},
			{0.69999999,0.69999999,0.69999999,0.014},
			{0.80000001,0.80000001,0.80000001,0.0080000004},
			{0.80000001,0.80000001,0.80000001,0.0040000002}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=6;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSmokeLow2: Default
	{
		interval=0.014;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"surfNormalX * inSpeed / 250 * 0.3",
			"surfNormalY * inSpeed / 250 * 0.3",
			"surfNormalZ * inSpeed / 250 * 0.3"
		};
		rotationVelocity=12;
		weight=1.271;
		volume=1;
		rubbing=0.1;
		size[]={0.050000001,0.44999999};
		sizeCoef=1;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.035},
			{0.64999998,0.64999998,0.64999998,0.02},
			{0.69999999,0.69999999,0.69999999,0.014},
			{0.80000001,0.80000001,0.80000001,0.0080000004},
			{0.80000001,0.80000001,0.80000001,0.0040000002}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.050000001;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=6;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDust2: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="1 + (4.2 * dustness)";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 250 * 0.9",
			"(surfNormalY / 2) * inSpeed / 250 * 0.9",
			"(surfNormalZ / 2) * inSpeed / 250 * 0.9"
		};
		rotationVelocity=1;
		weight=1.36;
		volume=1;
		rubbing=0.15000001;
		size[]={0.2,2.2};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.2,
				0.175,
				0.15000001,
				"(0.3 * dustness) + 0.05"
			},
			
			{
				0.40000001,
				0.31999999,
				0.25,
				"(0.21 * dustness) + 0.035"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.1 * dustness) + 0.016"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.036 * dustness) + 0.006"
			},
			{0.44999999,0.37,0.30000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDust2Low: Default
	{
		interval=0.0080000004;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="0.5 + (2.4 * dustness)";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 250 * 0.9",
			"(surfNormalY / 2) * inSpeed / 250 * 0.9",
			"(surfNormalZ / 2) * inSpeed / 250 * 0.9"
		};
		rotationVelocity=1;
		weight=1.36;
		volume=1;
		rubbing=0.15000001;
		size[]={0.2,2.2};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.2,
				0.175,
				0.15000001,
				"(0.3 * dustness) + 0.05"
			},
			
			{
				0.40000001,
				0.31999999,
				0.25,
				"(0.21 * dustness) + 0.035"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.1 * dustness) + 0.016"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.036 * dustness) + 0.006"
			},
			{0.44999999,0.37,0.30000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustWater2: Default
	{
		interval=0.0089999996;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="2 + (4.2 * dustness)";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 250 * 0.55",
			"(surfNormalY / 2) * inSpeed / 250 * 0.55",
			"(surfNormalZ / 2) * inSpeed / 250 * 0.55"
		};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=8;
		size[]={0.40000001,1.8};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.2,
				0.175,
				0.15000001,
				"(1 * dustness) + 0.16"
			},
			
			{
				0.40000001,
				0.31999999,
				0.25,
				"(0.6 * dustness) + 0.10"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.36 * dustness) + 0.06"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.12 * dustness) + 0.02"
			},
			{0.44999999,0.37,0.30000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		destroyOnWaterSurfaceOffset=0;
		lifeTimeVar=2;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDust_Orange: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="1 + (4.2 * dustness)";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 250 * 0.9",
			"(surfNormalY / 2) * inSpeed / 250 * 0.9",
			"(surfNormalZ / 2) * inSpeed / 250 * 0.9"
		};
		rotationVelocity=1;
		weight=1.36;
		volume=1;
		rubbing=0.15000001;
		size[]={2.2,4.1999998};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.2,
				0.175,
				0.15000001,
				"(0.3 * dustness) + 0.05"
			},
			
			{
				0.40000001,
				0.31999999,
				0.25,
				"(0.21 * dustness) + 0.035"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.1 * dustness) + 0.016"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.036 * dustness) + 0.006"
			},
			{0.44999999,0.37,0.30000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustLow_Orange: Default
	{
		interval=0.0080000004;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="0.5 + (2.4 * dustness)";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 250 * 0.9",
			"(surfNormalY / 2) * inSpeed / 250 * 0.9",
			"(surfNormalZ / 2) * inSpeed / 250 * 0.9"
		};
		rotationVelocity=1;
		weight=1.36;
		volume=1;
		rubbing=0.15000001;
		size[]={0.2,2.2};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.2,
				0.175,
				0.15000001,
				"(0.3 * dustness) + 0.05"
			},
			
			{
				0.40000001,
				0.31999999,
				0.25,
				"(0.21 * dustness) + 0.035"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.1 * dustness) + 0.016"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.036 * dustness) + 0.006"
			},
			{0.44999999,0.37,0.30000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustWater_Orange: Default
	{
		interval=0.0089999996;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="2 + (4.2 * dustness)";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 250 * 0.55",
			"(surfNormalY / 2) * inSpeed / 250 * 0.55",
			"(surfNormalZ / 2) * inSpeed / 250 * 0.55"
		};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=8;
		size[]={0.40000001,1.8};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.2,
				0.175,
				0.15000001,
				"(1 * dustness) + 0.16"
			},
			
			{
				0.40000001,
				0.31999999,
				0.25,
				"(0.6 * dustness) + 0.10"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.36 * dustness) + 0.06"
			},
			
			{
				0.44999999,
				0.37,
				0.30000001,
				"(0.12 * dustness) + 0.02"
			},
			{0.44999999,0.37,0.30000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		destroyOnWaterSurfaceOffset=0;
		lifeTimeVar=2;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustPlaster: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="1.7 + (0.04 * (hit interpolate [0,45,0,45]))";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 200 * 0.5",
			"(surfNormalY / 2) * inSpeed / 200 * 0.5",
			"(surfNormalZ / 2) * inSpeed / 200 * 0.5"
		};
		rotationVelocity=1;
		weight=1.273;
		volume=1;
		rubbing=0.44999999;
		size[]=
		{
			0.1,
			"0.4 + ((hit interpolate [0,45,0,45])/100)",
			"0.9 + ((hit interpolate [0,45,0,45])/40)",
			"1.2 + ((hit interpolate [0,45,0,45])/30)",
			"1.6 + ((hit interpolate [0,45,0,45])/25)",
			"2.2 + ((hit interpolate [0,45,0,45])/15)"
		};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"0.4 + (0.001 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"0.05 + (0.0006 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"0.02 + (0.0005 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"0.002 + (0.0004 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"(0.0002 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"(0.0001 * (hit interpolate [0,45,0,45]))"
			},
			{0.89999998,0.85000002,0.80000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.050000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustPlasterLow: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime="0.8 + (0.02 * (hit interpolate [0,45,0,45]))";
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 200 * 0.5",
			"(surfNormalY / 2) * inSpeed / 200 * 0.5",
			"(surfNormalZ / 2) * inSpeed / 200 * 0.5"
		};
		rotationVelocity=1;
		weight=1.273;
		volume=1;
		rubbing=0.44999999;
		size[]=
		{
			0.1,
			"0.4 + ((hit interpolate [0,45,0,45])/100)",
			"0.9 + ((hit interpolate [0,45,0,45])/40)",
			"1.2 + ((hit interpolate [0,45,0,45])/30)",
			"1.6 + ((hit interpolate [0,45,0,45])/25)",
			"2.2 + ((hit interpolate [0,45,0,45])/15)"
		};
		sizeCoef=1;
		color[]=
		{
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"0.4 + (0.001 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"0.05 + (0.0006 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"0.02 + (0.0005 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"0.002 + (0.0004 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"(0.0002 * (hit interpolate [0,45,0,45]))"
			},
			
			{
				0.89999998,
				0.85000002,
				0.80000001,
				"(0.0001 * (hit interpolate [0,45,0,45]))"
			},
			{0.89999998,0.85000002,0.80000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.050000001};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustPlastic: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.69999999;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 200 * 0.1",
			"(surfNormalY / 2) * inSpeed / 200 * 0.1",
			"(surfNormalZ / 2) * inSpeed / 200 * 0.1"
		};
		rotationVelocity=1;
		weight=1.274;
		volume=1;
		rubbing=0.44999999;
		size[]={0.1,0.5};
		sizeCoef=1;
		color[]=
		{
			{0.89999998,0.85000002,0.80000001,0.059999999},
			{0.89999998,0.85000002,0.80000001,0.050000001},
			{0.89999998,0.85000002,0.80000001,0.039999999},
			{0.89999998,0.85000002,0.80000001,0.029999999},
			{0.89999998,0.85000002,0.80000001,0.02},
			{0.89999998,0.85000002,0.80000001,0.015},
			{0.89999998,0.85000002,0.80000001,0.0049999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=0;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustPlasticMed: Default
	{
		interval=0.035;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 200 * 0.1",
			"(surfNormalY / 2) * inSpeed / 200 * 0.1",
			"(surfNormalZ / 2) * inSpeed / 200 * 0.1"
		};
		rotationVelocity=1;
		weight=1.274;
		volume=1;
		rubbing=0.44999999;
		size[]={0.1,0.5};
		sizeCoef=1;
		color[]=
		{
			{0.89999998,0.85000002,0.80000001,0.059999999},
			{0.89999998,0.85000002,0.80000001,0.050000001},
			{0.89999998,0.85000002,0.80000001,0.039999999},
			{0.89999998,0.85000002,0.80000001,0.029999999},
			{0.89999998,0.85000002,0.80000001,0.02},
			{0.89999998,0.85000002,0.80000001,0.015},
			{0.89999998,0.85000002,0.80000001,0.0049999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.15000001;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=0;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustPlasticLow: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.30000001;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 200 * 0.1",
			"(surfNormalY / 2) * inSpeed / 200 * 0.1",
			"(surfNormalZ / 2) * inSpeed / 200 * 0.1"
		};
		rotationVelocity=1;
		weight=1.274;
		volume=1;
		rubbing=0.44999999;
		size[]={0.1,0.5};
		sizeCoef=1;
		color[]=
		{
			{0.89999998,0.85000002,0.80000001,0.059999999},
			{0.89999998,0.85000002,0.80000001,0.050000001},
			{0.89999998,0.85000002,0.80000001,0.039999999},
			{0.89999998,0.85000002,0.80000001,0.029999999},
			{0.89999998,0.85000002,0.80000001,0.02},
			{0.89999998,0.85000002,0.80000001,0.015},
			{0.89999998,0.85000002,0.80000001,0.0049999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=0;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSmokePlastic: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 200 * 0.02",
			"(surfNormalY / 2) * inSpeed / 200 * 0.02",
			"(surfNormalZ / 2) * inSpeed / 200 * 0.02"
		};
		rotationVelocity=1;
		weight=1.265;
		volume=1;
		rubbing=0;
		size[]={0.0099999998,0.25};
		sizeCoef=1;
		color[]=
		{
			{0.89999998,0.85000002,0.80000001,0.029999999},
			{0.89999998,0.85000002,0.80000001,0.022},
			{0.89999998,0.85000002,0.80000001,0.014},
			{0.89999998,0.85000002,0.80000001,0.0080000004},
			{0.89999998,0.85000002,0.80000001,0.0060000001},
			{0.89999998,0.85000002,0.80000001,0.0040000002},
			{0.89999998,0.85000002,0.80000001,0.0020000001}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0.02,0.02,0.02};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactSmokePlasticMed: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.69999999;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 200 * 0.02",
			"(surfNormalY / 2) * inSpeed / 200 * 0.02",
			"(surfNormalZ / 2) * inSpeed / 200 * 0.02"
		};
		rotationVelocity=1;
		weight=1.265;
		volume=1;
		rubbing=0;
		size[]={0.0099999998,0.25};
		sizeCoef=1;
		color[]=
		{
			{0.89999998,0.85000002,0.80000001,0.029999999},
			{0.89999998,0.85000002,0.80000001,0.022},
			{0.89999998,0.85000002,0.80000001,0.014},
			{0.89999998,0.85000002,0.80000001,0.0080000004},
			{0.89999998,0.85000002,0.80000001,0.0060000001},
			{0.89999998,0.85000002,0.80000001,0.0040000002},
			{0.89999998,0.85000002,0.80000001,0.0020000001}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0.02,0.02,0.02};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustConcreteSabot: Default
	{
		interval=0.0024999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=2;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * 2.5",
			"(surfNormalY / 2) * 2.5",
			"(surfNormalZ / 2) * 2.5"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.30000001;
		size[]={1.2,4};
		sizeCoef=1;
		color[]=
		{
			{0.2,0.2,0.25,0.1},
			{0.2,0.2,0.25,0.050000001},
			{0.30000001,0.30000001,0.40000001,0.029999999},
			{0.34999999,0.34999999,0.44999999,0.0099999998},
			{0.34999999,0.34999999,0.44999999,0}
		};
		colorCoef[]={1,1,1,0.69999999};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={1.5,1.5,1.5};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustConcreteSabot2: Default
	{
		interval=0.0024999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=2;
		moveVelocity[]=
		{
			"(outDirX / 2) * 5.5",
			"(outDirY / 2) * 5.5",
			"(outDirZ / 2) * 5.5"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.30000001;
		size[]={1.2,4};
		sizeCoef=1;
		color[]=
		{
			{0.2,0.2,0.25,1},
			{0.25,0.25,0.30000001,0.1},
			{0.25,0.25,0.30000001,0.079999998},
			{0.25,0.25,0.30000001,0.059999999},
			{0.30000001,0.30000001,0.34999999,0}
		};
		colorCoef[]={1,1,1,0.69999999};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={1.5,1.5,1.5};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustConcrete: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 350 * 0.66",
			"(surfNormalY / 2) * inSpeed / 350 * 0.66",
			"(surfNormalZ / 2) * inSpeed / 350 * 0.66"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.1;
		size[]={0.40000001,0.80000001};
		sizeCoef=1;
		color[]=
		{
			{0.2,0.2,0.25,0.1},
			{0.2,0.2,0.25,0.050000001},
			{0.30000001,0.30000001,0.40000001,0.029999999},
			{0.34999999,0.34999999,0.44999999,0.0099999998},
			{0.34999999,0.34999999,0.44999999,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustConcrete2: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(outDirX / 2) * outSpeed / 150 * 0.66",
			"(outDirY / 2) * outSpeed / 150 * 0.66",
			"(outDirZ / 2) * outSpeed / 150 * 0.66"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.1;
		size[]={0.40000001,0.80000001};
		sizeCoef=1;
		color[]=
		{
			{0.2,0.2,0.25,1},
			{0.25,0.25,0.30000001,0.1},
			{0.25,0.25,0.30000001,0.079999998},
			{0.25,0.25,0.30000001,0.059999999},
			{0.30000001,0.30000001,0.34999999,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactConcrete: Default
	{
		interval=0.025;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=10;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 150 * 0.66",
			"(surfNormalY / 2) * inSpeed / 150 * 0.66",
			"(surfNormalZ / 2) * inSpeed / 150 * 0.66"
		};
		rotationVelocity=1;
		weight=5;
		volume=1;
		rubbing=0.029999999;
		size[]={0.059999999};
		color[]=
		{
			{0.5,0.5,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.30000001;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.2;
		lifeTimeVar=5;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={1,1,1};
		rotationVelocityVar=1;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactConcreteWall1: Default
	{
		interval=0.0060000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=2;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 20 * 1",
			"(surfNormalY / 2) * inSpeed / 20 * 1",
			"(surfNormalZ / 2) * inSpeed / 20 * 1"
		};
		rotationVelocity=1;
		weight=5;
		volume=1;
		rubbing=0.029999999;
		size[]={0.039999999};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={10,10,10};
		rotationVelocityVar=1;
		sizeVar=0.025;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactConcreteWall2: Default
	{
		interval="(0.06 + (0.1/(hit interpolate [0.1,45,0.1,45])))) + ((randomValue * 0.1)/(hit interpolate [0.1,45,0.1,45]))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=10;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * 3",
			"(surfNormalY / 2) * 3",
			"(surfNormalZ / 2) * 3"
		};
		rotationVelocity=1;
		weight=5;
		volume=1;
		rubbing=0.029999999;
		size[]=
		{
			"0.05 + (hit interpolate [0,45,0,45])/700"
		};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.30000001;
		lifeTimeVar=5;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={0.80000001,0.80000001,0.80000001};
		rotationVelocityVar=15;
		sizeVar=0.079999998;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactConcreteWall3: Default
	{
		interval="(0.12 + (0.2/(hit interpolate [0.10,45,0.1,45]))) * ((randomValue - 0.82) interpolate [0,0.000001,-1,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\WallPart\WallPart2.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=10;
		moveVelocity[]=
		{
			"surfNormalX / 2",
			"surfNormalY / 2",
			"surfNormalZ / 2"
		};
		rotationVelocity=1;
		weight=5;
		volume=1;
		rubbing=0.029999999;
		size[]=
		{
			"0.15 + (hit interpolate [0,45,0,45])/300"
		};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.30000001;
		lifeTimeVar=5;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={0.80000001,0.80000001,0.80000001};
		rotationVelocityVar=5;
		sizeVar=0.079999998;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactConcrete2: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\pstone\pstone.p3d";
		animationName="";
		particleType="spaceobject";
		timerPeriod=0.1;
		lifeTime=1;
		moveVelocity[]=
		{
			"(outDirX / 2) * outSpeed / 150 * 0.66",
			"(outDirY / 2) * outSpeed / 150 * 0.66",
			"(outDirZ / 2) * outSpeed / 150 * 0.66"
		};
		rotationVelocity=1;
		weight=5;
		volume=1;
		rubbing=0.029999999;
		size[]={0.079999998};
		color[]=
		{
			{0.5,0.5,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={1,1,1};
		rotationVelocityVar=1;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustWood: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 350 * 0.66",
			"(surfNormalY / 2) * inSpeed / 350 * 0.66",
			"(surfNormalZ / 2) * inSpeed / 350 * 0.66"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.40000001;
		size[]=
		{
			"0.4 + intensity * 0.25",
			"0.4 + intensity * 0.4",
			"0.4 + intensity * 0.5",
			"0.4 + intensity * 0.55",
			"0.4 + intensity * 0.6"
		};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.40000001,0.30000001,0.34999999},
			{0.5,0.40000001,0.30000001,0.22},
			{0.5,0.40000001,0.30000001,0.15000001},
			{0.60000002,0.5,0.40000001,0.079999998},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=0;
		sizeVar=0.34999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustWoodMed: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 350 * 0.66",
			"(surfNormalY / 2) * inSpeed / 350 * 0.66",
			"(surfNormalZ / 2) * inSpeed / 350 * 0.66"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.40000001;
		size[]=
		{
			"0.4 + intensity * 0.25",
			"0.4 + intensity * 0.4",
			"0.4 + intensity * 0.5",
			"0.4 + intensity * 0.55",
			"0.4 + intensity * 0.6"
		};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.40000001,0.30000001,0.34999999},
			{0.5,0.40000001,0.30000001,0.22},
			{0.5,0.40000001,0.30000001,0.15000001},
			{0.60000002,0.5,0.40000001,0.079999998},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.80000001;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=0;
		sizeVar=0.34999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustWoodLow: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 350 * 0.66",
			"(surfNormalY / 2) * inSpeed / 350 * 0.66",
			"(surfNormalZ / 2) * inSpeed / 350 * 0.66"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.40000001;
		size[]=
		{
			"0.4 + intensity * 0.25",
			"0.4 + intensity * 0.4",
			"0.4 + intensity * 0.5",
			"0.4 + intensity * 0.55",
			"0.4 + intensity * 0.6"
		};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.40000001,0.30000001,0.34999999},
			{0.5,0.40000001,0.30000001,0.22},
			{0.5,0.40000001,0.30000001,0.15000001},
			{0.60000002,0.5,0.40000001,0.079999998},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=0;
		sizeVar=0.34999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WoodChippings1: Default
	{
		interval=0.055;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WoodParts_01";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WoodChippingsMed1: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WoodParts_01";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WoodChippings2: Default
	{
		interval=0.055;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WoodParts_02";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WoodChippingsMed2: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WoodParts_02";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WoodChippings3: Default
	{
		interval=0.055;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WoodParts_03";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WoodChippingsMed3: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WoodParts_03";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WoodChippings4: Default
	{
		interval=0.055;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WoodParts_04";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WoodChippingsMed4: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WoodParts_04";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustHay: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=1;
		moveVelocity[]=
		{
			"(surfNormalX / 2) * inSpeed / 350 * 0.66",
			"(surfNormalY / 2) * inSpeed / 350 * 0.66",
			"(surfNormalZ / 2) * inSpeed / 350 * 0.66"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.40000001;
		size[]=
		{
			"0.4 + intensity * 0.25",
			"0.4 + intensity * 0.4",
			"0.4 + intensity * 0.5",
			"0.4 + intensity * 0.55",
			"0.4 + intensity * 0.6"
		};
		sizeCoef=2;
		color[]=
		{
			{0.5,0.40000001,0.30000001,0.34999999},
			{0.5,0.40000001,0.30000001,0.22},
			{0.5,0.40000001,0.30000001,0.15000001},
			{0.60000002,0.5,0.40000001,0.079999998},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		moveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=0;
		sizeVar=0.34999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,0.2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactDustHayMed: ImpactDustHay
	{
		interval=0.029999999;
		lifeTime=0.80000001;
		lifeTimeVar=0.80000001;
	};
	class ImpactDustHayLow: ImpactDustHay
	{
		interval=0.059999999;
		lifeTime=0.5;
		lifeTimeVar=0.5;
	};
	class HayChippings1: Default
	{
		interval=0.001;
		CircleRadius=0.1;
		CircleVelocity[]={0,0,0};
		particleShape="\a3\Data_f\ParticleEffects\Universal\Hay";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=0;
		particleFSLoop=0;
		angle=0;
		angleVar=360;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=13;
		lifeTimeVar=0;
		weight=13;
		volume=7.8000002;
		rubbing=1;
		size[]={0.2};
		sizeVar=2;
		sizeCoef=1;
		animationSpeed[]={0.079999998};
		animationSpeedCoef=1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		positionVarConst[]={0,0,0};
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 600",
			"((inDirY/2 + surfNormalY * 2) * inSpeed / 600)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 600"
		};
		moveVelocityVar[]={0.69999999,0.69999999,0.69999999};
		moveVelocityVarConst[]={0,0,0};
		rotationVelocity=0;
		rotationVelocityVar=5;
		color[]=
		{
			{1,0.1,0.1,1}
		};
		colorVar[]={0,0,0,0};
		colorCoef[]={0,0,0,0};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0.1;
		destroyOnWaterSurface=0;
		destroyOnWaterSurfaceOffset=0;
		onSurface=0;
		keepOnSurface=0;
		surfaceOffset=0;
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0;
		postEffects="";
		particleEffects="";
		emissiveColor[]=
		{
			{0,0,0,0}
		};
		onTimerScript="";
		beforeDestroyScript="";
	};
	class HayChippingsMed1: HayChippings1
	{
		interval=0.1;
		lifeTime=1;
		lifeTimeVar=0.5;
		bounceOnSurface=0;
	};
	class HayChippings2: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\a3\Data_f\ParticleEffects\Universal\wheat";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=0;
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HayChippingsMed2: HayChippings2
	{
		interval=0.1;
		lifeTime=1;
		lifeTimeVar=0.5;
		bounceOnSurface=0;
	};
	class HayChippings3: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\a3\Data_f\ParticleEffects\Universal\wheatseed";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]=
		{
			"(inDirX/2 + surfNormalX * 2) * inSpeed / 400",
			"2+((inDirY/2 + surfNormalY * 2) * inSpeed / 400)",
			"(inDirZ/2 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=2.5;
		volume=1;
		rubbing=0.22;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=0;
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=12;
		sizeVar=1.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HayChippingsMed3: HayChippings3
	{
		interval=0.1;
		lifeTime=1;
		lifeTimeVar=0.5;
		bounceOnSurface=0;
	};
	class LeavesFallMed: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_damage_small_green.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.80000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFall: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_damage_small_green.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.80000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallGreenMed: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_damage_small_green.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.80000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallDead: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_NeriumOleander_D.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.80000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallDeadMed: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_NeriumOleander_D.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.80000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallGreen: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_damage_small_green.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.80000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallGreenBigMed: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_damage_big_green.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.80000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0.69999999;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallGreenBig: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_damage_big_green.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.80000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0.69999999;
		sizeVar=0.15000001;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallPalmMed: Default
	{
		interval=0.5;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_damage_bigLong_green_01.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0.55000001;
		sizeVar=0.1;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallPalm: Default
	{
		interval=0.5;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_damage_bigLong_green_01.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=0.55000001;
		sizeVar=0.1;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallPineMed: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_Pines.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=1;
		sizeVar=0.2;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeavesFallPine: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\Plants_F\_Leafs\leaf_Pines.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.5;
		volume=1;
		rubbing=0.2;
		size[]={0.60000002};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={1,0.5,1};
		rotationVelocityVar=1;
		sizeVar=0.2;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SticksFall: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\data_f\ParticleEffects\Hit_Leaves\Sticks.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.7;
		volume=1;
		rubbing=0.1;
		size[]={1.2};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={0.5,0,0.5};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SticksFallGreen: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\data_f\ParticleEffects\Hit_Leaves\Sticks_Green.p3d";
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.7;
		volume=1;
		rubbing=0.1;
		size[]={1.2};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		moveVelocityVar[]={0.5,0,0.5};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShard1: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_00";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={0.69999999,0.69999999,0.69999999};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardMed1: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_00";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardLow1: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_00";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShard2: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_01";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardMed2: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_01";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardLow2: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_01";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShard3: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_02";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardMed3: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_02";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardLow3: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_02";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShard4: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_03";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardMed4: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_03";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardLow4: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_03";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShard5: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_04";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardMed5: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_04";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardLow5: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_04";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShard6: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_05";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardMed6: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_05";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardLow6: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_05";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShard7: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_06";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardMed7: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_06";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassShardLow7: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_06";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 400",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 400)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 400"
		};
		rotationVelocity=2;
		weight=3;
		volume=1;
		rubbing=0;
		size[]={0.0049999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1.7,1.7,1.7};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassDust: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.2;
		moveVelocity[]=
		{
			"(- inDirX * 4) * inSpeed / 150 * 0.2",
			"(- inDirY * 4) * inSpeed / 150 * 0.2",
			"(-inDirZ * 4) * inSpeed / 150 * 0.2"
		};
		rotationVelocity=2;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.050000001,0.15000001};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0.1},
			{0.5,0.5,0.5,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=0;
		sizeVar=0.039999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassDustMed: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.2;
		moveVelocity[]=
		{
			"(- inDirX * 4) * inSpeed / 150 * 0.2",
			"(- inDirY * 4) * inSpeed / 150 * 0.2",
			"(-inDirZ * 4) * inSpeed / 150 * 0.2"
		};
		rotationVelocity=2;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.050000001,0.15000001};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0.1},
			{0.5,0.5,0.5,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=0;
		sizeVar=0.039999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GlassDustLow: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.2;
		moveVelocity[]=
		{
			"(- inDirX * 4) * inSpeed / 150 * 0.2",
			"(- inDirY * 4) * inSpeed / 150 * 0.2",
			"(-inDirZ * 4) * inSpeed / 150 * 0.2"
		};
		rotationVelocity=2;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.050000001,0.15000001};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0.1},
			{0.5,0.5,0.5,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=0;
		sizeVar=0.039999999;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExplosionEffectsWater: Default
	{
		interval=0.0099999998;
		circleRadius=2;
		circleVelocity[]={3,15,3};
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=6;
		particleFSLoop=0;
		angleVar=1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=30;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={8,15};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]={0,0,0};
		positionVar[]={2,0,2};
		moveVelocityVar[]={2,7,2};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BrokenGlass1NN: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_00";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=0.80000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=5;
		volume=1;
		rubbing=0;
		size[]={0.18000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.0099999998;
		bounceOnSurfaceVar=0.029999999;
		blockAIVisibility=0;
		lifeTimeVar=0.1;
		position[]={0,0,0};
		positionVar[]={0.5,0.60000002,0.5};
		moveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=1;
		sizeVar=0.2;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		damping=0.02;
		externalAcceleration=0;
		restitution=0.1;
		dynamicFriction=0.2;
		staticFriction=0.5;
		collisionSize=0.1;
		maxMotionDist=1;
	};
	class BrokenGlass2NN: BrokenGlass1NN
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_01";
	};
	class BrokenGlass3NN: BrokenGlass1NN
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_02";
	};
	class BrokenGlass4NN: BrokenGlass1NN
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_03";
	};
	class BrokenGlass5NN: BrokenGlass1NN
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_04";
	};
	class BrokenGlass6NN: BrokenGlass1NN
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_05";
	};
	class BrokenGlass7NN: BrokenGlass1NN
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\GlassParts_06";
	};
	class BrokenGlass1SN: BrokenGlass1NN
	{
		interval=0.02;
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2SN: BrokenGlass2NN
	{
		interval=0.02;
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3SN: BrokenGlass3NN
	{
		interval=0.02;
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4SN: BrokenGlass4NN
	{
		interval=0.02;
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5SN: BrokenGlass5NN
	{
		interval=0.02;
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6SN: BrokenGlass6NN
	{
		interval=0.02;
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7SN: BrokenGlass7NN
	{
		interval=0.02;
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1NB: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass2NB: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass3NB: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass4NB: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass5NB: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass6NB: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass7NB: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass1SB: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2SB: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3SB: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4SB: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5SB: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6SB: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7SB: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.89999998,0.80000001,0.89999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1NS: BrokenGlass1NN
	{
		interval=0.14;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.12};
		sizeVar=0.1;
		rotationVelocityVar=1;
	};
	class BrokenGlass2NS: BrokenGlass2NN
	{
		interval=0.14;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.12};
		sizeVar=0.1;
		rotationVelocityVar=1;
	};
	class BrokenGlass3NS: BrokenGlass3NN
	{
		interval=0.14;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.12};
		sizeVar=0.1;
		rotationVelocityVar=1;
	};
	class BrokenGlass4NS: BrokenGlass4NN
	{
		interval=0.14;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.12};
		sizeVar=0.1;
		rotationVelocityVar=1;
	};
	class BrokenGlass5NS: BrokenGlass5NN
	{
		interval=0.14;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.12};
		sizeVar=0.1;
		rotationVelocityVar=1;
	};
	class BrokenGlass1SS: BrokenGlass1SN
	{
		interval=0.039999999;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2SS: BrokenGlass2SN
	{
		interval=0.039999999;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3SS: BrokenGlass3SN
	{
		interval=0.039999999;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4SS: BrokenGlass4SN
	{
		interval=0.039999999;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5SS: BrokenGlass5SN
	{
		interval=0.039999999;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1NT: BrokenGlass1NN
	{
		interval=0.18000001;
		positionVar[]={0.1,0.1,0.1};
		size[]={0.079999998};
		sizeVar=0.059999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass2NT: BrokenGlass2NN
	{
		interval=0.18000001;
		positionVar[]={0.1,0.1,0.1};
		size[]={0.079999998};
		sizeVar=0.059999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass3NT: BrokenGlass3NN
	{
		interval=0.18000001;
		positionVar[]={0.1,0.1,0.1};
		size[]={0.079999998};
		sizeVar=0.059999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass4NT: BrokenGlass4NN
	{
		interval=0.18000001;
		positionVar[]={0.1,0.1,0.1};
		size[]={0.079999998};
		sizeVar=0.059999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass1ST: BrokenGlass1SN
	{
		interval=0.059999999;
		positionVar[]={0.1,0.1,0.1};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2ST: BrokenGlass2SN
	{
		interval=0.059999999;
		positionVar[]={0.1,0.1,0.1};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3ST: BrokenGlass3SN
	{
		interval=0.059999999;
		positionVar[]={0.1,0.1,0.1};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4ST: BrokenGlass4SN
	{
		interval=0.059999999;
		positionVar[]={0.1,0.1,0.1};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1ND: BrokenGlass1NN
	{
		interval=0.1;
		positionVar[]={0.5,1,0.5};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass2ND: BrokenGlass2NN
	{
		interval=0.1;
		positionVar[]={0.5,1,0.5};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass3ND: BrokenGlass3NN
	{
		interval=0.1;
		positionVar[]={0.5,1,0.5};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass4ND: BrokenGlass4NN
	{
		interval=0.1;
		positionVar[]={0.5,1,0.5};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass5ND: BrokenGlass5NN
	{
		interval=0.1;
		positionVar[]={0.5,1,0.5};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass6ND: BrokenGlass6NN
	{
		interval=0.1;
		positionVar[]={0.5,1,0.5};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass7ND: BrokenGlass7NN
	{
		interval=0.1;
		positionVar[]={0.5,1,0.5};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass1SD: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.5,1,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2SD: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.5,1,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3SD: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.5,1,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4SD: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.5,1,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5SD: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.5,1,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6SD: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.5,1,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7SD: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.5,1,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0400_0400: BrokenGlass1NN
	{
		interval=0.13;
		positionVar[]={0.16,0.16,0.16};
		size[]={0.14};
		sizeVar=0.13;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0400_0400: BrokenGlass2NN
	{
		interval=0.13;
		positionVar[]={0.16,0.16,0.16};
		size[]={0.14};
		sizeVar=0.13;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0400_0400: BrokenGlass3NN
	{
		interval=0.13;
		positionVar[]={0.16,0.16,0.16};
		size[]={0.14};
		sizeVar=0.13;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0400_0400: BrokenGlass4NN
	{
		interval=0.13;
		positionVar[]={0.16,0.16,0.16};
		size[]={0.14};
		sizeVar=0.13;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0400_0400: BrokenGlass5NN
	{
		interval=0.13;
		positionVar[]={0.16,0.16,0.16};
		size[]={0.14};
		sizeVar=0.13;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0400_0400: BrokenGlass1SN
	{
		interval=0.035;
		positionVar[]={0.2,0.2,0.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0400_0400: BrokenGlass2SN
	{
		interval=0.035;
		positionVar[]={0.2,0.2,0.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0400_0400: BrokenGlass3SN
	{
		interval=0.035;
		positionVar[]={0.2,0.2,0.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0400_0400: BrokenGlass4SN
	{
		interval=0.035;
		positionVar[]={0.2,0.2,0.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0400_0400: BrokenGlass5SN
	{
		interval=0.035;
		positionVar[]={0.2,0.2,0.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0300_0800: BrokenGlass1NN
	{
		interval=0.11;
		positionVar[]={0.12,0.31999999,0.12};
		size[]={0.17};
		sizeVar=0.18000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0300_0800: BrokenGlass2NN
	{
		interval=0.11;
		positionVar[]={0.12,0.31999999,0.12};
		size[]={0.17};
		sizeVar=0.18000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0300_0800: BrokenGlass3NN
	{
		interval=0.11;
		positionVar[]={0.12,0.31999999,0.12};
		size[]={0.17};
		sizeVar=0.18000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0300_0800: BrokenGlass4NN
	{
		interval=0.11;
		positionVar[]={0.12,0.31999999,0.12};
		size[]={0.17};
		sizeVar=0.18000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0300_0800: BrokenGlass5NN
	{
		interval=0.11;
		positionVar[]={0.12,0.31999999,0.12};
		size[]={0.17};
		sizeVar=0.18000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0300_0800: BrokenGlass6NN
	{
		interval=0.11;
		positionVar[]={0.12,0.31999999,0.12};
		size[]={0.17};
		sizeVar=0.18000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0300_0800: BrokenGlass1SN
	{
		interval=0.025;
		positionVar[]={0.15000001,0.40000001,0.15000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0300_0800: BrokenGlass2SN
	{
		interval=0.025;
		positionVar[]={0.15000001,0.40000001,0.15000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0300_0800: BrokenGlass3SN
	{
		interval=0.025;
		positionVar[]={0.15000001,0.40000001,0.15000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0300_0800: BrokenGlass4SN
	{
		interval=0.025;
		positionVar[]={0.15000001,0.40000001,0.15000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0300_0800: BrokenGlass5SN
	{
		interval=0.025;
		positionVar[]={0.15000001,0.40000001,0.15000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0300_0800: BrokenGlass6SN
	{
		interval=0.025;
		positionVar[]={0.15000001,0.40000001,0.15000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0850_0300: BrokenGlass1NN
	{
		interval=0.105;
		positionVar[]={0.34,0.12,0.34};
		size[]={0.175};
		sizeVar=0.19;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0850_0300: BrokenGlass2NN
	{
		interval=0.105;
		positionVar[]={0.34,0.12,0.34};
		size[]={0.175};
		sizeVar=0.19;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0850_0300: BrokenGlass3NN
	{
		interval=0.105;
		positionVar[]={0.34,0.12,0.34};
		size[]={0.175};
		sizeVar=0.19;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0850_0300: BrokenGlass4NN
	{
		interval=0.105;
		positionVar[]={0.34,0.12,0.34};
		size[]={0.175};
		sizeVar=0.19;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0850_0300: BrokenGlass5NN
	{
		interval=0.105;
		positionVar[]={0.34,0.12,0.34};
		size[]={0.175};
		sizeVar=0.19;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0850_0300: BrokenGlass6NN
	{
		interval=0.105;
		positionVar[]={0.34,0.12,0.34};
		size[]={0.175};
		sizeVar=0.19;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0850_0300: BrokenGlass1SN
	{
		interval=0.023;
		positionVar[]={0.42500001,0.15000001,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0850_0300: BrokenGlass2SN
	{
		interval=0.023;
		positionVar[]={0.42500001,0.15000001,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0850_0300: BrokenGlass3SN
	{
		interval=0.023;
		positionVar[]={0.42500001,0.15000001,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0850_0300: BrokenGlass4SN
	{
		interval=0.023;
		positionVar[]={0.42500001,0.15000001,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0850_0300: BrokenGlass5SN
	{
		interval=0.023;
		positionVar[]={0.42500001,0.15000001,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0850_0300: BrokenGlass6SN
	{
		interval=0.023;
		positionVar[]={0.42500001,0.15000001,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0500_1250: BrokenGlass1NN
	{
		interval=0.085000001;
		positionVar[]={0.2,0.5,0.2};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0500_1250: BrokenGlass2NN
	{
		interval=0.085000001;
		positionVar[]={0.2,0.5,0.2};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0500_1250: BrokenGlass3NN
	{
		interval=0.085000001;
		positionVar[]={0.2,0.5,0.2};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0500_1250: BrokenGlass4NN
	{
		interval=0.085000001;
		positionVar[]={0.2,0.5,0.2};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0500_1250: BrokenGlass5NN
	{
		interval=0.085000001;
		positionVar[]={0.2,0.5,0.2};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0500_1250: BrokenGlass6NN
	{
		interval=0.085000001;
		positionVar[]={0.2,0.5,0.2};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_0500_1250: BrokenGlass7NN
	{
		interval=0.085000001;
		positionVar[]={0.2,0.5,0.2};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0500_1250: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.25,0.625,0.25};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0500_1250: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.25,0.625,0.25};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0500_1250: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.25,0.625,0.25};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0500_1250: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.25,0.625,0.25};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0500_1250: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.25,0.625,0.25};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0500_1250: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.25,0.625,0.25};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_0500_1250: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.25,0.625,0.25};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0700_0950: BrokenGlass1NN
	{
		interval=0.079999998;
		positionVar[]={0.28,0.38,0.28};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0700_0950: BrokenGlass2NN
	{
		interval=0.079999998;
		positionVar[]={0.28,0.38,0.28};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0700_0950: BrokenGlass3NN
	{
		interval=0.079999998;
		positionVar[]={0.28,0.38,0.28};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0700_0950: BrokenGlass4NN
	{
		interval=0.079999998;
		positionVar[]={0.28,0.38,0.28};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0700_0950: BrokenGlass5NN
	{
		interval=0.079999998;
		positionVar[]={0.28,0.38,0.28};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0700_0950: BrokenGlass6NN
	{
		interval=0.079999998;
		positionVar[]={0.28,0.38,0.28};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_0700_0950: BrokenGlass7NN
	{
		interval=0.079999998;
		positionVar[]={0.28,0.38,0.28};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0700_0950: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.34999999,0.47499999,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0700_0950: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.34999999,0.47499999,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0700_0950: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.34999999,0.47499999,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0700_0950: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.34999999,0.47499999,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0700_0950: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.34999999,0.47499999,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0700_0950: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.34999999,0.47499999,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_0700_0950: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.34999999,0.47499999,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1150_0600: BrokenGlass1NN
	{
		interval=0.075000003;
		positionVar[]={0.46000001,0.23999999,0.46000001};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1150_0600: BrokenGlass2NN
	{
		interval=0.075000003;
		positionVar[]={0.46000001,0.23999999,0.46000001};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1150_0600: BrokenGlass3NN
	{
		interval=0.075000003;
		positionVar[]={0.46000001,0.23999999,0.46000001};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1150_0600: BrokenGlass4NN
	{
		interval=0.075000003;
		positionVar[]={0.46000001,0.23999999,0.46000001};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1150_0600: BrokenGlass5NN
	{
		interval=0.075000003;
		positionVar[]={0.46000001,0.23999999,0.46000001};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1150_0600: BrokenGlass6NN
	{
		interval=0.075000003;
		positionVar[]={0.46000001,0.23999999,0.46000001};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1150_0600: BrokenGlass7NN
	{
		interval=0.075000003;
		positionVar[]={0.46000001,0.23999999,0.46000001};
		size[]={0.18000001};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1150_0600: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.57499999,0.30000001,0.57499999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1150_0600: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.57499999,0.30000001,0.57499999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1150_0600: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.57499999,0.30000001,0.57499999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1150_0600: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.57499999,0.30000001,0.57499999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1150_0600: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.57499999,0.30000001,0.57499999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1150_0600: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.57499999,0.30000001,0.57499999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1150_0600: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.57499999,0.30000001,0.57499999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0900_0950: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.38,0.36000001};
		size[]={0.2};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0900_0950: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.38,0.36000001};
		size[]={0.2};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0900_0950: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.38,0.36000001};
		size[]={0.2};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0900_0950: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.38,0.36000001};
		size[]={0.2};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0900_0950: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.38,0.36000001};
		size[]={0.2};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0900_0950: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.38,0.36000001};
		size[]={0.2};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_0900_0950: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.38,0.36000001};
		size[]={0.2};
		sizeVar=0.2;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0900_0950: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.47499999,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0900_0950: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.47499999,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0900_0950: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.47499999,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0900_0950: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.47499999,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0900_0950: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.47499999,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0900_0950: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.47499999,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_0900_0950: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.47499999,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0600_1800: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.23999999,0.72000003,0.23999999};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0600_1800: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.23999999,0.72000003,0.23999999};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0600_1800: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.23999999,0.72000003,0.23999999};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0600_1800: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.23999999,0.72000003,0.23999999};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0600_1800: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.23999999,0.72000003,0.23999999};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0600_1800: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.23999999,0.72000003,0.23999999};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_0600_1800: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.23999999,0.72000003,0.23999999};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0600_1800: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.30000001,0.89999998,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0600_1800: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.30000001,0.89999998,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0600_1800: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.30000001,0.89999998,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0600_1800: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.30000001,0.89999998,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0600_1800: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.30000001,0.89999998,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0600_1800: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.30000001,0.89999998,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_0600_1800: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.30000001,0.89999998,0.30000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0900_1300: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.51999998,0.36000001};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0900_1300: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.51999998,0.36000001};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0900_1300: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.51999998,0.36000001};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0900_1300: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.51999998,0.36000001};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0900_1300: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.51999998,0.36000001};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0900_1300: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.51999998,0.36000001};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_0900_1300: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.36000001,0.51999998,0.36000001};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0900_1300: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.64999998,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0900_1300: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.64999998,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0900_1300: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.64999998,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0900_1300: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.64999998,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0900_1300: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.64999998,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0900_1300: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.64999998,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_0900_1300: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.44999999,0.64999998,0.44999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1300_1000: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.51999998,0.40000001,0.51999998};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1300_1000: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.51999998,0.40000001,0.51999998};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1300_1000: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.51999998,0.40000001,0.51999998};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1300_1000: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.51999998,0.40000001,0.51999998};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1300_1000: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.51999998,0.40000001,0.51999998};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1300_1000: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.51999998,0.40000001,0.51999998};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1300_1000: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.51999998,0.40000001,0.51999998};
		size[]={0.2};
		sizeVar=0.22;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1300_1000: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.64999998,0.5,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1300_1000: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.64999998,0.5,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1300_1000: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.64999998,0.5,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1300_1000: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.64999998,0.5,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1300_1000: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.64999998,0.5,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1300_1000: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.64999998,0.5,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1300_1000: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.64999998,0.5,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_2400_0700: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.95999998,0.28,0.95999998};
		size[]={0.2};
		sizeVar=0.22499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_2400_0700: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.95999998,0.28,0.95999998};
		size[]={0.2};
		sizeVar=0.22499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_2400_0700: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.95999998,0.28,0.95999998};
		size[]={0.2};
		sizeVar=0.22499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_2400_0700: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.95999998,0.28,0.95999998};
		size[]={0.2};
		sizeVar=0.22499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_2400_0700: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.95999998,0.28,0.95999998};
		size[]={0.2};
		sizeVar=0.22499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_2400_0700: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.95999998,0.28,0.95999998};
		size[]={0.2};
		sizeVar=0.22499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_2400_0700: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.95999998,0.28,0.95999998};
		size[]={0.2};
		sizeVar=0.22499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_2400_0700: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={1.2,0.34999999,1.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_2400_0700: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={1.2,0.34999999,1.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_2400_0700: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={1.2,0.34999999,1.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_2400_0700: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={1.2,0.34999999,1.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_2400_0700: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={1.2,0.34999999,1.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_2400_0700: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={1.2,0.34999999,1.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_2400_0700: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={1.2,0.34999999,1.2};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1900_0900: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.75999999,0.36000001,0.75999999};
		size[]={0.2};
		sizeVar=0.23;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1900_0900: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.75999999,0.36000001,0.75999999};
		size[]={0.2};
		sizeVar=0.23;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1900_0900: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.75999999,0.36000001,0.75999999};
		size[]={0.2};
		sizeVar=0.23;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1900_0900: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.75999999,0.36000001,0.75999999};
		size[]={0.2};
		sizeVar=0.23;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1900_0900: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.75999999,0.36000001,0.75999999};
		size[]={0.2};
		sizeVar=0.23;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1900_0900: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.75999999,0.36000001,0.75999999};
		size[]={0.2};
		sizeVar=0.23;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1900_0900: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.75999999,0.36000001,0.75999999};
		size[]={0.2};
		sizeVar=0.23;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1900_0900: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.94999999,0.44999999,0.94999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1900_0900: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.94999999,0.44999999,0.94999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1900_0900: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.94999999,0.44999999,0.94999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1900_0900: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.94999999,0.44999999,0.94999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1900_0900: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.94999999,0.44999999,0.94999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1900_0900: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.94999999,0.44999999,0.94999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1900_0900: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.94999999,0.44999999,0.94999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1100_1600: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.44,0.63999999,0.44};
		size[]={0.2};
		sizeVar=0.235;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1100_1600: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.44,0.63999999,0.44};
		size[]={0.2};
		sizeVar=0.235;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1100_1600: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.44,0.63999999,0.44};
		size[]={0.2};
		sizeVar=0.235;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1100_1600: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.44,0.63999999,0.44};
		size[]={0.2};
		sizeVar=0.235;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1100_1600: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.44,0.63999999,0.44};
		size[]={0.2};
		sizeVar=0.235;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1100_1600: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.44,0.63999999,0.44};
		size[]={0.2};
		sizeVar=0.235;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1100_1600: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.44,0.63999999,0.44};
		size[]={0.2};
		sizeVar=0.235;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1100_1600: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.55000001,0.80000001,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1100_1600: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.55000001,0.80000001,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1100_1600: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.55000001,0.80000001,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1100_1600: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.55000001,0.80000001,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1100_1600: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.55000001,0.80000001,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1100_1600: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.55000001,0.80000001,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1100_1600: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.55000001,0.80000001,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0850_2250: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.34,0.89999998,0.34};
		size[]={0.2};
		sizeVar=0.23999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0850_2250: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.34,0.89999998,0.34};
		size[]={0.2};
		sizeVar=0.23999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0850_2250: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.34,0.89999998,0.34};
		size[]={0.2};
		sizeVar=0.23999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0850_2250: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.34,0.89999998,0.34};
		size[]={0.2};
		sizeVar=0.23999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0850_2250: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.34,0.89999998,0.34};
		size[]={0.2};
		sizeVar=0.23999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0850_2250: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.34,0.89999998,0.34};
		size[]={0.2};
		sizeVar=0.23999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_0850_2250: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.34,0.89999998,0.34};
		size[]={0.2};
		sizeVar=0.23999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0850_2250: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.42500001,1.125,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0850_2250: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.42500001,1.125,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0850_2250: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.42500001,1.125,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0850_2250: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.42500001,1.125,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0850_2250: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.42500001,1.125,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0850_2250: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.42500001,1.125,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_0850_2250: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.42500001,1.125,0.42500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_0700_3300: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.28,1.3200001,0.28};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_0700_3300: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.28,1.3200001,0.28};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_0700_3300: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.28,1.3200001,0.28};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_0700_3300: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.28,1.3200001,0.28};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_0700_3300: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.28,1.3200001,0.28};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_0700_3300: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.28,1.3200001,0.28};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_0700_3300: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.28,1.3200001,0.28};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_0700_3300: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.34999999,1.65,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_0700_3300: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.34999999,1.65,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_0700_3300: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.34999999,1.65,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_0700_3300: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.34999999,1.65,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_0700_3300: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.34999999,1.65,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_0700_3300: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.34999999,1.65,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_0700_3300: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.34999999,1.65,0.34999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1100_2150: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.44,0.86000001,0.44};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1100_2150: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.44,0.86000001,0.44};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1100_2150: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.44,0.86000001,0.44};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1100_2150: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.44,0.86000001,0.44};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1100_2150: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.44,0.86000001,0.44};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1100_2150: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.44,0.86000001,0.44};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1100_2150: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.44,0.86000001,0.44};
		size[]={0.2};
		sizeVar=0.245;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1100_2150: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.55000001,1.075,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1100_2150: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.55000001,1.075,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1100_2150: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.55000001,1.075,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1100_2150: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.55000001,1.075,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1100_2150: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.55000001,1.075,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1100_2150: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.55000001,1.075,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1100_2150: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.55000001,1.075,0.55000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1850_1450: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.74000001,0.57999998,0.74000001};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1850_1450: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.74000001,0.57999998,0.74000001};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1850_1450: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.74000001,0.57999998,0.74000001};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1850_1450: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.74000001,0.57999998,0.74000001};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1850_1450: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.74000001,0.57999998,0.74000001};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1850_1450: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.74000001,0.57999998,0.74000001};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1850_1450: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.74000001,0.57999998,0.74000001};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1850_1450: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.92500001,0.72500002,0.92500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1850_1450: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.92500001,0.72500002,0.92500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1850_1450: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.92500001,0.72500002,0.92500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1850_1450: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.92500001,0.72500002,0.92500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1850_1450: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.92500001,0.72500002,0.92500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1850_1450: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.92500001,0.72500002,0.92500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1850_1450: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.92500001,0.72500002,0.92500001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1250_2200: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.5,0.88,0.5};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1250_2200: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.5,0.88,0.5};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1250_2200: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.5,0.88,0.5};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1250_2200: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.5,0.88,0.5};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1250_2200: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.5,0.88,0.5};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1250_2200: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.5,0.88,0.5};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1250_2200: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.5,0.88,0.5};
		size[]={0.2};
		sizeVar=0.25;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1250_2200: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.625,1.1,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1250_2200: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.625,1.1,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1250_2200: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.625,1.1,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1250_2200: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.625,1.1,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1250_2200: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.625,1.1,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1250_2200: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.625,1.1,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1250_2200: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.625,1.1,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1050_2800: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.41999999,1.12,0.41999999};
		size[]={0.2};
		sizeVar=0.255;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1050_2800: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.41999999,1.12,0.41999999};
		size[]={0.2};
		sizeVar=0.255;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1050_2800: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.41999999,1.12,0.41999999};
		size[]={0.2};
		sizeVar=0.255;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1050_2800: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.41999999,1.12,0.41999999};
		size[]={0.2};
		sizeVar=0.255;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1050_2800: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.41999999,1.12,0.41999999};
		size[]={0.2};
		sizeVar=0.255;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1050_2800: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.41999999,1.12,0.41999999};
		size[]={0.2};
		sizeVar=0.255;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1050_2800: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.41999999,1.12,0.41999999};
		size[]={0.2};
		sizeVar=0.255;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1050_2800: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.52499998,1.4,0.52499998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1050_2800: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.52499998,1.4,0.52499998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1050_2800: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.52499998,1.4,0.52499998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1050_2800: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.52499998,1.4,0.52499998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1050_2800: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.52499998,1.4,0.52499998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1050_2800: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.52499998,1.4,0.52499998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1050_2800: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.52499998,1.4,0.52499998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1600_2000: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.63999999,0.80000001,0.63999999};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1600_2000: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.63999999,0.80000001,0.63999999};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1600_2000: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.63999999,0.80000001,0.63999999};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1600_2000: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.63999999,0.80000001,0.63999999};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1600_2000: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.63999999,0.80000001,0.63999999};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1600_2000: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.63999999,0.80000001,0.63999999};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1600_2000: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.63999999,0.80000001,0.63999999};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1600_2000: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.80000001,1,0.80000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1600_2000: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.80000001,1,0.80000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1600_2000: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.80000001,1,0.80000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1600_2000: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.80000001,1,0.80000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1600_2000: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.80000001,1,0.80000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1600_2000: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.80000001,1,0.80000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1600_2000: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.80000001,1,0.80000001};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1000_3400: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.40000001,1.36,0.40000001};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1000_3400: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.40000001,1.36,0.40000001};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1000_3400: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.40000001,1.36,0.40000001};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1000_3400: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.40000001,1.36,0.40000001};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1000_3400: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.40000001,1.36,0.40000001};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1000_3400: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.40000001,1.36,0.40000001};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1000_3400: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.40000001,1.36,0.40000001};
		size[]={0.2};
		sizeVar=0.25999999;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1000_3400: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.5,1.7,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1000_3400: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.5,1.7,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1000_3400: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.5,1.7,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1000_3400: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.5,1.7,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1000_3400: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.5,1.7,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1000_3400: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.5,1.7,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1000_3400: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.5,1.7,0.5};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1300_2750: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.51999998,1.1,0.51999998};
		size[]={0.2};
		sizeVar=0.26499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1300_2750: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.51999998,1.1,0.51999998};
		size[]={0.2};
		sizeVar=0.26499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1300_2750: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.51999998,1.1,0.51999998};
		size[]={0.2};
		sizeVar=0.26499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1300_2750: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.51999998,1.1,0.51999998};
		size[]={0.2};
		sizeVar=0.26499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1300_2750: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.51999998,1.1,0.51999998};
		size[]={0.2};
		sizeVar=0.26499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1300_2750: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.51999998,1.1,0.51999998};
		size[]={0.2};
		sizeVar=0.26499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1300_2750: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.51999998,1.1,0.51999998};
		size[]={0.2};
		sizeVar=0.26499999;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1300_2750: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.64999998,1.375,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1300_2750: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.64999998,1.375,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1300_2750: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.64999998,1.375,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1300_2750: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.64999998,1.375,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1300_2750: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.64999998,1.375,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1300_2750: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.64999998,1.375,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1300_2750: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.64999998,1.375,0.64999998};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_1250_3400: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.5,1.36,0.5};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_1250_3400: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.5,1.36,0.5};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_1250_3400: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.5,1.36,0.5};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_1250_3400: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.5,1.36,0.5};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_1250_3400: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.5,1.36,0.5};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_1250_3400: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.5,1.36,0.5};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_1250_3400: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.5,1.36,0.5};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_1250_3400: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={0.625,1.7,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_1250_3400: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={0.625,1.7,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_1250_3400: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={0.625,1.7,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_1250_3400: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={0.625,1.7,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_1250_3400: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={0.625,1.7,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_1250_3400: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={0.625,1.7,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_1250_3400: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={0.625,1.7,0.625};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_2350_1900: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={0.94,0.75999999,0.94};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_2350_1900: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={0.94,0.75999999,0.94};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_2350_1900: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={0.94,0.75999999,0.94};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_2350_1900: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={0.94,0.75999999,0.94};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_2350_1900: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={0.94,0.75999999,0.94};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_2350_1900: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={0.94,0.75999999,0.94};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_2350_1900: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={0.94,0.75999999,0.94};
		size[]={0.2};
		sizeVar=0.27000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_2350_1900: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={1.175,0.94999999,1.175};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_2350_1900: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={1.175,0.94999999,1.175};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_2350_1900: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={1.175,0.94999999,1.175};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_2350_1900: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={1.175,0.94999999,1.175};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_2350_1900: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={1.175,0.94999999,1.175};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_2350_1900: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={1.175,0.94999999,1.175};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_2350_1900: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={1.175,0.94999999,1.175};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_2950_1600: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={1.1799999,0.63999999,1.1799999};
		size[]={0.2};
		sizeVar=0.27500001;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_2950_1600: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={1.1799999,0.63999999,1.1799999};
		size[]={0.2};
		sizeVar=0.27500001;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_2950_1600: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={1.1799999,0.63999999,1.1799999};
		size[]={0.2};
		sizeVar=0.27500001;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_2950_1600: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={1.1799999,0.63999999,1.1799999};
		size[]={0.2};
		sizeVar=0.27500001;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_2950_1600: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={1.1799999,0.63999999,1.1799999};
		size[]={0.2};
		sizeVar=0.27500001;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_2950_1600: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={1.1799999,0.63999999,1.1799999};
		size[]={0.2};
		sizeVar=0.27500001;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_2950_1600: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={1.1799999,0.63999999,1.1799999};
		size[]={0.2};
		sizeVar=0.27500001;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_2950_1600: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={1.475,0.80000001,1.475};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_2950_1600: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={1.475,0.80000001,1.475};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_2950_1600: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={1.475,0.80000001,1.475};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_2950_1600: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={1.475,0.80000001,1.475};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_2950_1600: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={1.475,0.80000001,1.475};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_2950_1600: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={1.475,0.80000001,1.475};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_2950_1600: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={1.475,0.80000001,1.475};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_4200_2250: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={1.6799999,0.89999998,1.6799999};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_4200_2250: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={1.6799999,0.89999998,1.6799999};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_4200_2250: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={1.6799999,0.89999998,1.6799999};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_4200_2250: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={1.6799999,0.89999998,1.6799999};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_4200_2250: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={1.6799999,0.89999998,1.6799999};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_4200_2250: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={1.6799999,0.89999998,1.6799999};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_4200_2250: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={1.6799999,0.89999998,1.6799999};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_4200_2250: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={2.0999999,1.125,2.0999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_4200_2250: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={2.0999999,1.125,2.0999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_4200_2250: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={2.0999999,1.125,2.0999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_4200_2250: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={2.0999999,1.125,2.0999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_4200_2250: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={2.0999999,1.125,2.0999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_4200_2250: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={2.0999999,1.125,2.0999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_4200_2250: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={2.0999999,1.125,2.0999999};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_3700_2600: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={1.48,1.04,1.48};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_3700_2600: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={1.48,1.04,1.48};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_3700_2600: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={1.48,1.04,1.48};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_3700_2600: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={1.48,1.04,1.48};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_3700_2600: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={1.48,1.04,1.48};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_3700_2600: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={1.48,1.04,1.48};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_3700_2600: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={1.48,1.04,1.48};
		size[]={0.2};
		sizeVar=0.28;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_3700_2600: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={1.85,1.3,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_3700_2600: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={1.85,1.3,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_3700_2600: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={1.85,1.3,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_3700_2600: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={1.85,1.3,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_3700_2600: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={1.85,1.3,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_3700_2600: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={1.85,1.3,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_3700_2600: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={1.85,1.3,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass1N_3700_3500: BrokenGlass1NN
	{
		interval=0.07;
		positionVar[]={1.48,1.4,1.48};
		size[]={0.2};
		sizeVar=0.30000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass2N_3700_3500: BrokenGlass2NN
	{
		interval=0.07;
		positionVar[]={1.48,1.4,1.48};
		size[]={0.2};
		sizeVar=0.30000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass3N_3700_3500: BrokenGlass3NN
	{
		interval=0.07;
		positionVar[]={1.48,1.4,1.48};
		size[]={0.2};
		sizeVar=0.30000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass4N_3700_3500: BrokenGlass4NN
	{
		interval=0.07;
		positionVar[]={1.48,1.4,1.48};
		size[]={0.2};
		sizeVar=0.30000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass5N_3700_3500: BrokenGlass5NN
	{
		interval=0.07;
		positionVar[]={1.48,1.4,1.48};
		size[]={0.2};
		sizeVar=0.30000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass6N_3700_3500: BrokenGlass6NN
	{
		interval=0.07;
		positionVar[]={1.48,1.4,1.48};
		size[]={0.2};
		sizeVar=0.30000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass7N_3700_3500: BrokenGlass7NN
	{
		interval=0.07;
		positionVar[]={1.48,1.4,1.48};
		size[]={0.2};
		sizeVar=0.30000001;
		rotationVelocityVar=1;
	};
	class BrokenGlass1S_3700_3500: BrokenGlass1SN
	{
		interval=0.02;
		positionVar[]={1.85,1.75,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass2S_3700_3500: BrokenGlass2SN
	{
		interval=0.02;
		positionVar[]={1.85,1.75,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass3S_3700_3500: BrokenGlass3SN
	{
		interval=0.02;
		positionVar[]={1.85,1.75,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass4S_3700_3500: BrokenGlass4SN
	{
		interval=0.02;
		positionVar[]={1.85,1.75,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass5S_3700_3500: BrokenGlass5SN
	{
		interval=0.02;
		positionVar[]={1.85,1.75,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass6S_3700_3500: BrokenGlass6SN
	{
		interval=0.02;
		positionVar[]={1.85,1.75,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class BrokenGlass7S_3700_3500: BrokenGlass7SN
	{
		interval=0.02;
		positionVar[]={1.85,1.75,1.85};
		size[]={0.025};
		sizeVar=0.025;
		rotationVelocityVar=6;
	};
	class MissileFire: Default
	{
		interval="0.002/(interval*50)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=48;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.050000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=10.5;
		volume=7.9000001;
		rubbing=0.2;
		size[]={0.60000002,0};
		color[]=
		{
			{1,1,1,-2},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.40000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.0099999998;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=100;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MissileManualEffects1: Default
	{
		interval="0.005";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=0.30000001;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.5,10};
		color[]=
		{
			{1,1,1,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MissileEffects1: Default
	{
		interval="0.005";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=0.30000001;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.5,10};
		color[]=
		{
			{1,1,1,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile0: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2.8,4};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.18000001},
			{0.75,0.75,0.75,0.059999999},
			{0.80000001,0.80000001,0.80000001,0}
		};
		colorCoef[]={1.2,1.2,1.2,1.2};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.80000001;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile1: Default
	{
		interval="0.0015";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.6;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,3.5,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.18000001},
			{0.40000001,0.40000001,0.40000001,0.059999999},
			{0.80000001,0.80000001,0.80000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile2: Default
	{
		interval="0.003";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.2;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2};
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0.07},
			{0.60000002,0.60000002,0.60000002,0}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1.2,1.2,1.2};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile2Med: Default
	{
		interval="0.006";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.60000002;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2};
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0.07},
			{0.60000002,0.60000002,0.60000002,0}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1.2,1.2,1.2};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile3: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2,2.8};
		color[]=
		{
			{0.5,0.5,0.5,0.07},
			{0.60000002,0.60000002,0.60000002,0.02},
			{0.69999999,0.69999999,0.69999999,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.89999998,0.89999998,0.89999998,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile3Med: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2,2.8};
		color[]=
		{
			{0.5,0.5,0.5,0.07},
			{0.60000002,0.60000002,0.60000002,0.02},
			{0.69999999,0.69999999,0.69999999,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.89999998,0.89999998,0.89999998,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile4: Default
	{
		interval="0.0012";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.1;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1.5,3};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.050000001},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile5: Default
	{
		interval="0.003";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=7;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={3,9};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.80000001},
			{0.89999998,0.89999998,0.89999998,0.40000001},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=3;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CruiseMissile: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=1.2;
		rubbing=0.5;
		size[]={2,6,8.8000002};
		color[]=
		{
			{0.5,0.5,0.5,0.1},
			{0.60000002,0.60000002,0.60000002,0.059999999},
			{0.69999999,0.69999999,0.69999999,0.039999999},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.89999998,0.89999998,0.89999998,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=5.1999998;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1.8,1.8,1.8};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class CruiseMissileMed: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={2,4,6.8000002};
		color[]=
		{
			{0.5,0.5,0.5,0.07},
			{0.60000002,0.60000002,0.60000002,0.02},
			{0.69999999,0.69999999,0.69999999,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.89999998,0.89999998,0.89999998,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=5.1999998;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MissileDARExplo: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.079999998;
		moveVelocity[]=
		{
			"parentSpeedX",
			"parentSpeedY",
			"parentSpeedZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.25,0.60000002};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,-2},
			{0.40000001,0.40000001,0.40000001,-1},
			{0.40000001,0.40000001,0.40000001,-0.60000002},
			{0.40000001,0.40000001,0.40000001,-0.40000001},
			{0.40000001,0.40000001,0.40000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		position[]={0,0,-1.35};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MissileDARSmoke: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.8;
		moveVelocity[]=
		{
			"-0.06 * speedX + parentSpeedX",
			"-0.06 * speedY + parentSpeedY",
			"-0.06 * speedZ + parentSpeedZ"
		};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.079999998;
		size[]={1,3,4.5,5.8000002,7,8};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0.2},
			{0.44999999,0.44999999,0.44999999,0.15000001},
			{0.5,0.5,0.5,0.059999999},
			{0.55000001,0.55000001,0.55000001,0.02},
			{0.60000002,0.60000002,0.60000002,0.0020000001}
		};
		colorCoef[]={1.2,1.2,1.2,0.89999998};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={2.5,1,2.5};
		rotationVelocityVar=30;
		position[]={0,0,-1.4};
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ArtilleryShell1: Default
	{
		interval=0.0035000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.23;
		volume=1;
		rubbing=0.2;
		size[]={0.60000002,1.8,2.5};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0.14},
			{0.60000002,0.60000002,0.60000002,0.059999999},
			{0.69999999,0.69999999,0.69999999,0.02},
			{0.80000001,0.80000001,0.80000001,0.0060000001},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.079999998,0.079999998,0.079999998};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeTrailEffect1: Default
	{
		interval=0.045000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.2;
		size[]={1.5,3,6};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0},
			{0.40000001,0.40000001,0.40000001,0.5},
			{0.40000001,0.40000001,0.40000001,0.25},
			{0.60000002,0.60000002,0.60000002,0.12},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=2;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeTrailEffect2: Default
	{
		interval=0.045000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.2;
		size[]={5,11};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0},
			{0.5,0.5,0.5,0.40000001},
			{0.5,0.5,0.5,0.30000001},
			{0.2,0.2,0.2,0.15000001},
			{0.5,0.5,0.5,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=2;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WPTrailEffect: Default
	{
		interval=0.07;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3.5;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={0.75,1.75};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0},
			{1,1,1,1},
			{1,1,1,0.80000001},
			{1,1,1,0.69999999},
			{1,1,1,0.34999999},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MGunSmoke1: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.15000001,0.5};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.30000001,0.30000001,0.30000001,0.050000001},
			{0.30000001,0.30000001,0.30000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1: Default
	{
		interval="0.1 - 0.096 * intensity";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.6 * (engineOn interpolate [0,1,5,1])";
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.15000001,0.80000001};
		sizeCoef="1 * (engineOn interpolate [0,1,2,1])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.15000001,0.15000001,0.15000001,0.050000001},
			{0.15000001,0.15000001,0.15000001,0}
		};
		colorCoef[]=
		{
			"1",
			"1",
			"1",
			"(intensity * 1.15) + (1.5 * (1 - (engineOn interpolate [0,1,0.6,1])))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		blockAIVisibility=0;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeOffroad: Default
	{
		interval="0.1 - 0.098 * intensity";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.15 * (engineOn interpolate [0,1,2.5,1])";
		moveVelocity[]=
		{
			"speedX * 3",
			"speedY * 3",
			"speedZ * 3"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.2;
		size[]={0.25,0.60000002};
		sizeCoef="1 * (engineOn interpolate [0,1,1.6,1])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.15000001,0.15000001,0.15000001,0.050000001},
			{0.15000001,0.15000001,0.15000001,0}
		};
		colorCoef[]=
		{
			0.40000001,
			0.40000001,
			0.40000001,
			"(intensity * 1.6) + (1.2 * (1 - (engineOn interpolate [0,1,0.6,1])))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		blockAIVisibility=0;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=30;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeBoat1: Default
	{
		interval="0.1 - 0.095 * intensity";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.2;
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.15000001,0.89999998,1.8};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.30000001},
			{0.30000001,0.30000001,0.30000001,0.15000001},
			{0.30000001,0.30000001,0.30000001,0}
		};
		colorCoef[]=
		{
			"15 * (1 - (engineOn interpolate [0.9,1,0.8,1]))",
			"15 * (1 - (engineOn interpolate [0.9,1,0.8,1]))",
			"15 * (1 - (engineOn interpolate [0.9,1,0.8,1]))",
			"(intensity * 1.5) + (2 * (1 - (engineOn interpolate [0,1,0.8,1])))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.5;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeRefract: Default
	{
		interval="0.1 - 0.095 * intensity";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.15000001,0.5};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.2},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.02}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeRefractOffroad: Default
	{
		interval="0.1 - 0.097 * intensity";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.30000001;
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.25,0.5};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.25999999},
			{0.30000001,0.30000001,0.30000001,0.18000001},
			{0.30000001,0.30000001,0.30000001,0.02}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1Med: Default
	{
		interval="(0.04 - (0.039 * intensity)) * (engineOn interpolate [0.99,1,0,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"speedX * 2",
			"speedY * 2",
			"speedZ * 2"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.34999999,0.75};
		sizeCoef=1;
		color[]=
		{
			{0.2,0.2,0.2,0.090000004},
			{0.30000001,0.30000001,0.30000001,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.016000001},
			{0.30000001,0.30000001,0.30000001,0.0080000004},
			{0.30000001,0.30000001,0.30000001,0.0040000002},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"0.6",
			"0.6",
			"0.6",
			"(intensity * 1.15) + (5 * (1 - (engineOn interpolate [0,1,0.8,1])))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.02;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0,0.2};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke2Med: Default
	{
		interval="(0.04 - (0.0395 * intensity)) * (engineOn interpolate [0.99,1,1,0])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5999999;
		moveVelocity[]=
		{
			"speedX * 2",
			"speedY * 2",
			"speedZ * 2"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.40000001,1.5};
		sizeCoef=1;
		color[]=
		{
			{0.2,0.2,0.2,0.090000004},
			{0.30000001,0.30000001,0.30000001,0.059999999},
			{0.30000001,0.30000001,0.30000001,0.035},
			{0.30000001,0.30000001,0.30000001,0.017999999},
			{0.30000001,0.30000001,0.30000001,0.0080000004},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"0.4",
			"0.4",
			"0.6",
			"(intensity * 3)"
		};
		animationSpeed[]={3,2};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.30000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0,0.2};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=30;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeRefractMed: Default
	{
		interval="(0.1 - 0.05) - (0.047 * intensity)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"speedX * 1.8",
			"speedY * 1.8",
			"speedZ * 1.8"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,1.4};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.25999999},
			{0.30000001,0.30000001,0.30000001,0.16},
			{0.30000001,0.30000001,0.30000001,0.02}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.15000001,0,0.15000001};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1Heli: Default
	{
		interval="0.05 * (damage interpolate [0.4,1.0,1,0.1]) / (vehicleSpeedSize interpolate [0,300,1,10])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.5 * (damage interpolate [0.3,0.9,0.8,1.9])";
		moveVelocity[]=
		{
			"speedX * 2",
			"speedY * 2",
			"speedZ * 2"
		};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.5;
		size[]={0.2,1.5};
		sizeCoef="1 + damage";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.18000001},
			{0.059999999,0.059999999,0.059999999,0.059999999},
			{0.059999999,0.059999999,0.059999999,0.0099999998}
		};
		colorCoef[]=
		{
			2,
			2,
			2,
			"1 * (damage interpolate [0.3,1,0.8,2.5])"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]=
		{
			"damage interpolate [0.4,0.40001,0,0.1]",
			"damage interpolate [0.4,0.40001,0,0.1]",
			"damage interpolate [0.4,0.40001,0,0.1]"
		};
		MoveVelocityVar[]={0.22,0.22,0.22};
		rotationVelocityVar=40;
		sizeVar=0.029999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1HeliCom: ExhaustSmoke1Heli
	{
		size[]={0.30000001,2.2};
		sizeCoef="1 + damage";
	};
	class ExhaustSmoke1Drone: ExhaustSmoke1Heli
	{
		size[]={0.1,0.60000002};
		sizeCoef="0.6 + damage";
	};
	class ExhaustSmoke1HeliHP: Default
	{
		interval="0.05 * (damage interpolate [0.4,1.0,1,0.1]) / (vehicleSpeedSize interpolate [0,300,1,10])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.5 * (engineDamage interpolate [0.3,0.9,0.8,1.9])";
		moveVelocity[]=
		{
			"speedX * 2",
			"speedY * 2",
			"speedZ * 2"
		};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.5;
		size[]={0.30000001,3};
		sizeCoef="1.4 * (engineDamage interpolate [0,1,1,6])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.12},
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"15",
			"15",
			"15",
			"intensity/2 * (engineDamage interpolate [0.3,0.4,1,6]))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]=
		{
			"engineDamage interpolate [0.4,0.40001,0,0.1]",
			"engineDamage interpolate [0.4,0.40001,0,0.1]",
			"enginedamage interpolate [0.4,0.40001,0,0.1]"
		};
		MoveVelocityVar[]={0.22,0.22,0.22};
		rotationVelocityVar=40;
		sizeVar=0.029999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1HeliBig: ExhaustSmoke1Heli
	{
		interval="0.05 * (damage interpolate [0.4,1.0,1,0.1]) / (vehicleSpeedSize interpolate [0,300,1,4])";
		size[]={0.34999999,2.5};
		lifeTime="0.5 * (damage interpolate [0.3,0.9,0.8,1.9])";
	};
	class ExhaustSmokeTankGasTurbine: ExhaustSmoke1HeliBig
	{
		color[]=
		{
			{0.95999998,0.95999998,0.95999998,0.12},
			{0.80000001,0.80000001,0.80000001,0.039999999},
			{0.89999998,0.89999998,0.89999998,0.0099999998},
			{0.99000001,0.99000001,0.99000001,0.001}
		};
	};
	class ExhaustSmokeRefractHeli: Default
	{
		interval="(0.05 - 0.0495 * intensity)/(vehicleSpeedSize interpolate [0,300,1,500])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.5/(vehicleSpeedSize interpolate [0,300,1,500])";
		moveVelocity[]=
		{
			"speedX * 1",
			"speedY * 1",
			"speedZ * 1"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.15000001,0.40000001};
		sizeCoef="(vehicleSpeedSize interpolate [0,300,1,3])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.31999999},
			{0.30000001,0.30000001,0.30000001,0.28},
			{0.30000001,0.30000001,0.30000001,0.25},
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.30000001,0.30000001,0.30000001,0.1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeRefractHeliMed: Default
	{
		interval="0.001/(intensity + 0.001)/(vehicleSpeedSize interpolate [0,300,1,80])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.2/(vehicleSpeedSize interpolate [0,300,1,500])";
		moveVelocity[]=
		{
			"speedX * 0.8",
			"speedY * 0.8",
			"speedZ * 0.8"
		};
		rotationVelocity=1;
		weight=1.1;
		volume=1.5;
		rubbing=0.1;
		size[]={0.2,0.5};
		sizeCoef="(vehicleSpeedSize interpolate [0,300,1,3])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.46000001},
			{0.30000001,0.30000001,0.30000001,0.30000001},
			{0.30000001,0.30000001,0.30000001,0.12}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.15000001,0.15000001,0.15000001};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeRefractHeliCom: Default
	{
		interval="0.0008/(intensity + 0.001)/(vehicleSpeedSize interpolate [0,300,1,80])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.2/(vehicleSpeedSize interpolate [0,300,1,500])";
		moveVelocity[]=
		{
			"speedX * 2",
			"speedY * 2",
			"speedZ * 2"
		};
		rotationVelocity=1;
		weight=1.1;
		volume=1.5;
		rubbing=0.1;
		size[]={0.30000001,0.69999999};
		sizeCoef="(vehicleSpeedSize interpolate [0,300,1,3])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.46000001},
			{0.30000001,0.30000001,0.30000001,0.30000001},
			{0.30000001,0.30000001,0.30000001,0.12}
		};
		colorCoef[]={1,1,1,0.60000002};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeRefractHeliBig: Default
	{
		interval="0.002/(intensity + 0.001)/(vehicleSpeedSize interpolate [0,300,1,80])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.4/(vehicleSpeedSize interpolate [0,300,1,500])";
		moveVelocity[]=
		{
			"speedX * 0.8",
			"speedY * 0.8",
			"speedZ * 0.8"
		};
		rotationVelocity=1;
		weight=1.1;
		volume=1.5;
		rubbing=0.1;
		size[]={0.30000001,0.64999998};
		sizeCoef="(vehicleSpeedSize interpolate [0,300,1,3])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.46000001},
			{0.30000001,0.30000001,0.30000001,0.30000001},
			{0.30000001,0.30000001,0.30000001,0.12}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1PlaneBig: Default
	{
		interval="0.0015 * (damage interpolate [0,2.5,1,8])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (damage interpolate [0,1,1,10])";
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.4;
		volume=1;
		rubbing=0.1;
		size[]={0.60000002,3.5};
		sizeCoef="1.4 * (damage interpolate [0,1,1,6])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.12},
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"15",
			"15",
			"15",
			"intensity/2 * (damage interpolate [0.3,0.4,1,3.5]))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar="0.15 * (damage interpolate [0,1,1,20])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"2* (damage interpolate [0,1,1,1.5])",
			"2 * (damage interpolate [0,1,1,1.5])",
			"2 * (damage interpolate [0,1,1,1.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustFirePlaneBig: Default
	{
		interval="0.002 * (damage interpolate [0.9,0.901,-1.01,1.01])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.005 * (damage interpolate [0,1,0.5,2])";
		moveVelocity[]=
		{
			"0 + (speedX/2)",
			"1 + (speedY/2)",
			"0 + (speedZ/2)"
		};
		rotationVelocity=1;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={1.8,0.30000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-5},
			{1,1,1,-3},
			{1,1,1,-1.5},
			{1,1,1,-0.69999999},
			{1,1,1,-0.30000001},
			{1,1,1,-0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0.5,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar="0.15 * (damage interpolate [0,1,0.5,2])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1Plane: Default
	{
		interval="0.001 * (damage interpolate [0,2.5,1,8])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (damage interpolate [0,1,1,12])";
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.4;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,3};
		sizeCoef="1.4 * (damage interpolate [0,1,1,6])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.12},
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"15",
			"15",
			"15",
			"intensity/2 * (damage interpolate [0.3,0.4,1,6]))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar="0.15 * (damage interpolate [0,1,1,4])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"1 * (damage interpolate [0,1,1,2.5])",
			"1 * (damage interpolate [0,1,1,2.5])",
			"1 * (damage interpolate [0,1,1,2.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1PlaneHP: Default
	{
		interval="0.001 * (engineDamage interpolate [0,2.5,1,8])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (engineDamage interpolate [0,1,1,12])";
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.4;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,3};
		sizeCoef="1.4 * (engineDamage interpolate [0,1,1,6])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.12},
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"15",
			"15",
			"15",
			"intensity/2 * (engineDamage interpolate [0.3,0.4,1,6]))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar="0.15 * (engineDamage interpolate [0,1,1,4])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"1 * (engineDamage interpolate [0,1,1,2.5])",
			"1 * (engineDamage interpolate [0,1,1,2.5])",
			"1 * (engineDamage interpolate [0,1,1,2.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1Jet: Default
	{
		interval="0.003 * (damage interpolate [0.3,2.5,1,6])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (damage interpolate [0,0.8,1,10])";
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.4;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,3};
		sizeCoef="1.4 * (damage interpolate [0,1,1,6])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.12},
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"15",
			"15",
			"15",
			"1.2 * intensity * (damage interpolate [0.3,1,1,5]))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar="0.15 * (damage interpolate [0,1,1,4])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"1 * (damage interpolate [0,1,1,2.5])",
			"1 * (damage interpolate [0,1,1,2.5])",
			"1 * (damage interpolate [0,1,1,2.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1JetM: Default
	{
		interval="0.003 * (damage interpolate [0.3,2.5,1,6])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (damage interpolate [0,0.8,1,6])";
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.4;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,3};
		sizeCoef="1.4 * (damage interpolate [0,1,1,6])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.12},
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"15",
			"15",
			"15",
			"1.8 * intensity * (damage interpolate [0.3,1,1,5]))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar="0.15 * (damage interpolate [0,1,1,4])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"1 * (damage interpolate [0,1,1,2.5])",
			"1 * (damage interpolate [0,1,1,2.5])",
			"1 * (damage interpolate [0,1,1,2.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1JetL: Default
	{
		interval="0.004 * (damage interpolate [0.3,2.5,1,5])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (damage interpolate [0,0.8,1,4])";
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.4;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,3};
		sizeCoef="1.4 * (damage interpolate [0,1,1,4])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.12},
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"15",
			"15",
			"15",
			"2.4 * intensity * (damage interpolate [0.3,1,1,5]))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar="0.15 * (damage interpolate [0,1,1,4])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"1 * (damage interpolate [0,1,1,2.5])",
			"1 * (damage interpolate [0,1,1,2.5])",
			"1 * (damage interpolate [0,1,1,2.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeRefractPlane: Default
	{
		interval="0.002/(intensity + 0.001)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.15000001;
		moveVelocity[]=
		{
			"speedX * 0.8",
			"speedY * 0.8",
			"speedZ * 0.8"
		};
		rotationVelocity=1;
		weight=1.1;
		volume=1.5;
		rubbing=0.1;
		size[]={0.30000001,0.80000001};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.46000001},
			{0.30000001,0.30000001,0.30000001,0.30000001},
			{0.30000001,0.30000001,0.30000001,0.12}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.34999999,0.34999999,0.34999999};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeBig1: Default
	{
		interval="(0.05 - 0.0494 * intensity)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.2 * (engineOn interpolate [0,1,2,1])";
		moveVelocity[]=
		{
			"speedX * 6",
			"speedY * 6",
			"speedZ * 6"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1.2;
		rubbing=0.2;
		size[]={0.30000001,1.2};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.029999999},
			{0.30000001,0.30000001,0.30000001,0.050000001},
			{0.30000001,0.30000001,0.30000001,0.0049999999}
		};
		colorCoef[]=
		{
			"1 * (1 - engineOn)",
			"1 * (1 - engineOn)",
			"1 * (1 - engineOn)",
			"0.75 + (3.8 * intensity * engineOn)"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.02,0.02,0.02};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeTank1: Default
	{
		interval="(0.05 - 0.0494 * intensity)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.6 * (engineOn interpolate [0,1,2,1])";
		moveVelocity[]=
		{
			"speedX * 6",
			"speedY * 6",
			"speedZ * 6"
		};
		rotationVelocity=1;
		weight=1.55;
		volume=1.2;
		rubbing=0.2;
		size[]={0.30000001,0.69999999,1,1.2,1.3,1.45};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.050000001},
			{0.30000001,0.30000001,0.30000001,0.0049999999},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"1 * (1 - engineOn)",
			"1 * (1 - engineOn)",
			"1 * (1 - engineOn)",
			"0.9 + (4.8 * intensity * engineOn)"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.079999998;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.5;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.02,0.02,0.02};
		MoveVelocityVar[]={0.69999999,0.69999999,0.69999999};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeTank2: Default
	{
		interval="(0.05 - 0.0494 * intensity)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.6 * (engineOn interpolate [0,1,2,1])";
		moveVelocity[]=
		{
			"speedX * 6",
			"speedY * 6",
			"speedZ * 6"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1.2;
		rubbing=0.2;
		size[]={0.30000001,0.69999999,1,1.2,1.3,1.45};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.050000001},
			{0.30000001,0.30000001,0.30000001,0.0049999999},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			"1 * (1 - engineOn)",
			"1 * (1 - engineOn)",
			"1 * (1 - engineOn)",
			"0.9 + (4.8 * intensity * engineOn)"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.079999998;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.15000001,0.15000001,0.15000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeAMV: Default
	{
		interval="(0.05 - 0.0494 * intensity)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.2 * (engineOn interpolate [0,1,2,1])";
		moveVelocity[]=
		{
			"speedX * 6",
			"speedY * 6",
			"speedZ * 6"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1.2;
		rubbing=0.2;
		size[]={0.30000001,1.2};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.029999999},
			{0.30000001,0.30000001,0.30000001,0.050000001},
			{0.30000001,0.30000001,0.30000001,0.0049999999}
		};
		colorCoef[]=
		{
			"1 * (1 - engineOn)",
			"1 * (1 - engineOn)",
			"1 * (1 - engineOn)",
			"(intensity * (0.7 * engineOn))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.02,0.02,0.02};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeHEMTT: Default
	{
		interval="(0.05 - 0.0497 * intensity)/2";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.4 * (engineOn interpolate [0,1,4,1])";
		moveVelocity[]=
		{
			"speedX * 10",
			"speedY * 10",
			"speedZ * 10"
		};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.40000001;
		size[]={0.15000001,0.25,0.40000001,0.5,0.60000002,0.69999999,0.80000001,0.89999998,1,1.1,1.2,1.3,1.4,1.5,1.6,1.7};
		sizeCoef="1 * (engineOn interpolate [0,1,2.5,1])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.0040000002},
			{0.30000001,0.30000001,0.30000001,0.0020000001},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			0.40000001,
			0.40000001,
			0.40000001,
			"(intensity * 1 * engineOn) + (1 * (1 - engineOn))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.18000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.60000002,0.60000002,0.60000002};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeHTruck: Default
	{
		interval="(0.05 - 0.0497 * intensity)/2";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.2 * (engineOn interpolate [0,1,4,1])";
		moveVelocity[]=
		{
			"speedX * 6",
			"speedY * 6",
			"speedZ * 6"
		};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.40000001;
		size[]={0.1,0.40000001,0.60000002,0.75,0.85000002,0.92000002,1};
		sizeCoef="1 * (engineOn interpolate [0,1,2.5,1])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.0040000002},
			{0.30000001,0.30000001,0.30000001,0.0020000001},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			0.30000001,
			0.30000001,
			0.30000001,
			"(intensity * 1.3 * engineOn) + (1 * (1 - engineOn))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.18000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeMRAP_02: Default
	{
		interval="(0.05 - 0.0497 * intensity)/2";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (engineOn interpolate [0,1,4,1])";
		moveVelocity[]=
		{
			"speedX * 6",
			"speedY * 6",
			"speedZ * 6"
		};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.40000001;
		size[]={0.1,0.40000001,0.60000002,0.75,0.85000002,0.92000002,1};
		sizeCoef="0.6 * (engineOn interpolate [0,1,2.5,1])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.0040000002},
			{0.30000001,0.30000001,0.30000001,0.0020000001},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			0.30000001,
			0.30000001,
			0.30000001,
			"1 + (intensity * 1.8 * engineOn) + (1.6 * (1 - engineOn))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.18000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeTractor: Default
	{
		interval="(0.05 - 0.0497 * intensity)/2";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (engineOn interpolate [0,1,4,1])";
		moveVelocity[]=
		{
			"speedX * 10",
			"speedY * 10",
			"speedZ * 10"
		};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.5;
		size[]={0.1,0.40000001,0.55000001,0.68000001,1.75,2.8};
		sizeCoef="1 * (engineOn interpolate [0,1,2.5,1])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.0040000002},
			{0.30000001,0.30000001,0.30000001,0.0020000001},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			0.30000001,
			0.30000001,
			0.30000001,
			"(intensity * 1.6 * engineOn) + (1 * (1 - engineOn))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.18000001;
		position[]=
		{
			"positionX",
			"positionY-0.1",
			"positionZ"
		};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeBigRefract: Default
	{
		interval="(0.05 - 0.049 * intensity)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"speedX * 0.8",
			"speedY * 0.8",
			"speedZ * 0.8"
		};
		rotationVelocity=1;
		weight=1.1;
		volume=1.5;
		rubbing=0.1;
		size[]={0.2,2.5};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.30000001},
			{0.30000001,0.30000001,0.30000001,0.18000001},
			{0.30000001,0.30000001,0.30000001,0.059999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeHEMTTRefract: Default
	{
		interval="(0.05 - 0.049 * intensity)/2";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.2;
		moveVelocity[]=
		{
			"speedX * 2",
			"speedY * 2",
			"speedZ * 2"
		};
		rotationVelocity=1;
		weight=1.1;
		volume=1.5;
		rubbing=0.1;
		size[]={0.2,1};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.30000001},
			{0.30000001,0.30000001,0.30000001,0.18000001},
			{0.30000001,0.30000001,0.30000001,0.059999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeWater1: Default
	{
		interval="(0.05 - 0.0475 * intensity)*(10/9)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]=
		{
			"speedX",
			"speedY + 1",
			"speedZ"
		};
		rotationVelocity=0;
		weight=1.15;
		volume=1;
		rubbing=13;
		size[]={0.025};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.029999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=8;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.02,0,0.02};
		rotationVelocityVar=0;
		sizeVar=0.0040000002;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeBigWater1: Default
	{
		interval="(0.025 - 0.01875 * intensity)*(20/9)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]=
		{
			"speedX",
			"speedY + 1",
			"speedZ"
		};
		rotationVelocity=0;
		weight=1.15;
		volume=1;
		rubbing=13;
		size[]={0.15000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,1},
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.029999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=8;
		positionVar[]={0.15000001,0,0.15000001};
		MoveVelocityVar[]={0.30000001,0.1,0.30000001};
		rotationVelocityVar=0;
		sizeVar=0.0040000002;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeWater2: Default
	{
		interval="(0.05 - 0.0475 * intensity)*10";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]=
		{
			"speedX",
			"speedY + 1",
			"speedZ"
		};
		rotationVelocity=0;
		weight=1.15;
		volume=1;
		rubbing=13;
		size[]={0.025};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.029999999;
		onTimerScript="";
		beforeDestroyScript="";
		postEffects="ExhaustEffectOnWater";
		destroyOnWaterSurface=-1;
		lifeTimeVar=8;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.02,0,0.02};
		rotationVelocityVar=0;
		sizeVar=0.0040000002;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeBigWater2: Default
	{
		interval="(0.025 - 0.01875 * intensity)*20";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]=
		{
			"speedX",
			"speedY + 1",
			"speedZ"
		};
		rotationVelocity=0;
		weight=1.15;
		volume=1;
		rubbing=13;
		size[]={0.15000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,1},
			{1,1,1,1},
			{1,1,1,1},
			{1,1,1,1},
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.029999999;
		onTimerScript="";
		beforeDestroyScript="";
		postEffects="ExhaustEffectBigOnWater";
		destroyOnWaterSurface=-1;
		lifeTimeVar=8;
		positionVar[]={0.15000001,0,0.15000001};
		MoveVelocityVar[]={0.30000001,0.1,0.30000001};
		rotationVelocityVar=0;
		sizeVar=0.0040000002;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeBigOnWater: Default
	{
		interval="0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.2;
		moveVelocity[]={0,0.1,0};
		rotationVelocity=1;
		weight=1;
		volume=1;
		rubbing=0.1;
		size[]={0.80000001,4};
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.15000001},
			{0.059999999,0.059999999,0.059999999,0.079999998},
			{0.059999999,0.059999999,0.059999999,0.0099999998}
		};
		animationSpeed[]={1,2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0;
		positionVar[]={0.050000001,0,0.050000001};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmokeOnWater: Default
	{
		interval="0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]={0,0.1,0};
		rotationVelocity=1;
		weight=1;
		volume=1;
		rubbing=0.1;
		size[]={0.5,2};
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.059999999,0.059999999,0.059999999,0.045000002},
			{0.059999999,0.059999999,0.059999999,0.0099999998}
		};
		animationSpeed[]={1,2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0;
		positionVar[]={0.050000001,0,0.050000001};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftDust1: Default
	{
		interval="0.20 - 0.18 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5999999;
		moveVelocity[]=
		{
			"speedX * 0.4",
			"(speedY * 0.4) + (0.5 * speedSize interpolate [4,15,-0.3,3])",
			"speedZ * 0.4"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.5;
		size[]={0.80000001,3,6,12};
		sizeCoef="speedSize interpolate [0,15,0.3,1.1]";
		color[]=
		{
			{0.2,0.2,0.2,0},
			{0.2,0.2,0.2,0.25},
			{0.2,0.2,0.2,0.25},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.050000001},
			{0.2,0.2,0.2,0.050000001},
			{0.2,0.2,0.2,0}
		};
		colorCoef[]=
		{
			"1 + 0.02 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.08 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.34 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"((dustness interpolate [0,1,0,1]) * (speedSize interpolate [1,23,1.1,1.3]) * (1.1-humidity))"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		lifeTimeVar=0.5;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]=
		{
			"0.1 * (speedSize interpolate [4,15,1,6])",
			0,
			"0.1 * (speedSize interpolate [4,15,1,6])"
		};
		MoveVelocityVar[]=
		{
			"0.4 * (speedSize interpolate [3,15,1,2])",
			"0.4 * (speedSize interpolate [3,15,0.8,2.5])",
			"0.4 * (speedSize interpolate [3,15,1,2])"
		};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDust1: LeftDust1
	{
	};
	class LeftDust1Med: LeftDust1
	{
		interval="0.20 - 0.17 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.9;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.30000001;
		sizeVar=0.5;
	};
	class RightDust1Med: RightDust1
	{
		interval="0.20 - 0.17 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.9;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.30000001;
		sizeVar=0.5;
	};
	class LeftDust1Low: LeftDust1
	{
		interval="0.20 - 0.155 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.3;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.1;
		sizeVar=0.30000001;
	};
	class RightDust1Low: RightDust1
	{
		interval="0.20 - 0.155 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.3;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.1;
		sizeVar=0.30000001;
	};
	class LeftDustLong: Default
	{
		interval="0.35 - 0.185 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.8,1.0]) * (1-humidity))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="18 * (speedSize interpolate [0,23,0.25,1])";
		moveVelocity[]=
		{
			"speedX * 0.4",
			"(speedY * 0.4) + (0.5 * speedSize interpolate [3,15,-0.3,1.8])",
			"speedZ * 0.4"
		};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.1;
		size[]={0.80000001,3,6,10,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef="speedSize interpolate [0,15,0.2,1.1]";
		color[]=
		{
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.090000004},
			{0.2,0.2,0.2,0.079999998},
			{0.2,0.2,0.2,0.059999999},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0.02},
			{0.2,0.2,0.2,0}
		};
		colorCoef[]=
		{
			"1 + 0.02 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.08 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.34 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"((dustness interpolate [0,1,0,1]) * (speedSize interpolate [1,23,1.6,1.8]) * (1.1-humidity))"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		lifeTimeVar="6 * (speedSize interpolate [0,23,0.25,1])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={1.5,0.050000001,1.5};
		rotationVelocityVar=10;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDustLong: LeftDustLong
	{
	};
	class LeftDustLongMed: LeftDustLong
	{
		interval="0.35 - 0.18 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=12;
		size[]={0.80000001,3,5,10,15,15,15,15,15,15};
		sizeCoef=1;
		lifeTimeVar=4;
		sizeVar=0.25;
	};
	class RightDustLongMed: RightDustLong
	{
		interval="0.35 - 0.12 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=12;
		size[]={0.80000001,3,5,10,15,15,15,15,15,15};
		sizeCoef=1;
		lifeTimeVar=4;
		sizeVar=0.25;
	};
	class LeftDust1Air: Default
	{
		interval="0.20 - 0.18 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5999999;
		moveVelocity[]=
		{
			"speedX * 0.4",
			"(speedY * 0.1) + (0.5 * speedSize interpolate [4,15,-0.3,0.9])",
			"speedZ * 0.4"
		};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0;
		size[]={0.80000001,3,6,12};
		sizeCoef="speedSize interpolate [0,15,0.3,1.1]";
		color[]=
		{
			{0.2,0.2,0.2,0},
			{0.2,0.2,0.2,0.25},
			{0.2,0.2,0.2,0.25},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.050000001},
			{0.2,0.2,0.2,0.050000001},
			{0.2,0.2,0.2,0}
		};
		colorCoef[]=
		{
			"1 + 0.02 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.08 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.34 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"((dustness interpolate [0,1,0,0.6]) * (speedSize interpolate [1,23,1.1,1.3]) * (1.1-humidity))"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-2;
		lifeTimeVar=0.5;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]=
		{
			"0.1 * (speedSize interpolate [4,15,1,6])",
			0,
			"0.1 * (speedSize interpolate [4,15,1,6])"
		};
		MoveVelocityVar[]=
		{
			"0.8 * (speedSize interpolate [3,15,1,2])",
			"0.08 * (speedSize interpolate [3,15,0.8,2.5])",
			"0.8 * (speedSize interpolate [3,15,1,2])"
		};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDust1Air: LeftDust1Air
	{
	};
	class LeftDust1AirMed: LeftDust1Air
	{
		interval="0.20 - 0.17 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.9;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.30000001;
		sizeVar=0.5;
	};
	class RightDust1AirMed: RightDust1Air
	{
		interval="0.20 - 0.17 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.9;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.30000001;
		sizeVar=0.5;
	};
	class LeftDust1AirLow: LeftDust1Air
	{
		interval="0.20 - 0.155 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.3;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.1;
		sizeVar=0.30000001;
	};
	class RightDust1AirLow: RightDust1Air
	{
		interval="0.20 - 0.155 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.3;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.1;
		sizeVar=0.30000001;
	};
	class LeftDustLongAir: Default
	{
		interval="0.35 - 0.185 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.8,1.0]) * (1-humidity))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="18 * (speedSize interpolate [0,23,0.25,1])";
		moveVelocity[]=
		{
			"speedX * 0.4",
			"(speedY * 0.1) + (0.5 * speedSize interpolate [3,15,-0.3,0.8])",
			"speedZ * 0.4"
		};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0;
		size[]={0.80000001,3,6,10,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef="speedSize interpolate [0,15,0.2,1.1]";
		color[]=
		{
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.090000004},
			{0.2,0.2,0.2,0.079999998},
			{0.2,0.2,0.2,0.059999999},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0.02},
			{0.2,0.2,0.2,0}
		};
		colorCoef[]=
		{
			"1 + 0.02 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.08 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.34 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"((dustness interpolate [0,1,0,1]) * (speedSize interpolate [1,23,1.6,1.8]) * (1.1-humidity))"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar="6 * (speedSize interpolate [0,23,0.25,1])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={4.5,0.050000001,4.5};
		rotationVelocityVar=10;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDustLongAir: LeftDustLongAir
	{
	};
	class LeftDustLongAirMed: LeftDustLongAir
	{
		interval="0.35 - 0.18 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=12;
		size[]={0.80000001,3,5,10,15,15,15,15,15,15};
		sizeCoef=1;
		lifeTimeVar=4;
		sizeVar=0.25;
	};
	class RightDustLongAirMed: RightDustLongAir
	{
		interval="0.35 - 0.12 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=12;
		size[]={0.80000001,3,5,10,15,15,15,15,15,15};
		sizeCoef=1;
		lifeTimeVar=4;
		sizeVar=0.25;
	};
	class DustEffectBottom1: Default
	{
		interval="0.06 * (density interpolate [0,8.3,0.5,6]) * (humidity interpolate [0,7,1,0.08])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,0.30000001,0};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=0.5;
		size[]={1.3,2.8,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.12,0.12,0.12,0.80000001},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,0.69999999},
			{0.12,0.12,0.12,0.40000001},
			{0.12,0.12,0.12,0.25999999},
			{0.12,0.12,0.12,0.079999998},
			{0.12,0.12,0.12,0.02}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"density interpolate [0,6.6,0.8,0.001]"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=0.80000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={1,0.2,1};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=3;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftDustWater1: Default
	{
		interval="0.09/((speedSize factor [0,50])+0.1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=9;
		moveVelocity[]=
		{
			"speedX/3",
			"(speedY/3) + 0.4",
			"speedZ/3"
		};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=0.5;
		size[]={1.3,2.8,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.12,0.12,0.12,0.80000001},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,0.69999999},
			{0.12,0.12,0.12,0.40000001},
			{0.12,0.12,0.12,0.25999999},
			{0.12,0.12,0.12,0.079999998},
			{0.12,0.12,0.12,0.02}
		};
		colorCoef[]={1,1,1,0.80000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=3;
		position[]=
		{
			"positionX",
			"positionY + 0.3",
			"positionZ"
		};
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,0.60000002,1};
		rotationVelocityVar=10;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDustWater1: Default
	{
		interval="0.09/((speedSize factor [0,50])+0.1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=9;
		moveVelocity[]=
		{
			"speedX/3",
			"(speedY/3) + 0.4",
			"speedZ/3"
		};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=0.5;
		size[]={1.3,2.8,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.12,0.12,0.12,0.80000001},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,0.69999999},
			{0.12,0.12,0.12,0.40000001},
			{0.12,0.12,0.12,0.25999999},
			{0.12,0.12,0.12,0.079999998},
			{0.12,0.12,0.12,0.02}
		};
		colorCoef[]={1,1,1,0.80000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=3;
		position[]=
		{
			"positionX",
			"positionY + 0.3",
			"positionZ"
		};
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,0.60000002,1};
		rotationVelocityVar=10;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftDustWater1Med: Default
	{
		interval="0.12/((speedSize factor [0,50])+0.1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]=
		{
			"speedX/3",
			"(speedY/3) + 0.4",
			"speedZ/3"
		};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=0.5;
		size[]={1.3,2.8,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.12,0.12,0.12,0.80000001},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,0.69999999},
			{0.12,0.12,0.12,0.40000001},
			{0.12,0.12,0.12,0.25999999},
			{0.12,0.12,0.12,0.079999998},
			{0.12,0.12,0.12,0.02}
		};
		colorCoef[]={1,1,1,0.80000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=0.80000001;
		position[]=
		{
			"positionX",
			"positionY + 0.3",
			"positionZ"
		};
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,0.60000002,1};
		rotationVelocityVar=10;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDustWater1Med: Default
	{
		interval="0.12/((speedSize factor [0,50])+0.1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]=
		{
			"speedX/3",
			"(speedY/3) + 0.4",
			"speedZ/3"
		};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=0.5;
		size[]={1.3,2.8,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.12,0.12,0.12,0.80000001},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,0.69999999},
			{0.12,0.12,0.12,0.40000001},
			{0.12,0.12,0.12,0.25999999},
			{0.12,0.12,0.12,0.079999998},
			{0.12,0.12,0.12,0.02}
		};
		colorCoef[]={1,1,1,0.80000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=0.80000001;
		position[]=
		{
			"positionX",
			"positionY + 0.3",
			"positionZ"
		};
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,0.60000002,1};
		rotationVelocityVar=10;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftDustWater1Low: Default
	{
		interval="0.17/((speedSize factor [0,50])+0.1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.3;
		moveVelocity[]=
		{
			"speedX/3",
			"(speedY/3) + 0.4",
			"speedZ/3"
		};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=0.5;
		size[]={1.3,2.8,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.12,0.12,0.12,0.80000001},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,0.69999999},
			{0.12,0.12,0.12,0.40000001},
			{0.12,0.12,0.12,0.25999999},
			{0.12,0.12,0.12,0.079999998},
			{0.12,0.12,0.12,0.02}
		};
		colorCoef[]={1,1,1,0.80000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=0.25;
		position[]=
		{
			"positionX",
			"positionY + 0.3",
			"positionZ"
		};
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,0.60000002,1};
		rotationVelocityVar=10;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDustWater1Low: Default
	{
		interval="0.17/((speedSize factor [0,50])+0.1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.3;
		moveVelocity[]=
		{
			"speedX/3",
			"(speedY/3) + 0.4",
			"speedZ/3"
		};
		rotationVelocity=1;
		weight=1.29;
		volume=1;
		rubbing=0.5;
		size[]={1.3,2.8,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.12,0.12,0.12,0.80000001},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,1},
			{0.12,0.12,0.12,0.69999999},
			{0.12,0.12,0.12,0.40000001},
			{0.12,0.12,0.12,0.25999999},
			{0.12,0.12,0.12,0.079999998},
			{0.12,0.12,0.12,0.02}
		};
		colorCoef[]={1,1,1,0.80000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=0.25;
		position[]=
		{
			"positionX",
			"positionY + 0.3",
			"positionZ"
		};
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,0.60000002,1};
		rotationVelocityVar=10;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftVehicleWater1: Default
	{
		interval="(0.05/(speedSize interpolate [0,16,5,10])) * (distToWater interpolate [-3,-1,20,1])";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]=
		{
			"speedX * 1.25",
			"(speedY + (speedSize interpolate [0,16,1,3]))*(distToWater interpolate [0,3,1,0])",
			"speedZ * 1.25"
		};
		rotationVelocity=1;
		weight=8;
		volume=1;
		rubbing=0.1;
		size[]={1.3,2.5999999};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.28},
			{0.80000001,0.80000001,0.80000001,0.22},
			{1,1,1,0.1}
		};
		colorCoef[]={1,1,1,0.40000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		onSurface=1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.60000002,0.30000001,0.60000002};
		MoveVelocityVar[]=
		{
			"speedX interpolate [0,20,1,8]",
			"1*(distToWater interpolate [0,3,1,0])",
			"speedZ interpolate [0,20,1,8]"
		};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightVehicleWater1: LeftVehicleWater1
	{
	};
	class LVehicleWaterTrack: Default
	{
		interval="0.005 + (0.05/(speedSize+0.1))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=11;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0;
		size[]={1,2.5999999};
		sizeCoef="(speedSize interpolate [1,12,1,1.6])";
		color[]=
		{
			{1,1,1,0.40000001},
			{1,1,1,0.38},
			{1,1,1,0.31999999},
			{1,1,1,0.22},
			{1,1,1,0.1},
			{1,1,1,0.029999999}
		};
		colorCoef[]={1,1,1,0.40000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]=
		{
			"0.5 + (speedSize interpolate [0,10,0,0.8])",
			0,
			"0.5 + (speedSize interpolate [0,10,0,0.8])"
		};
		MoveVelocityVar[]=
		{
			"0.2 * (speedSize interpolate [0,12,0,12])",
			0,
			"0.2 * (speedSize interpolate [0,12,0,12])"
		};
		rotationVelocityVar=5;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RVehicleWaterTrack: LVehicleWaterTrack
	{
	};
	class LVehicleWaterTrackMed: LVehicleWaterTrack
	{
		interval="0.005 + (0.05/(speedSize+0.1))";
		lifeTime=1.1;
		moveVelocity[]={0,0,0};
		size[]={1,2.5999999};
		color[]=
		{
			{1,1,1,0.40000001},
			{1,1,1,0.44999999},
			{1,1,1,0.31999999},
			{1,1,1,0.22},
			{1,1,1,0.1},
			{1,1,1,0.029999999}
		};
		lifeTimeVar=0.34999999;
		positionVar[]=
		{
			"0.5 + (speedSize interpolate [0,10,0,0.8])",
			0,
			"0.5 + (speedSize interpolate [0,10,0,0.8])"
		};
		MoveVelocityVar[]=
		{
			"0.2 * (speedSize interpolate [0,12,0,12])",
			0,
			"0.2 * (speedSize interpolate [0,12,0,12])"
		};
		rotationVelocityVar=5;
		sizeVar=0.5;
	};
	class RVehicleWaterTrackMed: LVehicleWaterTrackMed
	{
	};
	class LVehicleWaterTrackLow: LVehicleWaterTrack
	{
		interval="0.005 + (0.05/(speedSize+0.1))";
		lifeTime=1;
		moveVelocity[]={0,0,0};
		size[]={1,2.5999999};
		color[]=
		{
			{1,1,1,0.40000001},
			{1,1,1,0.44999999},
			{1,1,1,0.31999999},
			{1,1,1,0.22},
			{1,1,1,0.1},
			{1,1,1,0.029999999}
		};
		lifeTimeVar=0.2;
		positionVar[]=
		{
			"0.6 + (speedSize interpolate [0,10,0,0.8])",
			0,
			"0.6 + (speedSize interpolate [0,10,0,0.8])"
		};
		MoveVelocityVar[]=
		{
			"0.2 * (speedSize interpolate [0,12,0,12])",
			0,
			"0.2 * (speedSize interpolate [0,12,0,12])"
		};
		rotationVelocityVar=5;
		sizeVar=0.5;
	};
	class RVehicleWaterTrackLow: LVehicleWaterTrackLow
	{
	};
	class LVehicleWaterTrackFront: Default
	{
		interval="0.02 + (0.2/(speedSize+0.1))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=11;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"speedX",
			0,
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0;
		size[]={0.80000001,2.2};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.40000001},
			{1,1,1,0.44999999},
			{1,1,1,0.31999999},
			{1,1,1,0.22},
			{1,1,1,0.1},
			{1,1,1,0.029999999}
		};
		colorCoef[]={1,1,1,0.40000001};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=0.1;
		position[]=
		{
			"positionX + (localSpeedX interpolate [0,100,0,0])",
			"positionY",
			"positionZ + (localSpeedZ interpolate [0,100,0,0])"
		};
		positionVar[]=
		{
			"0.3 + (speedSize interpolate [0,18,0,1.5])",
			0,
			"0.3 + (speedSize interpolate [0,18,0,1.5])"
		};
		MoveVelocityVar[]=
		{
			"0.15 * speedSize",
			0,
			"0.15 * speedSize"
		};
		rotationVelocityVar=5;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RVehicleWaterTrackFront: LVehicleWaterTrackFront
	{
	};
	class LeftDustMan: Default
	{
		interval="0.01 * (density interpolate [0.15,0.5,1.6,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="2 * (dustness interpolate [0,1,0.8,1.5])";
		moveVelocity[]={0,0.15000001,0};
		rotationVelocity=1;
		weight=1.276;
		volume=1;
		rubbing=0.1;
		size[]={0.079999998,0.40000001,0.69999999,1.2};
		sizeCoef=1;
		color[]=
		{
			{0.25,0.25,0.2,0.80000001},
			{0.25,0.25,0.2,0.5},
			{0.25,0.25,0.2,0.40000001},
			{0.25,0.25,0.2,0.33000001},
			{0.25,0.25,0.2,0.25},
			{0.25,0.25,0.2,0.18000001},
			{0.25,0.25,0.2,0.0099999998},
			{0.25,0.25,0.2,0}
		};
		colorCoef[]=
		{
			0.62,
			0.55000001,
			0.44999999,
			"((dustness interpolate [0,1,0.5,1.6]) * (1 - humidity)) * 0.46"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.12;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.30000001;
		position[]=
		{
			"positionX",
			"positionY+0.05",
			"positionZ"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=8;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDustMan: LeftDustMan
	{
	};
	class LeftDustManMed: LeftDustMan
	{
		interval="0.014 * (density interpolate [0.15,0.5,1.6,1])";
		lifeTime="1 * (dustness interpolate [0,1,0.8,1.5])";
		moveVelocity[]={0,0.18000001,0};
		size[]={0.079999998,0.40000001,0.69999999,1.25};
		lifeTimeVar=0.2;
		sizeVar=0.1;
	};
	class RightDustManMed: RightDustMan
	{
		interval="0.014 * (density interpolate [0.15,0.5,1.6,1])";
		lifeTime="1 * (dustness interpolate [0,1,0.8,1.5])";
		moveVelocity[]={0,0.18000001,0};
		size[]={0.079999998,0.40000001,0.69999999,1.25};
		lifeTimeVar=0.2;
		sizeVar=0.1;
	};
	class DustWaterMan: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,0.1,0};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.050000001;
		size[]={0.1,1.2,3,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.2,0.2,0.2,0.69999999},
			{0.2,0.2,0.2,0.60000002},
			{0.2,0.2,0.2,0.40000001},
			{0.2,0.2,0.2,0.22},
			{0.2,0.2,0.2,0.12},
			{0.2,0.2,0.2,0.07},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0}
		};
		colorCoef[]=
		{
			"1 + 0.02 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.08 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.34 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"0.6 * (((density*1.5) interpolate [0,1,0,1]) * (1.1-humidity))"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY+0.02",
			"positionZ"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.25,0.1,0.25};
		rotationVelocityVar=10;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightSand: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WheelEffect";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=0.50999999;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.69999999;
		moveVelocity[]=
		{
			"-(speedX/5)",
			"(((2*acceleration)+(speedSize*1.4))/10)*(turn interpolate [-1,1,1.4,0])",
			"-(speedZ/5)"
		};
		rotationVelocity=0;
		weight=100;
		volume=1;
		rubbing=6;
		size[]={0.40000001,1.1,1.6};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.34999999,0.34999999,0.60000002},
			{0.60000002,0.60000002,0.5,0.02}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [2,6,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.050000001,0.1};
		MoveVelocityVar[]={0.25,1,0.25};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftSand: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WheelEffect";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=0.50999999;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.69999999;
		moveVelocity[]=
		{
			"-(speedX/5)",
			"(((2*acceleration)+(speedSize*1.4))/10)*(turn interpolate [-1,1,0,1.4])",
			"-(speedZ/5)"
		};
		rotationVelocity=0;
		weight=100;
		volume=1;
		rubbing=6;
		size[]={0.40000001,1.1,1.6};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.34999999,0.34999999,0.60000002},
			{0.60000002,0.60000002,0.5,0.02}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [2,6,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.050000001,0.1};
		MoveVelocityVar[]={0.25,1,0.25};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightSandMed: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WheelEffect";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=0.50999999;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.18000001;
		moveVelocity[]=
		{
			"-(speedX/5)",
			"(((2*acceleration)+(speedSize*1.4))/10)*(turn interpolate [-1,1,1.4,0])",
			"-(speedZ/5)"
		};
		rotationVelocity=0;
		weight=100;
		volume=1;
		rubbing=6;
		size[]={0.40000001,1.1,1.6};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.34999999,0.34999999,0.60000002},
			{0.5,0.5,0.44999999,0.15000001},
			{0.60000002,0.60000002,0.5,0.02}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [2,6,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.050000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.050000001,0.1};
		MoveVelocityVar[]={0.25,1,0.25};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftSandMed: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WheelEffect";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=0.50999999;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.18000001;
		moveVelocity[]=
		{
			"-(speedX/5)",
			"(((2*acceleration)+(speedSize*1.4))/10)*(turn interpolate [-1,1,0,1.4])",
			"-(speedZ/5)"
		};
		rotationVelocity=0;
		weight=100;
		volume=1;
		rubbing=6;
		size[]={0.40000001,1.1,1.6};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.34999999,0.34999999,0.60000002},
			{0.5,0.5,0.44999999,0.15000001},
			{0.60000002,0.60000002,0.5,0.02}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [2,6,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.050000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.050000001,0.1};
		MoveVelocityVar[]={0.25,1,0.25};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightSandBig: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WheelEffect";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=0.50999999;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.8;
		moveVelocity[]=
		{
			"-(speedX/5)",
			"(((3*acceleration)+(speedSize*6))/25)*(turn interpolate [-1,1,2,0])",
			"-(speedZ/5)"
		};
		rotationVelocity=0;
		weight=50;
		volume=1;
		rubbing=10;
		size[]={0.44999999,1,1.8};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.34999999,0.34999999,0.69999999},
			{0.60000002,0.60000002,0.5,0.30000001}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [3,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.30000001,0.050000001,0.30000001};
		MoveVelocityVar[]={0.25,1.3,0.25};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftSandBig: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\WheelEffect";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=0.50999999;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.8;
		moveVelocity[]=
		{
			"-(speedX/5)",
			"(((3*acceleration)+(speedSize*6))/25)*(turn interpolate [-1,1,0,2])",
			"-(speedZ/5)"
		};
		rotationVelocity=0;
		weight=50;
		volume=1;
		rubbing=10;
		size[]={0.44999999,1,1.8};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.34999999,0.34999999,0.69999999},
			{0.60000002,0.60000002,0.5,0.30000001}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [3,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.30000001,0.050000001,0.30000001};
		MoveVelocityVar[]={0.25,1.3,0.25};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftDirt: Default
	{
		interval="(2/((speedSize+acceleration)+0.01)) * (2.5 - ((dustness*1.5) interpolate [0,1,0,1]))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Mud";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			0,
			"2 + (((6*acceleration)+(speedSize*1))/70)*(turn interpolate [-1,1,0,10])",
			0
		};
		rotationVelocity=1;
		weight=35;
		volume=1;
		rubbing=0;
		size[]={0.035};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.05 * speedSize",
			"(0.1 * speedSize) + (0.3 * acceleration)",
			"0.05 * speedSize"
		};
		rotationVelocityVar=35;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDirt: Default
	{
		interval="(2/((speedSize+acceleration)+0.01)) * (2.5 - ((dustness*1.5) interpolate [0,1,0,1]))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Mud";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			1,
			"2 + (((6*acceleration)+(speedSize*1))/70)*(turn interpolate [-1,1,10,0])",
			0
		};
		rotationVelocity=1;
		weight=35;
		volume=1;
		rubbing=0;
		size[]={0.035};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.05 * speedSize",
			"(0.1 * speedSize) + (0.3 * acceleration)",
			"0.05 * speedSize"
		};
		rotationVelocityVar=35;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftDirtBig: Default
	{
		interval="(0.3/((speedSize+(2*acceleration))+0.01)) * (2.5 - ((dustness*1.5) interpolate [0,1,0,1]))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Mud";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			0,
			"2 + (((2*acceleration)+(speedSize*1))/100)*(turn interpolate [-1,1,0,10])",
			0
		};
		rotationVelocity=1;
		weight=35;
		volume=1;
		rubbing=0;
		size[]={0.035};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.05 * speedSize",
			"(0.2 * speedSize) + (0.15 * acceleration)",
			"0.05 * speedSize"
		};
		rotationVelocityVar=35;
		sizeVar=0.34999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightDirtBig: Default
	{
		interval="(0.3/(((speedSize factor [0,50])+(2*acceleration))+0.01)) * (2.5 - ((dustness*1.5) interpolate [0,1,0,1]))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Mud";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]=
		{
			1,
			"2 + (((2*acceleration)+(speedSize*1))/100)*(turn interpolate [-1,1,10,0])",
			0
		};
		rotationVelocity=1;
		weight=35;
		volume=1;
		rubbing=0;
		size[]={0.035};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.05 * speedSize",
			"(0.2 * speedSize) + (0.15 * acceleration)",
			"0.05 * speedSize"
		};
		rotationVelocityVar=35;
		sizeVar=0.34999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftGrass: Default
	{
		interval="18/((5*acceleration) + (speedSize factor [0,50]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Grass_volume";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			"-(speedX*0.15)",
			"2 + (((5*acceleration)+(speedSize*6))/32)*(turn interpolate [-1,1,0,2])",
			"-(speedZ*0.15)"
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1.6;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=1.5;
	};
	class RightGrass: Default
	{
		interval="18/((5*acceleration) + (speedSize factor [0,50]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Grass_volume";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			"-(speedX*0.15)",
			"2 + (((7*acceleration)+(speedSize*6))/32)*(turn interpolate [-1,1,2,0])",
			"-(speedZ*0.15)"
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1.6;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=1.5;
	};
	class LeftGrassMed: Default
	{
		interval="36/((5*acceleration) + (speedSize factor [0,50]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Grass_volume";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"-(speedX*0.15)",
			"2 + (((5*acceleration)+(speedSize*6))/32)*(turn interpolate [-1,1,0,2])",
			"-(speedZ*0.15)"
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1.6;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=1.5;
	};
	class RightGrassMed: Default
	{
		interval="36/((5*acceleration) + (speedSize factor [0,50]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Grass_volume";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"-(speedX*0.15)",
			"2 + (((7*acceleration)+(speedSize*6))/32)*(turn interpolate [-1,1,2,0])",
			"-(speedZ*0.15)"
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1.6;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=1.5;
	};
	class LeftGrassBig: Default
	{
		interval="3/(((3*acceleration) + (speedSize factor [0,50])) * (turn interpolate [0,1,1,1.6]) * (turn interpolate [-1,0,1.6,1]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Grass_volume";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			0,
			"2 + (((2.5*acceleration)+(speedSize*3))/32)*(turn interpolate [-1,1,0,2])",
			0
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.30000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0.5;
	};
	class RightGrassBig: LeftGrassBig
	{
		moveVelocity[]=
		{
			0,
			"2 + (((2.5*acceleration)+(speedSize*3))/32)*(turn interpolate [-1,1,2,0])",
			0
		};
	};
	class LeftGrassDry: Default
	{
		interval="18/((5*acceleration) + (speedSize factor [0,50]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GrassMesh";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			"-(speedX*0.15)",
			"2 + (((5*acceleration)+(speedSize*6))/32)*(turn interpolate [-1,1,0,2])",
			"-(speedZ*0.15)"
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1.6;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=1.5;
	};
	class RightGrassDry: Default
	{
		interval="18/((5*acceleration) + (speedSize factor [0,50]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GrassMesh";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			"-(speedX*0.15)",
			"2 + (((7*acceleration)+(speedSize*6))/32)*(turn interpolate [-1,1,2,0])",
			"-(speedZ*0.15)"
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1.6;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=1.5;
	};
	class LeftGrassDryMed: Default
	{
		interval="36/((5*acceleration) + (speedSize factor [0,50]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GrassMesh";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"-(speedX*0.15)",
			"2 + (((5*acceleration)+(speedSize*6))/32)*(turn interpolate [-1,1,0,2])",
			"-(speedZ*0.15)"
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1.6;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=1.5;
	};
	class RightGrassDryMed: Default
	{
		interval="36/((5*acceleration) + (speedSize factor [0,50]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GrassMesh";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"-(speedX*0.15)",
			"2 + (((7*acceleration)+(speedSize*6))/32)*(turn interpolate [-1,1,2,0])",
			"-(speedZ*0.15)"
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.40000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1.6;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=1.5;
	};
	class LeftGrassDryBig: Default
	{
		interval="3/(((3*acceleration) + (speedSize factor [0,50])) * (turn interpolate [0,1,1,1.6]) * (turn interpolate [-1,0,1.6,1]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\GrassMesh";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			0,
			"1 + (((2.5*acceleration)+(speedSize*3))/32)*(turn interpolate [-1,1,0,2])",
			0
		};
		rotationVelocity=1;
		weight=2.8;
		volume=1;
		rubbing=0.69999999;
		size[]={0.30000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.25 * speedSize",
			"0.15 * speedSize",
			"0.25 * speedSize"
		};
		rotationVelocityVar=6;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0.5;
	};
	class RightGrassDryBig: LeftGrassDryBig
	{
		moveVelocity[]=
		{
			0,
			"1 + (((2.5*acceleration)+(speedSize*3))/32)*(turn interpolate [-1,1,2,0])",
			0
		};
	};
	class LeftStones: Default
	{
		interval=8;
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\StoneSmall";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			"-(speedX*0.3)",
			"2 + (((7*acceleration)+(speedSize*6))/30)*(turn interpolate [-1,1,0,2])",
			"-(speedZ*0.3)"
		};
		rotationVelocity=1;
		weight=50;
		volume=1;
		rubbing=0;
		size[]={0.07};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.02;
		bounceOnSurfaceVar=0.25;
		lifeTimeVar=10;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.02 * speedSize",
			"0.22 * speedSize",
			"0.02 * speedSize"
		};
		rotationVelocityVar=20;
		sizeVar=0.059999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightStones: Default
	{
		interval=10;
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\StoneSmall";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			"-(speedX*0.3)",
			"2 + (((5*acceleration)+(speedSize*6))/22)*(turn interpolate [-1,1,2,0])",
			"-(speedZ*0.3)"
		};
		rotationVelocity=1;
		weight=50;
		volume=1;
		rubbing=0;
		size[]={0.07};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.02;
		bounceOnSurfaceVar=0.25;
		lifeTimeVar=10;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.02 * speedSize",
			"0.22 * speedSize",
			"0.02 * speedSize"
		};
		rotationVelocityVar=20;
		sizeVar=0.059999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftStonesBig: Default
	{
		interval="15/(((3*acceleration) + (speedSize factor [0,50])) * (turn interpolate [0,1,1,1.6]) * (turn interpolate [-1,0,1.6,1]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\StoneSmall";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			"-(speedX*0.3)",
			"2 + (((7*acceleration)+(speedSize*6))/50)*(turn interpolate [-1,1,0,2])",
			"-(speedZ*0.3)"
		};
		rotationVelocity=1;
		weight=50;
		volume=1;
		rubbing=0;
		size[]={0.050000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.02;
		bounceOnSurfaceVar=0.25;
		lifeTimeVar=10;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.02 * speedSize",
			"0.3 * speedSize",
			"0.02 * speedSize"
		};
		rotationVelocityVar=40;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightStonesBig: Default
	{
		interval="15/(((3*acceleration) + speedSize) * (turn interpolate [0,1,1,1.6]) * (turn interpolate [-1,0,1.6,1]) + 0.1)";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\StoneSmall";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angleVar=120;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			"-(speedX*0.3)",
			"2 + (((5*acceleration)+(speedSize*6))/50)*(turn interpolate [-1,1,2,0])",
			"-(speedZ*0.3)"
		};
		rotationVelocity=1;
		weight=50;
		volume=1;
		rubbing=0;
		size[]={0.050000001};
		sizeCoef=1;
		color[]=
		{
			{0,0,0,1}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"speedSize interpolate [8,10,0,1]"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=1;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.02;
		bounceOnSurfaceVar=0.25;
		lifeTimeVar=10;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.02 * speedSize",
			"0.3 * speedSize",
			"0.02 * speedSize"
		};
		rotationVelocityVar=40;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class PersonDust1: Default
	{
		interval="0.20 - 0.17 * ((density*1.5) interpolate [0,1,0,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5999999;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.5;
		size[]={0.80000001,3,5,15};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0},
			{0.5,0.5,0.5,0.25},
			{0.5,0.5,0.5,0.25},
			{0.5,0.5,0.5,0.2},
			{0.5,0.5,0.5,0.1},
			{0.5,0.5,0.5,0.050000001},
			{0.5,0.5,0.5,0.050000001},
			{0.5,0.5,0.5,0}
		};
		colorCoef[]=
		{
			"1 + 0.02 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.08 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 - 0.34 * ((dustColor*2.5) interpolate [0,1,0,1])",
			"1 * ((density*1.5) interpolate [0,1,0,1])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.5;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RightWater1: Default
	{
		interval=0.0070000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,0.3,1.7])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,0.3,1.7])"
		};
		rotationVelocity=1;
		weight=2;
		volume=1;
		rubbing=0.1;
		size[]={2,4};
		sizeCoef="size";
		color[]=
		{
			{1,1,1,0.18000001},
			{1,1,1,0.14},
			{1,1,1,0.1}
		};
		colorCoef[]={1,1,1,0.60000002};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		destroyAfterCrossing=1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={2,1,2};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftWater1: RightWater1
	{
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,1.3,0.7])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,1.3,0.7])"
		};
	};
	class RightWater1M: RightWater1
	{
		interval=0.012;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,0.5,1.5])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,0.5,1.5])"
		};
		size[]={2.5,7};
		sizeVar=0.5;
	};
	class LeftWater1M: LeftWater1
	{
		interval=0.012;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,1.3,0.7])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,1.3,0.7])"
		};
		size[]={2.5,7};
		sizeVar=0.5;
	};
	class RightWater1L: RightWater1
	{
		interval=0.02;
		lifeTime=1.2;
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,0.5,1.5])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,0.5,1.5])"
		};
		size[]={2,6};
		sizeVar=0.5;
	};
	class LeftWater1L: LeftWater1
	{
		interval=0.02;
		lifeTime=1.2;
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,1.3,0.7])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,1.3,0.7])"
		};
		size[]={2,6};
		sizeVar=0.5;
	};
	class RightWater2: Default
	{
		interval=0.0135;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=11;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,0.5,1.5])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,0.5,1.5])"
		};
		rotationVelocity=1;
		weight=2;
		volume=1;
		rubbing=0.1;
		size[]={2,4};
		sizeCoef="size";
		color[]=
		{
			{1,1,1,0.16},
			{1,1,1,0.12},
			{1,1,1,0.079999998}
		};
		colorCoef[]={1,1,1,0.60000002};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.30000001;
		destroyAfterCrossing=1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={2,1,2};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftWater2: RightWater2
	{
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,1.3,0.7])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,1.3,0.7])"
		};
	};
	class RightWaterSmall1: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			0,
			"speedY + 1",
			0
		};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0;
		size[]={1,3,3.125,3.25,3.375,3.5,3.625,3.75,3.875,4};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.28},
			{1,1,1,0.30000001},
			{1,1,1,0.34999999},
			{1,1,1,0.22},
			{1,1,1,0.13},
			{1,1,1,0.02}
		};
		colorCoef[]={1,1,1,0.14};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0,0.2};
		MoveVelocityVar[]=
		{
			"(0.5 * (speedSize/1.2)) - 0.35",
			0,
			"(0.5 * (speedSize/1.2)) - 0.35"
		};
		rotationVelocityVar=5;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftWaterSmall1: RightWaterSmall1
	{
		moveVelocity[]=
		{
			0,
			"speedY + 1",
			0
		};
		MoveVelocityVar[]=
		{
			"(0.5 * (speedSize/1.2)) - 0.35",
			0,
			"(0.5 * (speedSize/1.2)) - 0.35"
		};
	};
	class RightEng1: Default
	{
		interval=0.02;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=11;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]=
		{
			"speedX",
			"speedY + 0.15",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.4;
		volume=1;
		rubbing=0;
		size[]={1,2};
		sizeCoef="size+0.5";
		color[]=
		{
			{1,1,1,0.44999999},
			{1,1,1,0.34999999},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0.039999999},
			{1,1,1,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"thrust/1.6"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1.5;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0,0.2};
		MoveVelocityVar[]={0.5,0,0.5};
		rotationVelocityVar=5;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LeftEng1: RightEng1
	{
		moveVelocity[]=
		{
			"speedX",
			"speedY + 0.15",
			"speedZ"
		};
		MoveVelocityVar[]={0.5,0,0.5};
	};
	class RWaterTrack1: Default
	{
		interval="0.006 + (0.08/(speedSize+0.1))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=11;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0;
		size[]={4,10};
		sizeCoef="size+0.5";
		color[]=
		{
			{1,1,1,0.40000001},
			{1,1,1,0.44999999},
			{1,1,1,0.31999999},
			{1,1,1,0.22},
			{1,1,1,0.1},
			{1,1,1,0.029999999}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.05 + (speedSize/120)"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={2.3,0,2.3};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		rotationVelocityVar=5;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LWaterTrack1: RWaterTrack1
	{
		moveVelocity[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
	};
	class RWaterTrack1M: RWaterTrack1
	{
		interval="0.006 + (0.08/(speedSize+0.1))";
		lifeTime=2.5999999;
		size[]={4,10};
		sizeCoef="size+0.5";
		lifeTimeVar=1;
		positionVar[]={2.3,0,2.3};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		sizeVar=0.5;
	};
	class LWaterTrack1M: LWaterTrack1
	{
		interval="0.006 + (0.08/(speedSize+0.1))";
		lifeTime=2.5999999;
		size[]={4,10};
		sizeCoef="size+0.5";
		lifeTimeVar=1;
		positionVar[]={2.3,0,2.3};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		sizeVar=0.5;
	};
	class RWaterTrack1L: RWaterTrack1
	{
		interval="0.006 + (0.08/(speedSize+0.1))";
		lifeTime=1.6;
		size[]={4,10};
		sizeCoef="size+0.5";
		lifeTimeVar=1;
		positionVar[]={2.3,0,2.3};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		sizeVar=0.5;
	};
	class LWaterTrack1L: LWaterTrack1
	{
		interval="0.006 + (0.08/(speedSize+0.1))";
		lifeTime=1.6;
		size[]={4,10};
		sizeCoef="size+0.5";
		lifeTimeVar=1;
		positionVar[]={2.3,0,2.3};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		sizeVar=0.5;
	};
	class RWaterTrackSmall1: Default
	{
		interval="0.009 + (0.12/(speedSize+0.1))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=11;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0;
		size[]={4,10};
		sizeCoef="size+0.5";
		color[]=
		{
			{1,1,1,0.40000001},
			{1,1,1,0.44999999},
			{1,1,1,0.31999999},
			{1,1,1,0.22},
			{1,1,1,0.1},
			{1,1,1,0.029999999}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.05 + (speedSize/120)"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.60000002,0,0.60000002};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		rotationVelocityVar=5;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LWaterTrackSmall1: RWaterTrackSmall1
	{
		moveVelocity[]={0,0,0};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
	};
	class RWaterTrackSmall1M: RWaterTrackSmall1
	{
		interval="0.009 + (0.12/(speedSize+0.1))";
		lifeTime=2.5999999;
		moveVelocity[]={0,0,0};
		size[]={4,10};
		sizeCoef="size+0.5";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.60000002,0,0.60000002};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		sizeVar=0.5;
	};
	class LWaterTrackSmall1M: LWaterTrackSmall1
	{
		interval="0.009 + (0.12/(speedSize+0.1))";
		lifeTime=2.5999999;
		moveVelocity[]={0,0,0};
		size[]={4,10};
		sizeCoef="size+0.5";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.60000002,0,0.60000002};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		sizeVar=0.5;
	};
	class RWaterTrackSmall1L: RWaterTrackSmall1
	{
		interval="0.009 + (0.12/(speedSize+0.1))";
		lifeTime=1.6;
		moveVelocity[]={0,0,0};
		size[]={4,10};
		sizeCoef="size+0.5";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.60000002,0,0.60000002};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		sizeVar=0.5;
	};
	class LWaterTrackSmall1L: LWaterTrackSmall1
	{
		interval="0.009 + (0.12/(speedSize+0.1))";
		lifeTime=1.6;
		moveVelocity[]={0,0,0};
		size[]={4,10};
		sizeCoef="size+0.5";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.60000002,0,0.60000002};
		MoveVelocityVar[]=
		{
			"0.22 * speedSize",
			0,
			"0.22 * speedSize"
		};
		sizeVar=0.5;
	};
	class HDust1: Default
	{
		interval="0.02 - 0.015 * ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=1.7;
		circleVelocity[]=
		{
			"speed*0.8",
			0,
			"speed*0.8"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.89999998;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={3,6};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,0.12},
			{1,1,0.80000001,0.1},
			{1,1,0.80000001,0.050000001},
			{1,1,0.80000001,0.0099999998},
			{1,1,0.80000001,0.0049999999},
			{1,1,0.80000001,0.001},
			{1,1,0.80000001,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.5*((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.40000001;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HDust1M: Default
	{
		interval="0.02 - 0.01 * ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=1.7;
		circleVelocity[]=
		{
			"speed*0.8",
			0,
			"speed*0.8"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.60000002;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={5,7};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,0.12},
			{1,1,0.80000001,0.1},
			{1,1,0.80000001,0.050000001},
			{1,1,0.80000001,0.0099999998},
			{1,1,0.80000001,0.0049999999},
			{1,1,0.80000001,0.001},
			{1,1,0.80000001,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.25*((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.40000001;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HDust1L: Default
	{
		interval="0.035 - 0.01 * ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=1.7;
		circleVelocity[]=
		{
			"speed*0.8",
			0,
			"speed*0.8"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.60000002;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={5,7};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,0.1},
			{1,1,0.80000001,0.079999998},
			{1,1,0.80000001,0.039999999},
			{1,1,0.80000001,0.0099999998},
			{1,1,0.80000001,0.0049999999},
			{1,1,0.80000001,0.001},
			{1,1,0.80000001,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.25*((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.40000001;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HDust1Long: Default
	{
		interval="0.25 - 0.17 * ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=4.6999998;
		circleVelocity[]=
		{
			"speed*0.2",
			0,
			"speed*0.2"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=20;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.0099999998;
		size[]={5,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,4},
			{1,1,0.80000001,4.5999999},
			{1,1,0.80000001,3.5},
			{1,1,0.80000001,2.5999999},
			{1,1,0.80000001,1.8},
			{1,1,0.80000001,1.1},
			{1,1,0.80000001,0.12}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.02*((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=10;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={1.5,0.050000001,1.5};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HDust1LongM: Default
	{
		interval="0.25 - 0.13 * ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=4.6999998;
		circleVelocity[]=
		{
			"speed*0.2",
			0,
			"speed*0.2"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.0099999998;
		size[]={5,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,4},
			{1,1,0.80000001,4.5999999},
			{1,1,0.80000001,3.5},
			{1,1,0.80000001,2.5999999},
			{1,1,0.80000001,1.8},
			{1,1,0.80000001,1.1},
			{1,1,0.80000001,0.12}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.014*((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=1;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={1.5,0.050000001,1.5};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HDust1LongBig: Default
	{
		interval="0.25 - 0.235 * ((density*1.7) interpolate [0.3,0.6,0.3,0.6])";
		circleRadius=4.6999998;
		circleVelocity[]=
		{
			"speed*0.2",
			0,
			"speed*0.2"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=20;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.0099999998;
		size[]={10,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,4},
			{1,1,0.80000001,4.5999999},
			{1,1,0.80000001,3.5},
			{1,1,0.80000001,2.5999999},
			{1,1,0.80000001,1.8},
			{1,1,0.80000001,1.1},
			{1,1,0.80000001,0.12}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.02*((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=10;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={1.5,0.050000001,1.5};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HDust1LongBigM: Default
	{
		interval="0.25 - 0.185 * ((density*1.7) interpolate [0.3,0.6,0.3,0.6])";
		circleRadius=4.6999998;
		circleVelocity[]=
		{
			"speed*0.2",
			0,
			"speed*0.2"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.0099999998;
		size[]={10,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,4},
			{1,1,0.80000001,4.5999999},
			{1,1,0.80000001,3.5},
			{1,1,0.80000001,2.5999999},
			{1,1,0.80000001,1.8},
			{1,1,0.80000001,1.1},
			{1,1,0.80000001,0.12}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.014*((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=1;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={1.5,0.050000001,1.5};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HWater1: Default
	{
		interval="0.01 - 0.0095 * ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=6;
		circleVelocity[]=
		{
			"speed*0.8",
			0,
			"speed*0.8"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.5;
		moveVelocity[]={0,3,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0;
		size[]={3,7};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.15000001},
			{0.69999999,0.80000001,1,0.12},
			{0.69999999,0.80000001,1,0.1},
			{0.69999999,0.80000001,1,0.059999999},
			{0.85000002,0.89999998,1,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"2 * ((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-4;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,2,0.1};
		rotationVelocityVar=10;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HWater1M: Default
	{
		interval="0.01 - 0.0096 * ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=6;
		circleVelocity[]=
		{
			"speed*0.8",
			0,
			"speed*0.8"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,3,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0;
		size[]={3,7};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.15000001},
			{0.69999999,0.80000001,1,0.12},
			{0.69999999,0.80000001,1,0.1},
			{0.69999999,0.80000001,1,0.059999999},
			{0.85000002,0.89999998,1,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"1 * ((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-4;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,2,0.1};
		rotationVelocityVar=10;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HWater2: Default
	{
		interval="0.02 - 0.019 * ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=8;
		circleVelocity[]=
		{
			"speed*0.8",
			0,
			"speed*0.8"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0;
		size[]={3,7};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.15000001},
			{0.69999999,0.80000001,1,0.12},
			{0.69999999,0.80000001,1,0.1},
			{0.69999999,0.80000001,1,0.059999999},
			{0.85000002,0.89999998,1,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"1.4 * ((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-4;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=1;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HWater3: Default
	{
		interval=0.00079999998;
		circleRadius=7;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.2;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0;
		size[]={1.2,2.5};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0.15000001}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"12 * ((density*1.7) interpolate [0,0.6,0,0.6]) * ((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={6,0,6};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class HWater3M: Default
	{
		interval=0.0040000002;
		circleRadius=7;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.2;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0;
		size[]={1.2,2.5};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0.15000001}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"8 * ((density*1.7) interpolate [0,0.6,0,0.6]) * ((density*1.7) interpolate [0,0.6,0,0.6])"
		};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX - (speedX/5)",
			"positionY",
			"positionZ - (speedZ/5)"
		};
		positionVar[]={6,0,6};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVDust1: Default
	{
		interval="(0.02 - 0.013 * ((density - 0.4) interpolate [0,1,0,1]))";
		circleRadius=0.2;
		circleVelocity[]=
		{
			"speed*0.4",
			0,
			"speed*0.4"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.89999998;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={1.6,3.2};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,0.12},
			{1,1,0.80000001,0.1},
			{1,1,0.80000001,0.050000001},
			{1,1,0.80000001,0.0099999998},
			{1,1,0.80000001,0.0049999999},
			{1,1,0.80000001,0.001},
			{1,1,0.80000001,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.5*((density - 0.4) interpolate [0,1,0,1])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.40000001;
		position[]=
		{
			"positionX - (speedX/5)",
			0,
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVDust1M: Default
	{
		interval="(0.02 - 0.009 * ((density - 0.4) interpolate [0,1,0,1]))";
		circleRadius=0.2;
		circleVelocity[]=
		{
			"speed*0.4",
			0,
			"speed*0.4"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.60000002;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={2,4};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,0.12},
			{1,1,0.80000001,0.1},
			{1,1,0.80000001,0.050000001},
			{1,1,0.80000001,0.0099999998},
			{1,1,0.80000001,0.0049999999},
			{1,1,0.80000001,0.001},
			{1,1,0.80000001,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.25*((density - 0.4) interpolate [0,1,0,1])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.40000001;
		position[]=
		{
			"positionX - (speedX/5)",
			0,
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVDust1L: Default
	{
		interval="(0.032 - 0.009 * ((density - 0.4) interpolate [0,1,0,1]))";
		circleRadius=0.2;
		circleVelocity[]=
		{
			"speed*0.4",
			0,
			"speed*0.4"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.60000002;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={2,4};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,0.1},
			{1,1,0.80000001,0.079999998},
			{1,1,0.80000001,0.039999999},
			{1,1,0.80000001,0.0099999998},
			{1,1,0.80000001,0.0049999999},
			{1,1,0.80000001,0.001},
			{1,1,0.80000001,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.25*((density - 0.4) interpolate [0,1,0,1])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.40000001;
		position[]=
		{
			"positionX - (speedX/5)",
			0,
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=30;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVDust1Long: Default
	{
		interval="(0.25 - 0.15 * ((density - 0.4) interpolate [0,1,0,1]))";
		circleRadius=1;
		circleVelocity[]=
		{
			"speed*0.1",
			0,
			"speed*0.1"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.050000001;
		size[]={1.2,2.5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,4},
			{1,1,0.80000001,4.5999999},
			{1,1,0.80000001,3.5},
			{1,1,0.80000001,2.5999999},
			{1,1,0.80000001,1.8},
			{1,1,0.80000001,1.1},
			{1,1,0.80000001,0.12}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.02*((density - 0.4) interpolate [0,1,0,1])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=1.5;
		position[]=
		{
			"positionX - (speedX/5)",
			0,
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.15000001,0.050000001,0.15000001};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVDust1LongM: Default
	{
		interval="(0.25 - 0.11 * ((density - 0.4) interpolate [0,1,0,1]))";
		circleRadius=1;
		circleVelocity[]=
		{
			"speed*0.1",
			0,
			"speed*0.1"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.050000001;
		size[]={1.2,2.5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
		sizeCoef=1;
		color[]=
		{
			{1,1,0.80000001,4},
			{1,1,0.80000001,4.5999999},
			{1,1,0.80000001,3.5},
			{1,1,0.80000001,2.5999999},
			{1,1,0.80000001,1.8},
			{1,1,0.80000001,1.1},
			{1,1,0.80000001,0.12}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.014*((density - 0.4) interpolate [0,1,0,1])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=1;
		position[]=
		{
			"positionX - (speedX/5)",
			0,
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.15000001,0.050000001,0.15000001};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVWater1: Default
	{
		interval="(0.05 - 0.048 * (density interpolate [0.05,0.1,0,1]))";
		circleRadius=0.2;
		circleVelocity[]=
		{
			"speed*0.3",
			0,
			"speed*0.3"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.69999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0;
		size[]={0.80000001,1.8};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.15000001},
			{0.69999999,0.80000001,1,0.12},
			{0.69999999,0.80000001,1,0.1},
			{0.69999999,0.80000001,1,0.059999999},
			{0.85000002,0.89999998,1,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.06 * (density interpolate [0.05,0.1,0,1])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX - (speedX/5)",
			0,
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.050000001,0.1};
		rotationVelocityVar=10;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UAVWater1M: Default
	{
		interval="(0.05 - 0.046 * (density interpolate [0.05,0.1,0,1]))";
		circleRadius=0.2;
		circleVelocity[]=
		{
			"speed*0.3",
			0,
			"speed*0.3"
		};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.69999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0;
		size[]={1.2,2.4000001};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.15000001},
			{0.69999999,0.80000001,1,0.12},
			{0.69999999,0.80000001,1,0.1},
			{0.69999999,0.80000001,1,0.059999999},
			{0.85000002,0.89999998,1,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.06 * (density interpolate [0.05,0.1,0,1])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX - (speedX/5)",
			0,
			"positionZ - (speedZ/5)"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.050000001,0.1};
		rotationVelocityVar=10;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DSmoke1: Default
	{
		interval="0.005 + (0.001/(speed+0.001))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=3;
		volume=0.5;
		rubbing=0.2;
		size[]={0.80000001,4,10};
		sizeCoef=1;
		color[]=
		{
			{0.050000001,0.050000001,0.050000001,0.30000001},
			{0.1,0.1,0.1,0.050000001},
			{0.2,0.2,0.2,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"damage interpolate [0.345,0.8,0.01,1.5]"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.079999998,0.079999998,0.079999998};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DSmoke2: Default
	{
		interval="0.004 + (0.0008/(speed+0.001))";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=3;
		volume=0.5;
		rubbing=0.2;
		size[]={1,6,16};
		sizeCoef=1;
		color[]=
		{
			{0.050000001,0.050000001,0.050000001,0.30000001},
			{0.1,0.1,0.1,0.050000001},
			{0.2,0.2,0.2,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"damage interpolate [0.345,0.8,0.01,1.2]"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.079999998,0.079999998,0.079999998};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WingTrail: Default
	{
		interval="0.0003 * (speed interpolate [70,70.0001,-1,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=16;
		particleFSLoop=0;
		angleVar=360;
		ignoreWind=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.25;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.274;
		volume=1;
		rubbing=0.18000001;
		size[]={0.18000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.1},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"(accelY interpolate [38,85,0,1]) * ((altitude*altitude) interpolate [400,40000,1.2,0.5])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=0.0099999998;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WingTrailMed: Default
	{
		interval="0.0005 * (speed interpolate [70,70.0001,-1,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=16;
		particleFSLoop=0;
		angleVar=360;
		ignoreWind=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.12;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.274;
		volume=1;
		rubbing=0.18000001;
		size[]={0.18000001};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.1},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"(accelY interpolate [38,85,0,1]) * ((altitude*altitude) interpolate [400,40000,1.2,0.5])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=0.0099999998;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=10;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BodyTrail: Default
	{
		interval="0.0001 * (speed interpolate [70,70.0001,-1,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		ignoreWind=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.029999999;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.274;
		volume=1;
		rubbing=0.18000001;
		size[]={0.5};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.1},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"(accelY interpolate [88,250,0,1]) * ((altitude*altitude) interpolate [400,40000,2,0.5])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=0.0099999998;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=10;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BodyTrailMed: Default
	{
		interval="0.0001 * (speed interpolate [70,70.0001,-1,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		ignoreWind=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.015;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.274;
		volume=1;
		rubbing=0.18000001;
		size[]={0.5};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.1},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"(accelY interpolate [88,250,0,1]) * ((altitude*altitude) interpolate [400,40000,2,0.5])"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=0.0099999998;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=10;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ScudSmoke: Default
	{
		interval="0.005 + (1 min speed) * 1000";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=10.2;
		volume=7.9000001;
		rubbing=0.5;
		size[]={2,12,15,18,20};
		sizeCoef=1;
		color[]=
		{
			{0.89999998,0.80000001,0.69999999,0.34999999},
			{0.89999998,0.80000001,0.69999999,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={3,0,3};
		MoveVelocityVar[]={3,0,3};
		rotationVelocityVar=40;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ScudFire: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=48;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.15000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=10.5;
		volume=7.9000001;
		rubbing=0.2;
		size[]={1,0};
		sizeCoef="((density*1.5) interpolate [0,1,0,1])*2+0.4";
		color[]=
		{
			{1,1,1,-8},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.40000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.050000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=100;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ScudSmoke2: Default
	{
		interval="0.005 + (1-(1 min speed))*0.5";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=10.2;
		volume=7.9000001;
		rubbing=0.5;
		size[]={2,10};
		sizeCoef=1;
		color[]=
		{
			{0.64999998,0.64999998,0.64999998,0.5},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.5,0,0.5};
		MoveVelocityVar[]={0.5,0,0.5};
		rotationVelocityVar=35;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class collisionVeh1: Default
	{
		interval="0.2/(0.001 + forceSize/1000)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard2.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=0.2;
		lifeTime=10;
		moveVelocity[]=
		{
			"speedX",
			"speedY + 2",
			"speedZ"
		};
		rotationVelocity=0;
		weight=20;
		volume=1;
		rubbing=0;
		size[]={0.34999999};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.40000001;
		lifeTimeVar=8;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.5,0.2,0.5};
		MoveVelocityVar[]=
		{
			"forceSize/200",
			"forceSize/200",
			"forceSize/200"
		};
		rotationVelocityVar=10;
		sizeVar=0.34999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class collisionVeh2: collisionVeh1
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard3.p3d";
		moveVelocity[]=
		{
			"speedX",
			"speedY + 2",
			"speedZ"
		};
		weight=3;
		volume=1;
		size[]={0.34999999};
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.40000001;
		rotationVelocityVar=10;
		sizeVar=0.34999999;
	};
	class collisionVeh3: collisionVeh1
	{
		particleShape="\A3\data_f\ParticleEffects\Shard\shard4.p3d";
		lifeTime=10;
		moveVelocity[]=
		{
			"speedX",
			"speedY + 2",
			"speedZ"
		};
		weight=3;
		volume=1;
		size[]={0.34999999};
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.40000001;
		rotationVelocityVar=10;
		sizeVar=0.34999999;
	};
	class collisionVehSmoke: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=2;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.28;
		volume=1;
		rubbing=0;
		size[]={0.60000002,2,3.2};
		sizeCoef=1;
		color[]=
		{
			{0.2,0.2,0.2,0.16},
			{0.2,0.2,0.2,0.14},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.07},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0.016000001},
			{0.2,0.2,0.2,0.0089999996},
			{0.2,0.2,0.2,0.0049999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.40000001,0.40000001,0.40000001};
		MoveVelocityVar[]=
		{
			"forceSize/1500",
			"forceSize/1500",
			"forceSize/1500"
		};
		rotationVelocityVar=10;
		sizeVar=0.1;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BubblesMedium: Default
	{
		interval=0.5;
		circleRadius=0.02;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=30;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]=
		{
			"speedX/2",
			"speedY/3 + 0.35",
			"speedZ/2"
		};
		rotationVelocity=0;
		weight=1.1;
		volume=1;
		rubbing=13;
		size[]={0.017999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-3},
			{1,1,1,-2}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.0049999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		lifeTimeVar=16;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.003,0,0.003};
		rotationVelocityVar=0;
		sizeVar=0.0060000001;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BubblesSmall: Default
	{
		interval=0.050000001;
		circleRadius=0.015;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=30;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]=
		{
			"speedX/2",
			"speedY/3 + 0.35",
			"speedZ/2"
		};
		rotationVelocity=0;
		weight=1.1;
		volume=1;
		rubbing=15;
		size[]={0.011};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.015;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		lifeTimeVar=16;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.039999999,0,0.039999999};
		rotationVelocityVar=0;
		sizeVar=0.0040000002;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BubbleTrack1: Default
	{
		interval=0.00019999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.30000001;
		position[]={0,0,0};
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.272;
		volume=1;
		rubbing=15;
		size[]={0.015,0.039999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1.6},
			{1,1,1,1},
			{1,1,1,0.60000002},
			{1,1,1,0.30000001},
			{1,1,1,0.1},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		blockAIVisibility=0;
		lifeTimeVar=0.050000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.0099999998,0,0.0099999998};
		rotationVelocityVar=0;
		sizeVar=0.0020000001;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BubbleTrackMed1: Default
	{
		interval=0.00039999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.30000001;
		position[]={0,0,0};
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.272;
		volume=1;
		rubbing=15;
		size[]={0.015,0.039999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1.6},
			{1,1,1,1},
			{1,1,1,0.60000002},
			{1,1,1,0.30000001},
			{1,1,1,0.1},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		blockAIVisibility=0;
		lifeTimeVar=0.050000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.0099999998,0,0.0099999998};
		rotationVelocityVar=0;
		sizeVar=0.0020000001;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BubbleTrack2: Default
	{
		interval=0.00019999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.30000001;
		position[]={0,0,0};
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.272;
		volume=1;
		rubbing=15;
		size[]={0.02,0.07};
		sizeCoef=1;
		color[]=
		{
			{0.80000001,0.80000001,1,0.44999999},
			{0.80000001,0.80000001,1,0.28},
			{0.80000001,0.80000001,1,0.14},
			{0.80000001,0.80000001,1,0.059999999},
			{0.80000001,0.80000001,1,0.025},
			{0.80000001,0.80000001,1,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		blockAIVisibility=0;
		lifeTimeVar=0.050000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.0099999998,0,0.0099999998};
		rotationVelocityVar=0;
		sizeVar=0.0020000001;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BubblesShot1: Default
	{
		interval=0.00069999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.60000002;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.22;
		volume=1;
		rubbing=1;
		size[]={0.015,0.029999999,0.050000001,0.064999998,0.079999998};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-1.2},
			{1,1,1,-0.80000001},
			{1,1,1,-0.40000001},
			{1,1,1,-0.22},
			{1,1,1,-0.079999998},
			{1,1,1,-0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={0.2,0.1,0.050000001};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.015;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		lifeTimeVar=0.40000001;
		positionVar[]={0.015,0.015,0.015};
		MoveVelocityVar[]={0.079999998,0.16,0.079999998};
		rotationVelocityVar=4;
		sizeVar=0.0099999998;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BubblesShotBig1: Default
	{
		interval=0.015;
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=15;
		particleFSFrameCount=15;
		particleFSLoop=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.30000001;
		lifeTime=30;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.1;
		volume=1;
		rubbing=15;
		size[]={0.039999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		lifeTimeVar=20;
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		MoveVelocityVar[]={0.079999998,0.079999998,0.079999998};
		rotationVelocityVar=0;
		sizeVar=0.02;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0.079999998;
		randomDirectionIntensityVar=0;
	};
	class BubblesShotBigMed1: Default
	{
		interval=0.035;
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=15;
		particleFSFrameCount=15;
		particleFSLoop=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.30000001;
		lifeTime=30;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.1;
		volume=1;
		rubbing=15;
		size[]={0.039999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		lifeTimeVar=20;
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		MoveVelocityVar[]={0.079999998,0.079999998,0.079999998};
		rotationVelocityVar=0;
		sizeVar=0.02;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0.079999998;
		randomDirectionIntensityVar=0;
	};
	class PointBubbles1: Default
	{
		interval=0.81999999;
		circleRadius=0.0099999998;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=60;
		position[]={0,0,0};
		moveVelocity[]={0,0.5,0};
		rotationVelocity=0;
		weight=0.89999998;
		volume=1;
		rubbing=15;
		size[]={0.059999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-3},
			{1,1,1,-2}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.12;
		randomDirectionIntensity=0.059999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		blockAIVisibility=0;
		lifeTimeVar=30;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.02,0,0.02};
		rotationVelocityVar=0;
		sizeVar=0.02;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class PointBubbles2: Default
	{
		interval=0.11;
		circleRadius=0.0049999999;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=30;
		position[]={0,0,0};
		moveVelocity[]={0,0.5,0};
		rotationVelocity=0;
		weight=0.89999998;
		volume=1;
		rubbing=15;
		size[]={0.025};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-2},
			{1,1,1,-3},
			{1,1,1,-2}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		blockAIVisibility=0;
		lifeTimeVar=15;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.0099999998;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class PlanktonEffect: Default
	{
		interval=0.0015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=12;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		position[]={0,0,0};
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.0060000001};
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0.02},
			{0.40000001,0.40000001,0.40000001,0.60000002},
			{0.40000001,0.40000001,0.40000001,2},
			{0.40000001,0.40000001,0.40000001,2},
			{0.40000001,0.40000001,0.40000001,2},
			{0.40000001,0.40000001,0.40000001,2},
			{0.40000001,0.40000001,0.40000001,2},
			{0.40000001,0.40000001,0.40000001,2},
			{0.40000001,0.40000001,0.40000001,0.60000002},
			{0.40000001,0.40000001,0.40000001,0.02}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.69999999;
		randomDirectionIntensity=0.0060000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		blockAIVisibility=0;
		lifeTimeVar=1;
		positionVar[]={4.5,3.5,4.5};
		MoveVelocityVar[]={0.02,0.02,0.02};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.059999999,0.059999999,0.059999999,0};
		randomDirectionPeriodVar=0.30000001;
		randomDirectionIntensityVar=0.00089999998;
	};
	class WaterWhirl: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={-1,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=6;
		particleFSLoop=0;
		angleVar=1;
		angle=90;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			"speedX + 1",
			"speedY",
			"speedZ"
		};
		rotationVelocity=0;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={8};
		sizeCoef="size";
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,1},
			{0.69999999,0.69999999,0.69999999,1},
			{0.69999999,0.69999999,0.69999999,1},
			{0.69999999,0.69999999,0.69999999,1},
			{0.69999999,0.69999999,0.69999999,0.80000001},
			{0.69999999,0.69999999,0.69999999,0.60000002},
			{1,1,1,0.30000001}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WaterWave: Default
	{
		interval=0.003;
		circleRadius=1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.60000002,3.5};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0.11},
			{0.69999999,0.80000001,1,0.17},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.17},
			{0.69999999,0.80000001,1,0.12},
			{0.69999999,0.80000001,1,0.050000001},
			{0.69999999,0.80000001,1,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=0.2;
		position[]={0,0,0};
		positionVar[]=
		{
			"((density*2.5) interpolate [0,1,0,1])/35",
			0,
			"((density*2.5) interpolate [0,1,0,1])/35"
		};
		MoveVelocityVar[]=
		{
			"1.3 + (((density*2.5) interpolate [0,1,0,1])/45)",
			0,
			"1.3 + (((density*2.5) interpolate [0,1,0,1])/45)"
		};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WaterSplash: Default
	{
		interval="0.04/((3*speed)+(((density*2.5) interpolate [0,1,0,1])/2)+0.0001)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			0,
			"(1.2 + (((density*2.5) interpolate [0,1,0,1])/700)) * (3 + (speed/7))",
			0
		};
		rotationVelocity=0;
		weight=75;
		volume=1.6;
		rubbing=0.075000003;
		size[]={2,10};
		sizeCoef="1.0";
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.30000001},
			{0.80000001,0.80000001,0.80000001,0.30000001},
			{0.89999998,0.89999998,0.89999998,0.16},
			{1,1,1,0.050000001},
			{1,1,1,0.02},
			{1,1,1,0.0049999999}
		};
		colorCoef[]={1,1,1,0.60000002};
		animationSpeedCoef=1;
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-4;
		angleVar=1;
		angle=90;
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]=
		{
			"(((density*2.5) interpolate [0,1,0,1])+speed)/90",
			0,
			"(((density*2.5) interpolate [0,1,0,1])+speed)/90"
		};
		MoveVelocityVar[]=
		{
			"(speed+((density*2.5) interpolate [0,1,0,1]))/55",
			"(1.2 + (((density*2.5) interpolate [0,1,0,1])/700)) * (5 + (speed/16))*0.8",
			"(speed+((density*2.5) interpolate [0,1,0,1]))/55"
		};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WaterWaveMen: Default
	{
		interval="0.02/((speed interpolate [0,14,0,14]) + 0.001)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.2;
		size[]={1,3,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0.050000001},
			{0.69999999,0.80000001,1,0.2},
			{0.69999999,0.80000001,1,0.23999999},
			{0.69999999,0.80000001,1,0.20999999},
			{0.69999999,0.80000001,1,0.15000001},
			{0.69999999,0.80000001,1,0.11},
			{0.69999999,0.80000001,1,0.059999999},
			{0.69999999,0.80000001,1,0.029999999},
			{0.69999999,0.80000001,1,0.0099999998},
			{0.69999999,0.80000001,1,0.003}
		};
		colorCoef[]={1,1,1,0.60000002};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.079999998;
		lifeTimeVar=1.6;
		position[]={0,0,0};
		positionVar[]={0.2,0,0.2};
		MoveVelocityVar[]=
		{
			"(speed interpolate [0,14,0,14])/6",
			0,
			"(speed interpolate [0,14,0,14])/6"
		};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WaterSplashMen: Default
	{
		interval="0.003/((-(speedY interpolate [-16,0,-9,0])) - 1)";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]=
		{
			"(speed interpolate [0,14,0,14])/75",
			"(speed interpolate [0,14,0,14])/2.5",
			"(speed interpolate [0,14,0,14])/75"
		};
		rotationVelocity=0;
		weight=75;
		volume=1.6;
		rubbing=0.075000003;
		size[]={0.039999999,0.2,0.25};
		sizeCoef="speed interpolate [0,14,0,14]";
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.2},
			{0.80000001,0.80000001,0.80000001,0.18000001},
			{0.89999998,0.89999998,0.89999998,0.15000001},
			{1,1,1,0.11},
			{1,1,1,0.059999999},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={1,1,1,0.5};
		animationSpeedCoef=1;
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1.3;
		angleVar=1;
		angle=90;
		lifeTimeVar=0.60000002;
		position[]={0,0,0};
		positionVar[]=
		{
			"(speed interpolate [0,14,0,14])/100",
			0,
			"(speed interpolate [0,14,0,14])/100"
		};
		MoveVelocityVar[]=
		{
			"(speed interpolate [0,14,0,14])/18",
			"(speed interpolate [0,14,0,14])/2.75",
			"(speed interpolate [0,14,0,14])/18"
		};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WaterEffectMen: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.2;
		moveVelocity[]=
		{
			"(speed interpolate [0,14,0,14])/12",
			"-(speed interpolate [0,14,0,14])/3",
			"(speed interpolate [0,14,0,14])/12"
		};
		rotationVelocity=0;
		weight=1;
		volume=1;
		rubbing=0.5;
		size[]={0.025,0.1,0.1,0.1,0.1,0.1,0.1};
		sizeCoef="speed interpolate [0,14,0,14]";
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.16},
			{0.80000001,0.80000001,0.80000001,0.14},
			{0.89999998,0.89999998,0.89999998,0.12},
			{1,1,1,0.1},
			{1,1,1,0.059999999},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={1,1,1,0.5};
		animationSpeedCoef=1;
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		destroyOnWaterSurfaceOffset=0.2;
		angleVar=1;
		angle=90;
		lifeTimeVar=0.60000002;
		position[]={0,0,0};
		positionVar[]=
		{
			"(speed interpolate [0,14,0,14])/90",
			0,
			"(speed interpolate [0,14,0,14])/90"
		};
		MoveVelocityVar[]=
		{
			"(speed interpolate [0,14,0,14])/12",
			"(speed interpolate [0,14,0,14])/3",
			"(speed interpolate [0,14,0,14])/12"
		};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WaterWaveAir: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0;
		size[]={2,12,17,20,22};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.80000001,1,0.079999998},
			{0.69999999,0.80000001,1,0.079999998},
			{0.69999999,0.80000001,1,0.07},
			{0.69999999,0.80000001,1,0.050000001},
			{0.69999999,0.80000001,1,0.039999999},
			{0.69999999,0.80000001,1,0.028000001},
			{0.69999999,0.80000001,1,0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.2;
		lifeTimeVar=0.2;
		position[]={0,0,0};
		positionVar[]={3,0,3};
		MoveVelocityVar[]={2,0,2};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WaterSplashAir: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=10;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=7;
		moveVelocity[]={0,"12",0};
		rotationVelocity=0;
		weight=75;
		volume=1.6;
		rubbing=0.075000003;
		size[]={2,16};
		sizeCoef="1.0";
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.30000001},
			{0.80000001,0.80000001,0.80000001,0.30000001},
			{0.89999998,0.89999998,0.89999998,0.16},
			{1,1,1,0.050000001},
			{1,1,1,0.02},
			{1,1,1,0.0049999999}
		};
		colorCoef[]={1,1,1,0.60000002};
		animationSpeedCoef=1;
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-4;
		angleVar=1;
		angle=90;
		lifeTimeVar=1;
		position[]={0,0,0};
		positionVar[]=
		{
			"(((density*2.5) interpolate [0,1,0,1])+speed)/90",
			0,
			"(((density*2.5) interpolate [0,1,0,1])+speed)/90"
		};
		MoveVelocityVar[]=
		{
			"(speed+((density*2.5) interpolate [0,1,0,1]))/10",
			"8",
			"(speed+((density*2.5) interpolate [0,1,0,1]))/10"
		};
		rotationVelocityVar=0;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BulletBubbles1: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=6;
		position[]={0,0,0};
		moveVelocity[]={0,0.2,0};
		rotationVelocity=0;
		weight=1.2;
		volume=1;
		rubbing=13;
		size[]={0.02};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,-0.5},
			{1,1,1,-0.15000001},
			{1,1,1,-0.0099999998}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.059999999;
		randomDirectionIntensity=0.02;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		blockAIVisibility=0;
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.029999999,0,0.029999999};
		rotationVelocityVar=0;
		sizeVar=0.0049999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ImpactUnderwater1: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5999999;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=1;
		weight=1.3;
		volume=1;
		rubbing=0.5;
		size[]={0.80000001,3,5,15};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0},
			{0.5,0.5,0.5,0.25},
			{0.5,0.5,0.5,0.25},
			{0.5,0.5,0.5,0.2},
			{0.5,0.5,0.5,0.1},
			{0.5,0.5,0.5,0.050000001},
			{0.5,0.5,0.5,0.050000001},
			{0.5,0.5,0.5,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		lifeTimeVar=0.5;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0,0.1};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GrenadeBubbles1: Default
	{
		interval=0.0012000001;
		circleRadius=0.001;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		position[]={0,0,0};
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=1.21;
		volume=1;
		rubbing=12;
		size[]={0.017999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-4},
			{1,1,1,-3}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.029999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		onSurface=0;
		lifeTimeVar=8;
		positionVar[]={0.40000001,0.40000001,0.40000001};
		MoveVelocityVar[]={6,4,6};
		rotationVelocityVar=0;
		sizeVar=0.0040000002;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class WeaponFireGun
{
};
class WeaponFireMGun: WeaponFireGun
{
};
class WeaponCloudsGun
{
};
class WeaponCloudsMGun: WeaponCloudsGun
{
};
class CfgLights
{
	class CmeasuresLight
	{
		color[]={1,0.60000002,0.5};
		ambient[]={0.80000001,0.64999998,0.5};
		brightness=0.75;
		diffuse[]={1,1,1};
		position[]={0,0,0};
	};
	class ScudLight
	{
		color[]={1,0.5,0.2};
		ambient[]={0.80000001,0.60000002,0.2};
		brightness=0.1;
		diffuse[]={1,1,1};
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
	};
	class SmallFireLight
	{
		name="$STR_A3_CfgLights_SmallFireLight0";
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0,0,0,0};
		brightness=10;
		intensity="2500*(power interpolate[0.1, 1.0, 0.4, 1.0])";
		blinking=0;
		drawLight=0;
		class Attenuation
		{
			start=0;
			constant=3;
			linear=0;
			quadratic=32;
		};
		position[]={0,0.5,0};
	};
	class SmallFirePlaceLight
	{
		name="$STR_A3_CfgLights_SmallFireLight0";
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0,0,0,0};
		brightness=10;
		intensity="1200*(power interpolate[0.1, 1.0, 0.4, 1.0])";
		blinking=0;
		drawLight=0;
		class Attenuation
		{
			start=0;
			constant=3;
			linear=0;
			quadratic=22;
		};
		position[]={0,0.40000001,0};
	};
	class SmallFlameLight
	{
		name="$STR_A3_CfgLights_SmallFlameLight0";
		diffuse[]={1,0.5,0.2};
		color[]={1,0.5,0.2};
		ambient[]={0,0,0,0};
		brightness=10;
		intensity=3000;
		blinking=0;
		drawLight=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=5;
		};
		position[]={0,0,0};
	};
	class Chemlight_Green
	{
		color[]={0.2,1,0,1};
		ambient[]={0,0,0,0};
		brightness=1;
		intensity=4000;
		drawLight=0;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=5;
		};
		position[]={0,0,0};
		diffuse[]={0.02,0.1,0};
	};
	class Chemlight_Red: Chemlight_Green
	{
		color[]={1,0,0.025,1};
		diffuse[]={0.1,0,0.0024999999};
	};
	class ChemLight_Yellow: Chemlight_Green
	{
		color[]={1,0.60000002,0,1};
		diffuse[]={1,0.60000002,0};
	};
	class ChemLight_Blue: Chemlight_Green
	{
		color[]={0,0.60000002,1,1};
		diffuse[]={0,0.60000002,1};
	};
	class ObjectDestructionLight
	{
		name="$STR_A3_CfgLights_ObjectDestructionLight0";
		diffuse[]={1,0.40000001,0.15000001};
		color[]={1,0.40000001,0.15000001};
		ambient[]={0,0,0,0};
		brightness=35;
		size=0.5;
		intensity=25000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=400;
			hardLimitEnd=800;
		};
		position[]={0,0,0};
	};
	class ObjectDestructionLightSmall
	{
		name="$STR_A3_CfgLights_ObjectDestructionLight0";
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0,0,0,0};
		brightness=10;
		intensity=3500;
		blinking=0;
		drawLight=0;
		class Attenuation
		{
			start=1;
			constant=3;
			linear=0;
			quadratic=22;
		};
		position[]={0,1,0};
	};
	class ExploLight
	{
		name="$STR_A3_CfgLights_ExploLight0";
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLightMed
	{
		diffuse[]={1,0.28,0.050000001};
		color[]={1,0.28,0.050000001};
		ambient[]={0,0,0,0};
		brightness=1;
		size=1;
		intensity=1200;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=3;
			constant=0;
			linear=0;
			quadratic=5;
			hardLimitStart=800;
			hardLimitEnd=1600;
		};
		position[]={0,3.5,0};
	};
	class FiredLightMed
	{
		diffuse[]={1,0.68000001,0.44999999};
		color[]={1,0.68000001,0.44999999};
		ambient[]={0,0,0,0};
		brightness=1;
		size=1;
		intensity=80000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2;
			hardLimitStart=300;
			hardLimitEnd=600;
		};
		position[]={0,1.8,0};
	};
	class FiredLightLauncher
	{
		diffuse[]={1,0.68000001,0.44999999};
		color[]={1,0.68000001,0.44999999};
		ambient[]={0,0,0,0};
		brightness=1;
		size=1;
		intensity=1500;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2;
			hardLimitStart=300;
			hardLimitEnd=600;
		};
		position[]={0,0,0};
	};
	class FiredLightLauncherSmall
	{
		diffuse[]={1,0.68000001,0.44999999};
		color[]={1,0.68000001,0.44999999};
		ambient[]={0,0,0,0};
		brightness=1;
		size=1;
		intensity=550;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2;
			hardLimitStart=300;
			hardLimitEnd=600;
		};
		position[]={0,0,0};
	};
	class FiredLightCannon: FiredLightMed
	{
		diffuse[]={0.93699998,0.63099998,0.259};
		color[]={0.93699998,0.63099998,0.259};
		ambient[]={0,0,0,0};
		brightness=1;
		size=1;
		intensity=80000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2;
			hardLimitStart=300;
			hardLimitEnd=600;
		};
		position[]=
		{
			"positionX + (directionLocalX * 1.3)",
			"positionY + (directionLocalY * 1.3)",
			"positionZ + (directionLocalZ * 1.3)"
		};
	};
	class FiredLightSmall
	{
		diffuse[]={1,0.89999998,0.60000002};
		color[]={1,0.89999998,0.60000002};
		ambient[]={0,0,0,0};
		brightness=1;
		size=1;
		intensity=300;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0.1;
			constant=10;
			linear=0;
			quadratic=150;
			hardLimitStart=500;
			hardLimitEnd=1000;
		};
		position[]={0,1.5,0};
	};
	class GrenadeExploLight
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=10;
		size=1;
		intensity=10000;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2.2;
			hardLimitStart=500;
			hardLimitEnd=1000;
		};
		position[]={0,3.5,0};
	};
	class MineExploLight
	{
		diffuse[]={0.40000001,0.28,0.15000001};
		color[]={0.40000001,0.28,0.15000001};
		ambient[]={0,0,0,0};
		brightness=20;
		size=1;
		intensity=45000;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0.5;
			constant=0;
			linear=0;
			quadratic=0.30000001;
			hardLimitStart=1500;
			hardLimitEnd=3000;
		};
		position[]={0,0,0};
	};
	class RocketLight
	{
		diffuse[]={1,0.25,0.050000001};
		color[]={1,0.60000002,0.30000001};
		ambient[]={0,0,0};
		brightness="18 * fireIntensity";
		size=1;
		intensity=25000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=100;
			hardLimitEnd=200;
		};
	};
	class CruiseMissileLight
	{
		diffuse[]={1,0.25,0.050000001};
		color[]={1,0.60000002,0.30000001};
		ambient[]={0,0,0};
		brightness="18 * fireIntensity";
		size=1;
		intensity=25000;
		drawLight=1;
		blinking=0;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=2600;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=100;
			hardLimitEnd=200;
		};
	};
	class SparksLight
	{
		diffuse[]={1,0.80000001,0.80000001};
		color[]={1,0.80000001,0.80000001};
		ambient[]={0,0,0,0};
		brightness=0.1;
		size=1;
		intensity=30;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0.050000001;
			constant=0;
			linear=0;
			quadratic=40;
			hardLimitStart=2;
			hardLimitEnd=4;
		};
		position[]={0,0,0};
	};
	class SparksLightSabot
	{
		diffuse[]={1,0.80000001,0.80000001};
		color[]={1,0.80000001,0.80000001};
		ambient[]={0,0,0,0};
		brightness=50;
		size=1;
		intensity=1000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=40;
			hardLimitEnd=80;
		};
		position[]={0,0,0};
	};
};
class MachineGunEject
{
	class MachineGunEject
	{
		simulation="particles";
		type="MachineGunEject";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class MachineGunEject1
{
	class MachineGunEject1
	{
		simulation="particles";
		type="MachineGunEject1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class MachineGunEject2
{
	class MachineGunEject2
	{
		simulation="particles";
		type="MachineGunEject2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class MachineGunCartridge
{
	class MachineGunCartridge
	{
		simulation="particles";
		type="MachineGunCartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class MachineGunCartridgeMed
	{
		simulation="particles";
		type="MachineGunCartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class MachineGunCartridge1
{
	class MachineGunCartridge1
	{
		simulation="particles";
		type="MachineGunCartridge1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class MachineGunCartridge1Med
	{
		simulation="particles";
		type="MachineGunCartridge1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class MachineGunCartridge338
{
	class MachineGunCartridge338
	{
		simulation="particles";
		type="MachineGunCartridge338";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class MachineGunCartridge338Med
	{
		simulation="particles";
		type="MachineGunCartridge338";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class MachineGunCartridgeShort1
{
	class MachineGunCartridge1
	{
		simulation="particles";
		type="MachineGunCartridgeShort1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
};
class MachineGunCartridge2
{
	class MachineGunCartridge2
	{
		simulation="particles";
		type="MachineGunCartridge2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class MachineGunCartridge2Med
	{
		simulation="particles";
		type="MachineGunCartridge2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class HeavyGunCartridge1
{
	class HeavyGunCartridge1
	{
		simulation="particles";
		type="HeavyGunCartridge1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class HeavyGunCartridge1Med
	{
		simulation="particles";
		type="HeavyGunCartridge1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class MachineGunCloud
{
	class MachineGunCloud1
	{
		simulation="particles";
		type="MachineGunCloud1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class MachineGunDust1
	{
		simulation="particles";
		type="MachineGunDust1";
		position[]={0,0,0};
		enabled="(humidity interpolate [0.2,0.20001,1,0]) * isWaterSurface * (distToSurface interpolate [1.5,1.51,1,0])";
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RifleAssaultCloud
{
	class RifleAssaultCloud1
	{
		simulation="particles";
		type="RifleAssaultCloud2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class RifleAssaultDust1
	{
		simulation="particles";
		type="RifleAssaultDust1";
		position[]={0,0,0};
		enabled="isWaterSurface * (humidity interpolate [0.2,0.20001,1,0]) * (distToSurface interpolate [1.3,1.31,1,0])";
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class SniperCloud
{
	class SniperCloud1
	{
		simulation="particles";
		type="RifleAssaultCloud1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class SniperDust1
	{
		simulation="particles";
		type="SniperDust1";
		position[]={0,0,0};
		enabled="isWaterSurface * (humidity interpolate [0.2,0.20001,1,0]) * (distToSurface interpolate [1.6,1.60001,1,0])";
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class CaselessAmmoCloud
{
	class CaselessAmmoCloud1
	{
		simulation="particles";
		type="CaselessAmmoCloud1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class PistolCloud
{
	class RifleAssaultCloud1
	{
		simulation="particles";
		type="RifleAssaultCloud1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class RifleAssaultDust1
	{
		simulation="particles";
		type="PistolDust1";
		position[]={0,0,0};
		enabled="(humidity interpolate [0.2,0.20001,1,0]) * (distToSurface interpolate [1.0,1.01,1,0])";
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class GrenadeLauncherCloud
{
	class GrenadeLauncherCloud1
	{
		simulation="particles";
		type="GrenadeLauncherCloud1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class CounterMeasureFlare
{
	class Cmeasures1
	{
		simulation="particles";
		type="Cmeasures1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4.5;
		qualityLevel=2;
	};
	class Cmeasures1M
	{
		simulation="particles";
		type="Cmeasures1M";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4.5;
		qualityLevel=1;
	};
	class Cmeasures1L
	{
		simulation="particles";
		type="Cmeasures1L";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4.5;
		qualityLevel=0;
	};
	class Cmeasures2
	{
		simulation="particles";
		type="Cmeasures2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3.2;
	};
	class Light1
	{
		simulation="light";
		type="CmeasuresLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class CounterMeasureChaff
{
	class Cmeasures1
	{
		simulation="particles";
		type="Cmeasures1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=8.5;
		qualityLevel=2;
	};
	class Cmeasures1M
	{
		simulation="particles";
		type="Cmeasures1M";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=8.5;
		qualityLevel=1;
	};
	class Cmeasures1L
	{
		simulation="particles";
		type="Cmeasures1L";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=8.5;
		qualityLevel=0;
	};
	class Cmeasures2
	{
		simulation="particles";
		type="Cmeasures2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=7.1999998;
	};
	class Cmeasures3
	{
		simulation="particles";
		type="Cmeasures3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class Light1
	{
		simulation="light";
		type="CmeasuresLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=7;
	};
};
class MissileManualEffects
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MissileManualEffects01
	{
		simulation="particles";
		type="MissileManualEffects1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class MissileEffects
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MissileEffects01
	{
		simulation="particles";
		type="MissileEffects1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class MachineGun1
{
	class MachineGun1
	{
		simulation="particles";
		type="MachineGun1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class MachineGun2
{
	class MachineGun2
	{
		simulation="particles";
		type="MachineGun2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class MachineGun3
{
	class MachineGun3
	{
		simulation="particles";
		type="MachineGun3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class AutoCannonFired: MachineGun2
{
	class Light1
	{
		simulation="light";
		type="FiredLightSmall";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=0.079999998;
	};
	class AutoCannonFired
	{
		simulation="particles";
		type="AutoCannonFired";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class MissileDAR1
{
	class MissileDARSmoke
	{
		simulation="particles";
		type="MissileDARSmoke";
	};
};
class CannonFired
{
	class Light1
	{
		simulation="light";
		type="FiredLightCannon";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.12;
	};
	class CannonFired1
	{
		simulation="particles";
		type="CannonFired1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class CannonFired2
	{
		simulation="particles";
		type="CannonFired2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.059999999;
	};
	class CannonFired3
	{
		simulation="particles";
		type="CannonFired3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class CannonFired3Med
	{
		simulation="particles";
		type="CannonFired3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class CannonFiredDust1
	{
		simulation="particles";
		type="CircleDustTankBig";
		enabled="(distToSurface interpolate [10.099,10.1,1,-1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CannonFiredDust2
	{
		simulation="particles";
		type="CircleDustTankSmall";
		enabled="(distToSurface interpolate [10.099,10.1,1,-1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CannonFiredDust3
	{
		simulation="particles";
		type="CircleDustTankLong";
		enabled="(distToSurface interpolate [10.099,10.1,1,-1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ArtilleryFired1
{
	class Light1
	{
		simulation="light";
		type="FiredLightMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.12;
	};
	class Smoke1
	{
		simulation="particles";
		type="ArtilleryFired1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class CannonFiredDust
	{
		simulation="particles";
		type="CircleDustArtillery";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
};
class ArtilleryFiredL
{
};
class ArtilleryFiredR
{
};
class MLRSFired
{
	class MLRSFired1
	{
		simulation="particles";
		type="MLRSFired1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class MLRSFired1M
	{
		simulation="particles";
		type="MLRSFired1M";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class MLRSFired1L
	{
		simulation="particles";
		type="MLRSFired1L";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=0;
	};
	class CannonFiredDust
	{
		simulation="particles";
		type="CircleDustTank";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CannonFiredDustM
	{
		simulation="particles";
		type="CircleDustTank";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CannonFiredDustL
	{
		simulation="particles";
		type="CircleDustTankL";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
};
class MortarFired
{
	class Light1
	{
		simulation="light";
		type="FiredLightSmall";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=0.079999998;
	};
	class MortarFired1
	{
		simulation="particles";
		type="MortarFired1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class CannonFiredDust
	{
		simulation="particles";
		type="CircleDustMortar";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
};
class Missile0
{
	class Light1
	{
		simulation="light";
		type="FiredLightMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=-1;
	};
	class MissileEffects1
	{
		simulation="particles";
		type="Missile0";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=-1;
	};
};
class Missile1
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MissileEffects1
	{
		simulation="particles";
		type="Missile1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class Missile2
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class Missile2
	{
		simulation="particles";
		type="Missile2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class Missile2Med
	{
		simulation="particles";
		type="Missile2Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
};
class Missile3
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class Missile3
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class Missile3Med
	{
		simulation="particles";
		type="Missile3Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
};
class Missile4
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class Missile4
	{
		simulation="particles";
		type="Missile4";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class Missile5
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class Missile5
	{
		simulation="particles";
		type="Missile5";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class CruiseMissile
{
	class Light1
	{
		simulation="light";
		type="CruiseMissileLight";
		position[]={0,0,-2};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class Missile3
	{
		simulation="particles";
		type="CruiseMissile";
		position[]={0,0,-2};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class Missile3Med
	{
		simulation="particles";
		type="CruiseMissileMed";
		position[]={0,0,-2};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
};
class SmokeTrailEffectMain1
{
	class SmokeTrailEffect1
	{
		simulation="particles";
		type="SmokeTrailEffect1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeTrailEffectMain2
{
	class SmokeTrailEffect2
	{
		simulation="particles";
		type="SmokeTrailEffect2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class WPTrailEffectMain2
{
	class WPTrailEffect
	{
		simulation="particles";
		type="WPTrailEffect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class ImpactEffectsBig
{
	class CircleDust1
	{
		simulation="particles";
		type="CircleDustBig";
		enabled="distToWater interpolate [-0.1,-0.099,1,-1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class SmokeTrails1H
	{
		simulation="particles";
		type="SmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class SmokeTrails1M
	{
		simulation="particles";
		type="SmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class BigSmoke1
	{
		simulation="particles";
		type="SmokeBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="SmallSmokeFast1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke2
	{
		simulation="particles";
		type="SmallSmokeFast2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke3
	{
		simulation="particles";
		type="SmallSmokeSlow1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke4
	{
		simulation="particles";
		type="SmallSmokeSlow2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactEffectsStandard
{
	class CircleDust1Big
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [-0.1,-0.099,1,-1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class SmokeTrails1BigH
	{
		simulation="particles";
		type="SmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class SmokeTrails1BigM
	{
		simulation="particles";
		type="SmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MedSmoke1Big
	{
		simulation="particles";
		type="SmokeMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class ImpactEffectsMedium
{
	class CircleDust1
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [-0.1,-0.099,1,-1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class SmokeTrails1H
	{
		simulation="particles";
		type="SmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class SmokeTrails1M
	{
		simulation="particles";
		type="SmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MedSmoke1
	{
		simulation="particles";
		type="SmokeMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class GrenadeCrater
{
	class GrenadeDirt
	{
		simulation="particles";
		type="DirtSmall";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
	};
	class Grenadedust
	{
		simulation="particles";
		type="CircleDustSmall";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class GrenadeStones
	{
		simulation="particles";
		type="GrenadeStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class GrenadeStonesStatic
	{
		simulation="particles";
		type="GrenadeStonesStatic";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=14;
	};
};
class IEDMineBigExplosion
{
	class Light1
	{
		simulation="light";
		type="ExploLightMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=2;
	};
	class MineSmoke1M
	{
		simulation="particles";
		type="MineSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=1;
	};
	class MineSmoke1L
	{
		simulation="particles";
		type="MineSmokeLow1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=0;
	};
	class GrenadeBubbles
	{
		simulation="particles";
		type="GrenadeBubbles1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class IEDMineBigGarbageCrater
{
	class GrenadeDirt
	{
		simulation="particles";
		type="DirtIEDMineBig";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class GrenadeDirtM
	{
		simulation="particles";
		type="DirtIEDMineBig";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
		qualityLevel=1;
	};
	class Grenadedust
	{
		simulation="particles";
		type="CircleDustBig";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class GrenadeStones
	{
		simulation="particles";
		type="IEDMineStonesBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class GrenadeStonesM
	{
		simulation="particles";
		type="IEDMineStonesBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class GrenadeFireStones
	{
		simulation="particles";
		type="IEDMineFireStonesBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage1
	{
		simulation="particles";
		type="IEDMineGarbageBig1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage1M
	{
		simulation="particles";
		type="IEDMineGarbageBig1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class IEDGarbage2
	{
		simulation="particles";
		type="IEDMineGarbageBig2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage2M
	{
		simulation="particles";
		type="IEDMineGarbageBig2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmokeBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=9;
	};
};
class IEDMineFlame
{
	class Light1
	{
		simulation="light";
		type="SmallFlameLight";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=7;
	};
	class sound
	{
		simulation="sound";
		type="Fire";
		interval=1;
		intensity=1;
		lifeTime=7;
	};
	class Fire1
	{
		simulation="particles";
		type="IEDFlameF";
		lifeTime=7;
	};
	class Smoke1
	{
		simulation="particles";
		type="IEDFlameS";
		lifeTime=7;
	};
};
class IEDMineBigLandCrater
{
	class GrenadeDirt
	{
		simulation="particles";
		type="DirtIEDMineBig";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class GrenadeDirtM
	{
		simulation="particles";
		type="DirtIEDMineBig";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
		qualityLevel=1;
	};
	class Grenadedust
	{
		simulation="particles";
		type="CircleDustBig";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=2;
	};
	class GrenadeStones
	{
		simulation="particles";
		type="IEDMineStonesBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmokeBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=9;
	};
};
class IEDMineSmallExplosion
{
	class Light1
	{
		simulation="light";
		type="ExploLightMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="GrenadeExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeBubbles
	{
		simulation="particles";
		type="GrenadeBubbles1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class IEDMineSmallGarbageCrater
{
	class GrenadeDirt
	{
		simulation="particles";
		type="DirtIEDMine";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class GrenadeDirtM
	{
		simulation="particles";
		type="DirtIEDMine";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
		qualityLevel=1;
	};
	class Grenadedust
	{
		simulation="particles";
		type="CircleDustSmall";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class GrenadeStones
	{
		simulation="particles";
		type="IEDMineStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class GrenadeStonesM
	{
		simulation="particles";
		type="IEDMineStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class GrenadeFireStones
	{
		simulation="particles";
		type="IEDMineFireStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage1
	{
		simulation="particles";
		type="IEDMineGarbage1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage1M
	{
		simulation="particles";
		type="IEDMineGarbage1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class IEDGarbage2
	{
		simulation="particles";
		type="IEDMineGarbage2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage2M
	{
		simulation="particles";
		type="IEDMineGarbage2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=9;
	};
};
class IEDMineSmallLandCrater
{
	class GrenadeDirt
	{
		simulation="particles";
		type="DirtIEDMine";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
	};
	class Grenadedust
	{
		simulation="particles";
		type="CircleDustSmall";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class GrenadeStones
	{
		simulation="particles";
		type="IEDMineStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=9;
	};
};
class MortarCrater
{
	class MortarDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.05,0.06,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class MortarDirt
	{
		simulation="particles";
		type="DirtMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
};
class ATMissileCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.05,0.06,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class RocketSmokeTrails1H
	{
		simulation="particles";
		type="RocketSmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class RocketSmokeTrails1M
	{
		simulation="particles";
		type="RocketSmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class RocketSmokeTrails2H
	{
		simulation="particles";
		type="RocketSmokeTrails2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class RocketSmokeTrails2M
	{
		simulation="particles";
		type="RocketSmokeTrails2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
};
class AAMissileCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.05,0.06,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class RocketSmokeTrails1H
	{
		simulation="particles";
		type="RocketSmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class RocketSmokeTrails1M
	{
		simulation="particles";
		type="RocketSmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class RocketSmokeTrails2H
	{
		simulation="particles";
		type="RocketSmokeTrails2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class RocketSmokeTrails2M
	{
		simulation="particles";
		type="RocketSmokeTrails2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class CircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.05,0.06,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ATRocketCrater
{
};
class HERocketCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.05,0.06,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class HEShellCrater
{
	class ShellSmokeTrail1
	{
		simulation="particles";
		type="ShellSmokeTrail1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellSmokeTrail2
	{
		simulation="particles";
		type="ShellSmokeTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellSmokeTrail3
	{
		simulation="particles";
		type="ShellSmokeTrail3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.05,0.06,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class ArtyShellCrater
{
	class ShellSmokeTrail1
	{
		simulation="particles";
		type="ShellSmokeTrail1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellSmokeTrail2
	{
		simulation="particles";
		type="ShellSmokeTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellSmokeTrail3
	{
		simulation="particles";
		type="ShellSmokeTrail3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellStones
	{
		simulation="particles";
		type="DirtBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustBig";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class SecondaryCrater
{
	class SecondarySparks
	{
		simulation="particles";
		type="ExpSparks1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ExploAmmoCrater
{
	class ExploAmmoStones
	{
		simulation="particles";
		type="DirtSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class CircleDust
	{
		simulation="particles";
		type="CircleDustSmall";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class ShotUnderwater
{
	class Bubbles1
	{
		simulation="particles";
		type="BubblesShot1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Bubbles2
	{
		simulation="particles";
		type="BubblesShotBig1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class BubblesMed2
	{
		simulation="particles";
		type="BubblesShotBigMed1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
};
class AmmoUnderwater
{
	class Bubbles1
	{
		simulation="particles";
		type="BubbleTrack1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
		enabled="(distToSurface - 1) * (-1)";
	};
	class BubblesMed
	{
		simulation="particles";
		type="BubbleTrackMed1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
		enabled="(distToSurface - 1) * (-1)";
	};
};
class AmmoClassic
{
	class Bubbles1
	{
		simulation="particles";
		type="BubbleTrack2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		enabled="(distToSurface - 1) * (-1) * (speedSize interpolate [30,30.1,0,1])";
	};
};
class ArtilleryTrails
{
	class Trail1
	{
		simulation="particles";
		type="ArtilleryShell1";
		position[]={0,0,0};
		enabled="speedY interpolate [-0.0001,0.0001,1,-1]";
		intensity=1;
		interval=1;
	};
};
class ImpactEffectsSmall
{
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDust2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Med
	{
		simulation="particles";
		type="ImpactDust2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Low
	{
		simulation="particles";
		type="ImpactDust2Low";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustWater1
	{
		simulation="particles";
		type="ImpactDustWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcrete
	{
		simulation="particles";
		type="ImpactConcrete";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteMed
	{
		simulation="particles";
		type="ImpactConcrete";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactEffectsSmall06
	{
		simulation="particles";
		type="ImpactSandSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactEffectsDummy_Orange
{
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDust_Orange";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Med
	{
		simulation="particles";
		type="ImpactDust_Orange";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Low
	{
		simulation="particles";
		type="ImpactDustLow_Orange";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustWater1
	{
		simulation="particles";
		type="ImpactDustWater_Orange";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmoke_Orange";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=14;
	};
};
class ImpactEffectsHardGround
{
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDust2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Med
	{
		simulation="particles";
		type="ImpactDust2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Low
	{
		simulation="particles";
		type="ImpactDust2Low";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustWater1
	{
		simulation="particles";
		type="ImpactDustWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcrete
	{
		simulation="particles";
		type="ImpactConcrete";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteMed
	{
		simulation="particles";
		type="ImpactConcrete";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactEffectsGroundSabot
{
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDustSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustWater1
	{
		simulation="particles";
		type="ImpactDustWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcrete
	{
		simulation="particles";
		type="ImpactConcreteSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactEffectsSmall06
	{
		simulation="particles";
		type="ImpactSandSmokeSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactEffectsBlood
{
	class BloodMist
	{
		simulation="particles";
		type="BloodMist";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		MoveVelocityVar[]={0,0,0};
	};
	class Blood
	{
		simulation="particles";
		type="Blood";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Blood1
	{
		simulation="particles";
		type="Blood1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.64999998;
	};
	class Blood2
	{
		simulation="particles";
		type="Blood2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class Blood3
	{
		simulation="particles";
		type="Blood3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class BloodUnderwater1
	{
		simulation="particles";
		type="BloodUnderwater1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
};
class ImpactEffectsSea
{
	class WaterWave1
	{
		simulation="particles";
		type="WaterWave";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class WaterSplash1
	{
		simulation="particles";
		type="WaterSplash";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactEffectsSeaMen
{
	class WaterWaveMen1
	{
		simulation="particles";
		type="WaterWaveMen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class WaterSplashMen1
	{
		simulation="particles";
		type="WaterSplashMen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class WaterEffectMen
	{
		simulation="particles";
		type="WaterEffectMen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=2;
	};
};
class ImpactEffectsAir
{
	class WaterWave1
	{
		simulation="particles";
		type="WaterWaveAir";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class WaterSplash1
	{
		simulation="particles";
		type="WaterSplashAir";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactEffectsWater
{
	class ImpactEffectsWater01
	{
		simulation="particles";
		type="ImpactEffectsWater1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ImpactEffectsWater01Med
	{
		simulation="particles";
		type="ImpactEffectsWater1Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class ImpactEffectsWater01Low
	{
		simulation="particles";
		type="ImpactEffectsWater1Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=0;
	};
	class ImpactEffectsWater02
	{
		simulation="particles";
		type="ImpactEffectsWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ImpactEffectsWater02Med
	{
		simulation="particles";
		type="ImpactEffectsWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class ImpactEffectsWater02Low
	{
		simulation="particles";
		type="ImpactEffectsWater2Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=0;
	};
	class ImpactEffectsWater03
	{
		simulation="particles";
		type="ImpactEffectsWater3";
		position[]={0,0.18000001,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ImpactEffectsWater03Med
	{
		simulation="particles";
		type="ImpactEffectsWater3Med";
		position[]={0,0.18000001,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class ImpactEffectsWater03Low
	{
		simulation="particles";
		type="ImpactEffectsWater3Med";
		position[]={0,0.18000001,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=0;
	};
	class ImpactEffectsWater04
	{
		simulation="particles";
		type="ImpactEffectsWater4";
		position[]={0,1.2,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ImpactEffectsWater04Med
	{
		simulation="particles";
		type="ImpactEffectsWater4Med";
		position[]={0,1.2,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
};
class ImpactEffectsWaterBig
{
	class ImpactEffectsWater08
	{
		simulation="particles";
		type="ImpactEffectsWater8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ImpactEffectsWater09
	{
		simulation="particles";
		type="ImpactEffectsWater9";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ImpactEffectsWaterRocket
{
	class ImpactEffectsWater08
	{
		simulation="particles";
		type="ImpactEffectsWater8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ImpactEffectsWaterHE
{
	class ImpactEffectsWater07
	{
		simulation="particles";
		type="ImpactEffectsWater8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ImpactEffectsWaterExplosion
{
	class ImpactEffectsWater06
	{
		simulation="particles";
		type="ImpactEffectsWater8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ImpactEffectsWater07
	{
		simulation="particles";
		type="ImpactEffectsWater7";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ImpactEffectsDeepWaterExplosion
{
};
class ImpactMetal
{
	class SparksLight
	{
		simulation="light";
		type="SparksLight";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime=1;
	};
	class ImpactSparks0
	{
		simulation="particles";
		type="ImpactSparks0";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="ImpactSparks2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSparks2Med
	{
		simulation="particles";
		type="ImpactSparksMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2
	{
		simulation="particles";
		type="ImpactSmoke2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2Med
	{
		simulation="particles";
		type="ImpactSmokeMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2Low
	{
		simulation="particles";
		type="ImpactSmokeLow2";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactMetalSabotBig
{
	class SparksLight
	{
		simulation="light";
		type="SparksLightSabot";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="ImpactSparksSabot1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="ImpactSparksSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2
	{
		simulation="particles";
		type="ImpactSmokeSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactMetalSabotSmall
{
	class SparksLight
	{
		simulation="light";
		type="SparksLightSabot";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="ImpactSparksSabot1Small";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="ImpactSparksSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2
	{
		simulation="particles";
		type="ImpactSmokeSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactGlass
{
	class GlassShard1
	{
		simulation="particles";
		type="GlassShard1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard1Med
	{
		simulation="particles";
		type="GlassShardMed1";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard1Low
	{
		simulation="particles";
		type="GlassShardLow1";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2
	{
		simulation="particles";
		type="GlassShard2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2Med
	{
		simulation="particles";
		type="GlassShardMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2Low
	{
		simulation="particles";
		type="GlassShardLow2";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3
	{
		simulation="particles";
		type="GlassShard3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3Med
	{
		simulation="particles";
		type="GlassShardMed3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3Low
	{
		simulation="particles";
		type="GlassShardLow3";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4
	{
		simulation="particles";
		type="GlassShard4";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4Med
	{
		simulation="particles";
		type="GlassShardMed4";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4Low
	{
		simulation="particles";
		type="GlassShardLow4";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard5
	{
		simulation="particles";
		type="GlassShard5";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard5Med
	{
		simulation="particles";
		type="GlassShardMed5";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard5Low
	{
		simulation="particles";
		type="GlassShardLow5";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard6
	{
		simulation="particles";
		type="GlassShard6";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard6Med
	{
		simulation="particles";
		type="GlassShardMed6";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard6Low
	{
		simulation="particles";
		type="GlassShardLow6";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard7
	{
		simulation="particles";
		type="GlassShard7";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard7Med
	{
		simulation="particles";
		type="GlassShardMed7";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard7Low
	{
		simulation="particles";
		type="GlassShardLow7";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactGlassThin
{
	class GlassShard1
	{
		simulation="particles";
		type="GlassShard1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard1Med
	{
		simulation="particles";
		type="GlassShardMed1";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard1Low
	{
		simulation="particles";
		type="GlassShardLow1";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2
	{
		simulation="particles";
		type="GlassShard2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2Med
	{
		simulation="particles";
		type="GlassShardMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2Low
	{
		simulation="particles";
		type="GlassShardLow2";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3
	{
		simulation="particles";
		type="GlassShard3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3Med
	{
		simulation="particles";
		type="GlassShardMed3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3Low
	{
		simulation="particles";
		type="GlassShardLow3";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4
	{
		simulation="particles";
		type="GlassShard4";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4Med
	{
		simulation="particles";
		type="GlassShardMed4";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4Low
	{
		simulation="particles";
		type="GlassShardLow4";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassDust
	{
		simulation="particles";
		type="GlassDust";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassDustMed
	{
		simulation="particles";
		type="GlassDustMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassDustLow
	{
		simulation="particles";
		type="GlassDustLow";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactWood
{
	class WoodChippings1
	{
		simulation="particles";
		type="WoodChippings1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings1Med
	{
		simulation="particles";
		type="WoodChippingsMed1";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings2
	{
		simulation="particles";
		type="WoodChippings2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings2Med
	{
		simulation="particles";
		type="WoodChippingsMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings3
	{
		simulation="particles";
		type="WoodChippings3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings3Med
	{
		simulation="particles";
		type="WoodChippingsMed3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings4
	{
		simulation="particles";
		type="WoodChippings4";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings4Med
	{
		simulation="particles";
		type="WoodChippingsMed4";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustWood";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustMed
	{
		simulation="particles";
		type="ImpactDustWoodMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustLow
	{
		simulation="particles";
		type="ImpactDustWoodLow";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactHay
{
	class HayChippings1
	{
		simulation="particles";
		type="HayChippings1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class HayChippings1Med
	{
		simulation="particles";
		type="HayChippingsMed1";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class HayChippings2
	{
		simulation="particles";
		type="HayChippings2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class HayChippings2Med
	{
		simulation="particles";
		type="HayChippingsMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class HayChippings3
	{
		simulation="particles";
		type="HayChippings3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class HayChippings3Med
	{
		simulation="particles";
		type="HayChippingsMed3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustHay";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustMed
	{
		simulation="particles";
		type="ImpactDustHayMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustLow
	{
		simulation="particles";
		type="ImpactDustHayLow";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Sound
	{
		simulation="sound";
		type="SFX_ImpactHay";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
	};
};
class ImpactPlaster
{
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDustPlaster";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Med
	{
		simulation="particles";
		type="ImpactDustPlaster";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Low
	{
		simulation="particles";
		type="ImpactDustPlasterLow";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall01
	{
		simulation="particles";
		type="ImpactConcreteWall1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall02
	{
		simulation="particles";
		type="ImpactConcreteWall2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall02Med
	{
		simulation="particles";
		type="ImpactConcreteWall2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall03
	{
		simulation="particles";
		type="ImpactConcreteWall3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall03Med
	{
		simulation="particles";
		type="ImpactConcreteWall3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactPlastic
{
	class ImpactDustPlastic1
	{
		simulation="particles";
		type="ImpactDustPlastic";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustPlasticMed1
	{
		simulation="particles";
		type="ImpactDustPlasticMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustPlasticLow1
	{
		simulation="particles";
		type="ImpactDustPlasticMed";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmokePlastic1
	{
		simulation="particles";
		type="ImpactSmokePlastic";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=2;
	};
	class ImpactSmokePlasticMed1
	{
		simulation="particles";
		type="ImpactSmokePlasticMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=2;
	};
};
class ImpactTyre
{
	class ImpactDust
	{
		simulation="particles";
		type="ImpactSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactRubber
{
	class ImpactDust
	{
		simulation="particles";
		type="ImpactSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactConcrete
{
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustConcrete";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust2
	{
		simulation="particles";
		type="ImpactDustConcrete2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactConcreteSabot
{
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustConcreteSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust2
	{
		simulation="particles";
		type="ImpactDustConcreteSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2
	{
		simulation="particles";
		type="ImpactSmokeSabot3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactConcreteSabotSmall
{
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustConcreteSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust2
	{
		simulation="particles";
		type="ImpactDustConcreteSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactLeaves
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesGreen
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallGreen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallGreen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallGreenMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesDead
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallDead";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallDead";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallDeadMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesGreenBig
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallGreenBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallGreenBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallGreenBigMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesPalm
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallPalm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallPalm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallPalmMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesPine
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallPine";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallPine";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallPineMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class BombCrater
{
	class BombSmk1
	{
		simulation="particles";
		type="BombSmk1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.69999999;
	};
	class BombSmk2
	{
		simulation="particles";
		type="BombSmk2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.69999999;
	};
	class BombSmk3
	{
		simulation="particles";
		type="BombSmk3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class HeavyBombCrater
{
	class BombSmk1
	{
		simulation="particles";
		type="HeavyBombSmk1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1.7;
	};
	class BombSmk2
	{
		simulation="particles";
		type="HeavyBombSmk2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1.7;
	};
	class BombSmk3
	{
		simulation="particles";
		type="HeavyBombSmk3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
	class BombDust
	{
		simulation="particles";
		type="BombDust";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class ExplosionEffectsWater
{
	class ExplosionEffectsWater
	{
		simulation="particles";
		type="ExplosionEffectsWater";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class CannonFire
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Smoke
	{
		simulation="particles";
		type="CannonSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Flash
	{
		simulation="particles";
		type="CannonFlash";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class HeavyCaliber
{
	class heavyCaliber1
	{
		simulation="particles";
		type="heavyCaliber1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class heavyCaliber2
	{
		simulation="particles";
		type="heavyCaliber2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RocketBackEffectsNLAW
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireNLAW";
		enabled="(density interpolate [0.98,0.981,-1,1])";
	};
	class RocketBacksmoke1
	{
		simulation="particles";
		type="RocketBacksmokeNLAW";
		enabled="(density interpolate [0.98,0.981,-1,1])";
	};
};
class RocketBackEffectsRPG
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireRPG";
		enabled="(density interpolate [0.98,0.981,-1,1])";
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPG";
		enabled="(density interpolate [0.98,0.981,-1,1])";
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPG";
		enabled="(density interpolate [0.98,0.981,-1,1])";
	};
};
class RocketBackEffectsRPGNT
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.029999999;
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.1;
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.2;
	};
	class Light1
	{
		simulation="light";
		type="FiredLightLauncher";
		position[]={0,1.8,-1};
		intensity=1;
		interval=1;
		lifeTime=0.12;
	};
};
class RocketBackEffectsNLAWNT
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireSmallRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.029999999;
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.1;
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.2;
	};
	class Light1
	{
		simulation="light";
		type="FiredLightLauncherSmall";
		position[]={0,1.8,-1};
		intensity=1;
		interval=1;
		lifeTime=0.12;
	};
};
class PylonBackEffects_InitDelay
{
	class RocketBackfire1
	{
		simulation="particles";
		type="PylonBackfire";
		start="(density interpolate [0.019,0.02,1,0])";
		lifeTime=9.9999997e-006;
	};
	class RocketBacksmoke2: RocketBackfire1
	{
		simulation="particles";
		type="PylonBacksmoke";
	};
};
class PylonBackEffects
{
	class RocketBackfire1
	{
		simulation="particles";
		type="PylonBackfire";
		start=1;
		lifeTime=1e-006;
	};
	class RocketBacksmoke2: RocketBackfire1
	{
		simulation="particles";
		type="PylonBacksmoke";
	};
};
class PylonBackEffectsFFAR
{
	class RocketBackfire1
	{
		simulation="particles";
		type="PylonBackfireFFAR";
		start=1;
		lifeTime=1e-006;
	};
	class RocketBacksmoke2: RocketBackfire1
	{
		simulation="particles";
		type="PylonBacksmoke";
	};
};
class PylonBackEffectsRockets
{
	class RocketBackfire1
	{
		simulation="particles";
		type="PylonBackfireRockets";
		start=1;
		lifeTime=9.9999997e-005;
	};
	class RocketBacksmoke2: RocketBackfire1
	{
		simulation="particles";
		type="PylonBacksmoke";
		lifeTime=1e-006;
	};
};
class RocketBackEffectsStaticRPG
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireStaticRPG";
		enabled="density interpolate [0.98,0.981,-1,1]";
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeStaticRPG";
		enabled="density interpolate [0.98,0.981,-1,1]";
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeStaticRPG";
		enabled="density interpolate [0.98,0.981,-1,1]";
	};
};
class SencondaryExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class Exp1
	{
		simulation="particles";
		type="SecondaryExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class SecondarySmoke1
	{
		simulation="particles";
		type="SecondarySmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class MineNondirectionalCrater
{
	class MineStones
	{
		simulation="particles";
		type="MineStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmokeMine";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
	class MineDust1
	{
		simulation="particles";
		type="MineDust1";
	};
	class MineDust2
	{
		simulation="particles";
		type="MineDust2";
		qualityLevel=2;
	};
	class MineDust3
	{
		simulation="particles";
		type="MineDust3";
		qualityLevel=2;
	};
	class MineDust3Med
	{
		simulation="particles";
		type="MineDust3";
		qualityLevel=1;
	};
};
class MineNondirectionalCraterSmall
{
	class MineStones
	{
		simulation="particles";
		type="MineStones1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmokeMine";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
	class MineDust1
	{
		simulation="particles";
		type="MineDust1";
	};
	class MineDust2
	{
		simulation="particles";
		type="MineDust2";
		qualityLevel=2;
	};
	class MineDust3
	{
		simulation="particles";
		type="MineDust3";
		qualityLevel=2;
	};
	class MineDust3Med
	{
		simulation="particles";
		type="MineDust3";
		qualityLevel=1;
	};
};
class MineNondirectionalExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=2;
	};
	class MineSmoke1Med
	{
		simulation="particles";
		type="MineSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=1;
	};
	class MineSmoke1Low
	{
		simulation="particles";
		type="MineSmokeLow1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=0;
	};
};
class MineNondirectionalExplosionSmall
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="GrenadeExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class MineSmoke2
	{
		simulation="particles";
		type="MineSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class MineSmoke3
	{
		simulation="particles";
		type="MineSmokeLow2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=0;
	};
};
class MineUnderwaterExplosion
{
	class Light1
	{
		simulation="light";
		type="MineExploLight";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.07;
	};
	class MineWater1
	{
		simulation="particles";
		type="MineUnderwaterWater1";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWater1M
	{
		simulation="particles";
		type="MineUnderwaterWater1M";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineWater1L
	{
		simulation="particles";
		type="MineUnderwaterWater1M";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
	class MineWater2
	{
		simulation="particles";
		type="MineUnderwaterWater2";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWater2M
	{
		simulation="particles";
		type="MineUnderwaterWater2";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineWave
	{
		simulation="particles";
		type="MineWave";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWaveM
	{
		simulation="particles";
		type="MineWaveM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineUnderwaterSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class MineUnderwaterABExplosion
{
	class Light1
	{
		simulation="light";
		type="MineExploLight";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.07;
	};
	class MineWater1
	{
		simulation="particles";
		type="MineUnderwaterWaterAB1";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWater1M
	{
		simulation="particles";
		type="MineUnderwaterWaterAB1M";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineWater1L
	{
		simulation="particles";
		type="MineUnderwaterWaterAB1M";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
	class MineWater2
	{
		simulation="particles";
		type="MineUnderwaterWaterAB2";
		enabled="distToWater interpolate [-16.001,-16,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MineWave
	{
		simulation="particles";
		type="MineWave";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWaveM
	{
		simulation="particles";
		type="MineWaveM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineUnderwaterSmokeAB1";
		enabled="distToWater interpolate [0.1,0.100001,1,-1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class MineUnderwaterPDMExplosion
{
	class Light1
	{
		simulation="light";
		type="MineExploLight";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.07;
	};
	class MineWater1
	{
		simulation="particles";
		type="MineUnderwaterWaterPDM";
		enabled="distToWater interpolate [-5.0001,-5,-1,1]";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MineWave
	{
		simulation="particles";
		type="MineWaveSmall";
		enabled="(distToWater interpolate [-8.0001,-8,-1,1]) * (distToWater interpolate [0.1,0.10001,-1,1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineUnderwaterSmokeAB1";
		enabled="distToWater interpolate [0.1,0.100001,1,-1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class GrenadeExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="GrenadeExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeBubbles
	{
		simulation="particles";
		type="GrenadeBubbles1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MineWater1
	{
		simulation="particles";
		type="MineUnderwaterWaterPDM";
		enabled="distToWater interpolate [-5.0001,-5,-1,1]";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MineWave
	{
		simulation="particles";
		type="GrenadeWaveSmall";
		enabled="(distToWater interpolate [-10.0001,-10,-1,1]) * (distToWater interpolate [0.1,0.10001,-1,1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class MortarExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MortarExp1
	{
		simulation="particles";
		type="MortarExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MortarSmoke1
	{
		simulation="particles";
		type="CloudBigDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class WPExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime=1;
	};
	class Explosion1
	{
		simulation="particles";
		type="WPCloud";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Trails
	{
		simulation="particles";
		type="WPTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ExplosionEffects
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.1;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="SmallSmokeFast1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BasicAmmoExplosion
{
	class Light1
	{
		simulation="light";
		type="ObjectDestructionLight";
		position="";
		intensity=0.001;
		interval=1;
		lifeTime=3;
	};
	class Explosion
	{
		simulation="particles";
		type="AmmoExplosionParticles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Smoke1
	{
		simulation="particles";
		type="AmmoSmokeParticles1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class AmmoBulletEffect
{
	class Light1
	{
		simulation="light";
		type="SmallFlameLight";
		position="";
		intensity=0.001;
		interval=1;
	};
	class ExpSparks
	{
		simulation="particles";
		type="AmmoExpSparks";
		position="";
		intensity=1;
		interval=1;
	};
	class AmmoLightSmokeParticles
	{
		simulation="particles";
		type="AmmoLightSmokeParticles";
		position="";
		intensity=1;
		interval=1;
	};
};
class ATMissileExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class AAMissileExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class MineExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position="explosionPos";
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="MineExplosionParticles";
		position="explosionPos";
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudSmallLight";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FireSparksSmall1
	{
		simulation="particles";
		type="FireSparksSmall";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ATMineExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="ATMineExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="ATCloudSmallLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		qualityLevel=2;
	};
	class SmallSmoke1M
	{
		simulation="particles";
		type="ATCloudSmallLightM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		qualityLevel=1;
	};
	class SmallSmoke1L
	{
		simulation="particles";
		type="ATCloudSmallLightM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		qualityLevel=0;
	};
};
class MineCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class MissileCircleDustM
	{
		simulation="particles";
		type="MineCircleDust";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=1;
	};
	class MineStones1
	{
		simulation="particles";
		type="MineStones1";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=0.16;
		qualityLevel=2;
	};
};
class ATMineCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust";
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class MissileCircleDustM
	{
		simulation="particles";
		type="MineCircleDust";
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=1;
	};
	class MineStones2
	{
		simulation="particles";
		type="MineStones2";
		intensity=1;
		interval=1;
		lifeTime=0.16;
		qualityLevel=2;
	};
};
class BoundingMineExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="MineExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudSmallLight1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FireSparksSmall1
	{
		simulation="particles";
		type="FireSparksSmall1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BoundingMineCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class MineJumpEffect
{
	class MineJumpEffect
	{
		simulation="particles";
		type="MineJumpEffect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.012;
	};
};
class DirectionalMineExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="MineExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudSmallLight2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FireSparksSmall1
	{
		simulation="particles";
		type="FireSparksSmall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class DirectionalMineExplosionBig
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="MineExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudSmallLight3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=2;
	};
	class SmallSmoke1M
	{
		simulation="particles";
		type="CloudSmallLight3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=1;
	};
	class SmallSmoke1L
	{
		simulation="particles";
		type="CloudSmallLight3L";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=0;
	};
	class FireSparksSmall1
	{
		simulation="particles";
		type="FireSparksSmall3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=2;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class MissileCircleDustM
	{
		simulation="particles";
		type="MineCircleDust2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=1;
	};
};
class DirectionalMineCrater
{
};
class ATRocketExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.079999998;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudBigLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class HERocketExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="GrenadeExp";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudBigLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class HEShellExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ArtyShellExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudBigDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BombExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.25;
	};
	class BombExp1
	{
		simulation="particles";
		type="BombExp1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class HeavyBombExplosion
{
	class ExpSparksBig
	{
		simulation="particles";
		type="ExpSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ShardsBig
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExpBig
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1Big
	{
		simulation="particles";
		type="VehExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BombExp1
	{
		simulation="particles";
		type="HeavyBombExp1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke1Big
	{
		simulation="particles";
		type="VehExpSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1Big
	{
		simulation="particles";
		type="VehExpSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class MissileExplosion
{
	class ExpSparksBig
	{
		simulation="particles";
		type="ExpSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ShardsBig
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExpBig
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1Big
	{
		simulation="particles";
		type="VehExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion2Big
	{
		simulation="particles";
		type="FireBallBright";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class BombExp1
	{
		simulation="particles";
		type="HeavyBombExp1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke1Big
	{
		simulation="particles";
		type="VehExpSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1Big
	{
		simulation="particles";
		type="VehExpSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class HelicopterExplosionEffects
{
	class Shards
	{
		simulation="particles";
		type="HeliDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class HelicopterExplosionEffects2
{
	class Shards
	{
		simulation="particles";
		type="HeliDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="VehExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion2
	{
		simulation="particles";
		type="FireBallBright";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke1
	{
		simulation="particles";
		type="VehExpSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="VehExpSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ExplosionShardsFire
{
	class Light1
	{
		simulation="light";
		type="SmallFlameLight";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=10;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Fire
	{
		simulation="particles";
		type="ExpSparksFire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Smoke
	{
		simulation="particles";
		type="ExpSparksSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class VehicleExplosionEffectsBig
{
	class ExpSparksBig
	{
		simulation="particles";
		type="ExpSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ShardsBig
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExpBig
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1Big
	{
		simulation="particles";
		type="VehExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion2Big
	{
		simulation="particles";
		type="FireBallBright";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke1Big
	{
		simulation="particles";
		type="VehExpSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1Big
	{
		simulation="particles";
		type="VehExpSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class VehicleExplosionEffects
{
	class ExpSparks
	{
		simulation="particles";
		type="ExpSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Shards
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards1
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards3
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_0
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="VehExplosionParticlesSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion2
	{
		simulation="particles";
		type="FireBallBrightSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Smoke1
	{
		simulation="particles";
		type="VehExpSmokeSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="VehExpSmoke2Small";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RocketExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightMed";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="GrenadeExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="SmallSmokeFast1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ExploAmmoExplosion
{
	class FiredLightSmall
	{
		simulation="light";
		type="FiredLightMed";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=0.1;
	};
	class ExploAmmoFlash
	{
		simulation="particles";
		type="ExploAmmoFlash";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ExploAmmoSmoke
	{
		simulation="particles";
		type="ExploAmmoSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ExploAmmoExplosionPlaneCAS
{
	class FiredLightSmall
	{
		simulation="light";
		type="FiredLightMed";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=0.1;
	};
	class ExploAmmoFlash
	{
		simulation="particles";
		type="ExploAmmoFlash";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ExploAmmoSmoke
	{
		simulation="particles";
		type="ExploAmmoSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.80000001;
	};
};
class MGunSmoke
{
	class MGunSmoke
	{
		simulation="particles";
		type="MGunSmoke1";
	};
};
class ExhaustsEffect
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefract";
	};
	class ExhaustsEffectWater01
	{
		simulation="particles";
		type="ExhaustSmokeWater1";
		qualityLevel=2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation="particles";
		type="ExhaustSmokeWater1";
		qualityLevel=1;
	};
	class ExhaustsEffectWater02
	{
		simulation="particles";
		type="ExhaustSmokeWater2";
		qualityLevel=2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation="particles";
		type="ExhaustSmokeWater2";
		qualityLevel=1;
	};
};
class ExhaustEffectOffroad
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeOffroad";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractOffroad";
	};
};
class ExhaustEffectMRAP_03
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1Med";
	};
	class ExhaustsEffect02
	{
		simulation="particles";
		type="ExhaustSmoke2Med";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractMed";
	};
};
class ExhaustsEffectFBoat
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeBoat1";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefract";
	};
};
class ExhaustsEffectBig
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeBig1";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeBigRefract";
	};
	class ExhaustsEffectWater01
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=1;
	};
	class ExhaustsEffectWater02
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=1;
	};
};
class ExhaustEffectTankSide
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeTank1";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeBigRefract";
	};
	class ExhaustsEffectWater01
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=1;
	};
	class ExhaustsEffectWater02
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=1;
	};
};
class ExhaustEffectTankBack
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeTank2";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeBigRefract";
	};
	class ExhaustsEffectWater01
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=1;
	};
	class ExhaustsEffectWater02
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=1;
	};
};
class ExhaustEffectTankGasturbineBack
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeTankGasTurbine";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeliBig";
	};
	class ExhaustsEffectWater01
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=1;
	};
	class ExhaustsEffectWater02
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=1;
	};
};
class ExhaustsEffectAMV
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeAMV";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class ExhaustEffectTractor
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeTractor";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefract";
	};
};
class ExhaustEffectHEMTT
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTT";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class ExhaustEffectHTruck
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeHTruck";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class ExhaustEffectMRAP_02
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeMRAP_02";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class ExhaustEffectHeli
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1Heli";
		enabled="(engineOn interpolate [0.45,0.451,1,-1]) * (damage interpolate [0.4,0.41,1,-1])";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeli";
	};
};
class ExhaustsEffectHeliMed
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1HeliBig";
		enabled="(engineOn interpolate [0.45,0.451,1,-1]) * (damage interpolate [0.4,0.41,1,-1])";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeliMed";
	};
};
class ExhaustsEffectHeliCom
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1HeliCom";
		enabled="(engineOn interpolate [0.45,0.451,1,-1]) * (damage interpolate [0.4,0.41,1,-1])";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeliCom";
	};
};
class ExhaustsEffectHeliComHP
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1HeliHP";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeliCom";
	};
};
class ExhaustsEffectHeliBig
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1HeliBig";
		enabled="(engineOn interpolate [0.45,0.451,1,-1]) * (damage interpolate [0.4,0.41,1,-1])";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeliBig";
	};
};
class ExhaustsEffectPlane
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1Plane";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractPlane";
	};
};
class ExhaustsEffectPlaneHP
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1PlaneHP";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractPlane";
	};
};
class ExhaustsEffectDrone
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1Drone";
		enabled="(engineOn interpolate [0.001,0.002,1,-1]) * (damage interpolate [0.4,0.41,1,-1])";
	};
};
class ExhaustsEffectJet
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1Jet";
		qualityLevel=2;
	};
	class ExhaustsEffect01M
	{
		simulation="particles";
		type="ExhaustSmoke1JetM";
		enabled="damage - 0.4";
		qualityLevel=1;
	};
	class ExhaustsEffect01L
	{
		simulation="particles";
		type="ExhaustSmoke1JetL";
		enabled="damage - 0.4";
		qualityLevel=0;
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractPlane";
	};
};
class ExhaustsEffectPlaneBig
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1PlaneBig";
	};
	class Fire01
	{
		simulation="particles";
		type="ExhaustFirePlaneBig";
		enabled="randomValue - 0.7";
	};
};
class ExhaustEffectOnWater
{
	class ExhaustsEffectOnWater01
	{
		simulation="particles";
		type="ExhaustSmokeOnWater";
		lifetime="0.1";
	};
};
class ExhaustEffectBigOnWater
{
	class ExhaustsEffectBigOnWater01
	{
		simulation="particles";
		type="ExhaustSmokeBigOnWater";
		lifetime="0.1";
	};
};
class LDustEffects
{
	class LeftDust1
	{
		simulation="particles";
		type="LeftDust1";
		qualityLevel=2;
	};
	class LeftDust1Med
	{
		simulation="particles";
		type="LeftDust1Med";
		qualityLevel=1;
	};
	class LeftDust1Low
	{
		simulation="particles";
		type="LeftDust1Low";
		qualityLevel=0;
	};
	class LeftDustLong
	{
		simulation="particles";
		type="LeftDustLong";
		qualityLevel=2;
	};
	class LeftDustLongMed
	{
		simulation="particles";
		type="LeftDustLongMed";
		qualityLevel=1;
	};
	class LeftDustWater1
	{
		simulation="particles";
		type="LeftDustWater1";
		qualityLevel=2;
	};
	class LeftDustWater1Med
	{
		simulation="particles";
		type="LeftDustWater1Med";
		qualityLevel=1;
	};
	class LeftDustWater1Low
	{
		simulation="particles";
		type="LeftDustWater1Low";
		qualityLevel=0;
	};
	class LeftVehicleWater1
	{
		simulation="particles";
		type="LeftVehicleWater1";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=2;
	};
	class LeftVehicleWaterMed1
	{
		simulation="particles";
		type="LeftVehicleWater1";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=1;
	};
	class LVehicleWaterTrack1
	{
		simulation="particles";
		type="LVehicleWaterTrack";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=2;
	};
	class LVehicleWaterTrackMed1
	{
		simulation="particles";
		type="LVehicleWaterTrackMed";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=1;
	};
	class LVehicleWaterTrackLow1
	{
		simulation="particles";
		type="LVehicleWaterTrackLow";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=0;
	};
	class LVehicleWaterTrackFront1
	{
		simulation="particles";
		type="LVehicleWaterTrackFront";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=2;
	};
};
class RDustEffects
{
	class RightDust1
	{
		simulation="particles";
		type="RightDust1";
		qualityLevel=2;
	};
	class RightDust1Med
	{
		simulation="particles";
		type="RightDust1Med";
		qualityLevel=1;
	};
	class RightDust1Low
	{
		simulation="particles";
		type="RightDust1Low";
		qualityLevel=0;
	};
	class RightDustLong
	{
		simulation="particles";
		type="RightDustLong";
		qualityLevel=2;
	};
	class RightDustLongMed
	{
		simulation="particles";
		type="RightDustLongMed";
		qualityLevel=1;
	};
	class RightDustWater1
	{
		simulation="particles";
		type="RightDustWater1";
		qualityLevel=2;
	};
	class RightDustWater1Med
	{
		simulation="particles";
		type="RightDustWater1Med";
		qualityLevel=1;
	};
	class RightDustWater1Low
	{
		simulation="particles";
		type="RightDustWater1Low";
		qualityLevel=0;
	};
	class RightVehicleWater1
	{
		simulation="particles";
		type="RightVehicleWater1";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=2;
	};
	class RightVehicleWaterMed1
	{
		simulation="particles";
		type="RightVehicleWater1";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=1;
	};
	class RVehicleWaterTrack1
	{
		simulation="particles";
		type="RVehicleWaterTrack";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=2;
	};
	class RVehicleWaterTrackMed1
	{
		simulation="particles";
		type="RVehicleWaterTrackMed";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=1;
	};
	class RVehicleWaterTrackLow1
	{
		simulation="particles";
		type="RVehicleWaterTrackLow";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=0;
	};
	class RVehicleWaterTrackFront1
	{
		simulation="particles";
		type="RVehicleWaterTrackFront";
		enabled="(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel=2;
	};
};
class LDustEffectsAir
{
	class LeftDust1
	{
		simulation="particles";
		type="LeftDust1Air";
		qualityLevel=2;
	};
	class LeftDust1Med
	{
		simulation="particles";
		type="LeftDust1AirMed";
		qualityLevel=1;
	};
	class LeftDust1Low
	{
		simulation="particles";
		type="LeftDust1AirLow";
		qualityLevel=0;
	};
	class LeftDustLong
	{
		simulation="particles";
		type="LeftDustLongAir";
		qualityLevel=2;
	};
	class LeftDustLongMed
	{
		simulation="particles";
		type="LeftDustLongAirMed";
		qualityLevel=1;
	};
};
class RDustEffectsAir
{
	class RightDust1
	{
		simulation="particles";
		type="RightDust1Air";
		qualityLevel=2;
	};
	class RightDust1Med
	{
		simulation="particles";
		type="RightDust1AirMed";
		qualityLevel=1;
	};
	class RightDust1Low
	{
		simulation="particles";
		type="RightDust1AirLow";
		qualityLevel=0;
	};
	class RightDustLong
	{
		simulation="particles";
		type="RightDustLongAir";
		qualityLevel=2;
	};
	class RightDustLongMed
	{
		simulation="particles";
		type="RightDustLongAirMed";
		qualityLevel=1;
	};
};
class DustEffectBottom
{
	class DustEffectBottom1
	{
		simulation="particles";
		type="DustEffectBottom1";
		enabled="humidity interpolate [0.1,0.101,0,1]";
	};
};
class LDustEffectsMan
{
	class LeftDust1
	{
		simulation="particles";
		type="LeftDustMan";
		enabled="density interpolate [0.15,0.15001,-1,1]";
		lifetime=0.1;
		qualityLevel=2;
	};
	class LeftDustMed
	{
		simulation="particles";
		type="LeftDustManMed";
		enabled="density interpolate [0.15,0.15001,-1,1]";
		lifetime=0.1;
		qualityLevel=1;
	};
	class LeftDustWater1
	{
		simulation="particles";
		type="DustWaterMan";
		lifetime=0.30000001;
	};
};
class RDustEffectsMan
{
	class RightDust1
	{
		simulation="particles";
		type="RightDustMan";
		enabled="density interpolate [0.15,0.15001,-1,1]";
		lifetime=0.1;
		qualityLevel=2;
	};
	class RightDustMed
	{
		simulation="particles";
		type="RightDustManMed";
		enabled="density interpolate [0.15,0.15001,-1,1]";
		lifetime=0.1;
		qualityLevel=1;
	};
	class RightDustWater1
	{
		simulation="particles";
		type="DustWaterMan";
		lifetime=0.30000001;
	};
};
class LSandEffects
{
	class LSand1
	{
		simulation="particles";
		type="LeftSand";
		qualityLevel=2;
	};
	class LSand1Med
	{
		simulation="particles";
		type="LeftSandMed";
		qualityLevel=1;
	};
};
class RSandEffects
{
	class RSand1
	{
		simulation="particles";
		type="RightSand";
		qualityLevel=2;
	};
	class RSand1Med
	{
		simulation="particles";
		type="RightSandMed";
		qualityLevel=1;
	};
};
class LSandEffectsBig
{
	class LSandBig1
	{
		simulation="particles";
		type="LeftSandBig";
	};
};
class RSandEffectsBig
{
	class RSandBig1
	{
		simulation="particles";
		type="RightSandBig";
	};
};
class LDirtEffects
{
	class LDirt1
	{
		simulation="particles";
		type="LeftDirt";
		enabled="humidity interpolate [0.1,0.11,-1,1]";
		qualityLevel=2;
	};
	class LDirt1Med
	{
		simulation="particles";
		type="LeftDirt";
		enabled="humidity interpolate [0.1,0.11,-1,1]";
		qualityLevel=1;
	};
};
class RDirtEffects
{
	class RDirt1
	{
		simulation="particles";
		type="RightDirt";
		enabled="humidity interpolate [0.1,0.11,-1,1]";
		qualityLevel=2;
	};
	class RDirt1Med
	{
		simulation="particles";
		type="RightDirt";
		enabled="humidity interpolate [0.1,0.11,-1,1]";
		qualityLevel=1;
	};
};
class LDirtEffectsBig
{
	class LDirt1
	{
		simulation="particles";
		type="LeftDirtBig";
		enabled="humidity interpolate [0.1,0.11,-1,1]";
		qualityLevel=2;
	};
	class LDirt1Med
	{
		simulation="particles";
		type="LeftDirtBig";
		enabled="humidity interpolate [0.1,0.11,-1,1]";
		qualityLevel=1;
	};
};
class RDirtEffectsBig
{
	class RDirt1
	{
		simulation="particles";
		type="RightDirtBig";
		enabled="humidity interpolate [0.1,0.11,-1,1]";
		qualityLevel=2;
	};
	class RDirt1Med
	{
		simulation="particles";
		type="RightDirtBig";
		enabled="humidity interpolate [0.1,0.11,-1,1]";
		qualityLevel=1;
	};
};
class LGrassEffects
{
	class LGrass1
	{
		simulation="particles";
		type="LeftGrass";
		qualityLevel=2;
	};
	class LGrass1Med
	{
		simulation="particles";
		type="LeftGrassMed";
		qualityLevel=1;
	};
};
class RGrassEffects
{
	class RGrass1
	{
		simulation="particles";
		type="RightGrass";
		qualityLevel=2;
	};
	class RGrass1Med
	{
		simulation="particles";
		type="RightGrassMed";
		qualityLevel=1;
	};
};
class LGrassEffectsBig
{
	class LGrass1
	{
		simulation="particles";
		type="LeftGrassBig";
		qualityLevel=2;
	};
	class LGrass1Med
	{
		simulation="particles";
		type="LeftGrassBig";
		qualityLevel=1;
	};
};
class RGrassEffectsBig
{
	class RGrass1
	{
		simulation="particles";
		type="RightGrassBig";
		qualityLevel=2;
	};
	class RGrass1Med
	{
		simulation="particles";
		type="RightGrassBig";
		qualityLevel=1;
	};
};
class LGrassDryEffects
{
	class LGrassDry1
	{
		simulation="particles";
		type="LeftGrassDry";
		qualityLevel=2;
	};
	class LGrassDry1Med
	{
		simulation="particles";
		type="LeftGrassDryMed";
		qualityLevel=1;
	};
};
class RGrassDryEffects
{
	class RGrassDry1
	{
		simulation="particles";
		type="RightGrassDry";
		qualityLevel=2;
	};
	class RGrassDry1Med
	{
		simulation="particles";
		type="RightGrassDryMed";
		qualityLevel=1;
	};
};
class LGrassEffectsDryBig
{
	class LGrassDry1
	{
		simulation="particles";
		type="LeftGrassDryBig";
		qualityLevel=2;
	};
	class LGrassDry1Med
	{
		simulation="particles";
		type="LeftGrassDryBig";
		qualityLevel=1;
	};
};
class RGrassEffectsDryBig
{
	class RGrassDry1
	{
		simulation="particles";
		type="RightGrassDryBig";
		qualityLevel=2;
	};
	class RGrassDry1Med
	{
		simulation="particles";
		type="RightGrassDryBig";
		qualityLevel=1;
	};
};
class LStonesEffects
{
	class LStones1
	{
		simulation="particles";
		type="LeftStones";
		qualityLevel=2;
	};
	class LStones1Med
	{
		simulation="particles";
		type="LeftStones";
		qualityLevel=1;
	};
};
class RStonesEffects
{
	class RStones1
	{
		simulation="particles";
		type="RightStones";
		qualityLevel=2;
	};
	class RStones1Med
	{
		simulation="particles";
		type="RightStones";
		qualityLevel=1;
	};
};
class LStonesEffectsBig
{
	class LStones1
	{
		simulation="particles";
		type="LeftStonesBig";
		qualityLevel=2;
	};
	class LStones1Med
	{
		simulation="particles";
		type="LeftStonesBig";
		qualityLevel=1;
	};
};
class RStonesEffectsBig
{
	class RStones1
	{
		simulation="particles";
		type="RightStonesBig";
		qualityLevel=2;
	};
	class RStones1Med
	{
		simulation="particles";
		type="RightStonesBig";
		qualityLevel=1;
	};
};
class PersonDust
{
	class PersonDust1
	{
		simulation="particles";
		type="PersonDust1";
		qualityLevel=2;
	};
	class PersonDust1M
	{
		simulation="particles";
		type="PersonDust1";
		qualityLevel=1;
	};
};
class RFastWaterEffects
{
	class RightWater1
	{
		simulation="particles";
		type="RightWater1";
		qualityLevel=2;
	};
	class RightWater1M
	{
		simulation="particles";
		type="RightWater1M";
		qualityLevel=1;
	};
	class RightWater1L
	{
		simulation="particles";
		type="RightWater1L";
		qualityLevel=0;
	};
	class RightWater2
	{
		simulation="particles";
		type="RightWater2";
		qualityLevel=2;
	};
};
class LFastWaterEffects
{
	class LeftWater1
	{
		simulation="particles";
		type="LeftWater1";
		qualityLevel=2;
	};
	class LeftWater1M
	{
		simulation="particles";
		type="LeftWater1M";
		qualityLevel=1;
	};
	class LeftWater1L
	{
		simulation="particles";
		type="LeftWater1L";
		qualityLevel=0;
	};
	class LeftWater2
	{
		simulation="particles";
		type="LeftWater2";
		qualityLevel=2;
	};
};
class RWaterEffects
{
	class RightWaterSmall1
	{
		simulation="particles";
		type="RightWaterSmall1";
	};
};
class LWaterEffects
{
	class LeftWaterSmall1
	{
		simulation="particles";
		type="LeftWaterSmall1";
	};
};
class REngEffects
{
	class RightEng1
	{
		simulation="particles";
		type="RightEng1";
		qualityLevel=2;
	};
	class RWaterTrack1
	{
		simulation="particles";
		type="RWaterTrack1";
		qualityLevel=2;
	};
	class RWaterTrack1M
	{
		simulation="particles";
		type="RWaterTrack1M";
		qualityLevel=1;
	};
	class RWaterTrack1L
	{
		simulation="particles";
		type="RWaterTrack1L";
		qualityLevel=0;
	};
};
class LEngEffects
{
	class LeftEng1
	{
		simulation="particles";
		type="LeftEng1";
		qualityLevel=2;
	};
	class LWaterTrack1
	{
		simulation="particles";
		type="LWaterTrack1";
		qualityLevel=2;
	};
	class LWaterTrack1M
	{
		simulation="particles";
		type="LWaterTrack1M";
		qualityLevel=1;
	};
	class LWaterTrack1L
	{
		simulation="particles";
		type="LWaterTrack1L";
		qualityLevel=0;
	};
};
class REngEffectsSmall
{
	class RightEng1
	{
		simulation="particles";
		type="RightEng1";
		qualityLevel=2;
	};
	class RWaterTrack1
	{
		simulation="particles";
		type="RWaterTrackSmall1";
		qualityLevel=2;
	};
	class RWaterTrack1M
	{
		simulation="particles";
		type="RWaterTrackSmall1M";
		qualityLevel=1;
	};
	class RWaterTrack1L
	{
		simulation="particles";
		type="RWaterTrackSmall1L";
		qualityLevel=0;
	};
};
class LEngEffectsSmall
{
	class LeftEng1
	{
		simulation="particles";
		type="LeftEng1";
		qualityLevel=2;
	};
	class LWaterTrack1
	{
		simulation="particles";
		type="LWaterTrackSmall1";
		qualityLevel=2;
	};
	class LWaterTrack1M
	{
		simulation="particles";
		type="LWaterTrackSmall1M";
		qualityLevel=1;
	};
	class LWaterTrack1L
	{
		simulation="particles";
		type="LWaterTrackSmall1L";
		qualityLevel=0;
	};
};
class WaterWhirlEffect
{
};
class FDustEffects
{
};
class HeliDust
{
	class HDust1
	{
		simulation="particles";
		type="HDust1";
		qualityLevel=2;
	};
	class HDust1M
	{
		simulation="particles";
		type="HDust1M";
		qualityLevel=1;
	};
	class HDust1L
	{
		simulation="particles";
		type="HDust1L";
		qualityLevel=0;
	};
	class HDust1Long
	{
		simulation="particles";
		type="HDust1Long";
		qualityLevel=2;
	};
	class HDust1LongM
	{
		simulation="particles";
		type="HDust1LongM";
		qualityLevel=1;
	};
};
class HeliDustBig
{
	class HDust1
	{
		simulation="particles";
		type="HDust1";
		qualityLevel=2;
	};
	class HDust1M
	{
		simulation="particles";
		type="HDust1M";
		qualityLevel=1;
	};
	class HDust1L
	{
		simulation="particles";
		type="HDust1L";
		qualityLevel=0;
	};
	class HDust1Long
	{
		simulation="particles";
		type="HDust1LongBig";
		qualityLevel=2;
	};
	class HDust1LongM
	{
		simulation="particles";
		type="HDust1LongBigM";
		qualityLevel=1;
	};
};
class HeliWater
{
	class HWater1
	{
		simulation="particles";
		type="HWater1";
		qualityLevel=2;
	};
	class HWater1M
	{
		simulation="particles";
		type="HWater1M";
		qualityLevel=1;
	};
	class HWater1L
	{
		simulation="particles";
		type="HWater1M";
		qualityLevel=0;
	};
	class HWater2
	{
		simulation="particles";
		type="HWater2";
		qualityLevel=2;
	};
	class HWater3
	{
		simulation="particles";
		type="HWater3";
		qualityLevel=2;
	};
	class HWater3M
	{
		simulation="particles";
		type="HWater3M";
		qualityLevel=1;
	};
};
class UAVDust
{
	class UAVDust1
	{
		simulation="particles";
		type="UAVDust1";
		enabled="((density - 0.4) interpolate [-0.00001,0.00001,-1,1])";
		qualityLevel=2;
	};
	class UAVDust1M
	{
		simulation="particles";
		type="UAVDust1M";
		enabled="((density - 0.4) interpolate [-0.00001,0.00001,-1,1])";
		qualityLevel=1;
	};
	class UAVDust1L
	{
		simulation="particles";
		type="UAVDust1L";
		enabled="((density - 0.4) interpolate [-0.00001,0.00001,-1,1])";
		qualityLevel=0;
	};
	class UAVDust1Long
	{
		simulation="particles";
		type="UAVDust1Long";
		enabled="((density - 0.4) interpolate [-0.00001,0.00001,-1,1])";
		qualityLevel=2;
	};
	class UAVDust1LongM
	{
		simulation="particles";
		type="UAVDust1LongM";
		enabled="((density - 0.4) interpolate [-0.00001,0.00001,-1,1])";
		qualityLevel=1;
	};
};
class UAVWater
{
	class UAVWater1
	{
		simulation="particles";
		type="UAVWater1";
		enabled="density interpolate [0.05,0.050001,-1,1]";
		qualityLevel=2;
	};
	class UAVWater1M
	{
		simulation="particles";
		type="UAVWater1M";
		enabled="density interpolate [0.05,0.050001,-1,1]";
		qualityLevel=1;
	};
	class UAVWater1L
	{
		simulation="particles";
		type="UAVWater1M";
		qualityLevel=0;
	};
};
class DamageSmokeHeli
{
	class DSmoke1
	{
		simulation="particles";
		type="DSmoke1";
	};
};
class DamageSmokePlane
{
	class DSmoke1
	{
		simulation="particles";
		type="DSmoke2";
	};
};
class SmallFire
{
	class Light1
	{
		simulation="light";
		type="SmallFireLight";
	};
	class sound
	{
		simulation="sound";
		type="Fire";
	};
	class Fire1
	{
		simulation="particles";
		type="SmallFireF";
	};
	class Refract1
	{
		simulation="particles";
		type="SmallFireFRefract";
	};
	class Smoke1
	{
		simulation="particles";
		type="SmallFireS";
	};
};
class SmallFireBarrel
{
	class Light1
	{
		simulation="light";
		type="SmallFireLight";
	};
	class sound
	{
		simulation="sound";
		type="Fire";
	};
	class Fire1
	{
		simulation="particles";
		type="SmallFireBarrel";
	};
	class Smoke1
	{
		simulation="particles";
		type="SmallFireS";
	};
};
class SmokeShellWhiteEffect
{
	class SmokeShell
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2
	{
		simulation="particles";
		type="SmokeShellWhite2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeShellRedEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
	};
	class SmokeShell2: SmokeShell2
	{
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellRedUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellRed2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeShellGreenEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
	};
	class SmokeShell2: SmokeShell2
	{
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellGreenUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellGreen2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeShellYellowEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
	};
	class SmokeShell2: SmokeShell2
	{
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellYellowUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellYellow2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeShellPurpleEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
	};
	class SmokeShell2: SmokeShell2
	{
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellPurpleUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellPurple2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeShellBlueEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
	};
	class SmokeShell2: SmokeShell2
	{
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellBlueUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellBlue2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeShellOrangeEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
	};
	class SmokeShell2: SmokeShell2
	{
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellOrangeUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellOrange2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeShellWhiteWater
{
	class SmokeShellWhiteWater
	{
		simulation="particles";
		type="SmokeShellWhiteWater";
		position[]={0,0,0};
		intensity=1;
		interval=0.050000001;
	};
};
class SmokeShellRedWater
{
	class SmokeShellRedWater
	{
		simulation="particles";
		type="SmokeShellRedWater";
		position[]={0,0,0};
		intensity=1;
		interval=0.050000001;
	};
};
class SmokeShellGreenWater
{
	class SmokeShellGreenWater
	{
		simulation="particles";
		type="SmokeShellGreenWater";
		position[]={0,0,0};
		intensity=1;
		interval=0.050000001;
	};
};
class SmokeShellYellowWater
{
	class SmokeShellYellowWater
	{
		simulation="particles";
		type="SmokeShellYellowWater";
		position[]={0,0,0};
		intensity=1;
		interval=0.050000001;
	};
};
class SmokeShellPurpleWater
{
	class SmokeShellPurpleWater
	{
		simulation="particles";
		type="SmokeShellPurpleWater";
		position[]={0,0,0};
		intensity=1;
		interval=0.050000001;
	};
};
class SmokeShellBlueWater
{
	class SmokeShellBlueWater
	{
		simulation="particles";
		type="SmokeShellBlueWater";
		position[]={0,0,0};
		intensity=1;
		interval=0.050000001;
	};
};
class SmokeShellOrangeWater
{
	class SmokeShellOrangeWater
	{
		simulation="particles";
		type="SmokeShellOrangeWater";
		position[]={0,0,0};
		intensity=1;
		interval=0.050000001;
	};
};
class SmokeShellWhiteSmall
{
	class SmokeShellWhite
	{
		simulation="particles";
		type="SmokeShellWhiteSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class IncinerateShell
{
	class SmokeShellWhite
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class Fire1
	{
		simulation="particles";
		type="IncinerateFire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class ChemlightLight_green
{
	class Light1
	{
		simulation="light";
		type="ChemLight_green";
	};
};
class ChemlightLight_red
{
	class Light1
	{
		simulation="light";
		type="ChemLight_red";
	};
};
class ChemlightLight_yellow
{
	class Light1
	{
		simulation="light";
		type="ChemLight_yellow";
	};
};
class ChemlightLight_blue
{
	class Light1
	{
		simulation="light";
		type="ChemLight_blue";
	};
};
class ScudEffect
{
	class Light1
	{
		simulation="light";
		type="ScudLight";
	};
	class Smoke
	{
		simulation="particles";
		type="ScudSmoke";
	};
	class Smoke2
	{
		simulation="particles";
		type="ScudSmoke2";
	};
	class Fire
	{
		simulation="particles";
		type="ScudFire";
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle;
	class car: LandVehicle
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=0.001;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=0;
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
				lifeTime=2.8;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class tank: LandVehicle
	{
		class DestructionEffects
		{
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=0.001;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=0;
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
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class NonStrategic;
	class Crater: NonStrategic
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=12.26;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Crater.jpg";
		_generalMacro="Crater";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_crater";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Craters";
		model="\a3\Data_f\krater.p3d";
		icon="iconObject_1x1";
		accuracy=1000;
		destrType="DestructNo";
		armor=20;
	};
	class CraterLong: NonStrategic
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=11.47;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.064000003;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\CraterLong.jpg";
		_generalMacro="CraterLong";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgvehicles_craterlong";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Craters";
		model="\A3\data_f\ParticleEffects\CraterLong\CraterLong.p3d";
		icon="iconObject_4x5";
		accuracy=1000;
		destrType="DestructNo";
		armor=20;
	};
	class CraterLong_small: CraterLong
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=8.0299997;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.045000002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\CraterLong_small.jpg";
		_generalMacro="CraterLong_small";
		displayName="$STR_a3_cfgvehicles_craterlong_small";
		model="\A3\data_f\ParticleEffects\CraterLong\CraterLong_small.p3d";
	};
};
class AirDestructionEffects
{
	class LightBig1
	{
		simulation="light";
		type="ObjectDestructionLight";
		position="destructionEffect1";
		intensity=0.001;
		interval=1;
		start="damage - 0.99";
		enabled="distToWater";
		lifeTime=200;
	};
	class Sound
	{
		simulation="sound";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		type="Fire";
		start="damage - 0.99";
		lifeTime=200;
	};
	class Fire
	{
		simulation="particles";
		type="AirObjectDestructionFire";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class Refract1
	{
		simulation="particles";
		type="ObjectDestructionRefractSmall";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class SmokeBig1
	{
		simulation="particles";
		type="AirObjectDestructionSmoke";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class FireSparksBig1
	{
		simulation="particles";
		type="AirFireSparks";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
};
class UAVDestructionEffects
{
	class Smoke
	{
		simulation="particles";
		type="UAVWreckSmoke";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		lifeTime=15;
	};
};
class collisionEffect
{
	class collisionVeh1
	{
		simulation="particles";
		type="collisionVeh1";
		lifeTime=0.2;
	};
	class collisionVeh2
	{
		simulation="particles";
		type="collisionVeh2";
		lifeTime=0.2;
	};
	class collisionVehSmoke
	{
		simulation="particles";
		type="collisionVehSmoke";
		enabled="forceSize interpolate [150,150.1,-1,1]";
		lifeTime=0.2;
	};
};
class FireDamage
{
	class FireDamage1
	{
		simulation="particles";
		type="FireDamage1";
	};
};
class EmptyEffect
{
};
class ScubaEffect
{
	class BubblesMedium1
	{
		simulation="particles";
		type="BubblesMedium";
		lifeTime=0.89999998;
	};
	class BubblesSmall1
	{
		simulation="particles";
		type="BubblesSmall";
		lifeTime=0.44999999;
	};
};
class WingVortices
{
	class WingTrail1
	{
		simulation="particles";
		type="WingTrail";
		qualityLevel=2;
		enabled="accelY interpolate [39.99,40,-1,1]";
	};
	class WingTrail1Med
	{
		simulation="particles";
		type="WingTrailMed";
		qualityLevel=1;
		enabled="accelY interpolate [39.99,40,-1,1]";
	};
};
class BodyVortices
{
	class BodyTrail1
	{
		simulation="particles";
		type="BodyTrail";
		qualityLevel=2;
		enabled="accelY interpolate [89.99,90,-1,1]";
	};
	class BodyTrail1Med
	{
		simulation="particles";
		type="BodyTrailMed";
		qualityLevel=1;
		enabled="accelY interpolate [89.99,90,-1,1]";
	};
};
class BulletBubbles
{
	class BulletBubbles1
	{
		simulation="particles";
		type="BulletBubbles1";
	};
};
class ImpactUnderwater
{
	class ImpactUnderwater1
	{
		simulation="particles";
		type="ImpactUnderwater1";
	};
};
