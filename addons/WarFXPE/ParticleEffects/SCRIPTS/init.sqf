_v=_this select 0;
if(isNil "WarFXPE") then
{
	WarFXPE_Effects_PreInit=true;
	WarFXPE_EH_Fired=compile preprocessFileLineNumbers "WarFXPE\ParticleEffects\SCRIPTS\fired_event.sqf";
	MLRS_Missile_Smoke=compile preprocessFileLineNumbers "WarFXPE\ParticleEffects\SCRIPTS\missiles\MLRSMissile.sqf";
	};


