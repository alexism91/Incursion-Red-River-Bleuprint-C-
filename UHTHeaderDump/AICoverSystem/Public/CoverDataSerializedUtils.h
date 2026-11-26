#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CoverBuildParams.h"
#include "CoverDataSerializedUtils.generated.h"

class UObject;

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UCoverDataSerializedUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCoverDataSerializedUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetCoverDataPrefix(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetCoverDataAssetPath(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCoverBuildParams GetCoverBuildParams(const UObject* WorldContextObject);
    
};

