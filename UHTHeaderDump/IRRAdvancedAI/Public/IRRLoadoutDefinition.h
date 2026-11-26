#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRConfig -ObjectName=IRRConfigDocumentBase -FallbackName=IRRConfigDocumentBase
#include "IRRLoadoutEquipSection.h"
#include "IRRLoadoutSpatialSection.h"
#include "IRRLoadoutDefinition.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRLoadoutDefinition : public FIRRConfigDocumentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadoutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ItemsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRLoadoutEquipSection> EquipSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRLoadoutSpatialSection> SpatialSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyStandardDurability;
    
    FIRRLoadoutDefinition();
};

