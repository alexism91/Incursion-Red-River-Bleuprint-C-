#pragma once
#include "CoreMinimal.h"
#include "EGroomBindingAssetBuildResult.h"
#include "OnGroomBindingAssetBuildCompleteDelegate.generated.h"

class UGroomBindingAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGroomBindingAssetBuildComplete, UGroomBindingAsset*, GroomBinding, EGroomBindingAssetBuildResult, Result);

