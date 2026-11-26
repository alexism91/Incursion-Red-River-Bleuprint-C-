#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OpenColorIOColorSpace.h"
#include "OpenColorIODisplayView.h"
#include "OpenColorIOConfiguration.generated.h"

class UOpenColorIOColorTransform;

UCLASS(Blueprintable)
class OPENCOLORIO_API UOpenColorIOConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath ConfigurationFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpenColorIODisplayView> DesiredDisplayViews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Context;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOpenColorIOColorTransform*> ColorTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigHash;
    
public:
    UOpenColorIOConfiguration();

    UFUNCTION(BlueprintCallable)
    void ReloadExistingColorspaces(bool bForce);
    
};

