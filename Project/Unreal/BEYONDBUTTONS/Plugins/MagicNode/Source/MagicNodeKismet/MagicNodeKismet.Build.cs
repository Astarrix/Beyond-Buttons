/// Copyright 2021 (C) Bruno Xavier B. Leite

using UnrealBuildTool;
using System.IO;

public class MagicNodeKismet : ModuleRules {
	public MagicNodeKismet(ReadOnlyTargetRules Target) : base(Target) {
		PrivatePCHHeaderFile = "Public/MagicNodeKismet_Shared.h";
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		IWYUSupport = IWYUSupport.None;
		//
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"Engine",
				"CoreUObject",
				"AssetRegistry",
				"MagicNodeRuntime"
			}
		);
		//
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Slate",
				"Kismet",
				"UnrealEd",
				"Projects",
				"InputCore",
				"SlateCore",
				"GraphEditor",
				"LevelEditor",
				"EditorStyle",
				"PropertyEditor",
				"KismetCompiler",
				"BlueprintGraph"
			}
		);
		//
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Classes"));
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory,"Private"));
	}
}