/*
	Author: ThomasAngel
	Steam: https://steamcommunity.com/id/Thomasangel/
	Github: https://github.com/rekterakathom

	Description:
	Spawns a medium refract wave.

	Parameters:
		_this: ARRAY - Position format AGL.

	Usage: "WarFXPE\scripts\blastrefractEffectMedium.sqf";

	Returns: True if executed successfully.
*/

private _strength = profileNamespace getVariable ["warFXPE_blastWave", 1];
if (_strength isEqualTo 0) exitWith {false};

private _particlePos = _this;

// Helper object to reference in particle creation.
private _particleSource = createSimpleObject ["Land_HelipadEmpty_F", AGLtoASL _particlePos, true];

drop [
		["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1, 0],
		// animationName, type, timerPeriod, lifeTime
		"", "Billboard", 1, 0.3 * _strength,
		// position relative to referenceObject
		[0,0,0],
		// velocity
		[0,0,0],
		// rotation, weight, volume, rubbing, size
		0, 10, 7.9000001, 0.1, [1,1,6,12,24,32,48],
		// colors
		[
			[0.1,0.1,0.1,1],
			[0.25,0.25,0.25,1],
			[0.5,0.5,0.5,1],
			[0,0,0,1],
			[0,0,0,0.5],
			[0,0,0,0.3]
		],
		// animationPhase
		[1],
		// randomDirectionPeriod, randomDirectionIntensity
		0.2, 0.2,
		// onTimer, beforeDestroy
		"", "",
		// referenceObject
		_particleSource,
		// angle, bounces
		1, false,
		// bounceOnSurface, emissiveColor
		-1, [],
		// vectorDir - CANNOT be [0,0,0]
		[0,1,0]
];

deleteVehicle _particleSource;
true
