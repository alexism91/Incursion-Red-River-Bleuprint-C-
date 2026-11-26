#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGRDebuggerController.generated.h"

class APlayerController;
class UAGRUWDebugWidget;

UCLASS(Blueprintable, HideDropdown, Transient)
class AGRPRO_API UAGRDebuggerController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAGRUWDebugWidget* DebugWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* CachedPlayerController;
    
    UAGRDebuggerController();

};

