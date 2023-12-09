#ifndef CNOID_RGLSIMULATORITEMPLUGIN_EXPORTDECL_H_INCLUDED
# define CNOID_RGLSIMULATORITEMPLUGIN_EXPORTDECL_H_INCLUDED

# if defined _WIN32 || defined __CYGWIN__
#  define CNOID_RGLSIMULATORITEMPLUGIN_DLLIMPORT __declspec(dllimport)
#  define CNOID_RGLSIMULATORITEMPLUGIN_DLLEXPORT __declspec(dllexport)
#  define CNOID_RGLSIMULATORITEMPLUGIN_DLLLOCAL
# else
#  if __GNUC__ >= 4
#   define CNOID_RGLSIMULATORITEMPLUGIN_DLLIMPORT __attribute__ ((visibility("default")))
#   define CNOID_RGLSIMULATORITEMPLUGIN_DLLEXPORT __attribute__ ((visibility("default")))
#   define CNOID_RGLSIMULATORITEMPLUGIN_DLLLOCAL  __attribute__ ((visibility("hidden")))
#  else
#   define CNOID_RGLSIMULATORITEMPLUGIN_DLLIMPORT
#   define CNOID_RGLSIMULATORITEMPLUGIN_DLLEXPORT
#   define CNOID_RGLSIMULATORITEMPLUGIN_DLLLOCAL
#  endif
# endif

# ifdef CNOID_RGLSIMULATORITEMPLUGIN_STATIC
#  define CNOID_RGLSIMULATORITEMPLUGIN_DLLAPI
#  define CNOID_RGLSIMULATORITEMPLUGIN_LOCAL
# else
#  ifdef CnoidRGLSIMULATORITEMPLUGIN_EXPORTS
#   define CNOID_RGLSIMULATORITEMPLUGIN_DLLAPI CNOID_RGLSIMULATORITEMPLUGIN_DLLEXPORT
#  else
#   define CNOID_RGLSIMULATORITEMPLUGIN_DLLAPI CNOID_RGLSIMULATORITEMPLUGIN_DLLIMPORT
#  endif
#  define CNOID_RGLSIMULATORITEMPLUGIN_LOCAL CNOID_RGLSIMULATORITEMPLUGIN_DLLLOCAL
# endif

#endif

#ifdef CNOID_EXPORT
# undef CNOID_EXPORT
#endif
#define CNOID_EXPORT CNOID_RGLSIMULATORITEMPLUGIN_DLLAPI
