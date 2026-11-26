#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConvertToPolygonsOperatorFactory.generated.h"

class UConvertToPolygonsTool;

UCLASS(Blueprintable, MinimalAPI)
class UConvertToPolygonsOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConvertToPolygonsTool* ConvertToPolygonsTool;
    
    UConvertToPolygonsOperatorFactory();

};

