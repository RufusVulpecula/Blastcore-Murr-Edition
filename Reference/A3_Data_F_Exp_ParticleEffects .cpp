class CfgPatches
{
	class A3_Data_F_Exp_ParticleEffects
	{
		addonRootClass="A3_Data_F_Exp";
		requiredAddons[]=
		{
			"A3_Data_F_Exp"
		};
		requiredVersion=0.1;
		units[]={};
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
	class Default;
	class RightWater1Scooter: Default
	{
		interval=0.016000001;
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
		lifeTime=4;
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,0.3,1.2])",
			"speedY + 0.7",
			"speedZ * (turn interpolate [-1,1,0.3,1.2])"
		};
		rotationVelocity=1;
		weight=2;
		volume=1;
		rubbing=0.1;
		size[]={2,15};
		sizeCoef="size*0.8";
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
	class LeftWater1Scooter: RightWater1Scooter
	{
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,1.2,0.3])",
			"speedY + 0.7",
			"speedZ * (turn interpolate [-1,1,1.2,0.3])"
		};
	};
	class RightWater1ScooterM: RightWater1Scooter
	{
		interval=0.028000001;
	};
	class LeftWater1ScooterM: LeftWater1Scooter
	{
		interval=0.028000001;
	};
	class RightWater1ScooterL: RightWater1Scooter
	{
		interval=0.037999999;
	};
	class LeftWater1ScooterL: LeftWater1Scooter
	{
		interval=0.037999999;
	};
	class RightWater2Scooter: Default
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
	class LeftWater2Scooter: RightWater2Scooter
	{
		moveVelocity[]=
		{
			"speedX * (turn interpolate [-1,1,1.3,0.7])",
			"speedY + 1",
			"speedZ * (turn interpolate [-1,1,1.3,0.7])"
		};
	};
	class RightWaterSmall1Scooter: Default
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
	class LeftWaterSmall1Scooter: RightWaterSmall1Scooter
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
	class RightEng1Scooter: Default
	{
		interval=0.039999999;
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
		weight=1.3;
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
	class LeftEng1Scooter: RightEng1Scooter
	{
		moveVelocity[]=
		{
			"speedX",
			"speedY + 0.15",
			"speedZ"
		};
		MoveVelocityVar[]={0.5,0,0.5};
	};
	class RWaterTrack1Scooter: Default
	{
		interval="0.01 + (0.12/(speedSize+0.1))";
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
		lifeTime="1 + ((speedSize - 3) interpolate [0,5,0,1])";
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.35;
		volume=1;
		rubbing=0;
		size[]={1.5,5,7,9};
		sizeCoef="0.2 * (1 + ((speedSize - 3) interpolate [0,5,0,1.5]))";
		color[]=
		{
			{1,1,1,0.60000002},
			{1,1,1,0.69999999},
			{1,1,1,0.40000001},
			{1,1,1,0.30000001},
			{1,1,1,0.14},
			{1,1,1,0.029999999}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.02 + (speedSize/100)"
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		keepOnSurface=1;
		surfaceOffset=0.12;
		lifeTimeVar=0.5;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.80000001,0,0.80000001};
		MoveVelocityVar[]=
		{
			"0.2 * speedSize",
			0,
			"0.2 * speedSize"
		};
		rotationVelocityVar=5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class LWaterTrack1Scooter: RWaterTrack1Scooter
	{
	};
	class ExhaustSmoke1PlaneSmall: Default
	{
		interval="0.002 * (damage interpolate [0,2.5,1,8])";
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
		size[]={0.30000001,1.5};
		sizeCoef="damage interpolate [0,1,1,3]";
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
			"intensity/1.5 * (damage interpolate [0.3,0.4,1,6]))"
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
	class ExhaustSmoke1PlaneSmallHP: Default
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
		size[]={0.2,1};
		sizeCoef="0.8*(engineDamage interpolate [0,1,1,6])";
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
	class ExhaustSmoke1VTOL: Default
	{
		interval="0.0014 * (damage interpolate [0,2.5,1,8])";
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
		lifeTime="0.2 * (damage interpolate [0,1,1,12])";
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
		sizeCoef="2 * (damage interpolate [0,1,1,6])";
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
		lifeTimeVar="0.1 * (damage interpolate [0,1,1,4])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"2.5 * (damage interpolate [0,1,1,2.5])",
			"2.5 * (damage interpolate [0,1,1,2.5])",
			"2.5 * (damage interpolate [0,1,1,2.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke1VTOLHP: Default
	{
		interval="0.0014 * (engineDamage interpolate [0,2.5,1,8])";
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
		lifeTime="0.2 * (engineDamage interpolate [0,1,1,12])";
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
		sizeCoef="2 * (engineDamage interpolate [0,1,1,6])";
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
		lifeTimeVar="0.1 * (engineDamage interpolate [0,1,1,4])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"2.5 * (engineDamage interpolate [0,1,1,2.5])",
			"2.5 * (engineDamage interpolate [0,1,1,2.5])",
			"2.5 * (engineDamage interpolate [0,1,1,2.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ExhaustSmoke2VTOL: Default
	{
		interval="0.003 * (vehicleSpeedSize interpolate [0,40,1,0.25]) * (damage interpolate [0,2.5,1,20])";
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
		lifeTime="0.3 * (vehicleSpeedSize interpolate [0,40,0.35,1]) * (damage interpolate [0,1,1,12])";
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
	class HDustVTOL1: Default
	{
		interval="0.02 - 0.015 * ((density/8.2) interpolate [0,0.6,0.3,0.6])";
		circleRadius=4;
		circleVelocity[]=
		{
			"speed/13.7",
			0,
			"speed/13.7"
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
			"0.5*((density/8.2) interpolate [0,0.6,0.3,0.6])"
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
	class HDustVTOL1Long: Default
	{
		interval="(0.25 - 0.235 * ((density/8.2) interpolate [0.3,0.6,0.3,0.6]))/2";
		circleRadius=8;
		circleVelocity[]=
		{
			"speed/13.7",
			0,
			"speed/13.7"
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
			"0.025*((density/8.2) interpolate [0,0.6,0,0.6])"
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
	class HDustVTOL1Big: Default
	{
		interval="0.02 - 0.0165 * ((density/8.2) interpolate [0,0.6,0.1,0.6])";
		circleRadius=8;
		circleVelocity[]=
		{
			"speed/13.7",
			0,
			"speed/13.7"
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
		sizeCoef=1.4;
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
			"0.65*((density/8.2) interpolate [0,0.6,0.3,0.6])"
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
	class HDustVTOL1LongBig: Default
	{
		interval="(0.25 - 0.235 * ((density/8.2) interpolate [0.3,0.6,0.3,0.6]))/4";
		circleRadius=14;
		circleVelocity[]=
		{
			"speed/13.7",
			0,
			"speed/13.7"
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
			"0.025*((density/8.2) interpolate [0,0.6,0,0.6])"
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
	class HWaterVTOL1: Default
	{
		interval="0.01 - 0.0095 * ((density/8.2) interpolate [0,0.6,0,0.6])";
		circleRadius=6;
		circleVelocity[]=
		{
			"speed/13.7",
			0,
			"speed/13.7"
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
			"2 * ((density/8.2) interpolate [0,0.6,0,0.6])"
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
	class HWaterVTOL2: Default
	{
		interval="0.02 - 0.019 * ((density/8.2) interpolate [0,0.6,0,0.6])";
		circleRadius=8;
		circleVelocity[]=
		{
			"speed/13.7",
			0,
			"speed/13.7"
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
			"1.4 * ((density/8.2) interpolate [0,0.6,0,0.6])"
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
	class HWaterVTOL3: Default
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
			"18 * ((density/8.2) interpolate [0,0.6,0,0.6]) * ((density/8.2) interpolate [0,0.6,0,0.6])"
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
	class HWaterVTOL1Big: Default
	{
		interval="0.01 - 0.0095 * ((density/8.2) interpolate [0,0.6,0,0.6])";
		circleRadius=16;
		circleVelocity[]=
		{
			"speed/13.7",
			0,
			"speed/13.7"
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
		sizeCoef=1.4;
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
			"2 * ((density/8.2) interpolate [0,0.6,0,0.6])"
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
	class HWaterVTOL2Big: Default
	{
		interval="0.02 - 0.019 * ((density/8.2) interpolate [0,0.6,0,0.6])";
		circleRadius=8;
		circleVelocity[]=
		{
			"speed/13.7",
			0,
			"speed/13.7"
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
			"1.4 * ((density/8.2) interpolate [0,0.6,0,0.6])"
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
	class HWaterVTOL3Big: Default
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
			"18 * ((density/8.2) interpolate [0,0.6,0,0.6]) * ((density/8.2) interpolate [0,0.6,0,0.6])"
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
	class LeftDust1Red: Default
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
			{0.5,0.30000001,0.2,0},
			{0.5,0.30000001,0.2,0.25},
			{0.5,0.30000001,0.2,0.25},
			{0.5,0.30000001,0.2,0.2},
			{0.5,0.30000001,0.2,0.1},
			{0.5,0.30000001,0.2,0.050000001},
			{0.5,0.30000001,0.2,0.050000001},
			{0.5,0.30000001,0.2,0}
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
	class RightDust1Red: LeftDust1Red
	{
	};
	class LeftDust1RedMed: LeftDust1Red
	{
		interval="0.20 - 0.17 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.9;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.30000001;
		sizeVar=0.5;
	};
	class RightDust1RedMed: RightDust1Red
	{
		interval="0.20 - 0.17 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.9;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.30000001;
		sizeVar=0.5;
	};
	class LeftDust1RedLow: LeftDust1Red
	{
		interval="0.20 - 0.155 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.3;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.1;
		sizeVar=0.30000001;
	};
	class RightDust1RedLow: RightDust1Red
	{
		interval="0.20 - 0.155 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.3;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.1;
		sizeVar=0.30000001;
	};
	class LeftDustLongRed: Default
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
			{0.5,0.30000001,0.2,0.1},
			{0.5,0.30000001,0.2,0.1},
			{0.5,0.30000001,0.2,0.090000004},
			{0.5,0.30000001,0.2,0.079999998},
			{0.5,0.30000001,0.2,0.059999999},
			{0.5,0.30000001,0.2,0.039999999},
			{0.5,0.30000001,0.2,0.02},
			{0.5,0.30000001,0.2,0}
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
	class RightDustLongRed: LeftDustLongRed
	{
	};
	class LeftDustLongRedMed: LeftDustLongRed
	{
		interval="0.35 - 0.18 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=12;
		size[]={0.80000001,3,5,10,15,15,15,15,15,15};
		sizeCoef=1;
		lifeTimeVar=4;
		sizeVar=0.25;
	};
	class RightDustLongRedMed: RightDustLongRed
	{
		interval="0.35 - 0.12 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=12;
		size[]={0.80000001,3,5,10,15,15,15,15,15,15};
		sizeCoef=1;
		lifeTimeVar=4;
		sizeVar=0.25;
	};
	class LeftDust1AirRed: Default
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
			{0.5,0.30000001,0.2,0},
			{0.5,0.30000001,0.2,0.25},
			{0.5,0.30000001,0.2,0.25},
			{0.5,0.30000001,0.2,0.2},
			{0.5,0.30000001,0.2,0.1},
			{0.5,0.30000001,0.2,0.050000001},
			{0.5,0.30000001,0.2,0.050000001},
			{0.5,0.30000001,0.2,0}
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
	class RightDust1AirRed: LeftDust1AirRed
	{
	};
	class LeftDust1AirRedMed: LeftDust1AirRed
	{
		interval="0.20 - 0.17 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.9;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.30000001;
		sizeVar=0.5;
	};
	class RightDust1AirRedMed: RightDust1AirRed
	{
		interval="0.20 - 0.17 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.9;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.30000001;
		sizeVar=0.5;
	};
	class LeftDust1AirRedLow: LeftDust1AirRed
	{
		interval="0.20 - 0.155 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.3;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.1;
		sizeVar=0.30000001;
	};
	class RightDust1AirRedLow: RightDust1AirRed
	{
		interval="0.20 - 0.155 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=1.3;
		size[]={0.80000001,2.5,4,10};
		sizeCoef=1;
		lifeTimeVar=0.1;
		sizeVar=0.30000001;
	};
	class LeftDustLongAirRed: Default
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
			{0.5,0.30000001,0.2,0.1},
			{0.5,0.30000001,0.2,0.1},
			{0.5,0.30000001,0.2,0.090000004},
			{0.5,0.30000001,0.2,0.079999998},
			{0.5,0.30000001,0.2,0.059999999},
			{0.5,0.30000001,0.2,0.039999999},
			{0.5,0.30000001,0.2,0.02},
			{0.5,0.30000001,0.2,0}
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
	class RightDustLongAirRed: LeftDustLongAirRed
	{
	};
	class LeftDustLongAirRedMed: LeftDustLongAirRed
	{
		interval="0.35 - 0.18 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=12;
		size[]={0.80000001,3,5,10,15,15,15,15,15,15};
		sizeCoef=1;
		lifeTimeVar=4;
		sizeVar=0.25;
	};
	class RightDustLongAirRedMed: RightDustLongAirRed
	{
		interval="0.35 - 0.12 * ((dustness interpolate [0,1,0.8,1]) * (speedSize interpolate [1,23,0.9,1.0]) * (1-humidity))";
		lifeTime=12;
		size[]={0.80000001,3,5,10,15,15,15,15,15,15};
		sizeCoef=1;
		lifeTimeVar=4;
		sizeVar=0.25;
	};
	class LeftDustManRed: Default
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
			{0.5,0.30000001,0.2,0.80000001},
			{0.5,0.30000001,0.2,0.5},
			{0.5,0.30000001,0.2,0.40000001},
			{0.5,0.30000001,0.2,0.33000001},
			{0.5,0.30000001,0.2,0.25},
			{0.5,0.30000001,0.2,0.18000001},
			{0.5,0.30000001,0.2,0.0099999998},
			{0.5,0.30000001,0.2,0}
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
	class RightDustManRed: LeftDustManRed
	{
	};
	class LeftDustManRedMed: LeftDustManRed
	{
		interval="0.014 * (density interpolate [0.15,0.5,1.6,1])";
		lifeTime="1 * (dustness interpolate [0,1,0.8,1.5])";
		moveVelocity[]={0,0.18000001,0};
		size[]={0.079999998,0.40000001,0.69999999,1.25};
		lifeTimeVar=0.2;
		sizeVar=0.1;
	};
	class RightDustManRedMed: RightDustManRed
	{
		interval="0.014 * (density interpolate [0.15,0.5,1.6,1])";
		lifeTime="1 * (dustness interpolate [0,1,0.8,1.5])";
		moveVelocity[]={0,0.18000001,0};
		size[]={0.079999998,0.40000001,0.69999999,1.25};
		lifeTimeVar=0.2;
		sizeVar=0.1;
	};
	class RocketFrontsmokeRPG7: Default
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
			"- directionX * 3",
			"- directionY * 3",
			"- directionZ * 3"
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
			"positionX - directionLocalX * 0.9",
			"positionY - directionLocalY * 0.9",
			"positionZ - directionLocalZ * 0.9"
		};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1.85,1.85,1.85};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0.1,0.1,0.1,0.029999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBacksmokeRPG7: RocketFrontsmokeRPG7
	{
		interval=0.0099999998;
		lifeTime=3;
		moveVelocity[]=
		{
			"directionX * 0.5",
			"directionY * 0.5",
			"directionZ * 0.5"
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
			"positionX + directionLocalX * 0.5",
			"positionY + directionLocalY * 0.5",
			"positionZ + directionLocalZ * 0.5"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
	};
	class ImpactDust2Red: Default
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
				0.40000001,
				0.27500001,
				0.15000001,
				"(0.3 * dustness) + 0.05"
			},
			
			{
				0.60000002,
				0.41999999,
				0.25,
				"(0.21 * dustness) + 0.035"
			},
			
			{
				0.64999998,
				0.47,
				0.30000001,
				"(0.1 * dustness) + 0.016"
			},
			
			{
				0.64999998,
				0.47,
				0.30000001,
				"(0.036 * dustness) + 0.006"
			},
			{0.64999998,0.47,0.30000001,0}
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
	class ImpactDust2RedLow: Default
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
				0.40000001,
				0.27500001,
				0.15000001,
				"(0.3 * dustness) + 0.05"
			},
			
			{
				0.60000002,
				0.41999999,
				0.25,
				"(0.21 * dustness) + 0.035"
			},
			
			{
				0.64999998,
				0.47,
				0.30000001,
				"(0.1 * dustness) + 0.016"
			},
			
			{
				0.64999998,
				0.47,
				0.30000001,
				"(0.036 * dustness) + 0.006"
			},
			{0.64999998,0.47,0.30000001,0}
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
	class ImpactSandSmoke2Red: Default
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
		lifeTime="1";
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
				0.60000002,
				0.5,
				"0.3 + (0.3 * dustness)"
			},
			
			{
				0.80000001,
				0.60000002,
				0.5,
				"0.2 + (0.18 * dustness)"
			},
			
			{
				0.80000001,
				0.60000002,
				0.5,
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
};
class RFastWaterEffectsScooter
{
	class RightWater1Scooter
	{
		simulation="particles";
		type="RightWater1Scooter";
		qualityLevel=2;
	};
	class RightWater1ScooterM
	{
		simulation="particles";
		type="RightWater1ScooterM";
		qualityLevel=1;
	};
	class RightWater1ScooterL
	{
		simulation="particles";
		type="RightWater1ScooterL";
		qualityLevel=0;
	};
};
class LFastWaterEffectsScooter
{
	class LeftWater1Scooter
	{
		simulation="particles";
		type="LeftWater1Scooter";
		qualityLevel=2;
	};
	class LeftWater1ScooterM
	{
		simulation="particles";
		type="LeftWater1ScooterM";
		qualityLevel=1;
	};
	class LeftWater1ScooterL
	{
		simulation="particles";
		type="LeftWater1ScooterL";
		qualityLevel=0;
	};
};
class RWaterEffectsScooter
{
};
class LWaterEffectsScooter
{
};
class REngEffectsScooter
{
	class RightEng1
	{
		simulation="particles";
		type="RightEng1Scooter";
		qualityLevel=2;
	};
	class RWaterTrack1
	{
		simulation="particles";
		type="RWaterTrack1Scooter";
	};
};
class LEngEffectsScooter
{
	class LeftEng1Scooter
	{
		simulation="particles";
		type="LeftEng1Scooter";
		qualityLevel=2;
	};
	class LWaterTrack1
	{
		simulation="particles";
		type="LWaterTrack1Scooter";
	};
};
class ExhaustsEffectPlaneSmall
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1PlaneSmall";
	};
};
class ExhaustsEffectPlaneSmallHP
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1PlaneSmallHP";
	};
};
class ExhaustsEffectVTOL1
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1VTOL";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractPlane";
	};
};
class ExhaustsEffectVTOL1HP
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1VTOLHP";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractPlane";
	};
};
class ExhaustsEffectVTOL2
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke2VTOL";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractPlane";
	};
};
class VTOLDust
{
	class HDust1
	{
		simulation="particles";
		type="HDustVTOL1";
	};
	class HDust1Long
	{
		simulation="particles";
		type="HDustVTOL1Long";
	};
};
class VTOLDustBig
{
	class HDust1
	{
		simulation="particles";
		type="HDustVTOL1Big";
	};
	class HDust1Long
	{
		simulation="particles";
		type="HDustVTOL1LongBig";
	};
};
class VTOLWater
{
	class HWater1
	{
		simulation="particles";
		type="HWaterVTOL1";
	};
	class HWater2
	{
		simulation="particles";
		type="HWaterVTOL2";
	};
	class HWater3
	{
		simulation="particles";
		type="HWaterVTOL3";
	};
};
class VTOLWaterBig
{
	class HWater1
	{
		simulation="particles";
		type="HWaterVTOL1Big";
	};
	class HWater2
	{
		simulation="particles";
		type="HWaterVTOL2Big";
	};
	class HWater3
	{
		simulation="particles";
		type="HWaterVTOL3Big";
	};
};
class LDustEffectsRed
{
	class LeftDust1
	{
		simulation="particles";
		type="LeftDust1Red";
		qualityLevel=2;
	};
	class LeftDust1Med
	{
		simulation="particles";
		type="LeftDust1RedMed";
		qualityLevel=1;
	};
	class LeftDust1Low
	{
		simulation="particles";
		type="LeftDust1RedLow";
		qualityLevel=0;
	};
	class LeftDustLong
	{
		simulation="particles";
		type="LeftDustLongRed";
		qualityLevel=2;
	};
	class LeftDustLongMed
	{
		simulation="particles";
		type="LeftDustLongRedMed";
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
class RDustEffectsRed
{
	class RightDust1
	{
		simulation="particles";
		type="RightDust1Red";
		qualityLevel=2;
	};
	class RightDust1Med
	{
		simulation="particles";
		type="RightDust1RedMed";
		qualityLevel=1;
	};
	class RightDust1Low
	{
		simulation="particles";
		type="RightDust1RedLow";
		qualityLevel=0;
	};
	class RightDustLong
	{
		simulation="particles";
		type="RightDustLongRed";
		qualityLevel=2;
	};
	class RightDustLongMed
	{
		simulation="particles";
		type="RightDustLongRedMed";
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
class LDustEffectsAirRed
{
	class LeftDust1
	{
		simulation="particles";
		type="LeftDust1AirRed";
		qualityLevel=2;
	};
	class LeftDust1Med
	{
		simulation="particles";
		type="LeftDust1AirRedMed";
		qualityLevel=1;
	};
	class LeftDust1Low
	{
		simulation="particles";
		type="LeftDust1AirRedLow";
		qualityLevel=0;
	};
	class LeftDustLong
	{
		simulation="particles";
		type="LeftDustLongAirRed";
		qualityLevel=2;
	};
	class LeftDustLongMed
	{
		simulation="particles";
		type="LeftDustLongAirRedMed";
		qualityLevel=1;
	};
};
class RDustEffectsAirRed
{
	class RightDust1
	{
		simulation="particles";
		type="RightDust1AirRed";
		qualityLevel=2;
	};
	class RightDust1Med
	{
		simulation="particles";
		type="RightDust1AirRedMed";
		qualityLevel=1;
	};
	class RightDust1Low
	{
		simulation="particles";
		type="RightDust1AirRedLow";
		qualityLevel=0;
	};
	class RightDustLong
	{
		simulation="particles";
		type="RightDustLongAirRed";
		qualityLevel=2;
	};
	class RightDustLongMed
	{
		simulation="particles";
		type="RightDustLongAirRedMed";
		qualityLevel=1;
	};
};
class LDustEffectsManRed
{
	class LeftDust1
	{
		simulation="particles";
		type="LeftDustManRed";
		enabled="density interpolate [0.15,0.15001,-1,1]";
		lifetime=0.1;
		qualityLevel=2;
	};
	class LeftDustMed
	{
		simulation="particles";
		type="LeftDustManRedMed";
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
class RDustEffectsManRed
{
	class RightDust1
	{
		simulation="particles";
		type="RightDustManRed";
		enabled="density interpolate [0.15,0.15001,-1,1]";
		lifetime=0.1;
		qualityLevel=2;
	};
	class RightDustMed
	{
		simulation="particles";
		type="RightDustManRedMed";
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
class RocketBackEffectsRPG7
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
		type="RocketBacksmokeRPG7";
		intensity=1;
		interval=0.1;
		lifeTime=0.2;
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPG7";
		intensity=1;
		interval=0.1;
		lifeTime=0.1;
	};
};
class ImpactEffectsRed
{
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDust2Red";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Med
	{
		simulation="particles";
		type="ImpactDust2Red";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Low
	{
		simulation="particles";
		type="ImpactDust2RedLow";
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
		type="ImpactSandSmoke2Red";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
