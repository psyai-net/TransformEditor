// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5TransformTest : ModuleRules
{
	public UE5TransformTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
