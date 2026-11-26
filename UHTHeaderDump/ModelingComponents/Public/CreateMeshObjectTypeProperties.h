#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ECreateObjectTypeHint.h"
#include "Templates/SubclassOf.h"
#include "CreateMeshObjectTypeProperties.generated.h"

class AVolume;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVolume> VolumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OutputTypeNamesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowVolumeList;
    
    UCreateMeshObjectTypeProperties();

    UFUNCTION(BlueprintCallable)
    bool ShouldShowPropertySet() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetOutputTypeNamesFunc();
    
    UFUNCTION(BlueprintCallable)
    ECreateObjectTypeHint GetCurrentCreateMeshType() const;
    
};

