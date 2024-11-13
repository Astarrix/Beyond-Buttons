using UnrealBuildTool;

public class BEYONDBUTTONSEditorTarget : TargetRules
{
	public BEYONDBUTTONSEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("BEYONDBUTTONS");
	}
}
