#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkAcousticPortal -FallbackName=AkAcousticPortal
#include "AdvancedAkAcousticPortal.generated.h"

class UIRRSignificanceComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AAdvancedAkAcousticPortal : public AAkAcousticPortal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOptimization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAutoCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToggleDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRSignificanceComponent* SignificanceComponent;
    
    AAdvancedAkAcousticPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TogglePortal(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSignificanceChanged(int32 Level, bool bNewHidden);
    
};

