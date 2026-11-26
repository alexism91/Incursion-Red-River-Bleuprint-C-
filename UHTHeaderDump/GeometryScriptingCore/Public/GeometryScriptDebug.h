#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeometryScriptDebugMessage.h"
#include "GeometryScriptDebug.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptDebug : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeometryScriptDebugMessage> Messages;
    
    UGeometryScriptDebug();

};

