#pragma once
#include "CoreMinimal.h"
#include "EPCGCollapseComparisonMode.h"
#include "EPCGCollapseMode.h"
#include "EPCGCollapseVisitOrder.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputNoSourceSelector.h"
#include "PCGSettings.h"
#include "PCGCollapsePointsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGCollapsePointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCollapseMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCollapseComparisonMode ComparisonMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCollapseVisitOrder VisitOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector VisitOrderAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMergeWeightAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector MergeWeightAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGAttributePropertyOutputNoSourceSelector> AttributesToMerge;
    
    UPCGCollapsePointsSettings();

};

