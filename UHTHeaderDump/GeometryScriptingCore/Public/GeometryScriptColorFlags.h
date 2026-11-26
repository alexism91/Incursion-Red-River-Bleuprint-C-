#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptColorFlags.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptColorFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlpha;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptColorFlags();
};

