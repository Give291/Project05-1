// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project05 : ModuleRules
{
	public Project05(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
