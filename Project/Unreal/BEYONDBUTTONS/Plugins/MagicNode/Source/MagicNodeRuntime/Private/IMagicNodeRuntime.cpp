//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2021 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "IMagicNodeRuntime.h"
#include "MagicNodeRuntime.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/AssetData.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FMagicNodeRuntime : public IMagicNodeRuntime {
public:
	virtual void StartupModule() override {
		FAssetRegistryModule &AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
		TArray<FAssetData>NodeData; AssetRegistry.Get().GetAssetsByClass(UMagicNode::StaticClass()->GetClassPathName(),NodeData,true);
		for (FAssetData Data : NodeData) {Data.GetAsset();}
		//
		#if WITH_EDITOR
		TArray<FAssetData>ScriptData; AssetRegistry.Get().GetAssetsByClass(UMagicNodeScript::StaticClass()->GetClassPathName(),ScriptData,true);
		for (FAssetData Data : ScriptData) {Data.GetAsset();}
		#endif
	}
	//
	//virtual void ShutdownModule() override {}
	virtual bool SupportsDynamicReloading() override {return false;}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

IMPLEMENT_GAME_MODULE(FMagicNodeRuntime,MagicNodeRuntime);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////