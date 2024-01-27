/*
	Author: ThomasAngel
	Steam: https://steamcommunity.com/id/Thomasangel/
	Github: https://github.com/rekterakathom

	Description:
	Spawns a heat haze.

	Parameters:
		_this: ARRAY - Position format AGL.

	Usage: "WarFXPE\scripts\heatHaze.sqf";

	Returns: True if executed successfully.
*/

if !(profileNamespace getVariable ["WarFXPE_HeatHaze", true]) exitWith {false};
private _weatherEffect = profileNamespace getVariable ["warFXPE_weatherEffects", true];

private _particlePos = _this;
if (player distance _particlePos > 100) exitWith {false};

// Helper object to reference in particle creation.
private _particleSource = createSimpleObject ["Land_HelipadEmpty_F", AGLtoASL _particlePos, true];

// Define variations
private _sizeVar = random [0.5, 1, 1.5];

// Ambient temperature defines heat haze strength if weather effects are enabled
private _airTemp = 0.20;
if (_weatherEffect) then {
	_airTemp = (ambientTemperature # 0) / 100;
};

if (_airTemp < 0.15) then {_airTemp = 0.15};
if (_airTemp > 0.45) then {_airTemp = 0.45};

drop [
		["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1, 0],
		// animationName, type, timerPeriod, lifeTime
		"", "Billboard", 0, 0.85,
		// position relative to referenceObject
		[0,0,0],
		// velocity
		[0,0,0],
		// rotation, weight, volume, rubbing, size
		1, 1.265, 1, 0.07, [_sizeVar],
		// colors
		[
			[0.06, 0.06, 0.06, _airTemp],
			[0.3, 0.3, 0.3, _airTemp - 0.3],
			[0.3, 0.3, 0.3, _airTemp - 0.6],
			[0.3, 0.3, 0.3, _airTemp - 0.9],
			[0.3, 0.3, 0.3, _airTemp - 0.15]
		],
		// animationPhase
		[1],
		// randomDirectionPeriod, randomDirectionIntensity
		0.1, 0.02,
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
