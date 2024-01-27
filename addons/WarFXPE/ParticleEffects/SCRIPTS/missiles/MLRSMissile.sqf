_projectile = nearestObject [_this select 0,_this select 4];
_smoke = "#particlesource" createVehicle [(getpos _projectile select 0),(getpos _projectile select 1),(getpos _projectile select 2)];
_smoke setParticleCircle [0, [0, 0, 0]];
_smoke setParticleRandom [0, [0, 0, 0], [10, 5, 10], 20, 0, [0, 0, 0, 0], 0, 0, random 360];

_smoke setParticleParams 

[["warfxPE\ParticleEffects\Universal\smoke_01", 1, 0, 1],
 "",
 "Billboard",
 1,
 12, 

 [0, 0, 0],

[(velocity _smoke select 0) - ((vectordir _projectile) select 0)*80,
(velocity  _smoke select 1) - ((vectordir _projectile) select 1)*80,
(velocity  _smoke select 2) - ((vectordir _projectile) select 2)*80],
0, 10.15, 7.9, 1.5, [3,4,5], [[1, 1, 1, 0.35],[1, 1, 1, 0]], [1], 0, 0, "", "", _projectile];

_smoke setdropinterval 0.003;

_light= "#lightpoint" createVehicle [(getpos _projectile select 0),(getpos _projectile select 1),(getpos _projectile select 2)];
_light lightAttachObject [_projectile, [0, 0, 0]];
_light setlightcolor [1,1,0.9];
_light setlightambient [0,0,0];
_light setlightbrightness 1;
_light setLightUseFlare true;
_light setLightFlareSize 6;
_light setLightFlareMaxDistance 4000;

_light2= "#lightpoint" createVehicle [(getpos _projectile select 0),(getpos _projectile select 1),(getpos _projectile select 2)];
_light2 lightAttachObject [_projectile, [0, 0, 0]];
_light2 setlightcolor [1,0.3,0];
_light2 setlightambient [0,0,0];
_light2 setlightbrightness 6;
_light2 setLightUseFlare false;
_light2 setLightFlareSize 0;
_light2 setLightFlareMaxDistance 4000;

sleep 2;
deletevehicle _smoke;
deletevehicle _light;
deletevehicle _light2;

waituntil {!alive _projectile};
deletevehicle _light;






