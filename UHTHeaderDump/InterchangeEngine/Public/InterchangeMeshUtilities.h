#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeMeshUtilities.generated.h"

class UInterchangeSourceData;
class USkeletalMesh;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeMeshUtilities : public UObject {
    GENERATED_BODY()
public:
    UInterchangeMeshUtilities();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ScriptedImportMorphTarget(USkeletalMesh* SkeletalMesh, const int32 LODIndex, const UInterchangeSourceData* SourceData, const FString& MorphTargetName) const;
    
};

