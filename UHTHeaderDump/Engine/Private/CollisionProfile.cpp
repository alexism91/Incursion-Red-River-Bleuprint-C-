#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(29);
    this->DefaultChannelResponses.AddDefaulted(7);
    this->EditProfiles.AddDefaulted(19);
    this->ProfileRedirects.AddDefaulted(7);
    this->CollisionChannelRedirects.AddDefaulted(5);
}


