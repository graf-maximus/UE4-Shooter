// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class Educat_MultiShooterServerTarget: TargetRules
{
    public Educat_MultiShooterServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		//BuildEnvironment = TargetBuildEnvironment.Shared;
		ExtraModuleNames.AddRange(new string[] { "Educat_MultiShooter" });
	}
}
