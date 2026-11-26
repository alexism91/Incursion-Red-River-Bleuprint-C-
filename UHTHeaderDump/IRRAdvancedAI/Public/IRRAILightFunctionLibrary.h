#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRAILightFunctionLibrary.generated.h"

class ULXRDetectionComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRAILightFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRAILightFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static TMap<int32, float> GetIlluminationByBoneIndex(ULXRDetectionComponent* DetectionComponent, USkeletalMeshComponent* SkeletalMesh);
    
};

