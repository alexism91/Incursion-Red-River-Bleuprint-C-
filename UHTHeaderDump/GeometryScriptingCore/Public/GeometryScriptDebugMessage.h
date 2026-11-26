#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptDebugMessageType.h"
#include "EGeometryScriptErrorType.h"
#include "GeometryScriptDebugMessage.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptDebugMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptDebugMessageType MessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptErrorType ErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptDebugMessage();
};

