// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RPG_OGH_OGH_3_SMORPGTarget : TargetRules
{
	public RPG_OGH_OGH_3_SMORPGTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.Add("UE4Game");
	}
}
