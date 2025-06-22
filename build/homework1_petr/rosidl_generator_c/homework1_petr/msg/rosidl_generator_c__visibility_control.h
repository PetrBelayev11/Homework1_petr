// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define HOMEWORK1_PETR__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_homework1_petr __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_homework1_petr __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_homework1_petr __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_homework1_petr __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_homework1_petr
    #define ROSIDL_GENERATOR_C_PUBLIC_homework1_petr ROSIDL_GENERATOR_C_EXPORT_homework1_petr
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_homework1_petr ROSIDL_GENERATOR_C_IMPORT_homework1_petr
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_homework1_petr __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_homework1_petr
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_homework1_petr __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // HOMEWORK1_PETR__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
