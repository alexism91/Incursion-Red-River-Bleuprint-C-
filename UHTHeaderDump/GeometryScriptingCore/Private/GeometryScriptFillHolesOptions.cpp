#include "GeometryScriptFillHolesOptions.h"

FGeometryScriptFillHolesOptions::FGeometryScriptFillHolesOptions() {
    this->FillMethod = EGeometryScriptFillHolesMethod::Automatic;
    this->bDeleteIsolatedTriangles = false;
}

