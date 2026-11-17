#include "RedLibProvider.hpp"
#include "Red/TypeInfo/Registrar.hpp"
#ifdef __APPLE__
#include <dlfcn.h>
#include <filesystem>
#endif

#ifdef __APPLE__
static int s_moduleAnchor = 0;
#endif

void Support::RedLibProvider::OnBootstrap()
{
    fprintf(stderr, "[Codeware RedLib] OnBootstrap: Registering discovered RTTI...\n");
    Red::TypeInfoRegistrar::RegisterDiscovered();
}
