#pragma once
#include "CoreMinimal.h"
#include "EPCGUserParameterSource.h"
#include "PCGSettings.h"
#include "PCGGenericUserParameterGetSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGenericUserParameterGetSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceObjectAndStructExtraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSanitizeOutputAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGUserParameterSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuiet;
    
    UPCGGenericUserParameterGetSettings();

};

