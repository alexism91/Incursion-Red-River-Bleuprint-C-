#pragma once
#include "CoreMinimal.h"
#include "RemeshProperties.h"
#include "BrushRemeshProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBrushRemeshProperties : public URemeshProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRemeshing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriangleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreserveDetail;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Iterations;
    
    UBrushRemeshProperties();

};

