using UnrealBuildTool;

public class BEYONDBUTTONSTarget : TargetRules
{
	public BEYONDBUTTONSTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("BEYONDBUTTONS");
	}
}
