
[
	"WarFXPE_HeatHaze",
	"CHECKBOX",
	["Enable heat haze", "Toggles the heat haze effect present on infantry weapons."],
	"Blastcore Murr Edition",
	true,
	nil,
	{profileNamespace setVariable ["WarFXPE_HeatHaze", _this]; saveProfileNamespace},
	false
] call CBA_fnc_addSetting;

[
	"WarFXPE_WeatherEffects",
	"CHECKBOX",
	["Enable weather effects", "Toggles weather affecting certain effects."],
	"Blastcore Murr Edition",
	true,
	nil,
	{profileNamespace setVariable ["WarFXPE_WeatherEffects", _this]; saveProfileNamespace},
	false
] call CBA_fnc_addSetting;

[
	"WarFXPE_BlastWave",
	"SLIDER",
	["Blast wave intensity", "Adjusts the amplitude of blastwaves."],
	"Blastcore Murr Edition",
	[0, 2, 1, 1],
	nil,
	{profileNamespace setVariable ["WarFXPE_BlastWave", _this]; saveProfileNamespace},
	false
] call CBA_fnc_addSetting;