using UnrealBuildTool;

public class BEYONDBUTTONSClientTarget : TargetRules
{
	public BEYONDBUTTONSClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("BEYONDBUTTONS");
	}
}
