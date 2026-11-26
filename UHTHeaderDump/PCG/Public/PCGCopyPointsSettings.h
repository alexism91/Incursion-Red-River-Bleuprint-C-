#pragma once
#include "CoreMinimal.h"
#include "EPCGCopyPointsInheritanceMode.h"
#include "EPCGCopyPointsMetadataInheritanceMode.h"
#include "EPCGCopyPointsTagInheritanceMode.h"
#include "PCGSettings.h"
#include "PCGCopyPointsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGCopyPointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsInheritanceMode RotationInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyTargetRotationToPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsInheritanceMode ScaleInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyTargetScaleToPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsInheritanceMode ColorInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsInheritanceMode SeedInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsMetadataInheritanceMode AttributeInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCopyPointsTagInheritanceMode TagInheritance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyEachSourceOnEveryTarget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchBasedOnAttribute;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MatchAttribute;
    
    UPCGCopyPointsSettings();

};

