/*
	Author: ThomasAngel
	Steam: https://steamcommunity.com/id/Thomasangel/
	Github: https://github.com/rekterakathom

	Description:
	Spawns particles in a circle(-ish) formation -
	going towards a center point.

	Parameters:
		_this: ARRAY - Position format AGL to be the center of the explosion.

	Usage: "path\fn_bombRefract.sqf";

	Returns: True if executed successfully.
*/

// Define constants.
#define DIST_FROM_CENTER 12.0 	// How far away the particles are spawned from center.
#define DIST_VARIATION 5 		// +- DIST_VARIATION is added to distance.
#define VELOCITY_REDUCTION 1.5 	// Particle velocity towards center is divided by this.
#define STARTING_HEIGHT 0.05 		// How far off the ground the particles will spawn.
#define VELOCITY_DOWN 0 		// Downwards velocity
#define DIR_STEP_SIZE 8 		// Larger step size means fewer particles.

private _expCenter = _this;

// Helper object to reference in particle creation.
// Apparently creating at [0,0,0] is faster than on the spot.
private _particleSource = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
_particleSource enableSimulation false;
_particleSource setPosASL (AGLtoASL _expCenter);

// Generate array of positions (relative to _particleSource) to spawn particles from.
private _directions = [];
for "_i" from 0 to 360 step DIR_STEP_SIZE do {
	_directions pushBack [sin _i, cos _i, 0];
};

{
	private _randomX = random [-DIST_VARIATION, 0, DIST_VARIATION];
	private _randomY = random [-DIST_VARIATION, 0, DIST_VARIATION];
	private _currentPosition = [(DIST_FROM_CENTER * (_x # 0)) + _randomX, (DIST_FROM_CENTER * (_x # 1)) + _randomY, STARTING_HEIGHT];
	private _currentDirection = [(_x # 0)/-VELOCITY_REDUCTION, (_x # 1)/-VELOCITY_REDUCTION, -VELOCITY_DOWN];
	drop [
		["warfxWeps\ParticleEffects\Universal\smoke_02", 1, 0, 1, 1],
		// animationName, type, timerPeriod, lifeTime
		"", "Billboard", 1, 8,
		// position relative to referenceObject
		_currentPosition,
		// velocity
		_currentDirection,
		// rotation, weight, volume, rubbing, size
		0, 0.050999999, 0.039999999, 0.0099999998, [1, 5],
		// colors
		[[0.2722,0.226,0.18,0.35], [0.5304,0.441,0.352,0]],
		// animationPhase
		[1],
		// randomDirectionPeriod, randomDirectionIntensity
		1, 0.2,
		// onTimer, beforeDestroy
		"", "",
		// referenceObject
		_particleSource,
		// angle, bounces
		0, false,
		// bounceOnSurface, emissiveColor
		-1, [],
		// vectorDir - CANNOT be [0,0,0]
		[0,1,0]
	];
} forEach _directions;

deleteVehicle _particleSource;

true