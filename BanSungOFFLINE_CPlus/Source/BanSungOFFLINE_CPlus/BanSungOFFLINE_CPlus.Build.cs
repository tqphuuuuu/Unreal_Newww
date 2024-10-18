// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BanSungOFFLINE_CPlus : ModuleRules
{
	public BanSungOFFLINE_CPlus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
