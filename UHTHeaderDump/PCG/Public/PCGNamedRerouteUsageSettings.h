#pragma once
#include "CoreMinimal.h"
#include "PCGNamedRerouteBaseSettings.h"
#include "PCGNamedRerouteUsageSettings.generated.h"

class UPCGNamedRerouteDeclarationSettings;

UCLASS(Blueprintable, MinimalAPI)
class UPCGNamedRerouteUsageSettings : public UPCGNamedRerouteBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGNamedRerouteDeclarationSettings* Declaration;
    
    UPCGNamedRerouteUsageSettings();

};

