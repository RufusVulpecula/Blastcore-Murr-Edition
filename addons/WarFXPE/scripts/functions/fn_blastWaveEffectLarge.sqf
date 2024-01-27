/*
	Author: ThomasAngel
	Steam: https://steamcommunity.com/id/Thomasangel/
	Github: https://github.com/rekterakathom

	Description:
	Spawns a small blast wave.

	Parameters:
		_this: ARRAY - Position format AGL.

	Usage: "WarFXPE\scripts\blastrefractEffectSmall.sqf";

	Returns: True if executed successfully.
*/

private _weatherEffect = profileNamespace getVariable ["warFXPE_weatherEffects", true];

private _particlePos = _this;

// Helper object to reference in particle creation.
private _particleSource = createSimpleObject ["Land_HelipadEmpty_F", AGLtoASL _particlePos, true];

// If weather effects are enabled, the effect will be affected by air humidity.
private _alphaMultiplier = 1;
if (_weatherEffect) then {
	_alphaMultiplier = (overcast + humidity);
};

// Define variation macros
private _alphaVar = random 0.1;
private _lifeTimeVar = random 0.15;
private _sizeVar = random 0.5;

drop [
		["warfxWeps\ParticleEffects\Universal\wave", 1, 0, 1, 0],
		// animationName, type, timerPeriod, lifeTime
		"", "Billboard", 1, 0.6 + _lifeTimeVar,
		// position relative to referenceObject
		[0,0,0],
		// velocity
		[0,0,0],
		// rotation, weight, volume, rubbing, size
		0, 10, 7.9000001, 0.1, [2 + _sizeVar, 2 + _sizeVar, 2 + _sizeVar, 24 + _sizeVar, 60 + _sizeVar, 105 + _sizeVar, 150 + _sizeVar, 210 + _sizeVar],
		// colors
		[
			[1,1, 0.85, (0.06 + _alphaVar) * _alphaMultiplier],
			[1,1, 0.85, (0.12 + _alphaVar) * _alphaMultiplier],
			[1,1, 0.85, (0.02 + _alphaVar) * _alphaMultiplier],
			[1,1, 0.85, 0]
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
