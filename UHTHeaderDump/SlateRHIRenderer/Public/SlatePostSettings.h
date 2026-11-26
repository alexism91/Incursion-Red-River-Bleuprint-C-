#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SlatePostSettings.generated.h"

class USlateRHIPostBufferProcessor;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FSlatePostSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USlateRHIPostBufferProcessor> PostProcessorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathToSlatePostRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CachedSlatePostRT;
    
public:
    SLATERHIRENDERER_API FSlatePostSettings();
};

