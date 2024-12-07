using UnrealBuildTool;

public class BEYONDBUTTONSServerTarget : TargetRules
{
	public BEYONDBUTTONSServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("BEYONDBUTTONS");
	}
}
