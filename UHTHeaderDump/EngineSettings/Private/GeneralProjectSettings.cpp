#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Games of Tomorrow GmbH");
    this->CopyrightNotice = TEXT("Fill out your copyright notice in the Description page of Project Settings.");
    this->Homepage = TEXT("https://incursionredriver.com");
    this->ProjectName = TEXT("Incursion Red River");
    this->ProjectVersion = TEXT("1.4.0.4");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("{GameName} {RHIName}"));
    this->ProjectDebugTitleInfo = FText::FromString(TEXT("{GameName} {BuildConfiguration} {PlatformArchitecture} {RHIName}"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
    this->EyeOffsetForFakeStereoRenderingDevice = 0.03f;
    this->FOVForFakeStereoRenderingDevice = 90.00f;
    this->TopFOVRatioForFakeStereoRenderingDevice = 0.47f;
    this->DifferenceBetweenEyesForFakeStereoRenderingDevice = 0.20f;
}


