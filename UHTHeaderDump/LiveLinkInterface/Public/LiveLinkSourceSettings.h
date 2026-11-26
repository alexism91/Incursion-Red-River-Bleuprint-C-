#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ELiveLinkSourceMode.h"
#include "LiveLinkSourceBufferManagementSettings.h"
#include "LiveLinkSubjectName.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSourceSettings.generated.h"

class ULiveLinkSourceFactory;

UCLASS(Blueprintable, MinimalAPI)
class ULiveLinkSourceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkSourceMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSourceBufferManagementSettings BufferSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkSourceFactory> Factory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName ParentSubject;
    
    ULiveLinkSourceSettings();

};

