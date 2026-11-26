#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRConfig -ObjectName=IRRConfigDocumentBase -FallbackName=IRRConfigDocumentBase
#include "IRRZoneNode.h"
#include "IRRZoneDocument.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRZoneDocument : public FIRRConfigDocumentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRZoneNode> Zones;
    
    FIRRZoneDocument();
};

